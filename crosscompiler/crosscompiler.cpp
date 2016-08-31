// crosscompiler.cpp


#include "./../glslang/Include/ShHandle.h"
#include "./../glslang/Include/revision.h"
#include "./../glslang/Public/ShaderLang.h"

#include "../glslang/MachineIndependent/localintermediate.h"
#include "../glslang/MachineIndependent/SymbolTable.h"
#include "../glslang/Include/Common.h"
#include "../glslang/Include/revision.h"

#ifdef _MSC_VER
#pragma warning(disable: 4996)
#endif

struct StringSpan
{
    char const* begin;
    char const* end;
};

struct SourceFile
{
    StringSpan text;
    char const* path;
};

#define NO_LIMIT 9999
static const TBuiltInResource kResourceLimits =
{
    // 83 integer limits
    NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT,
    NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT,
    NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT,
    NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT,
    NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT,
    NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT,
    NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT,
    NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT, NO_LIMIT,
    NO_LIMIT, NO_LIMIT, NO_LIMIT,

    // 9 boolean capabilities
    true, true, true, true, true, true, true, true, true,
};

struct Options
{
    char const* appName;
    char const* inputPath;
    char const* entryPointName;

    std::vector<char const*> includePaths;
};

void usage(Options const* options)
{
    fprintf(stderr, "usage: %s <options> <input file>\n"
        "    -o <output file>\n",
        options->appName ? options->appName : "crosscompiler");
}

void parseOptions( Options* ioOptions, int argc, char** argv )
{
    char const* const* argCursor = argv;
    char const* const* argEnd = argv + argc;

    char const** inputs = (char const**) argv;
    char const** inputCursor = inputs;

    if(argCursor != argEnd)
    {
        ioOptions->appName = *argCursor++;
    }

    while(argCursor != argEnd)
    {
        char const* arg = *argCursor++;
        if(arg[0] == '-')
        {
            if(strcmp(arg, "-I") == 0)
            {
                if(argCursor == argEnd)
                {
                    fprintf(stderr, "expected an argument for '-I' option\n");
                    exit(1);
                }
                else
                {
                    char const* optArg = *argCursor++;
                    ioOptions->includePaths.push_back(optArg);
                }
            }
            else if(strcmp(arg, "--") == 0)
            {
                break;
            }
            else
            {
                fprintf(stderr, "unrecognized option '%s'\n", arg);
                usage(ioOptions);
                exit(1);
            }
        }
        else
        {
            // any other case is an input file
            *inputCursor++ = arg;
        }
    }

    // read any remaining arguments as inputs
    while(argCursor != argEnd)
    {
        *inputCursor++ = *argCursor++;
    }

    int inputCount = (int)( inputCursor - inputs );
    if(inputCount != 1)
    {
        usage(ioOptions);
        exit(1);
    }
    else
    {
        ioOptions->inputPath = inputs[0];
    }
}

StringSpan tryReadTextFile(char const* path)
{
    FILE* file = fopen(path, "rb");
    if(!file)
    {
        StringSpan result = { 0 ,0 };
        return result;
    }

    fseek(file, 0, SEEK_END);
    size_t size = ftell(file);
    fseek(file, 0, SEEK_SET);

    char* buffer = (char*) malloc(size+1);
    if(!buffer)
    {
        fclose(file);

        StringSpan result = { 0 ,0 };
        return result;
    }
    fread(buffer, size, 1, file);
    buffer[size] = 0;

#if 0 // hack to append a newline to end of buffer if needed
    if(size > 0 && buffer[size-1] != '\r' && buffer[size-1] != '\n')
    {
        buffer[size] = '\n';
        size = size+1;
    }
#endif

    fclose(file);

    StringSpan text = { buffer, buffer + size };
    return text;
}

StringSpan readTextFile(char const* path)
{
    StringSpan result = tryReadTextFile(path);
    if(!result.begin)
    {
        fprintf(stderr, "failed to read file '%s'\n", path);
    }
    return result;
}

class IncluderImpl : public glslang::TShader::Includer
{
public:
    Options* options;

    IncluderImpl(Options* options)
        : options(options)
    {}

