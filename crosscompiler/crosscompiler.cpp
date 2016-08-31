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
    char const* outputPath;
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
                    fprintf(stderr, "expected an argument for '%s' option\n", arg);
                    exit(1);
                }
                else
                {
                    char const* optArg = *argCursor++;
                    ioOptions->includePaths.push_back(optArg);
                }
            }
            else if(strcmp(arg, "-o") == 0)
            {
                if(argCursor == argEnd)
                {
                    fprintf(stderr, "expected an argument for '%s' option\n", arg);
                    exit(1);
                }
                else
                {
                    char const* optArg = *argCursor++;
                    ioOptions->outputPath = optArg;
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
    FILE* stream;
};

void emitExp(EmitContext* context, TIntermNode* node);

void internalError(EmitContext* context, char const* message)
{
    fprintf(context->stream, "internal error: %s\n", message);
}

void emit(EmitContext* context, char const* begin, char const* end)
{
    fwrite(begin, end - begin, 1, context->stream);
}

void emitInt(EmitContext* context, int val)
{
    fprintf(context->stream, "%d", val);
}

void emitUInt(EmitContext* context, unsigned val)
{
    fprintf(context->stream, "%u", val);
}

void emitDouble(EmitContext* context, double val)
{
    fprintf(context->stream, "%g", val);
}

void emitFloat(EmitContext* context, double val)
{
    fprintf(context->stream, "%gf", val);
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

void emitFuncName(EmitContext* context, glslang::TString const& name)
{
    char const* text = name.c_str();
    char const* end = strchr(text, '(');
    if(!end)
    {
        end = text + name.length();
    }
    emit(context, text, end);
}

enum DeclaratorFlavor
{
    kDeclaratorFlavor_Name,
    kDeclaratorFlavor_FuncName,
    kDeclaratorFlavor_Array,
    kDeclaratorFlavor_Suffix,
};

struct Declarator
{
    DeclaratorFlavor    flavor;
    Declarator*         next;
    union
    {
        glslang::TString const* name;
        glslang::TType const*   type;
        char const*             suffix;
    };
};

void emitDeclarator(EmitContext* context, Declarator* declarator)
{
    if(!declarator)
        return;

    emitDeclarator(context, declarator->next);
    switch(declarator->flavor)
    {
    case kDeclaratorFlavor_Name:
        emit(context, " ");
        emit(context, *declarator->name);
        break;

    case kDeclaratorFlavor_FuncName:
        emit(context, " ");
        emitFuncName(context, *declarator->name);
        break;

    case kDeclaratorFlavor_Suffix:
        emit(context, declarator->suffix);
        break;

    case kDeclaratorFlavor_Array:
        {
            glslang::TArraySizes const* arraySizes = declarator->type->getArraySizes();
            int rank = arraySizes->getNumDims();
            for(int rr = 0; rr < rank; ++rr)
            {
                int extent = arraySizes->getDimSize(rr);
                emit(context, "[");
                if(extent > 0)
                    emitInt(context, extent);
                emit(context, "]");
            }
        }
        break;

    default:
        internalError(context, "uhandled case in 'emitDeclarator'");
        break;
    }
}

void emitSimpleTypedDecl(EmitContext* context, glslang::TType const& type, Declarator* declarator)
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
        {
            // TODO: the tricky part here is that things that are a single type
            // in GLSL, like `sampler2d` are actually a pair of types in HLSL:
            // `Texture2D` and `SamplerState`.
            //
            // The obvious solution is to create an HLSL struct with two fields
            // and use *that*, but there are rules against using opaque types
            // in various ways that will make that break down.

            glslang::TSampler const& sampler = type.getSampler();
            if(sampler.sampler || sampler.combined)
            {
                // TODO: sort out correct type...
                
                Declarator suffix = { kDeclaratorFlavor_Suffix, declarator };

                suffix.suffix = "_tex";
                emit(context, "Texure2D ");
                emitDeclarator(context, &suffix);

                // TODO: need to emit an appropriate separator here!

                suffix.suffix = "_samp";
                emit(context, "SamplerState ");
                emitDeclarator(context, &suffix);
            }
            else
            {
                // actually an image
                internalError(context, "uhandled case in 'emitTypeSpecifier'");
            }
        }
        break;

    case glslang::EbtStruct:
    case glslang::EbtBlock:
        {
            // TODO: this assumes `struct` declarations will
            // always be encountered before references, and
            // that we have no scoping issues...
            emit(context, type.getTypeName());
        }
        break;

    default:
        internalError(context, "uhandled case in 'emitTypeSpecifier'");
        break;
    }

    if(type.isMatrix())
    {
        emitInt(context, type.getMatrixRows());
        emit(context, "x");
        emitInt(context, type.getMatrixCols());
    }
    else if(type.getVectorSize() > 1)
    {
        emitInt(context, type.getVectorSize());
    }

    emitDeclarator(context, declarator);
}

void emitTypedDecl(EmitContext* context, glslang::TType const& type, Declarator* declarator)
{
    Declarator arrayDeclarator = { kDeclaratorFlavor_Array, NULL };
    if( type.isArray() )
    {
        arrayDeclarator.type = &type;
        declarator = &arrayDeclarator;
    }

    emitSimpleTypedDecl(context, type, declarator);
}

void emitTypedDecl(EmitContext* context, glslang::TType const& type, glslang::TString const& name)
{
    Declarator nameDeclarator = { kDeclaratorFlavor_Name, NULL };
    nameDeclarator.name = &name;
    emitTypedDecl(context, type, &nameDeclarator);
}

void emitTypeName(EmitContext* context, glslang::TType const& type)
{
    emitTypedDecl(context, type, NULL);
}

void emitArgList(EmitContext* context, glslang::TIntermAggregate* node)
{
    bool first = true;
    for(auto arg : node->getSequence())
    {
        if(!first) emit(context, ", ");
        first = false;

        emitExp(context, arg);
    }
}

void emitBuiltinCall(EmitContext* context, char const* name, glslang::TIntermAggregate* node)
{
    emit(context, name);
    emit(context, "(");
    emitArgList(context, node);
    emit(context, ")");
}

void emitTextureCall(EmitContext* context, char const* name, glslang::TIntermAggregate* node)
{
    // TODO: is texture-sampler arg ever in another spot?
    emitExp(context, node->getSequence()[0]);
    emit(context, "_tex.");
    emit(context, name);
    emit(context, "(");

    bool first = true;
    for(auto arg : node->getSequence())
    {
        if(!first) emit(context, ", ");

        emitExp(context, arg);

        if(first) emit(context, "_samp");
        first = false;
    }
    emit(context, ")");
}

void emitBuiltinCall(EmitContext* context, char const* name, glslang::TIntermUnary* node)
{
    emit(context, name);
    emit(context, "(");
    emitExp(context, node->getOperand());
    emit(context, ")");
}

void emitBuiltinPrefixOp(EmitContext* context, char const* name, glslang::TIntermUnary* node)
{
    emit(context, name);
    emit(context, "(");
    emitExp(context, node->getOperand());
    emit(context, ")");
}

void emitBuiltinPostfixOp(EmitContext* context, char const* name, glslang::TIntermUnary* node)
{
    emit(context, "(");
    emitExp(context, node->getOperand());
    emit(context, ")");
    emit(context, name);
}

void emitBuiltinCall(EmitContext* context, char const* name, glslang::TIntermBinary* node)
{
    emit(context, name);
    emit(context, "(");
    emitExp(context, node->getLeft());
    emit(context, ", ");
    emitExp(context, node->getRight());
    emit(context, ")");
}


void emitBuiltinOp(EmitContext* context, char const* name, glslang::TIntermBinary* node)
{
    emit(context, "((");
    emitExp(context, node->getLeft());
    emit(context, ") ");
    emit(context, name);
    emit(context, " (");
    emitExp(context, node->getRight());
    emit(context, "))");
}