    virtual IncludeResult* include(const char*  requestedPath,
                                    IncludeType   includeType,
                                    const char*   requesterPath,
                                    size_t        includeDepth)
    {
        for(auto includeDir : options->includePaths)
        {
            std::string resolvedPath = std::string(includeDir) + requestedPath;
            StringSpan text = tryReadTextFile(resolvedPath.c_str());
            if(!text.begin)
            {
                continue;
            }

            IncludeResult* result = new IncludeResult(resolvedPath, text.begin, text.end - text.begin, NULL);
            return result;
        }

        return NULL;
    }

    virtual void releaseInclude(IncludeResult* result)
    {
        free((void*) result->file_data);
        delete result;
    }
};

class HackShader : public glslang::TShader
{
public:
    glslang::TIntermediate* getIntermediate() { return intermediate; }
};

struct EmitContext
{
};

void internalError(EmitContext* context, char const* message)
{
    fprintf(stderr, "internal error: %s\n", message);
}

void emit(EmitContext* context, char const* begin, char const* end)
{
    fwrite(begin, end - begin, 1, stdout);
}

void emit(EmitContext* context, int val)
{
    fprintf(stdout, "%d", val);
}

void emit(EmitContext* context, char const* text)
{
    emit(context, text, text + strlen(text));
}

void emit(EmitContext* context, glslang::TString const& name)
{
    char const* text = name.c_str();
    emit(context, text, text + name.length());
}

struct BasicTypeInfo
{
    glslang::TBasicType basicType;
    char const*         scalarName;
    char const*         vectorPrefix;
    char const*         matrixPrefix;
} kHLSLBasicTypeInfos[] =
{
    { glslang::EbtVoid,         "void",         0,              0,              },
    { glslang::EbtFloat,        "float",        "float",        "float",        },
    { glslang::EbtDouble,       "double",       "double",       "double",       },
    { glslang::EbtBool,         "bool",         "bool",         "bool",         },
    { glslang::EbtInt,          "int",          "int",          "int",          },
    { glslang::EbtUint,         "uint",         "uint",         "uint",         },
    { glslang::EbtInt64,        "int64",        "int64",        "int64",        },
    { glslang::EbtUint64,       "uint64",       "uint64",       "uint64",       },
    { glslang::EbtAtomicUint,   "atomic_uint",  "atomic_uint",  "atomic_uint",  },
    { glslang::EbtSampler,      "atomic_uint",  "atomic_uint",  "atomic_uint",  },
    //
    { glslang::EbtNumTypes, 0, 0, 0, }
};

void emitTypeSpecifier(EmitContext* context, glslang::TType const& type)
{
    // only dealing with HLSL for now
    switch(type.getBasicType())
    {
#define CASE(N,T) case glslang::Ebt##N: emit(context, #T); break
    CASE(Void, void);
    CASE(Float, float);
    CASE(Double, double);
    CASE(Int, int);
    CASE(Uint, uint);
    CASE(Int64, int64);
    CASE(Uint64, uint64);
    CASE(Bool, bool);
    CASE(AtomicUint, atomic_uint); // TODO: not actually in HLSL
#undef CASE

    case glslang::EbtSampler:
        // TODO: handle the cases
        break;

    case glslang::EbtStruct:
    case glslang::EbtBlock:
        // TODO: emit to a prologue somewhere...
        break;

    default:
        internalError(context, "uhandled case in 'emitTypeSpecifier'");
        break;
    }

    if(type.isMatrix())
    {
        emit(context, type.getMatrixRows());
        emit(context, "x");
        emit(context, type.getMatrixCols());
    }
    else if(type.getVectorSize() > 1)
    {
        emit(context, type.getVectorSize());
    }
}

void emitType(EmitContext* context, glslang::TType const& type, glslang::TString const& name)
{
    emitTypeSpecifier(context, type);
    emit(context, " ");
    emit(context, name);
    // TODO: handle array
}

void emitFuncDecl(EmitContext* context, glslang::TIntermAggregate* funcDecl)
{
    // TODO: maybe skip the entry-point function during this part...

    glslang::TString name = funcDecl->getName();
    size_t firstOpen = name.find('(');
    if(firstOpen != name.npos)
    {
        name = name.substr(0, firstOpen);
    }

    emitType(context, funcDecl->getType(), name);
    emit(context, "(");

    glslang::TIntermSequence& params = funcDecl->getSequence()[0]->getAsAggregate()->getSequence();
    bool first = true;
    for(auto pp : params)
    {
        if(!first)
        {
            emit(context, ",");
        }
        first = false;
        emit(context, "\n    ");

        glslang::TIntermSymbol* param = pp->getAsSymbolNode();
        glslang::TType const& paramType = param->getType();

        // TODO: `out` modifier, etc.

        emitType(context, paramType, param->getName());
        
    }
    emit(context, ")\n");
    emit(context, "{\n");
    emit(context, "}\n");
}