void emitScalarConstantExp(EmitContext* context, glslang::TType const& type, glslang::TConstUnionArray const& data, int* ioIndex)
{
    int index = (*ioIndex)++;
    bool forceZero = index >= data.size();

    switch(type.getBasicType())
    {
    case glslang::EbtInt:
        emitInt(context, forceZero ? int(0) : data[index].getIConst());
        break;

    case glslang::EbtUint:
        emitUInt(context, forceZero ? unsigned(0) : data[index].getUConst());
        break;

    case glslang::EbtFloat:
        emitFloat(context, forceZero ? 0.0 : data[index].getDConst());
        break;

    case glslang::EbtDouble:
        emitDouble(context, forceZero ? 0.0 : data[index].getDConst());
        break;

    case glslang::EbtBool:
        emit(context, forceZero ? "false" : data[index].getBConst() ? "true" : "false");
        break;

    default:
        internalError(context, "uhandled case in 'emitConstantExp'");
        break;
    }
}

void emitConstantExp(EmitContext* context, glslang::TType const& type, glslang::TConstUnionArray const& data, int* ioIndex)
{
    // TODO: this won't work for arrays, since they can't use constructor syntax...
    emitTypeName(context, type);
    emit(context, "(");

    if(type.isArray())
    {
        glslang::TType elementType(type, 0);
        int elementCount = type.getOuterArraySize();
        for(int ii = 0; ii < elementCount; ++ii)
        {
            if(ii != 0) emit(context, ", ");
            emitConstantExp(context, elementType, data, ioIndex);
        }
    }
    else if(type.isMatrix())
    {
        int elementCount = type.getMatrixRows() * type.getMatrixCols();
        for(int ii = 0; ii < elementCount; ++ii)
        {
            if(ii != 0) emit(context, ", ");
            emitScalarConstantExp(context, type, data, ioIndex);
        }
    }
    else if(type.getVectorSize() > 1)
    {
        int elementCount = type.getVectorSize();
        for(int ii = 0; ii < elementCount; ++ii)
        {
            if(ii != 0) emit(context, ", ");
            emitScalarConstantExp(context, type, data, ioIndex);
        }
    }
    else if(auto structType = type.getStruct())
    {
        //
        for(auto field : *structType)
        {
            emitConstantExp(context, *field.type, data, ioIndex);
        }
    }
    else
    {
        emitScalarConstantExp(context, type, data, ioIndex);
    }

    emit(context, ")");
}

void emitConstructorCall(EmitContext* context, glslang::TIntermAggregate* node)
{
    emitTypeName(context, node->getType());
    emit(context, "(");
    emitArgList(context, node);
    emit(context, ")");
}

void emitConversion(EmitContext* context, glslang::TIntermUnary* node)
{
    emitTypeName(context, node->getType());
    emit(context, "(");
    emitExp(context, node->getOperand());
    emit(context, ")");
}

void emitExp(EmitContext* context, TIntermNode* node)
{
    if(auto nn = node->getAsAggregate())
    {
        switch(nn->getOp())
        {
#define CASE(Op, Func) case glslang::EOp##Op: emitBuiltinCall(context, #Func, nn); break
        CASE(Min, min);
        CASE(Max, max);
        CASE(Modf, modf);
        CASE(Pow, pow);
        CASE(Dot, dot);
        CASE(Atan, atan);
        CASE(Clamp, clamp);
        CASE(Mix, mix); // TODO: map to HLSL version
        CASE(Step, step);
        CASE(SmoothStep, smoothstep);
        CASE(Distance, distance);
        CASE(Cross, cross);
        CASE(FaceForward, faceforward);
        CASE(Reflect, reflect);
        CASE(Refract, refract);
        CASE(InterpolateAtSample, interpolateAtSample);
        CASE(InterpolateAtOffset, interpolateAtOffset);
        CASE(AddCarry, addcarry);
        CASE(SubBorrow, subborrow);
        CASE(UMulExtended, umulextended);
        CASE(IMulExtended, imulextended);
        CASE(BitfieldExtract, bitfieldextract);
        CASE(BitfieldInsert, bitfieldinsert);
        CASE(Fma, fma);
        CASE(Frexp, frexp);
        CASE(Ldexp, ldexp);
        CASE(ReadInvocation, readInvocation);
        // Note: constructors may need special-case work if language rules differ
#undef CASE


        case glslang::EOpConstructMat2x2:
        case glslang::EOpConstructMat2x3:
        case glslang::EOpConstructMat2x4:
        case glslang::EOpConstructMat3x2:
        case glslang::EOpConstructMat3x3:
        case glslang::EOpConstructMat3x4:
        case glslang::EOpConstructMat4x2:
        case glslang::EOpConstructMat4x3:
        case glslang::EOpConstructMat4x4:
        case glslang::EOpConstructDMat2x2:
        case glslang::EOpConstructDMat2x3:
        case glslang::EOpConstructDMat2x4:
        case glslang::EOpConstructDMat3x2:
        case glslang::EOpConstructDMat3x3:
        case glslang::EOpConstructDMat3x4:
        case glslang::EOpConstructDMat4x2:
        case glslang::EOpConstructDMat4x3:
        case glslang::EOpConstructDMat4x4:
        case glslang::EOpConstructFloat:
        case glslang::EOpConstructVec2:
        case glslang::EOpConstructVec3:
        case glslang::EOpConstructVec4:
        case glslang::EOpConstructDouble:
        case glslang::EOpConstructDVec2:
        case glslang::EOpConstructDVec3:
        case glslang::EOpConstructDVec4:
        case glslang::EOpConstructBool:
        case glslang::EOpConstructBVec2:
        case glslang::EOpConstructBVec3:
        case glslang::EOpConstructBVec4:
        case glslang::EOpConstructInt:
        case glslang::EOpConstructIVec2:
        case glslang::EOpConstructIVec3:
        case glslang::EOpConstructIVec4:
        case glslang::EOpConstructUint:
        case glslang::EOpConstructUVec2:
        case glslang::EOpConstructUVec3:
        case glslang::EOpConstructUVec4:
        case glslang::EOpConstructInt64:
        case glslang::EOpConstructI64Vec2:
        case glslang::EOpConstructI64Vec3:
        case glslang::EOpConstructI64Vec4:
        case glslang::EOpConstructUint64:
        case glslang::EOpConstructU64Vec2:
        case glslang::EOpConstructU64Vec3:
        case glslang::EOpConstructU64Vec4:
        case glslang::EOpConstructStruct:
        case glslang::EOpConstructTextureSampler:
            emitConstructorCall(context, nn);
            break;

        case glslang::EOpFunctionCall:
            {
                emitFuncName(context, nn->getName());
                emit(context, "(");
                emitArgList(context, nn);
                emit(context, ")");
            }
            break;

#define CASE(Op, Func) case glslang::EOp##Op: emitTextureCall(context, #Func, nn); break

    CASE(Texture, Sample);
    CASE(TextureProj, SampleProj);
    CASE(TextureLod, SampleLod);
    CASE(TextureOffset, SampleOffset);
    CASE(TextureFetch, Fetch);
    CASE(TextureFetchOffset, FetchOffset);
    CASE(TextureProjOffset, SampleProjOffset);
    CASE(TextureLodOffset, SampleLodOffset);
    CASE(TextureProjLod, SampleProjLod);
    CASE(TextureProjLodOffset, SampleProjLodOffset);
    CASE(TextureGrad, SampleGrad);
    CASE(TextureGradOffset, SampleGradOffset);
    CASE(TextureProjGrad, SampleProjGrad);
    CASE(TextureProjGradOffset, SampleProjGradOffset);
    CASE(TextureGather, Gather);
    CASE(TextureGatherOffset, GatherOffset);
    CASE(TextureGatherOffsets, GatherOffsets);
    CASE(TextureClamp, SampleClamp);
    CASE(TextureOffsetClamp, SampleOffsetClamp);
    CASE(TextureGradClamp, SampleGradClamp);
    CASE(TextureGradOffsetClamp, SampleGradOffsetClamp);
    CASE(SparseTexture, Sample);
    CASE(SparseTextureLod, SampleLod);
    CASE(SparseTextureOffset, SampleOffset);
    CASE(SparseTextureFetch, Fetch);
    CASE(SparseTextureFetchOffset, FetchOffset);
    CASE(SparseTextureLodOffset, SampleLodOffset);
    CASE(SparseTextureGrad, SampleGrad);
    CASE(SparseTextureGradOffset, SampleGradOffset);
    CASE(SparseTextureGather, Gather);
    CASE(SparseTextureGatherOffset, GatherOffset);
    CASE(SparseTextureGatherOffsets, GatherOffsets);
    CASE(SparseTexelsResident, IsResident);
    CASE(SparseTextureClamp, SampleClamp);
    CASE(SparseTextureOffsetClamp, SampleOffsetClamp);
    CASE(SparseTextureGradClamp, SampleGradClamp);
    CASE(SparseTextureGradOffsetClamp, SampleGraOffsetClamp);
#undef CASE

        default:
            internalError(context, "uhandled case in 'emitExp'");
            break;
        }
    }
    else if(auto nn = node->getAsUnaryNode())
    {
        switch(nn->getOp())
        {
#define CASE(Op, Func) case glslang::EOp##Op: emitBuiltinCall(context, #Func, nn); break
        CASE(Radians, radians);
        CASE(Degrees, degrees);
        CASE(Sin, sin);
        CASE(Cos, cos);
        CASE(Tan, tan);
        CASE(Asin, asin);
        CASE(Acos, acos);
        CASE(Atan, atan);
        CASE(Sinh, sinh);
        CASE(Cosh, cosh);
        CASE(Tanh, tanh);
        CASE(Asinh, asinh);
        CASE(Acosh, acosh);
        CASE(Atanh, atanh);
        CASE(Exp, exp);
        CASE(Log, log);
        CASE(Exp2, exp2);
        CASE(Log2, log2);
        CASE(Sqrt, sqrt);
        CASE(InverseSqrt, rsqrt);
        CASE(Determinant, determinant);
        CASE(MatrixInverse, inverse);
        CASE(Transpose, transpose);
        CASE(Length, length);
        CASE(Normalize, normalize);
        CASE(Floor, floor);
        CASE(Trunc, trunc);
        CASE(Round, round);
        CASE(RoundEven, roundEvent);
        CASE(Ceil, ceil);
        CASE(Fract, fract);
        CASE(IsNan, isnan);
        CASE(IsInf, isinf);
        CASE(IsFinite, isfinite);
        CASE(FloatBitsToInt, asint);
        CASE(FloatBitsToUint, asuint);
        CASE(IntBitsToFloat, asfloat);
        CASE(UintBitsToFloat, asfloat);
        CASE(DoubleBitsToInt64, asint);
        CASE(DoubleBitsToUint64, asuint);
        CASE(Int64BitsToDouble, asdouble);
        CASE(Uint64BitsToDouble, asdouble);
        CASE(DPdx, ddx);
        CASE(DPdy, ddy);
        CASE(DPdxFine, ddx_fine);
        CASE(DPdyFine, ddy_fine);
        CASE(DPdxCoarse, ddx_coarse);
        CASE(DPdyCoarse, ddy_coarse);
        CASE(Fwidth, fwidth);
        CASE(FwidthFine, fwidth_fine);
        CASE(FwidthCoarse, fwidth_coarse);
        CASE(InterpolateAtCentroid, InterpolateAtCentroid);
        CASE(Any, any);
        CASE(All, all);
        CASE(Abs, abs);
        CASE(Sign, sgn);
        CASE(BitFieldReverse, bitreverse);
        CASE(BitCount, popcount);
        CASE(FindLSB, findLSB);
        CASE(FindMSB, findMSB);
        CASE(Ballot, ballot);
        CASE(ReadFirstInvocation, readFirstInvocation);
        CASE(AnyInvocation, anyInvocation);
        CASE(AllInvocations, allInvocatiosn);
        CASE(AllInvocationsEqual, allInvocationsEqual);

        // TODO: figure out mapping for these
        CASE(PackSnorm2x16, PackSnorm2x16);
        CASE(UnpackSnorm2x16, UnpackSnorm2x16);
        CASE(PackUnorm2x16, PackUnorm2x16);
        CASE(UnpackUnorm2x16, UnpackUnorm2x16);
        CASE(PackHalf2x16, PackHalf2x16);
        CASE(UnpackHalf2x16, UnpackHalf2x16);
        CASE(PackSnorm4x8, PackSnorm4x8);
        CASE(UnpackSnorm4x8, UnpackSnorm4x8);
        CASE(PackUnorm4x8, PackUnorm4x8);
        CASE(UnpackUnorm4x8, UnpackUnorm4x8);
        CASE(PackDouble2x32, PackDouble2x32);
        CASE(UnpackDouble2x32, UnpackDouble2x32);
        CASE(PackInt2x32, PackInt2x32);
        CASE(UnpackInt2x32, UnpackInt2x32);
        CASE(PackUint2x32, PackUint2x32);
        CASE(UnpackUint2x32, UnpackUint2x32);
        //
        CASE(AtomicCounterIncrement, AtomicCounterIncrement);
        CASE(AtomicCounterDecrement, AtomicCounterDecrement);
        CASE(AtomicCounter, AtomicCounter);
#undef CASE

#define CASE(Name, op) case glslang::EOp##Name: emitBuiltinPrefixOp(context, op, nn); break
        CASE(Negative, "-");
        CASE(LogicalNot, "!");
        CASE(BitwiseNot, "~");
        CASE(PreIncrement, "++");
        CASE(PreDecrement, "--");
#undef CASE

#define CASE(Name, op) case glslang::EOp##Name: emitBuiltinPostfixOp(context, op, nn); break
        CASE(PostIncrement, "++");
        CASE(PostDecrement, "--");
#undef CASE

        case glslang::EOpConvIntToBool:
        case glslang::EOpConvUintToBool:
        case glslang::EOpConvInt64ToBool:
        case glslang::EOpConvUint64ToBool:
        case glslang::EOpConvFloatToBool:
        case glslang::EOpConvDoubleToBool:
        case glslang::EOpConvBoolToFloat:
        case glslang::EOpConvBoolToDouble:
        case glslang::EOpConvBoolToInt:
        case glslang::EOpConvBoolToInt64:
        case glslang::EOpConvBoolToUint:
        case glslang::EOpConvBoolToUint64:
        case glslang::EOpConvIntToFloat:
        case glslang::EOpConvIntToDouble:
        case glslang::EOpConvInt64ToFloat:
        case glslang::EOpConvInt64ToDouble:
        case glslang::EOpConvUintToFloat:
        case glslang::EOpConvUintToDouble:
        case glslang::EOpConvUint64ToFloat:
        case glslang::EOpConvUint64ToDouble:
        case glslang::EOpConvDoubleToFloat:
        case glslang::EOpConvFloatToDouble:
        case glslang::EOpConvFloatToInt:
        case glslang::EOpConvDoubleToInt:
        case glslang::EOpConvFloatToInt64:
        case glslang::EOpConvDoubleToInt64:
        case glslang::EOpConvUintToInt:
        case glslang::EOpConvIntToUint:
        case glslang::EOpConvUint64ToInt64:
        case glslang::EOpConvInt64ToUint64:
        case glslang::EOpConvFloatToUint:
        case glslang::EOpConvDoubleToUint:
        case glslang::EOpConvFloatToUint64:
        case glslang::EOpConvDoubleToUint64:
        case glslang::EOpConvIntToInt64:
        case glslang::EOpConvInt64ToInt:
        case glslang::EOpConvUintToUint64:
        case glslang::EOpConvUint64ToUint:
        case glslang::EOpConvIntToUint64:
        case glslang::EOpConvInt64ToUint:
        case glslang::EOpConvUint64ToInt:
        case glslang::EOpConvUintToInt64:
            emitConversion(context, nn);
            break;

        default:
            internalError(context, "uhandled case in 'emitExp'");
            break;
        }
    }
    else if(auto nn = node->getAsBinaryNode())
    {
        switch(nn->getOp())
        {
#define CASE(Name, op) case glslang::EOp##Name: emitBuiltinOp(context, op, nn); break
        //
        CASE(Add, "+");
        CASE(Sub, "-");
        CASE(Mul, "*");
        CASE(VectorTimesScalar, "*");
        CASE(MatrixTimesScalar, "*");
        CASE(Div, "/");
        CASE(Mod, "%");
        CASE(RightShift, ">>");
        CASE(LeftShift, "<<");
        CASE(And, "&");
        CASE(InclusiveOr, "|");
        CASE(ExclusiveOr, "^");
        CASE(LessThan, "<");
        CASE(GreaterThan, ">");
        CASE(LessThanEqual, "<=");
        CASE(GreaterThanEqual, ">=");
        CASE(Equal, "=="); // TODO: HLSL versions default to component-wise
        CASE(NotEqual, "!=");
        //
        //
        CASE(LogicalOr, "||"); // TODO: need to implement short-circuiting for HLSL...
        CASE(LogicalAnd, "&&");
        //
        CASE(Assign, "="); // TODO: any special-casing needed for assignment?
        CASE(AddAssign, "+=");
        CASE(SubAssign, "-=");
        CASE(MulAssign, "*=");
        CASE(DivAssign, "/=");
        CASE(ModAssign, "%=");
        CASE(AndAssign, "&=");
        CASE(InclusiveOrAssign, "|=");
        CASE(ExclusiveOrAssign, "^=");
        CASE(LeftShiftAssign, "<<=");
        CASE(RightShiftAssign, ">>=");
        //
        CASE(VectorTimesScalarAssign, "*=");
        CASE(MatrixTimesScalarAssign, "*=");
        CASE(VectorTimesMatrixAssign, "*="); // TODO: should map to use of `mul()`
        CASE(MatrixTimesMatrixAssign, "*="); // TODO: should map to use of `mul()`
#undef CASE

#define CASE(Op, Func) case glslang::EOp##Op: emitBuiltinCall(context, #Func, nn); break
        CASE(VectorTimesMatrix, mul);
        CASE(MatrixTimesVector, mul);
        CASE(MatrixTimesMatrix, mul);
#undef CASE

        case glslang::EOpIndexDirect:
        case glslang::EOpIndexIndirect:
            {
                emit(context, "(");
                emitExp(context, nn->getLeft());
                emit(context, "[");
                emitExp(context, nn->getRight());
                emit(context, "])");
            }
            break;

        case glslang::EOpIndexDirectStruct:
            {
                int index = nn->getRight()->getAsConstantUnion()->getConstArray()[0].getIConst();

                emit(context, "(");
                emitExp(context, nn->getLeft());
                emit(context, ").");

                emit(context, nn->getType().getFieldName());
            }
            break;

        default:
            internalError(context, "uhandled case in 'emitExp'");
            break;
        }
    }
    else if(auto nn = node->getAsConstantUnion())
    {
        int index = 0;
        emitConstantExp(context, nn->getType(), nn->getConstArray(), &index);
    }
    else if(auto nn = node->getAsSymbolNode())
    {
        // TODO: some special-casing for nodes of composite texture-sampler type
        emit(context, nn->getName());
    }
    else if(auto nn = node->getAsSelectionNode())
    {
        // TODO: HLSL ?: doesn't short-circuit!
        emit(context, "(");
        emitExp(context, nn->getCondition());
        emit(context, " ? ");
        emitExp(context, nn->getTrueBlock());
        emit(context, " : ");
        emitExp(context, nn->getTrueBlock());
        emit(context, ")");
    }
    else
    {
        internalError(context, "uhandled case in 'emitExp'");
    }
}