void emitDecl(EmitContext* context, TIntermNode* node)
{
    if(auto nn = node->getAsAggregate())
    {
        switch(nn->getOp())
        {
        case glslang::EOpFunction:
            emitFuncDecl(context, nn);
            break;

        default:
            internalError(context, "uhandled case in 'emitDecls'");
            break;
        }
    }
    else
    {
        internalError(context, "uhandled case in 'emitDecl'");
    }
}

void emitDecls(EmitContext* context, TIntermNode* node)
{
    if(auto nn = node->getAsAggregate())
    {
        switch(nn->getOp())
        {
        case glslang::EOpSequence:
            {
                for( auto child : nn->getSequence() )
                {
                    emitDecl(context, child);
                }
            }
            break;

        default:
            internalError(context, "uhandled case in 'emitDecls'");
            break;
        }
    }
    else
    {
        internalError(context, "uhandled case in 'emitDecls'");
    }
}

int main(
    int argc,
    char** argv)
{
    // parse command line
    Options options = { 0 };
    parseOptions(&options, argc, argv);

    // read in input file
    char const* inputPath = options.inputPath;
    StringSpan inputText = readTextFile(inputPath);

#if 0
    // HACK: attach a prefix onto the input text
    {
        char const* prefix = "#version 450\n";
        size_t prefixLength = strlen(prefix);

        size_t inputLength = inputText.end - inputText.begin;

        size_t concatLength = prefixLength + inputLength;

        char* buffer = (char*) malloc(concatLength + 1);
        if(!buffer)
        {
            fprintf(stderr, "out of memory\n");
            exit(1);
        }
        memcpy(buffer, prefix, prefixLength);
        memcpy(buffer + prefixLength, inputText.begin, inputLength);
        buffer[concatLength] = 0;

        free((void*) inputText.begin);
        inputText.begin = buffer;
        inputText.end = buffer + concatLength;
    }
#endif

    // parse using glslang
    {
        glslang::InitializeProcess();

        EShLanguage stage = EShLangFragment; // TODO: command-line option, or create an "all stages" language...

        glslang::TShader* shader = new glslang::TShader(stage);

        char const* preamble =
            "#extension GL_GOOGLE_include_directive : require\n"
            "#define FALCOR_GLSL 1\n"
            "#define FALCOR_GLSL_CROSS 1\n"
//            "#define textureBias texture\n"
//            "#define mul(a,b) ((a) * (b))\n"
//            "fooble blag!\n"
            "";

//        char const* sources[] = { prefix, inputText.begin };
//        int sourceLengths[] = { strlen(prefix), (int) (inputText.end - inputText.begin) };
//        char const* paths[] = { "<prefix>", inputPath };

        char const* sources[] = { inputText.begin };
        int sourceLengths[] = { (int) (inputText.end - inputText.begin) };
        char const* paths[] = { inputPath };

        shader->setPreamble(preamble);

        shader->setStringsWithLengthsAndNames(&sources[0], &sourceLengths[0], &paths[0], 1);

        if(options.entryPointName)
            shader->setEntryPoint(options.entryPointName);

        int version = 450; // TODO: pick a different default?

        IncluderImpl includer(&options);

        if(!shader->parse(&kResourceLimits, version, ECoreProfile, false, false, EShMsgDefault, includer))
        {
            fprintf(stderr, "%s", shader->getInfoLog());
            fprintf(stderr, "%s", shader->getInfoDebugLog());
            exit(1);
        }

        glslang::TIntermediate* intermediate = ((HackShader*) shader)->getIntermediate();

        EmitContext context;
        emitDecls(&context, intermediate->getTreeRoot());

        glslang::FinalizeProcess();
    }




    // translate to output

    //

    char const* entryPointName = 0;


//    glslang::TProgram* program = new glslang::TProgram;

    int sourceFileCount = 0;
    SourceFile sourceFiles[10];
    
    for( int ii = 0; ii < sourceFileCount; ++ii )
    {
        SourceFile sourceFile = sourceFiles[ii];


    }


    return 0;
}