void emitExpStmt(EmitContext* context, TIntermNode* node)
{
    emitExp(context, node);
    emit(context, ";\n");
}

void emitStmt(EmitContext* context, TIntermNode* node)
{
    if(auto nn = node->getAsAggregate())
    {
        switch(nn->getOp())
        {
        case glslang::EOpParameters:
            // already handled in `emitFuncDecl`
            break;

        case glslang::EOpSequence:
            {
                for( auto child : nn->getSequence() )
                {
                    emitStmt(context, child);
                }
            }
            break;

        default:
            // assume any unhandled cases are expressions
            emitExpStmt(context, nn);
//            internalError(context, "uhandled case in 'emitStmt'");
            break;
        }
    }
    else if(auto nn = node->getAsBranchNode())
    {
        switch(nn->getFlowOp())
        {
        case glslang::EOpReturn:
            {
                emit(context, "return");
                if(auto exp = nn->getExpression())
                {
                    emit(context, " ");
                    emitExp(context, exp);
                }
                emit(context, ";\n");
            }
            break;

        case glslang::EOpKill:
            emit(context, "discard;\n");
            break;

        case glslang::EOpBreak:
            emit(context, "break;\n");
            break;

        case glslang::EOpContinue:
            emit(context, "continue;\n");
            break;

        default:
            internalError(context, "uhandled case in 'emitStmt'");
            break;
        }
    }
    else if(auto nn = node->getAsSelectionNode())
    {
        if(nn->getType().getBasicType() != glslang::EbtVoid)
        {
            emitExpStmt(context, nn);
        }
        else
        {
            emit(context, "if(");
            emitExp(context, nn->getCondition());
            emit(context, ")\n{\n");
            emitStmt(context, nn->getTrueBlock());
            emit(context, "}\n");
            if(auto elseBlock = nn->getFalseBlock())
            {
                emit(context, "else\n{\n");
                emitStmt(context, elseBlock);
                emit(context, "}\n");
            }
        }
    }
    else if(auto nn = node->getAsLoopNode())
    {
        auto test = nn->getTest();
        auto body = nn->getBody();
        if(nn->testFirst())
        {
            if( auto iter = nn->getTerminal() )
            {
                emit(context, "for(;");
                if(test)
                {
                    emitExp(context, test);
                }
                emit(context, ";");
                if(iter)
                {
                    emitExp(context, iter);
                }
                emit(context, ")\n{\n");
                emitStmt(context, body);
                emit(context, "}\n");
            }
            else
            {
                emit(context, "while(");
                emitExp(context, test);
                emit(context, ")\n{\n");
                emitStmt(context, body);
                emit(context, "}\n");
            }
        }
        else
        {
                emit(context, "do\n{\n");
                emitStmt(context, body);
                emit(context, "} while(");
                emitExp(context, test);
                emit(context, ");\n");
        }
    }
    else if(auto nn = node->getAsSwitchNode())
    {
        emit(context, "switch(");
        emitExp(context, nn->getCondition());
        emit(context, ")\n{\n");
        for(auto child : nn->getBody()->getSequence())
        {
            if(auto childBranch = child->getAsBranchNode())
            {
                switch(childBranch->getFlowOp())
                {
                case glslang::EOpDefault:
                    emit(context, "default:\n");
                    break;

                case glslang::EOpCase:
                    emit(context, "case ");
                    emitExp(context, childBranch->getExpression());
                    emit(context, ":\n");
                    break;

                default:
                    emitStmt(context, child);
                    break;
                }
            }
            else
            {
                emitStmt(context, child);
            }
        }
        emit(context, "}\n");
    }
    else if(auto nn = node->getAsTyped())
    {
        // by default, assume a typed node is an expression
        emitExpStmt(context, nn);
    }
    else
    {
        internalError(context, "uhandled case in 'emitStmt'");
    }
}

void emitFuncDecl(EmitContext* context, glslang::TIntermAggregate* funcDecl)
{
    // TODO: maybe skip the entry-point function during this part...

    glslang::TString name = funcDecl->getName();
    Declarator declarator = { kDeclaratorFlavor_FuncName, NULL };
    declarator.name = &name;

    emitTypedDecl(context, funcDecl->getType(), &declarator);
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

        emitTypedDecl(context, paramType, param->getName());
        
    }
    emit(context, ")\n");
    // TODO: how do we distinguish forward declaration?
    emit(context, "{\n");
    for(auto child : funcDecl->getSequence())
    {
        emitStmt(context, child);
    }
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

        case glslang::EOpLinkerObjects:
            break;

        default:
            // TODO: other cases at global scope are logically initializers that go
            // at the start of the entry point...
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

    // parse using glslang
    {
        glslang::InitializeProcess();

        EShLanguage stage = EShLangFragment; // TODO: command-line option, or create an "all stages" language...

        glslang::TShader* shader = new glslang::TShader(stage);

        char const* preamble =
            "#extension GL_GOOGLE_include_directive : require\n"
            "#define FALCOR_GLSL 1\n"
            "#define FALCOR_GLSL_CROSS 1\n"
            "";

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

        FILE* outFile = stdout;
        if(options.outputPath)
        {
            FILE* file = fopen(options.outputPath, "w");
            if(!file)
            {
                fprintf(stderr, "failed to open '%s' for writing\n", options.outputPath);
                exit(1);
            }
            else
            {
                outFile = file;
            }
        }

        EmitContext context;
        context.stream = outFile;
        emitDecls(&context, intermediate->getTreeRoot());

        if(outFile != stdout)
        {
            fclose(outFile);
        }

        // clean up

        delete shader;
        glslang::FinalizeProcess();
    }

    return 0;
}
