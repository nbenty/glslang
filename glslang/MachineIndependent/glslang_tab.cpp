
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 41 "MachineIndependent/glslang.y"


/* Based on:
ANSI C Yacc grammar

In 1985, Jeff Lee published his Yacc grammar (which is accompanied by a
matching Lex specification) for the April 30, 1985 draft version of the
ANSI C standard.  Tom Stockfisch reposted it to net.sources in 1987; that
original, as mentioned in the answer to question 17.25 of the comp.lang.c
FAQ, can be ftp'ed from ftp.uu.net, file usenet/net.sources/ansi.c.grammar.Z.

I intend to keep this version as close to the current C Standard grammar as
possible; please let me know if you discover discrepancies.

Jutta Degener, 1995
*/

#include "SymbolTable.h"
#include "ParseHelper.h"
#include "../Public/ShaderLang.h"

using namespace glslang;



/* Line 189 of yacc.c  */
#line 99 "MachineIndependent/glslang_tab.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ATTRIBUTE = 258,
     VARYING = 259,
     CONST = 260,
     BOOL = 261,
     FLOAT = 262,
     DOUBLE = 263,
     INT = 264,
     UINT = 265,
     INT64_T = 266,
     UINT64_T = 267,
     BREAK = 268,
     CONTINUE = 269,
     DO = 270,
     ELSE = 271,
     FOR = 272,
     IF = 273,
     DISCARD = 274,
     RETURN = 275,
     SWITCH = 276,
     CASE = 277,
     DEFAULT = 278,
     SUBROUTINE = 279,
     BVEC2 = 280,
     BVEC3 = 281,
     BVEC4 = 282,
     IVEC2 = 283,
     IVEC3 = 284,
     IVEC4 = 285,
     I64VEC2 = 286,
     I64VEC3 = 287,
     I64VEC4 = 288,
     UVEC2 = 289,
     UVEC3 = 290,
     UVEC4 = 291,
     U64VEC2 = 292,
     U64VEC3 = 293,
     U64VEC4 = 294,
     VEC2 = 295,
     VEC3 = 296,
     VEC4 = 297,
     MAT2 = 298,
     MAT3 = 299,
     MAT4 = 300,
     CENTROID = 301,
     IN = 302,
     OUT = 303,
     INOUT = 304,
     UNIFORM = 305,
     PATCH = 306,
     SAMPLE = 307,
     BUFFER = 308,
     SHARED = 309,
     COHERENT = 310,
     VOLATILE = 311,
     RESTRICT = 312,
     READONLY = 313,
     WRITEONLY = 314,
     DVEC2 = 315,
     DVEC3 = 316,
     DVEC4 = 317,
     DMAT2 = 318,
     DMAT3 = 319,
     DMAT4 = 320,
     NOPERSPECTIVE = 321,
     FLAT = 322,
     SMOOTH = 323,
     LAYOUT = 324,
     __EXPLICITINTERPAMD = 325,
     INTPTR_T = 326,
     UINTPTR_T = 327,
     MAT2X2 = 328,
     MAT2X3 = 329,
     MAT2X4 = 330,
     MAT3X2 = 331,
     MAT3X3 = 332,
     MAT3X4 = 333,
     MAT4X2 = 334,
     MAT4X3 = 335,
     MAT4X4 = 336,
     DMAT2X2 = 337,
     DMAT2X3 = 338,
     DMAT2X4 = 339,
     DMAT3X2 = 340,
     DMAT3X3 = 341,
     DMAT3X4 = 342,
     DMAT4X2 = 343,
     DMAT4X3 = 344,
     DMAT4X4 = 345,
     ATOMIC_UINT = 346,
     SAMPLER1D = 347,
     SAMPLER2D = 348,
     SAMPLER3D = 349,
     SAMPLERCUBE = 350,
     SAMPLER1DSHADOW = 351,
     SAMPLER2DSHADOW = 352,
     SAMPLERCUBESHADOW = 353,
     SAMPLER1DARRAY = 354,
     SAMPLER2DARRAY = 355,
     SAMPLER1DARRAYSHADOW = 356,
     SAMPLER2DARRAYSHADOW = 357,
     ISAMPLER1D = 358,
     ISAMPLER2D = 359,
     ISAMPLER3D = 360,
     ISAMPLERCUBE = 361,
     ISAMPLER1DARRAY = 362,
     ISAMPLER2DARRAY = 363,
     USAMPLER1D = 364,
     USAMPLER2D = 365,
     USAMPLER3D = 366,
     USAMPLERCUBE = 367,
     USAMPLER1DARRAY = 368,
     USAMPLER2DARRAY = 369,
     SAMPLER2DRECT = 370,
     SAMPLER2DRECTSHADOW = 371,
     ISAMPLER2DRECT = 372,
     USAMPLER2DRECT = 373,
     SAMPLERBUFFER = 374,
     ISAMPLERBUFFER = 375,
     USAMPLERBUFFER = 376,
     SAMPLERCUBEARRAY = 377,
     SAMPLERCUBEARRAYSHADOW = 378,
     ISAMPLERCUBEARRAY = 379,
     USAMPLERCUBEARRAY = 380,
     SAMPLER2DMS = 381,
     ISAMPLER2DMS = 382,
     USAMPLER2DMS = 383,
     SAMPLER2DMSARRAY = 384,
     ISAMPLER2DMSARRAY = 385,
     USAMPLER2DMSARRAY = 386,
     SAMPLEREXTERNALOES = 387,
     SAMPLER = 388,
     SAMPLERSHADOW = 389,
     TEXTURE1D = 390,
     TEXTURE2D = 391,
     TEXTURE3D = 392,
     TEXTURECUBE = 393,
     TEXTURE1DARRAY = 394,
     TEXTURE2DARRAY = 395,
     ITEXTURE1D = 396,
     ITEXTURE2D = 397,
     ITEXTURE3D = 398,
     ITEXTURECUBE = 399,
     ITEXTURE1DARRAY = 400,
     ITEXTURE2DARRAY = 401,
     UTEXTURE1D = 402,
     UTEXTURE2D = 403,
     UTEXTURE3D = 404,
     UTEXTURECUBE = 405,
     UTEXTURE1DARRAY = 406,
     UTEXTURE2DARRAY = 407,
     TEXTURE2DRECT = 408,
     ITEXTURE2DRECT = 409,
     UTEXTURE2DRECT = 410,
     TEXTUREBUFFER = 411,
     ITEXTUREBUFFER = 412,
     UTEXTUREBUFFER = 413,
     TEXTURECUBEARRAY = 414,
     ITEXTURECUBEARRAY = 415,
     UTEXTURECUBEARRAY = 416,
     TEXTURE2DMS = 417,
     ITEXTURE2DMS = 418,
     UTEXTURE2DMS = 419,
     TEXTURE2DMSARRAY = 420,
     ITEXTURE2DMSARRAY = 421,
     UTEXTURE2DMSARRAY = 422,
     SUBPASSINPUT = 423,
     SUBPASSINPUTMS = 424,
     ISUBPASSINPUT = 425,
     ISUBPASSINPUTMS = 426,
     USUBPASSINPUT = 427,
     USUBPASSINPUTMS = 428,
     IMAGE1D = 429,
     IIMAGE1D = 430,
     UIMAGE1D = 431,
     IMAGE2D = 432,
     IIMAGE2D = 433,
     UIMAGE2D = 434,
     IMAGE3D = 435,
     IIMAGE3D = 436,
     UIMAGE3D = 437,
     IMAGE2DRECT = 438,
     IIMAGE2DRECT = 439,
     UIMAGE2DRECT = 440,
     IMAGECUBE = 441,
     IIMAGECUBE = 442,
     UIMAGECUBE = 443,
     IMAGEBUFFER = 444,
     IIMAGEBUFFER = 445,
     UIMAGEBUFFER = 446,
     IMAGE1DARRAY = 447,
     IIMAGE1DARRAY = 448,
     UIMAGE1DARRAY = 449,
     IMAGE2DARRAY = 450,
     IIMAGE2DARRAY = 451,
     UIMAGE2DARRAY = 452,
     IMAGECUBEARRAY = 453,
     IIMAGECUBEARRAY = 454,
     UIMAGECUBEARRAY = 455,
     IMAGE2DMS = 456,
     IIMAGE2DMS = 457,
     UIMAGE2DMS = 458,
     IMAGE2DMSARRAY = 459,
     IIMAGE2DMSARRAY = 460,
     UIMAGE2DMSARRAY = 461,
     STRUCT = 462,
     VOID = 463,
     WHILE = 464,
     IDENTIFIER = 465,
     TYPE_NAME = 466,
     FLOATCONSTANT = 467,
     DOUBLECONSTANT = 468,
     INTCONSTANT = 469,
     UINTCONSTANT = 470,
     INT64CONSTANT = 471,
     UINT64CONSTANT = 472,
     BOOLCONSTANT = 473,
     LEFT_OP = 474,
     RIGHT_OP = 475,
     INC_OP = 476,
     DEC_OP = 477,
     LE_OP = 478,
     GE_OP = 479,
     EQ_OP = 480,
     NE_OP = 481,
     AND_OP = 482,
     OR_OP = 483,
     XOR_OP = 484,
     MUL_ASSIGN = 485,
     DIV_ASSIGN = 486,
     ADD_ASSIGN = 487,
     MOD_ASSIGN = 488,
     LEFT_ASSIGN = 489,
     RIGHT_ASSIGN = 490,
     AND_ASSIGN = 491,
     XOR_ASSIGN = 492,
     OR_ASSIGN = 493,
     SUB_ASSIGN = 494,
     LEFT_PAREN = 495,
     RIGHT_PAREN = 496,
     LEFT_BRACKET = 497,
     RIGHT_BRACKET = 498,
     LEFT_BRACE = 499,
     RIGHT_BRACE = 500,
     DOT = 501,
     COMMA = 502,
     COLON = 503,
     EQUAL = 504,
     SEMICOLON = 505,
     BANG = 506,
     DASH = 507,
     TILDE = 508,
     PLUS = 509,
     STAR = 510,
     SLASH = 511,
     PERCENT = 512,
     LEFT_ANGLE = 513,
     RIGHT_ANGLE = 514,
     VERTICAL_BAR = 515,
     CARET = 516,
     AMPERSAND = 517,
     QUESTION = 518,
     INVARIANT = 519,
     PRECISE = 520,
     HIGH_PRECISION = 521,
     MEDIUM_PRECISION = 522,
     LOW_PRECISION = 523,
     PRECISION = 524,
     PACKED = 525,
     RESOURCE = 526,
     SUPERP = 527
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 66 "MachineIndependent/glslang.y"

    struct {
        glslang::TSourceLoc loc;
        union {
            glslang::TString *string;
            int i;
            unsigned int u;
            long long i64;
            unsigned long long u64;
            bool b;
            double d;
        };
        glslang::TSymbol* symbol;
    } lex;
    struct {
        glslang::TSourceLoc loc;
        glslang::TOperator op;
        union {
            TIntermNode* intermNode;
            glslang::TIntermNodePair nodePair;
            glslang::TIntermTyped* intermTypedNode;
        };
        union {
            glslang::TPublicType type;
            glslang::TFunction* function;
            glslang::TParameter param;
            glslang::TTypeLoc typeLine;
            glslang::TTypeList* typeList;
            glslang::TArraySizes* arraySizes;
            glslang::TIdentifierList* identifierList;
        };
    } interm;



/* Line 214 of yacc.c  */
#line 443 "MachineIndependent/glslang_tab.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 264 of yacc.c  */
#line 100 "MachineIndependent/glslang.y"


/* windows only pragma */
#ifdef _MSC_VER
    #pragma warning(disable : 4065)
    #pragma warning(disable : 4127)
    #pragma warning(disable : 4244)
#endif

#define parseContext (*pParseContext)
#define yyerror(context, msg) context->parserError(msg)

extern int yylex(YYSTYPE*, TParseContext&);



/* Line 264 of yacc.c  */
#line 472 "MachineIndependent/glslang_tab.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  251
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6016

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  273
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  426
/* YYNRULES -- Number of states.  */
#define YYNSTATES  560

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   527

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    25,    27,    32,    34,    38,    41,    44,    46,
      48,    50,    53,    56,    59,    61,    64,    68,    71,    73,
      75,    77,    80,    83,    86,    88,    90,    92,    94,    96,
     100,   104,   108,   110,   114,   118,   120,   124,   128,   130,
     134,   138,   142,   146,   148,   152,   156,   158,   162,   164,
     168,   170,   174,   176,   180,   182,   186,   188,   192,   194,
     195,   202,   204,   208,   210,   212,   214,   216,   218,   220,
     222,   224,   226,   228,   230,   232,   236,   238,   241,   244,
     249,   252,   256,   261,   264,   268,   273,   274,   281,   284,
     288,   291,   293,   295,   298,   302,   306,   307,   310,   314,
     319,   322,   324,   327,   329,   331,   333,   337,   342,   349,
     355,   357,   360,   364,   370,   375,   377,   380,   382,   384,
     386,   388,   390,   395,   397,   401,   403,   407,   409,   411,
     413,   416,   418,   420,   422,   424,   426,   428,   430,   432,
     434,   436,   438,   440,   442,   444,   446,   448,   450,   452,
     454,   456,   458,   460,   462,   464,   469,   471,   475,   477,
     480,   483,   487,   491,   496,   498,   500,   502,   504,   506,
     508,   510,   512,   514,   516,   518,   520,   522,   524,   526,
     528,   530,   532,   534,   536,   538,   540,   542,   544,   546,
     548,   550,   552,   554,   556,   558,   560,   562,   564,   566,
     568,   570,   572,   574,   576,   578,   580,   582,   584,   586,
     588,   590,   592,   594,   596,   598,   600,   602,   604,   606,
     608,   610,   612,   614,   616,   618,   620,   622,   624,   626,
     628,   630,   632,   634,   636,   638,   640,   642,   644,   646,
     648,   650,   652,   654,   656,   658,   660,   662,   664,   666,
     668,   670,   672,   674,   676,   678,   680,   682,   684,   686,
     688,   690,   692,   694,   696,   698,   700,   702,   704,   706,
     708,   710,   712,   714,   716,   718,   720,   722,   724,   726,
     728,   730,   732,   734,   736,   738,   740,   742,   744,   746,
     748,   750,   752,   754,   756,   758,   760,   762,   764,   766,
     768,   770,   772,   774,   776,   778,   780,   782,   784,   786,
     788,   790,   792,   794,   796,   798,   800,   802,   804,   806,
     808,   810,   812,   814,   816,   818,   820,   822,   824,   826,
     828,   830,   832,   834,   836,   838,   840,   842,   844,   846,
     848,   849,   856,   857,   863,   865,   868,   872,   877,   879,
     883,   885,   888,   890,   894,   899,   901,   905,   907,   909,
     911,   913,   915,   917,   919,   921,   923,   925,   928,   929,
     930,   936,   938,   940,   941,   944,   945,   948,   951,   955,
     957,   960,   962,   965,   971,   975,   977,   979,   984,   985,
     994,   995,   997,  1001,  1004,  1005,  1012,  1013,  1022,  1023,
    1031,  1033,  1035,  1037,  1038,  1041,  1045,  1048,  1051,  1054,
    1058,  1061,  1063,  1066,  1068,  1070,  1071
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     370,     0,    -1,   210,    -1,   274,    -1,   214,    -1,   215,
      -1,   216,    -1,   217,    -1,   212,    -1,   213,    -1,   218,
      -1,   240,   302,   241,    -1,   275,    -1,   276,   242,   277,
     243,    -1,   278,    -1,   276,   246,   210,    -1,   276,   221,
      -1,   276,   222,    -1,   302,    -1,   279,    -1,   280,    -1,
     282,   241,    -1,   281,   241,    -1,   283,   208,    -1,   283,
      -1,   283,   300,    -1,   282,   247,   300,    -1,   284,   240,
      -1,   329,    -1,   276,    -1,   276,    -1,   221,   285,    -1,
     222,   285,    -1,   286,   285,    -1,   254,    -1,   252,    -1,
     251,    -1,   253,    -1,   285,    -1,   287,   255,   285,    -1,
     287,   256,   285,    -1,   287,   257,   285,    -1,   287,    -1,
     288,   254,   287,    -1,   288,   252,   287,    -1,   288,    -1,
     289,   219,   288,    -1,   289,   220,   288,    -1,   289,    -1,
     290,   258,   289,    -1,   290,   259,   289,    -1,   290,   223,
     289,    -1,   290,   224,   289,    -1,   290,    -1,   291,   225,
     290,    -1,   291,   226,   290,    -1,   291,    -1,   292,   262,
     291,    -1,   292,    -1,   293,   261,   292,    -1,   293,    -1,
     294,   260,   293,    -1,   294,    -1,   295,   227,   294,    -1,
     295,    -1,   296,   229,   295,    -1,   296,    -1,   297,   228,
     296,    -1,   297,    -1,    -1,   297,   263,   299,   302,   248,
     300,    -1,   298,    -1,   285,   301,   300,    -1,   249,    -1,
     230,    -1,   231,    -1,   233,    -1,   232,    -1,   239,    -1,
     234,    -1,   235,    -1,   236,    -1,   237,    -1,   238,    -1,
     300,    -1,   302,   247,   300,    -1,   298,    -1,   308,   250,
      -1,   316,   250,    -1,   269,   332,   329,   250,    -1,   305,
     250,    -1,   305,   210,   250,    -1,   305,   210,   330,   250,
      -1,   325,   250,    -1,   325,   210,   250,    -1,   325,   210,
     307,   250,    -1,    -1,   325,   210,   244,   306,   336,   245,
      -1,   247,   210,    -1,   307,   247,   210,    -1,   309,   241,
      -1,   311,    -1,   310,    -1,   311,   314,    -1,   310,   247,
     314,    -1,   318,   210,   240,    -1,    -1,   249,   340,    -1,
     329,   210,   312,    -1,   329,   210,   330,   312,    -1,   325,
     313,    -1,   313,    -1,   325,   315,    -1,   315,    -1,   329,
      -1,   317,    -1,   316,   247,   210,    -1,   316,   247,   210,
     330,    -1,   316,   247,   210,   330,   249,   340,    -1,   316,
     247,   210,   249,   340,    -1,   318,    -1,   318,   210,    -1,
     318,   210,   330,    -1,   318,   210,   330,   249,   340,    -1,
     318,   210,   249,   340,    -1,   329,    -1,   325,   329,    -1,
     264,    -1,    68,    -1,    67,    -1,    66,    -1,    70,    -1,
      69,   240,   322,   241,    -1,   323,    -1,   322,   247,   323,
      -1,   210,    -1,   210,   249,   303,    -1,    54,    -1,   265,
      -1,   326,    -1,   325,   326,    -1,   327,    -1,   321,    -1,
     332,    -1,   320,    -1,   319,    -1,   324,    -1,     5,    -1,
       3,    -1,     4,    -1,    49,    -1,    47,    -1,    48,    -1,
      46,    -1,    51,    -1,    52,    -1,    50,    -1,    53,    -1,
      54,    -1,    55,    -1,    56,    -1,    57,    -1,    58,    -1,
      59,    -1,    24,    -1,    24,   240,   328,   241,    -1,   211,
      -1,   328,   247,   211,    -1,   331,    -1,   331,   330,    -1,
     242,   243,    -1,   242,   298,   243,    -1,   330,   242,   243,
      -1,   330,   242,   298,   243,    -1,   208,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,
      71,    -1,    72,    -1,     6,    -1,    40,    -1,    41,    -1,
      42,    -1,    60,    -1,    61,    -1,    62,    -1,    25,    -1,
      26,    -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,
      31,    -1,    32,    -1,    33,    -1,    34,    -1,    35,    -1,
      36,    -1,    37,    -1,    38,    -1,    39,    -1,    43,    -1,
      44,    -1,    45,    -1,    73,    -1,    74,    -1,    75,    -1,
      76,    -1,    77,    -1,    78,    -1,    79,    -1,    80,    -1,
      81,    -1,    63,    -1,    64,    -1,    65,    -1,    82,    -1,
      83,    -1,    84,    -1,    85,    -1,    86,    -1,    87,    -1,
      88,    -1,    89,    -1,    90,    -1,    91,    -1,    92,    -1,
      93,    -1,    94,    -1,    95,    -1,    96,    -1,    97,    -1,
      98,    -1,    99,    -1,   100,    -1,   101,    -1,   102,    -1,
     122,    -1,   123,    -1,   103,    -1,   104,    -1,   105,    -1,
     106,    -1,   107,    -1,   108,    -1,   124,    -1,   109,    -1,
     110,    -1,   111,    -1,   112,    -1,   113,    -1,   114,    -1,
     125,    -1,   115,    -1,   116,    -1,   117,    -1,   118,    -1,
     119,    -1,   120,    -1,   121,    -1,   126,    -1,   127,    -1,
     128,    -1,   129,    -1,   130,    -1,   131,    -1,   133,    -1,
     134,    -1,   135,    -1,   136,    -1,   137,    -1,   138,    -1,
     139,    -1,   140,    -1,   159,    -1,   141,    -1,   142,    -1,
     143,    -1,   144,    -1,   145,    -1,   146,    -1,   160,    -1,
     147,    -1,   148,    -1,   149,    -1,   150,    -1,   151,    -1,
     152,    -1,   161,    -1,   153,    -1,   154,    -1,   155,    -1,
     156,    -1,   157,    -1,   158,    -1,   162,    -1,   163,    -1,
     164,    -1,   165,    -1,   166,    -1,   167,    -1,   174,    -1,
     175,    -1,   176,    -1,   177,    -1,   178,    -1,   179,    -1,
     180,    -1,   181,    -1,   182,    -1,   183,    -1,   184,    -1,
     185,    -1,   186,    -1,   187,    -1,   188,    -1,   189,    -1,
     190,    -1,   191,    -1,   192,    -1,   193,    -1,   194,    -1,
     195,    -1,   196,    -1,   197,    -1,   198,    -1,   199,    -1,
     200,    -1,   201,    -1,   202,    -1,   203,    -1,   204,    -1,
     205,    -1,   206,    -1,   132,    -1,   168,    -1,   169,    -1,
     170,    -1,   171,    -1,   172,    -1,   173,    -1,   333,    -1,
     211,    -1,   266,    -1,   267,    -1,   268,    -1,    -1,   207,
     210,   244,   334,   336,   245,    -1,    -1,   207,   244,   335,
     336,   245,    -1,   337,    -1,   336,   337,    -1,   329,   338,
     250,    -1,   325,   329,   338,   250,    -1,   339,    -1,   338,
     247,   339,    -1,   210,    -1,   210,   330,    -1,   300,    -1,
     244,   341,   245,    -1,   244,   341,   247,   245,    -1,   340,
      -1,   341,   247,   340,    -1,   304,    -1,   345,    -1,   344,
      -1,   342,    -1,   354,    -1,   355,    -1,   358,    -1,   361,
      -1,   362,    -1,   369,    -1,   244,   245,    -1,    -1,    -1,
     244,   346,   353,   347,   245,    -1,   352,    -1,   344,    -1,
      -1,   350,   345,    -1,    -1,   351,   344,    -1,   244,   245,
      -1,   244,   353,   245,    -1,   343,    -1,   353,   343,    -1,
     250,    -1,   302,   250,    -1,    18,   240,   302,   241,   356,
      -1,   349,    16,   349,    -1,   349,    -1,   302,    -1,   318,
     210,   249,   340,    -1,    -1,    21,   240,   302,   241,   359,
     244,   360,   245,    -1,    -1,   353,    -1,    22,   302,   248,
      -1,    23,   248,    -1,    -1,   209,   240,   363,   357,   241,
     348,    -1,    -1,    15,   364,   343,   209,   240,   302,   241,
     250,    -1,    -1,    17,   240,   365,   366,   368,   241,   348,
      -1,   354,    -1,   342,    -1,   357,    -1,    -1,   367,   250,
      -1,   367,   250,   302,    -1,    14,   250,    -1,    13,   250,
      -1,    20,   250,    -1,    20,   302,   250,    -1,    19,   250,
      -1,   371,    -1,   370,   371,    -1,   372,    -1,   304,    -1,
      -1,   308,   373,   352,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   249,   249,   255,   258,   261,   265,   269,   273,   276,
     280,   283,   291,   294,   297,   300,   303,   308,   316,   323,
     330,   336,   340,   347,   350,   356,   363,   373,   381,   386,
     416,   422,   426,   430,   450,   451,   452,   453,   459,   460,
     465,   470,   479,   480,   485,   493,   494,   500,   509,   510,
     515,   520,   525,   533,   534,   542,   553,   554,   563,   564,
     573,   574,   583,   584,   592,   593,   601,   602,   610,   611,
     611,   629,   630,   645,   649,   653,   657,   662,   666,   670,
     674,   678,   682,   686,   693,   696,   707,   714,   719,   724,
     732,   736,   740,   744,   749,   754,   763,   763,   774,   778,
     785,   792,   795,   802,   810,   830,   848,   850,   857,   876,
     902,   913,   923,   933,   943,   952,   955,   959,   963,   968,
     976,   981,   986,   991,   996,  1005,  1016,  1043,  1052,  1059,
    1066,  1073,  1085,  1091,  1094,  1101,  1105,  1109,  1117,  1126,
    1129,  1140,  1143,  1146,  1150,  1154,  1158,  1165,  1169,  1181,
    1195,  1200,  1206,  1212,  1219,  1225,  1230,  1235,  1240,  1247,
    1251,  1255,  1259,  1263,  1267,  1273,  1285,  1288,  1293,  1297,
    1306,  1311,  1319,  1323,  1333,  1337,  1341,  1346,  1350,  1355,
    1360,  1366,  1371,  1377,  1381,  1386,  1391,  1396,  1402,  1408,
    1414,  1419,  1424,  1429,  1434,  1439,  1444,  1450,  1456,  1462,
    1468,  1474,  1480,  1486,  1492,  1498,  1503,  1508,  1513,  1518,
    1523,  1528,  1533,  1538,  1543,  1548,  1553,  1558,  1564,  1570,
    1576,  1582,  1588,  1594,  1600,  1606,  1612,  1618,  1624,  1630,
    1635,  1640,  1645,  1650,  1655,  1660,  1665,  1670,  1675,  1680,
    1685,  1690,  1695,  1700,  1705,  1710,  1715,  1720,  1725,  1730,
    1735,  1740,  1745,  1750,  1755,  1760,  1765,  1770,  1775,  1780,
    1785,  1790,  1795,  1800,  1805,  1810,  1815,  1820,  1825,  1830,
    1835,  1840,  1845,  1850,  1855,  1860,  1865,  1870,  1875,  1880,
    1885,  1890,  1895,  1900,  1905,  1910,  1915,  1920,  1925,  1930,
    1935,  1940,  1945,  1950,  1955,  1960,  1965,  1970,  1975,  1980,
    1985,  1990,  1995,  2000,  2005,  2010,  2015,  2020,  2025,  2030,
    2035,  2040,  2045,  2050,  2055,  2060,  2065,  2070,  2075,  2080,
    2085,  2090,  2095,  2100,  2105,  2110,  2115,  2120,  2125,  2130,
    2135,  2140,  2145,  2150,  2155,  2160,  2165,  2170,  2175,  2181,
    2187,  2193,  2199,  2205,  2211,  2217,  2222,  2238,  2243,  2248,
    2256,  2256,  2267,  2267,  2277,  2280,  2293,  2311,  2335,  2339,
    2345,  2350,  2361,  2364,  2370,  2379,  2382,  2388,  2392,  2393,
    2399,  2400,  2401,  2402,  2403,  2404,  2405,  2409,  2410,  2414,
    2410,  2426,  2427,  2431,  2431,  2438,  2438,  2452,  2455,  2463,
    2471,  2482,  2483,  2487,  2494,  2498,  2506,  2510,  2523,  2523,
    2543,  2546,  2552,  2564,  2576,  2576,  2591,  2591,  2607,  2607,
    2628,  2631,  2637,  2640,  2646,  2650,  2657,  2662,  2667,  2674,
    2677,  2686,  2690,  2697,  2700,  2706,  2706
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ATTRIBUTE", "VARYING", "CONST", "BOOL",
  "FLOAT", "DOUBLE", "INT", "UINT", "INT64_T", "UINT64_T", "BREAK",
  "CONTINUE", "DO", "ELSE", "FOR", "IF", "DISCARD", "RETURN", "SWITCH",
  "CASE", "DEFAULT", "SUBROUTINE", "BVEC2", "BVEC3", "BVEC4", "IVEC2",
  "IVEC3", "IVEC4", "I64VEC2", "I64VEC3", "I64VEC4", "UVEC2", "UVEC3",
  "UVEC4", "U64VEC2", "U64VEC3", "U64VEC4", "VEC2", "VEC3", "VEC4", "MAT2",
  "MAT3", "MAT4", "CENTROID", "IN", "OUT", "INOUT", "UNIFORM", "PATCH",
  "SAMPLE", "BUFFER", "SHARED", "COHERENT", "VOLATILE", "RESTRICT",
  "READONLY", "WRITEONLY", "DVEC2", "DVEC3", "DVEC4", "DMAT2", "DMAT3",
  "DMAT4", "NOPERSPECTIVE", "FLAT", "SMOOTH", "LAYOUT",
  "__EXPLICITINTERPAMD", "INTPTR_T", "UINTPTR_T", "MAT2X2", "MAT2X3",
  "MAT2X4", "MAT3X2", "MAT3X3", "MAT3X4", "MAT4X2", "MAT4X3", "MAT4X4",
  "DMAT2X2", "DMAT2X3", "DMAT2X4", "DMAT3X2", "DMAT3X3", "DMAT3X4",
  "DMAT4X2", "DMAT4X3", "DMAT4X4", "ATOMIC_UINT", "SAMPLER1D", "SAMPLER2D",
  "SAMPLER3D", "SAMPLERCUBE", "SAMPLER1DSHADOW", "SAMPLER2DSHADOW",
  "SAMPLERCUBESHADOW", "SAMPLER1DARRAY", "SAMPLER2DARRAY",
  "SAMPLER1DARRAYSHADOW", "SAMPLER2DARRAYSHADOW", "ISAMPLER1D",
  "ISAMPLER2D", "ISAMPLER3D", "ISAMPLERCUBE", "ISAMPLER1DARRAY",
  "ISAMPLER2DARRAY", "USAMPLER1D", "USAMPLER2D", "USAMPLER3D",
  "USAMPLERCUBE", "USAMPLER1DARRAY", "USAMPLER2DARRAY", "SAMPLER2DRECT",
  "SAMPLER2DRECTSHADOW", "ISAMPLER2DRECT", "USAMPLER2DRECT",
  "SAMPLERBUFFER", "ISAMPLERBUFFER", "USAMPLERBUFFER", "SAMPLERCUBEARRAY",
  "SAMPLERCUBEARRAYSHADOW", "ISAMPLERCUBEARRAY", "USAMPLERCUBEARRAY",
  "SAMPLER2DMS", "ISAMPLER2DMS", "USAMPLER2DMS", "SAMPLER2DMSARRAY",
  "ISAMPLER2DMSARRAY", "USAMPLER2DMSARRAY", "SAMPLEREXTERNALOES",
  "SAMPLER", "SAMPLERSHADOW", "TEXTURE1D", "TEXTURE2D", "TEXTURE3D",
  "TEXTURECUBE", "TEXTURE1DARRAY", "TEXTURE2DARRAY", "ITEXTURE1D",
  "ITEXTURE2D", "ITEXTURE3D", "ITEXTURECUBE", "ITEXTURE1DARRAY",
  "ITEXTURE2DARRAY", "UTEXTURE1D", "UTEXTURE2D", "UTEXTURE3D",
  "UTEXTURECUBE", "UTEXTURE1DARRAY", "UTEXTURE2DARRAY", "TEXTURE2DRECT",
  "ITEXTURE2DRECT", "UTEXTURE2DRECT", "TEXTUREBUFFER", "ITEXTUREBUFFER",
  "UTEXTUREBUFFER", "TEXTURECUBEARRAY", "ITEXTURECUBEARRAY",
  "UTEXTURECUBEARRAY", "TEXTURE2DMS", "ITEXTURE2DMS", "UTEXTURE2DMS",
  "TEXTURE2DMSARRAY", "ITEXTURE2DMSARRAY", "UTEXTURE2DMSARRAY",
  "SUBPASSINPUT", "SUBPASSINPUTMS", "ISUBPASSINPUT", "ISUBPASSINPUTMS",
  "USUBPASSINPUT", "USUBPASSINPUTMS", "IMAGE1D", "IIMAGE1D", "UIMAGE1D",
  "IMAGE2D", "IIMAGE2D", "UIMAGE2D", "IMAGE3D", "IIMAGE3D", "UIMAGE3D",
  "IMAGE2DRECT", "IIMAGE2DRECT", "UIMAGE2DRECT", "IMAGECUBE", "IIMAGECUBE",
  "UIMAGECUBE", "IMAGEBUFFER", "IIMAGEBUFFER", "UIMAGEBUFFER",
  "IMAGE1DARRAY", "IIMAGE1DARRAY", "UIMAGE1DARRAY", "IMAGE2DARRAY",
  "IIMAGE2DARRAY", "UIMAGE2DARRAY", "IMAGECUBEARRAY", "IIMAGECUBEARRAY",
  "UIMAGECUBEARRAY", "IMAGE2DMS", "IIMAGE2DMS", "UIMAGE2DMS",
  "IMAGE2DMSARRAY", "IIMAGE2DMSARRAY", "UIMAGE2DMSARRAY", "STRUCT", "VOID",
  "WHILE", "IDENTIFIER", "TYPE_NAME", "FLOATCONSTANT", "DOUBLECONSTANT",
  "INTCONSTANT", "UINTCONSTANT", "INT64CONSTANT", "UINT64CONSTANT",
  "BOOLCONSTANT", "LEFT_OP", "RIGHT_OP", "INC_OP", "DEC_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "XOR_OP", "MUL_ASSIGN",
  "DIV_ASSIGN", "ADD_ASSIGN", "MOD_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "SUB_ASSIGN", "LEFT_PAREN",
  "RIGHT_PAREN", "LEFT_BRACKET", "RIGHT_BRACKET", "LEFT_BRACE",
  "RIGHT_BRACE", "DOT", "COMMA", "COLON", "EQUAL", "SEMICOLON", "BANG",
  "DASH", "TILDE", "PLUS", "STAR", "SLASH", "PERCENT", "LEFT_ANGLE",
  "RIGHT_ANGLE", "VERTICAL_BAR", "CARET", "AMPERSAND", "QUESTION",
  "INVARIANT", "PRECISE", "HIGH_PRECISION", "MEDIUM_PRECISION",
  "LOW_PRECISION", "PRECISION", "PACKED", "RESOURCE", "SUPERP", "$accept",
  "variable_identifier", "primary_expression", "postfix_expression",
  "integer_expression", "function_call", "function_call_or_method",
  "function_call_generic", "function_call_header_no_parameters",
  "function_call_header_with_parameters", "function_call_header",
  "function_identifier", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_xor_expression",
  "logical_or_expression", "conditional_expression", "$@1",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "block_structure", "$@2",
  "identifier_list", "function_prototype", "function_declarator",
  "function_header_with_parameters", "function_header",
  "opt_parameter_declarator_init", "parameter_declarator",
  "parameter_declaration", "parameter_type_specifier",
  "init_declarator_list", "single_declaration", "fully_specified_type",
  "invariant_qualifier", "interpolation_qualifier", "layout_qualifier",
  "layout_qualifier_id_list", "layout_qualifier_id", "precise_qualifier",
  "type_qualifier", "single_type_qualifier", "storage_qualifier",
  "type_name_list", "type_specifier", "array_specifier",
  "type_specifier_nonarray", "precision_qualifier", "struct_specifier",
  "$@3", "$@4", "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "initializer",
  "initializer_list", "declaration_statement", "statement",
  "simple_statement", "compound_statement", "$@5", "$@6",
  "statement_no_new_scope", "statement_scoped", "$@7", "$@8",
  "compound_statement_no_new_scope", "statement_list",
  "expression_statement", "selection_statement",
  "selection_rest_statement", "condition", "switch_statement", "$@9",
  "switch_statement_list", "case_label", "iteration_statement", "$@10",
  "$@11", "$@12", "for_init_statement", "conditionopt",
  "for_rest_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "$@13", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   273,   274,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   276,   276,   276,   276,   276,   276,   277,   278,
     279,   280,   280,   281,   281,   282,   282,   283,   284,   284,
     285,   285,   285,   285,   286,   286,   286,   286,   287,   287,
     287,   287,   288,   288,   288,   289,   289,   289,   290,   290,
     290,   290,   290,   291,   291,   291,   292,   292,   293,   293,
     294,   294,   295,   295,   296,   296,   297,   297,   298,   299,
     298,   300,   300,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   302,   302,   303,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   306,   305,   307,   307,
     308,   309,   309,   310,   310,   311,   312,   312,   313,   313,
     314,   314,   314,   314,   315,   316,   316,   316,   316,   316,
     317,   317,   317,   317,   317,   318,   318,   319,   320,   320,
     320,   320,   321,   322,   322,   323,   323,   323,   324,   325,
     325,   326,   326,   326,   326,   326,   326,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   328,   328,   329,   329,
     330,   330,   330,   330,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   332,   332,   332,
     334,   333,   335,   333,   336,   336,   337,   337,   338,   338,
     339,   339,   340,   340,   340,   341,   341,   342,   343,   343,
     344,   344,   344,   344,   344,   344,   344,   345,   346,   347,
     345,   348,   348,   350,   349,   351,   349,   352,   352,   353,
     353,   354,   354,   355,   356,   356,   357,   357,   359,   358,
     360,   360,   361,   361,   363,   362,   364,   362,   365,   362,
     366,   366,   367,   367,   368,   368,   369,   369,   369,   369,
     369,   370,   370,   371,   371,   373,   372
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     4,     1,     3,     2,     2,     1,     1,
       1,     2,     2,     2,     1,     2,     3,     2,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     0,
       6,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     2,     4,
       2,     3,     4,     2,     3,     4,     0,     6,     2,     3,
       2,     1,     1,     2,     3,     3,     0,     2,     3,     4,
       2,     1,     2,     1,     1,     1,     3,     4,     6,     5,
       1,     2,     3,     5,     4,     1,     2,     1,     1,     1,
       1,     1,     4,     1,     3,     1,     3,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     1,     2,
       2,     3,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     6,     0,     5,     1,     2,     3,     4,     1,     3,
       1,     2,     1,     3,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     0,
       5,     1,     1,     0,     2,     0,     2,     2,     3,     1,
       2,     1,     2,     5,     3,     1,     1,     4,     0,     8,
       0,     1,     3,     2,     0,     6,     0,     8,     0,     7,
       1,     1,     1,     0,     2,     3,     2,     2,     2,     3,
       2,     1,     2,     1,     1,     0,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   148,   149,   147,   183,   175,   176,   177,   178,   179,
     180,   164,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   184,   185,   186,
     205,   206,   207,   153,   151,   152,   150,   156,   154,   155,
     157,   158,   159,   160,   161,   162,   163,   187,   188,   189,
     217,   218,   219,   130,   129,   128,     0,   131,   181,   182,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     243,   244,   245,   246,   247,   248,   250,   251,   252,   253,
     254,   255,   257,   258,   259,   260,   261,   262,   263,   241,
     242,   249,   256,   264,   265,   266,   267,   268,   269,   338,
     270,   271,   272,   273,   274,   275,   276,   277,   279,   280,
     281,   282,   283,   284,   286,   287,   288,   289,   290,   291,
     293,   294,   295,   296,   297,   298,   278,   285,   292,   299,
     300,   301,   302,   303,   304,   339,   340,   341,   342,   343,
     344,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,     0,   174,   346,   127,   138,   347,
     348,   349,     0,   424,     0,   425,     0,   102,   101,     0,
     115,   120,   145,   144,   142,   146,     0,   139,   141,   125,
     168,   143,   345,     0,   421,   423,     0,     0,     0,   352,
       0,     0,    90,    87,     0,   100,     0,   111,   103,   113,
       0,   114,     0,    88,   121,     0,    93,   140,   126,     0,
     169,     1,   422,   166,     0,   137,   135,     0,   133,   350,
       0,     0,    91,     0,     0,   426,   104,   110,   112,   106,
     116,   105,     0,   122,    96,     0,    94,     0,     2,     8,
       9,     4,     5,     6,     7,    10,     0,     0,     0,   170,
      36,    35,    37,    34,     3,    12,    30,    14,    19,    20,
       0,     0,    24,     0,    38,     0,    42,    45,    48,    53,
      56,    58,    60,    62,    64,    66,    68,     0,    28,     0,
     165,     0,     0,   132,     0,     0,     0,     0,     0,   354,
      89,    92,     0,     0,   406,     0,     0,     0,     0,     0,
       0,     0,     0,   378,   387,   391,    38,    71,    84,     0,
     367,     0,   125,   370,   389,   369,   368,     0,   371,   372,
     373,   374,   375,   376,     0,   108,   106,     0,   117,     0,
     362,   124,     0,     0,    98,     0,    95,    31,    32,     0,
      16,    17,     0,     0,    22,    21,     0,   174,    25,    27,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      69,   171,   172,     0,   167,    86,   136,   134,     0,     0,
     360,     0,   358,   353,   355,   417,   416,     0,   408,     0,
     420,   418,     0,     0,     0,   403,   404,   377,     0,    74,
      75,    77,    76,    79,    80,    81,    82,    83,    78,    73,
       0,     0,   392,   388,   390,   107,   109,   119,     0,   365,
       0,   123,     0,    99,    11,     0,    18,    15,    26,    39,
      40,    41,    44,    43,    46,    47,    51,    52,    49,    50,
      54,    55,    57,    59,    61,    63,    65,    67,     0,   173,
     351,     0,   361,     0,   356,     0,     0,     0,   419,     0,
     402,     0,   379,    72,    85,   118,   363,     0,    97,    13,
       0,   357,   359,     0,   411,   410,   413,   385,   398,   396,
       0,     0,     0,     0,   364,   366,     0,     0,   412,     0,
       0,   395,     0,     0,   393,     0,     0,     0,   380,    70,
       0,   414,     0,   385,   384,   386,   400,     0,   382,   405,
     381,     0,   415,   409,   394,   401,     0,   397,   407,   399
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   294,   295,   296,   465,   297,   298,   299,   300,   301,
     302,   303,   346,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   347,   488,   348,   450,   349,
     416,   350,   204,   373,   277,   351,   206,   207,   208,   365,
     237,   238,   239,   209,   210,   211,   212,   213,   214,   257,
     258,   215,   216,   217,   218,   254,   318,   250,   220,   221,
     222,   325,   260,   328,   329,   421,   422,   371,   460,   353,
     354,   355,   356,   438,   523,   549,   531,   532,   533,   550,
     357,   358,   359,   534,   522,   360,   535,   556,   361,   362,
     501,   427,   496,   516,   529,   530,   363,   223,   224,   225,
     234
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -511
static const yytype_int16 yypact[] =
{
    2422,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -205,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -161,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -188,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -133,  -511,  -192,  -183,  -203,  -146,  3917,  -198,
    -511,  -104,  -511,  -511,  -511,  -511,  2934,  -511,  -511,  -511,
     -97,  -511,  -511,   553,  -511,  -511,   -80,   -45,   -95,  -511,
    5805,  -211,  -511,  -511,   -85,  -511,  3917,  -511,  -511,  -511,
    3917,   -58,   -46,  -511,  -212,  -173,  -511,  -511,  -511,  4375,
     -75,  -511,  -511,  -511,  -172,  -511,   -81,  -165,  -511,  -511,
    3917,   -79,  -511,  -208,   820,  -511,  -511,  -511,  -511,  -202,
    -201,  -511,  4613,  -179,  -511,   -41,  -511,  -196,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  5335,  5335,  5335,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -178,  -511,  -511,  -511,
     -71,  -139,  5570,   -68,  -511,  5335,  -117,  -111,  -123,  -199,
     -89,   -88,   -86,   -87,   -51,   -52,  -213,   -65,  -511,  4862,
    -511,   -32,  5335,  -511,   -45,  3917,  3917,   -30,  3182,  -511,
    -511,  -511,   -67,   -66,  -511,   -55,   -54,   -63,  5100,   -50,
    5335,   -60,   -49,   -53,  -511,  -511,  -145,  -511,  -511,  -166,
    -511,  -183,   -47,  -511,  -511,  -511,  -511,  1087,  -511,  -511,
    -511,  -511,  -511,  -511,  4613,  -511,  -177,  4613,  -176,  4613,
    -511,  -511,  4613,  3917,  -511,   -15,  -511,  -511,  -511,  -132,
    -511,  -511,  5335,   -13,  -511,  -511,  5335,   -43,  -511,  -511,
    -511,  5335,  5335,  5335,  5335,  5335,  5335,  5335,  5335,  5335,
    5335,  5335,  5335,  5335,  5335,  5335,  5335,  5335,  5335,  5335,
    -511,  -511,  -511,   -44,  -511,  -511,  -511,  -511,  3427,   -30,
     -97,  -136,  -511,  -511,  -511,  -511,  -511,  1354,  -511,  5335,
    -511,  -511,  -120,  5335,  -100,  -511,  -511,  -511,  1354,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    5335,  5335,  -511,  -511,  -511,  -511,  -511,  -511,  4613,  -511,
    -103,  -511,  3672,  -511,  -511,   -42,   -40,  -511,  -511,  -511,
    -511,  -511,  -117,  -117,  -111,  -111,  -123,  -123,  -123,  -123,
    -199,  -199,   -89,   -88,   -86,   -87,   -51,   -52,  5335,  -511,
    -511,  -118,   -75,   -30,  -511,    -9,  2155,  -131,  -511,  -128,
    -511,  2668,  1354,  -511,  -511,  -511,  -511,  4126,  -511,  -511,
     -92,  -511,  -511,   -38,  -511,  -511,  2668,   -35,  -511,   -40,
      -7,  3917,   -37,   -33,  -511,  -511,  5335,  5335,  -511,   -36,
     -31,   197,   -29,  1888,  -511,   -27,   -28,  1621,  -511,  -511,
    -119,  5335,  1621,   -35,  -511,  -511,  1354,  4613,  -511,  -511,
    -511,   -26,   -40,  -511,  -511,  1354,   -25,  -511,  -511,  -511
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,   -17,  -511,  -237,  -236,  -275,  -240,  -185,  -180,
    -184,  -181,  -174,  -170,  -511,  -239,  -511,  -269,  -511,  -283,
    -511,     4,  -511,  -511,  -511,     6,  -511,  -511,  -511,  -138,
      -5,     1,     2,  -511,  -511,  -480,  -511,  -511,  -511,  -511,
     -93,  -511,  -207,  -214,  -511,  -511,     0,  -224,  -511,    39,
    -511,  -511,  -511,  -312,  -311,  -171,  -250,  -353,  -511,  -251,
    -349,  -510,  -286,  -511,  -511,  -295,  -294,  -511,  -511,    16,
    -426,  -245,  -511,  -511,  -264,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,    30,  -511,
    -511
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -384
static const yytype_int16 yytable[] =
{
     219,   240,   247,   370,   203,   379,   205,   263,   454,   255,
     317,   455,   502,   418,   457,   409,   459,   424,   231,   461,
     273,   520,   228,   545,   398,   399,   247,   548,   271,   240,
     249,   249,   548,   388,   319,   226,   520,   272,   235,   262,
     249,   249,   331,   380,   381,   366,   368,   364,   367,   242,
     410,   375,   243,   326,   376,   432,   229,   434,   232,   400,
     401,   462,   -29,   319,   382,   319,   319,   233,   383,   320,
     372,   274,   364,   458,   275,   321,   323,   276,   495,   227,
     413,   451,   324,   415,   452,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   370,   396,   397,   370,   466,
     370,   236,   385,   370,   449,   505,   244,   424,   386,   464,
     517,   493,   247,   518,   494,   451,   451,   468,   326,   451,
     555,   326,   551,   476,   477,   478,   479,   451,   451,   493,
     498,   253,   511,   199,   200,   201,   402,   403,   391,   392,
     393,   394,   506,   395,   507,   249,   497,   451,   500,   259,
     499,   424,   269,   454,   525,   451,   526,   472,   473,   264,
     474,   475,   480,   481,   270,   256,   326,   319,   322,   374,
     384,   330,   389,   406,   404,   405,   407,   408,   411,   414,
     420,   503,   504,   425,   426,   428,   429,   430,   435,   370,
     433,   436,   437,   -28,   557,   463,   492,   467,   -23,   489,
     513,   509,   527,   536,   537,   510,   454,   451,   241,  -383,
     542,   326,   538,   543,   541,   343,   248,   546,   519,   482,
     559,   547,   484,   219,   558,   483,   485,   203,   456,   205,
     261,   417,   304,   519,   486,   267,   241,   266,   370,   487,
     241,   230,   268,   512,   540,   514,   544,   553,   491,   554,
     265,   515,   528,   252,     0,   326,     0,   539,   552,     0,
     327,     0,     0,     0,   352,     0,     0,     0,     0,   377,
     378,     0,     0,     0,     0,     0,     0,     0,   370,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   390,     0,
       0,     0,     0,     0,   521,     0,     0,     0,     0,     0,
       0,     0,   304,     0,     0,   304,     0,   247,     0,   521,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   327,   419,     0,   327,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   352,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   327,   469,   470,   471,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   327,     0,
       0,     0,     0,     0,     0,     0,     0,   352,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   352,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   352,     0,     0,     0,
       0,   352,   352,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   352,     0,     0,     0,
       0,   248,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   352,     0,     0,     0,   352,     0,     0,
       0,     0,   352,     0,     0,     0,   352,     0,     0,     0,
       0,     0,     0,   251,     0,   352,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,     0,     0,   196,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   197,   198,   199,
     200,   201,   202,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,   332,   333,   334,     0,   335,   336,   337,
     338,   339,   340,   341,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   342,
     278,   196,   279,   280,   281,   282,   283,   284,   285,     0,
       0,   286,   287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     288,     0,     0,     0,   343,   344,     0,     0,     0,     0,
     345,   290,   291,   292,   293,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   197,   198,   199,   200,   201,   202,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
     332,   333,   334,     0,   335,   336,   337,   338,   339,   340,
     341,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   342,   278,   196,   279,
     280,   281,   282,   283,   284,   285,     0,     0,   286,   287,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   288,     0,     0,
       0,   343,   453,     0,     0,     0,     0,   345,   290,   291,
     292,   293,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   197,   198,   199,   200,   201,   202,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,   332,   333,   334,
       0,   335,   336,   337,   338,   339,   340,   341,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   342,   278,   196,   279,   280,   281,   282,
     283,   284,   285,     0,     0,   286,   287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   288,     0,     0,     0,   343,     0,
       0,     0,     0,     0,   345,   290,   291,   292,   293,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   197,   198,
     199,   200,   201,   202,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,   332,   333,   334,     0,   335,   336,
     337,   338,   339,   340,   341,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     342,   278,   196,   279,   280,   281,   282,   283,   284,   285,
       0,     0,   286,   287,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   288,     0,     0,     0,   264,     0,     0,     0,     0,
       0,   345,   290,   291,   292,   293,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   197,   198,   199,   200,   201,
     202,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,   332,   333,   334,     0,   335,   336,   337,   338,   339,
     340,   341,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   342,   278,   196,
     279,   280,   281,   282,   283,   284,   285,     0,     0,   286,
     287,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   288,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   345,   290,
     291,   292,   293,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   197,   198,   199,   200,   201,   202,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,     0,   278,   196,   279,   280,   281,
     282,   283,   284,   285,     0,     0,   286,   287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   288,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   345,   290,   291,   292,   293,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   197,
     198,   199,   200,   201,   202,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,     0,     0,   196,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,     0,     0,     0,     0,     0,   197,   198,   199,   200,
     201,   202,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,     0,   278,   196,
     279,   280,   281,   282,   283,   284,   285,     0,     0,   286,
     287,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   288,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   290,
     291,   292,   293,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   197,   198,   199,   200,   201,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,     0,   245,   196,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   246,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,     0,     0,     0,   197,   198,
     199,   200,   201,     0,     0,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,     0,     0,   196,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   423,     0,     0,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
       0,     0,     0,     0,     0,     0,   197,   198,   199,   200,
     201,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,     0,     0,   196,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   490,     0,     0,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,     0,     0,     0,     0,     0,
       0,   197,   198,   199,   200,   201,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,     0,     0,   196,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   508,     0,     0,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
       0,     0,     0,     0,     0,     0,   197,   198,   199,   200,
     201,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,     0,     0,   196,     0,
       0,     0,     4,     5,     6,     7,     8,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   197,   198,   199,   200,   201,    47,    48,    49,    50,
      51,    52,     0,     0,     0,     0,     0,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,     0,   278,   196,   279,   280,
     281,   282,   283,   284,   285,     0,     0,   286,   287,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   288,     0,     0,     0,
     369,   524,     0,     0,     0,     0,     0,   290,   291,   292,
     293,     4,     5,     6,     7,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,    48,    49,    50,    51,
      52,     0,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,     0,   278,   196,   279,   280,   281,
     282,   283,   284,   285,     0,     0,   286,   287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   288,     0,     0,   289,     4,
       5,     6,     7,     8,     9,    10,   290,   291,   292,   293,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,    48,    49,    50,    51,    52,     0,
       0,     0,     0,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,     0,   278,   196,   279,   280,   281,   282,   283,
     284,   285,     0,     0,   286,   287,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   288,     0,     0,     0,   369,     0,     0,
       0,     0,     0,     0,   290,   291,   292,   293,     4,     5,
       6,     7,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,    48,    49,    50,    51,    52,     0,     0,
       0,     0,     0,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,     0,   278,   196,   279,   280,   281,   282,   283,   284,
     285,     0,     0,   286,   287,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   288,     0,     0,   412,     4,     5,     6,     7,
       8,     9,    10,   290,   291,   292,   293,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,    48,    49,    50,    51,    52,     0,     0,     0,     0,
       0,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,     0,
     278,   196,   279,   280,   281,   282,   283,   284,   285,     0,
       0,   286,   287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     288,     4,     5,     6,     7,     8,     9,    10,     0,     0,
     431,   290,   291,   292,   293,     0,     0,     0,     0,     0,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,    48,    49,    50,    51,
      52,     0,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,     0,   278,   196,   279,   280,   281,
     282,   283,   284,   285,     0,     0,   286,   287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   288,     4,     5,     6,     7,
       8,     9,    10,     0,     0,     0,   290,   291,   292,   293,
       0,     0,     0,     0,     0,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,    48,    49,    50,    51,    52,     0,     0,     0,     0,
       0,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   387,     0,
     278,   196,   279,   280,   281,   282,   283,   284,   285,     0,
       0,   286,   287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     288,     4,     5,     6,     7,     8,     9,    10,     0,     0,
       0,   290,   291,   292,   293,     0,     0,     0,     0,     0,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,    48,    49,    50,    51,
      52,     0,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,     0,     0,   196
};

static const yytype_int16 yycheck[] =
{
       0,   208,   216,   272,     0,   288,     0,   231,   357,    54,
     249,   364,   438,   325,   367,   228,   369,   328,   210,   372,
     244,   501,   210,   533,   223,   224,   240,   537,   240,   236,
     242,   242,   542,   302,   242,   240,   516,   249,   241,   250,
     242,   242,   250,   221,   222,   269,   270,   249,   249,   247,
     263,   247,   250,   260,   250,   338,   244,   340,   250,   258,
     259,   373,   240,   242,   242,   242,   242,   250,   246,   241,
     249,   244,   249,   249,   247,   247,   241,   250,   427,   240,
     319,   247,   247,   322,   250,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   364,   219,   220,   367,   382,
     369,   247,   241,   372,   249,   458,   210,   418,   247,   241,
     241,   247,   326,   241,   250,   247,   247,   386,   325,   247,
     546,   328,   241,   398,   399,   400,   401,   247,   247,   247,
     250,   211,   250,   266,   267,   268,   225,   226,   255,   256,
     257,   252,   245,   254,   247,   242,   429,   247,   248,   244,
     433,   462,   210,   502,   507,   247,   248,   394,   395,   244,
     396,   397,   402,   403,   210,   210,   373,   242,   249,   210,
     241,   250,   240,   260,   262,   261,   227,   229,   243,   211,
     210,   450,   451,   250,   250,   240,   240,   250,   248,   458,
     240,   240,   245,   240,   547,   210,   420,   210,   241,   243,
     209,   243,   240,   210,   241,   488,   555,   247,   208,   244,
     241,   418,   245,    16,   250,   244,   216,   244,   501,   404,
     245,   249,   406,   223,   250,   405,   407,   223,   366,   223,
     230,   324,   249,   516,   408,   240,   236,   236,   507,   409,
     240,   202,   240,   493,   527,   496,   532,   542,   419,   543,
     234,   496,   516,   223,    -1,   462,    -1,   526,   541,    -1,
     260,    -1,    -1,    -1,   264,    -1,    -1,    -1,    -1,   286,
     287,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   547,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,   501,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   319,    -1,    -1,   322,    -1,   521,    -1,   516,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   325,   326,    -1,   328,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   357,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   373,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   427,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   438,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   462,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   496,    -1,    -1,    -1,
      -1,   501,   502,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   516,    -1,    -1,    -1,
      -1,   521,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   533,    -1,    -1,    -1,   537,    -1,    -1,
      -1,    -1,   542,    -1,    -1,    -1,   546,    -1,    -1,    -1,
      -1,    -1,    -1,     0,    -1,   555,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,    -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   264,   265,   266,
     267,   268,   269,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,    -1,
      -1,   221,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,    -1,   244,   245,    -1,    -1,    -1,    -1,
     250,   251,   252,   253,   254,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   264,   265,   266,   267,   268,   269,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,    -1,    -1,   221,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,
      -1,   244,   245,    -1,    -1,    -1,    -1,   250,   251,   252,
     253,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   264,   265,   266,   267,   268,   269,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,    -1,    -1,   221,   222,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,    -1,   244,    -1,
      -1,    -1,    -1,    -1,   250,   251,   252,   253,   254,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   264,   265,
     266,   267,   268,   269,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
      -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,
      -1,   250,   251,   252,   253,   254,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   264,   265,   266,   267,   268,
     269,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,    -1,    -1,   221,
     222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,   251,
     252,   253,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   264,   265,   266,   267,   268,   269,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,    -1,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   250,   251,   252,   253,   254,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   264,
     265,   266,   267,   268,   269,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,    -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,   264,   265,   266,   267,
     268,   269,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,    -1,   210,   211,
     212,   213,   214,   215,   216,   217,   218,    -1,    -1,   221,
     222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   251,
     252,   253,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   264,   265,   266,   267,   268,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,    -1,   210,   211,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   250,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    -1,    -1,   264,   265,
     266,   267,   268,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,    -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,   264,   265,   266,   267,
     268,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,    -1,    -1,   211,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   245,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,   264,   265,   266,   267,   268,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,    -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,   264,   265,   266,   267,
     268,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,    -1,    -1,   211,    -1,
      -1,    -1,     6,     7,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   264,   265,   266,   267,   268,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,    -1,   210,   211,   212,   213,
     214,   215,   216,   217,   218,    -1,    -1,   221,   222,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,    -1,
     244,   245,    -1,    -1,    -1,    -1,    -1,   251,   252,   253,
     254,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,    -1,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,     6,
       7,     8,     9,    10,    11,    12,   251,   252,   253,   254,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,    -1,   210,   211,   212,   213,   214,   215,   216,
     217,   218,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   240,    -1,    -1,    -1,   244,    -1,    -1,
      -1,    -1,    -1,    -1,   251,   252,   253,   254,     6,     7,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,    -1,   210,   211,   212,   213,   214,   215,   216,   217,
     218,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   240,    -1,    -1,   243,     6,     7,     8,     9,
      10,    11,    12,   251,   252,   253,   254,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,    -1,
     210,   211,   212,   213,   214,   215,   216,   217,   218,    -1,
      -1,   221,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     240,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
     250,   251,   252,   253,   254,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,    -1,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   240,     6,     7,     8,     9,
      10,    11,    12,    -1,    -1,    -1,   251,   252,   253,   254,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,    -1,
     210,   211,   212,   213,   214,   215,   216,   217,   218,    -1,
      -1,   221,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     240,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
      -1,   251,   252,   253,   254,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,    -1,    -1,   211
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   211,   264,   265,   266,
     267,   268,   269,   304,   305,   308,   309,   310,   311,   316,
     317,   318,   319,   320,   321,   324,   325,   326,   327,   329,
     331,   332,   333,   370,   371,   372,   240,   240,   210,   244,
     332,   210,   250,   250,   373,   241,   247,   313,   314,   315,
     325,   329,   247,   250,   210,   210,   250,   326,   329,   242,
     330,     0,   371,   211,   328,    54,   210,   322,   323,   244,
     335,   329,   250,   330,   244,   352,   314,   313,   315,   210,
     210,   240,   249,   330,   244,   247,   250,   307,   210,   212,
     213,   214,   215,   216,   217,   218,   221,   222,   240,   243,
     251,   252,   253,   254,   274,   275,   276,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   329,   242,
     241,   247,   249,   241,   247,   334,   325,   329,   336,   337,
     250,   250,    13,    14,    15,    17,    18,    19,    20,    21,
      22,    23,   209,   244,   245,   250,   285,   298,   300,   302,
     304,   308,   329,   342,   343,   344,   345,   353,   354,   355,
     358,   361,   362,   369,   249,   312,   330,   249,   330,   244,
     300,   340,   249,   306,   210,   247,   250,   285,   285,   302,
     221,   222,   242,   246,   241,   241,   247,   208,   300,   240,
     285,   255,   256,   257,   252,   254,   219,   220,   223,   224,
     258,   259,   225,   226,   262,   261,   260,   227,   229,   228,
     263,   243,   243,   298,   211,   298,   303,   323,   336,   329,
     210,   338,   339,   245,   337,   250,   250,   364,   240,   240,
     250,   250,   302,   240,   302,   248,   240,   245,   346,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   249,
     301,   247,   250,   245,   343,   340,   312,   340,   249,   340,
     341,   340,   336,   210,   241,   277,   302,   210,   300,   285,
     285,   285,   287,   287,   288,   288,   289,   289,   289,   289,
     290,   290,   291,   292,   293,   294,   295,   296,   299,   243,
     245,   338,   330,   247,   250,   343,   365,   302,   250,   302,
     248,   363,   353,   300,   300,   340,   245,   247,   245,   243,
     302,   250,   339,   209,   342,   354,   366,   241,   241,   302,
     318,   325,   357,   347,   245,   340,   248,   240,   357,   367,
     368,   349,   350,   351,   356,   359,   210,   241,   245,   300,
     302,   250,   241,    16,   345,   344,   244,   249,   344,   348,
     352,   241,   302,   348,   349,   353,   360,   340,   250,   245
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (pParseContext, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, parseContext)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, pParseContext); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, glslang::TParseContext* pParseContext)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, pParseContext)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    glslang::TParseContext* pParseContext;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (pParseContext);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, glslang::TParseContext* pParseContext)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, pParseContext)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    glslang::TParseContext* pParseContext;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, pParseContext);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, glslang::TParseContext* pParseContext)
#else
static void
yy_reduce_print (yyvsp, yyrule, pParseContext)
    YYSTYPE *yyvsp;
    int yyrule;
    glslang::TParseContext* pParseContext;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , pParseContext);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, pParseContext); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, glslang::TParseContext* pParseContext)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, pParseContext)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    glslang::TParseContext* pParseContext;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (pParseContext);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (glslang::TParseContext* pParseContext);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (glslang::TParseContext* pParseContext)
#else
int
yyparse (pParseContext)
    glslang::TParseContext* pParseContext;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 249 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleVariable((yyvsp[(1) - (1)].lex).loc, (yyvsp[(1) - (1)].lex).symbol, (yyvsp[(1) - (1)].lex).string);
    ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 255 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
    ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 258 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[(1) - (1)].lex).i, (yyvsp[(1) - (1)].lex).loc, true);
    ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 261 "MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "unsigned literal");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[(1) - (1)].lex).u, (yyvsp[(1) - (1)].lex).loc, true);
    ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 265 "MachineIndependent/glslang.y"
    {
        parseContext.int64Check((yyvsp[(1) - (1)].lex).loc, "64-bit integer literal");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[(1) - (1)].lex).i64, (yyvsp[(1) - (1)].lex).loc, true);
    ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 269 "MachineIndependent/glslang.y"
    {
        parseContext.int64Check((yyvsp[(1) - (1)].lex).loc, "64-bit unsigned integer literal");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[(1) - (1)].lex).u64, (yyvsp[(1) - (1)].lex).loc, true);
    ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 273 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[(1) - (1)].lex).d, EbtFloat, (yyvsp[(1) - (1)].lex).loc, true);
    ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 276 "MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double literal");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[(1) - (1)].lex).d, EbtDouble, (yyvsp[(1) - (1)].lex).loc, true);
    ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 280 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[(1) - (1)].lex).b, (yyvsp[(1) - (1)].lex).loc, true);
    ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 283 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(2) - (3)].interm.intermTypedNode);
        if ((yyval.interm.intermTypedNode)->getAsConstantUnion())
            (yyval.interm.intermTypedNode)->getAsConstantUnion()->setExpression();
    ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 291 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
    ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 294 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBracketDereference((yyvsp[(2) - (4)].lex).loc, (yyvsp[(1) - (4)].interm.intermTypedNode), (yyvsp[(3) - (4)].interm.intermTypedNode));
    ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 297 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
    ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 300 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleDotDereference((yyvsp[(3) - (3)].lex).loc, (yyvsp[(1) - (3)].interm.intermTypedNode), *(yyvsp[(3) - (3)].lex).string);
    ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 303 "MachineIndependent/glslang.y"
    {
        parseContext.variableCheck((yyvsp[(1) - (2)].interm.intermTypedNode));
        parseContext.lValueErrorCheck((yyvsp[(2) - (2)].lex).loc, "++", (yyvsp[(1) - (2)].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.handleUnaryMath((yyvsp[(2) - (2)].lex).loc, "++", EOpPostIncrement, (yyvsp[(1) - (2)].interm.intermTypedNode));
    ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 308 "MachineIndependent/glslang.y"
    {
        parseContext.variableCheck((yyvsp[(1) - (2)].interm.intermTypedNode));
        parseContext.lValueErrorCheck((yyvsp[(2) - (2)].lex).loc, "--", (yyvsp[(1) - (2)].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.handleUnaryMath((yyvsp[(2) - (2)].lex).loc, "--", EOpPostDecrement, (yyvsp[(1) - (2)].interm.intermTypedNode));
    ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 316 "MachineIndependent/glslang.y"
    {
        parseContext.integerCheck((yyvsp[(1) - (1)].interm.intermTypedNode), "[]");
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
    ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 323 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleFunctionCall((yyvsp[(1) - (1)].interm).loc, (yyvsp[(1) - (1)].interm).function, (yyvsp[(1) - (1)].interm).intermNode);
        delete (yyvsp[(1) - (1)].interm).function;
    ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 330 "MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (1)].interm);
    ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 336 "MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (2)].interm);
        (yyval.interm).loc = (yyvsp[(2) - (2)].lex).loc;
    ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 340 "MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (2)].interm);
        (yyval.interm).loc = (yyvsp[(2) - (2)].lex).loc;
    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 347 "MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (2)].interm);
    ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 350 "MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (1)].interm);
    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 356 "MachineIndependent/glslang.y"
    {
        TParameter param = { 0, new TType };
        param.type->shallowCopy((yyvsp[(2) - (2)].interm.intermTypedNode)->getType());
        (yyvsp[(1) - (2)].interm).function->addParameter(param);
        (yyval.interm).function = (yyvsp[(1) - (2)].interm).function;
        (yyval.interm).intermNode = (yyvsp[(2) - (2)].interm.intermTypedNode);
    ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 363 "MachineIndependent/glslang.y"
    {
        TParameter param = { 0, new TType };
        param.type->shallowCopy((yyvsp[(3) - (3)].interm.intermTypedNode)->getType());
        (yyvsp[(1) - (3)].interm).function->addParameter(param);
        (yyval.interm).function = (yyvsp[(1) - (3)].interm).function;
        (yyval.interm).intermNode = parseContext.intermediate.growAggregate((yyvsp[(1) - (3)].interm).intermNode, (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 373 "MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (2)].interm);
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 381 "MachineIndependent/glslang.y"
    {
        // Constructor
        (yyval.interm).intermNode = 0;
        (yyval.interm).function = parseContext.handleConstructorCall((yyvsp[(1) - (1)].interm.type).loc, (yyvsp[(1) - (1)].interm.type));
    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 386 "MachineIndependent/glslang.y"
    {
        //
        // Should be a method or subroutine call, but we haven't recognized the arguments yet.
        //
        (yyval.interm).function = 0;
        (yyval.interm).intermNode = 0;

        TIntermMethod* method = (yyvsp[(1) - (1)].interm.intermTypedNode)->getAsMethodNode();
        if (method) {
            (yyval.interm).function = new TFunction(&method->getMethodName(), TType(EbtInt), EOpArrayLength);
            (yyval.interm).intermNode = method->getObject();
        } else {
            TIntermSymbol* symbol = (yyvsp[(1) - (1)].interm.intermTypedNode)->getAsSymbolNode();
            if (symbol) {
                parseContext.reservedErrorCheck(symbol->getLoc(), symbol->getName());
                TFunction *function = new TFunction(&symbol->getName(), TType(EbtVoid));
                (yyval.interm).function = function;
            } else
                parseContext.error((yyvsp[(1) - (1)].interm.intermTypedNode)->getLoc(), "function call, method, or subroutine call expected", "", "");
        }

        if ((yyval.interm).function == 0) {
            // error recover
            TString empty("");
            (yyval.interm).function = new TFunction(&empty, TType(EbtVoid), EOpNull);
        }
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 416 "MachineIndependent/glslang.y"
    {
        parseContext.variableCheck((yyvsp[(1) - (1)].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
        if (TIntermMethod* method = (yyvsp[(1) - (1)].interm.intermTypedNode)->getAsMethodNode())
            parseContext.error((yyvsp[(1) - (1)].interm.intermTypedNode)->getLoc(), "incomplete method syntax", method->getMethodName().c_str(), "");
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 422 "MachineIndependent/glslang.y"
    {
        parseContext.lValueErrorCheck((yyvsp[(1) - (2)].lex).loc, "++", (yyvsp[(2) - (2)].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.handleUnaryMath((yyvsp[(1) - (2)].lex).loc, "++", EOpPreIncrement, (yyvsp[(2) - (2)].interm.intermTypedNode));
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 426 "MachineIndependent/glslang.y"
    {
        parseContext.lValueErrorCheck((yyvsp[(1) - (2)].lex).loc, "--", (yyvsp[(2) - (2)].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.handleUnaryMath((yyvsp[(1) - (2)].lex).loc, "--", EOpPreDecrement, (yyvsp[(2) - (2)].interm.intermTypedNode));
    ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 430 "MachineIndependent/glslang.y"
    {
        if ((yyvsp[(1) - (2)].interm).op != EOpNull) {
            char errorOp[2] = {0, 0};
            switch((yyvsp[(1) - (2)].interm).op) {
            case EOpNegative:   errorOp[0] = '-'; break;
            case EOpLogicalNot: errorOp[0] = '!'; break;
            case EOpBitwiseNot: errorOp[0] = '~'; break;
            default: break; // some compilers want this
            }
            (yyval.interm.intermTypedNode) = parseContext.handleUnaryMath((yyvsp[(1) - (2)].interm).loc, errorOp, (yyvsp[(1) - (2)].interm).op, (yyvsp[(2) - (2)].interm.intermTypedNode));
        } else {
            (yyval.interm.intermTypedNode) = (yyvsp[(2) - (2)].interm.intermTypedNode);
            if ((yyval.interm.intermTypedNode)->getAsConstantUnion())
                (yyval.interm.intermTypedNode)->getAsConstantUnion()->setExpression();
        }
    ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 450 "MachineIndependent/glslang.y"
    { (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpNull; ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 451 "MachineIndependent/glslang.y"
    { (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpNegative; ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 452 "MachineIndependent/glslang.y"
    { (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpLogicalNot; ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 453 "MachineIndependent/glslang.y"
    { (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpBitwiseNot;
              parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "bitwise not"); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 459 "MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 460 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, "*", EOpMul, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 465 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, "/", EOpDiv, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 470 "MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(2) - (3)].lex).loc, "%");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, "%", EOpMod, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 479 "MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 480 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, "+", EOpAdd, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 485 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, "-", EOpSub, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 493 "MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 494 "MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(2) - (3)].lex).loc, "bit shift left");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, "<<", EOpLeftShift, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 500 "MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(2) - (3)].lex).loc, "bit shift right");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, ">>", EOpRightShift, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 509 "MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 510 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, "<", EOpLessThan, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[(2) - (3)].lex).loc);
    ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 515 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, ">", EOpGreaterThan, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[(2) - (3)].lex).loc);
    ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 520 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, "<=", EOpLessThanEqual, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[(2) - (3)].lex).loc);
    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 525 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, ">=", EOpGreaterThanEqual, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[(2) - (3)].lex).loc);
    ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 533 "MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 534 "MachineIndependent/glslang.y"
    {
        parseContext.arrayObjectCheck((yyvsp[(2) - (3)].lex).loc, (yyvsp[(1) - (3)].interm.intermTypedNode)->getType(), "array comparison");
        parseContext.opaqueCheck((yyvsp[(2) - (3)].lex).loc, (yyvsp[(1) - (3)].interm.intermTypedNode)->getType(), "==");
        parseContext.specializationCheck((yyvsp[(2) - (3)].lex).loc, (yyvsp[(1) - (3)].interm.intermTypedNode)->getType(), "==");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, "==", EOpEqual, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[(2) - (3)].lex).loc);
    ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 542 "MachineIndependent/glslang.y"
    {
        parseContext.arrayObjectCheck((yyvsp[(2) - (3)].lex).loc, (yyvsp[(1) - (3)].interm.intermTypedNode)->getType(), "array comparison");
        parseContext.opaqueCheck((yyvsp[(2) - (3)].lex).loc, (yyvsp[(1) - (3)].interm.intermTypedNode)->getType(), "!=");
        parseContext.specializationCheck((yyvsp[(2) - (3)].lex).loc, (yyvsp[(1) - (3)].interm.intermTypedNode)->getType(), "!=");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, "!=", EOpNotEqual, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[(2) - (3)].lex).loc);
    ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 553 "MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 554 "MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(2) - (3)].lex).loc, "bitwise and");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, "&", EOpAnd, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
    ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 563 "MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 564 "MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(2) - (3)].lex).loc, "bitwise exclusive or");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, "^", EOpExclusiveOr, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
    ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 573 "MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 574 "MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(2) - (3)].lex).loc, "bitwise inclusive or");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, "|", EOpInclusiveOr, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
    ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 583 "MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 584 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, "&&", EOpLogicalAnd, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[(2) - (3)].lex).loc);
    ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 592 "MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 593 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, "^^", EOpLogicalXor, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[(2) - (3)].lex).loc);
    ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 601 "MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 602 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[(2) - (3)].lex).loc, "||", EOpLogicalOr, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[(2) - (3)].lex).loc);
    ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 610 "MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 611 "MachineIndependent/glslang.y"
    {
        ++parseContext.controlFlowNestingLevel;
    ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 614 "MachineIndependent/glslang.y"
    {
        --parseContext.controlFlowNestingLevel;
        parseContext.boolCheck((yyvsp[(2) - (6)].lex).loc, (yyvsp[(1) - (6)].interm.intermTypedNode));
        parseContext.rValueErrorCheck((yyvsp[(2) - (6)].lex).loc, "?", (yyvsp[(1) - (6)].interm.intermTypedNode));
        parseContext.rValueErrorCheck((yyvsp[(5) - (6)].lex).loc, ":", (yyvsp[(4) - (6)].interm.intermTypedNode));
        parseContext.rValueErrorCheck((yyvsp[(5) - (6)].lex).loc, ":", (yyvsp[(6) - (6)].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addSelection((yyvsp[(1) - (6)].interm.intermTypedNode), (yyvsp[(4) - (6)].interm.intermTypedNode), (yyvsp[(6) - (6)].interm.intermTypedNode), (yyvsp[(2) - (6)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (6)].lex).loc, ":", (yyvsp[(4) - (6)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(6) - (6)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(6) - (6)].interm.intermTypedNode);
        }
    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 629 "MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 630 "MachineIndependent/glslang.y"
    {
        parseContext.arrayObjectCheck((yyvsp[(2) - (3)].interm).loc, (yyvsp[(1) - (3)].interm.intermTypedNode)->getType(), "array assignment");
        parseContext.opaqueCheck((yyvsp[(2) - (3)].interm).loc, (yyvsp[(1) - (3)].interm.intermTypedNode)->getType(), "=");
        parseContext.specializationCheck((yyvsp[(2) - (3)].interm).loc, (yyvsp[(1) - (3)].interm.intermTypedNode)->getType(), "=");
        parseContext.lValueErrorCheck((yyvsp[(2) - (3)].interm).loc, "assign", (yyvsp[(1) - (3)].interm.intermTypedNode));
        parseContext.rValueErrorCheck((yyvsp[(2) - (3)].interm).loc, "assign", (yyvsp[(3) - (3)].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addAssign((yyvsp[(2) - (3)].interm).op, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].interm).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.assignError((yyvsp[(2) - (3)].interm).loc, "assign", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
        }
    ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 645 "MachineIndependent/glslang.y"
    {
        (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc;
        (yyval.interm).op = EOpAssign;
    ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 649 "MachineIndependent/glslang.y"
    {
        (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc;
        (yyval.interm).op = EOpMulAssign;
    ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 653 "MachineIndependent/glslang.y"
    {
        (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc;
        (yyval.interm).op = EOpDivAssign;
    ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 657 "MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "%=");
        (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc;
        (yyval.interm).op = EOpModAssign;
    ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 662 "MachineIndependent/glslang.y"
    {
        (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc;
        (yyval.interm).op = EOpAddAssign;
    ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 666 "MachineIndependent/glslang.y"
    {
        (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc;
        (yyval.interm).op = EOpSubAssign;
    ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 670 "MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "bit-shift left assign");
        (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpLeftShiftAssign;
    ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 674 "MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "bit-shift right assign");
        (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpRightShiftAssign;
    ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 678 "MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "bitwise-and assign");
        (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpAndAssign;
    ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 682 "MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "bitwise-xor assign");
        (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpExclusiveOrAssign;
    ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 686 "MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "bitwise-or assign");
        (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpInclusiveOrAssign;
    ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 693 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
    ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 696 "MachineIndependent/glslang.y"
    {
        parseContext.samplerConstructorLocationCheck((yyvsp[(2) - (3)].lex).loc, ",", (yyvsp[(3) - (3)].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addComma((yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, ",", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(3) - (3)].interm.intermTypedNode);
        }
    ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 707 "MachineIndependent/glslang.y"
    {
        parseContext.constantValueCheck((yyvsp[(1) - (1)].interm.intermTypedNode), "");
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
    ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 714 "MachineIndependent/glslang.y"
    {
        parseContext.handleFunctionDeclarator((yyvsp[(1) - (2)].interm).loc, *(yyvsp[(1) - (2)].interm).function, true /* prototype */);
        (yyval.interm.intermNode) = 0;
        // TODO: 4.0 functionality: subroutines: make the identifier a user type for this signature
    ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 719 "MachineIndependent/glslang.y"
    {
        if ((yyvsp[(1) - (2)].interm).intermNode && (yyvsp[(1) - (2)].interm).intermNode->getAsAggregate())
            (yyvsp[(1) - (2)].interm).intermNode->getAsAggregate()->setOperator(EOpSequence);
        (yyval.interm.intermNode) = (yyvsp[(1) - (2)].interm).intermNode;
    ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 724 "MachineIndependent/glslang.y"
    {
        parseContext.profileRequires((yyvsp[(1) - (4)].lex).loc, ENoProfile, 130, 0, "precision statement");

        // lazy setting of the previous scope's defaults, has effect only the first time it is called in a particular scope
        parseContext.symbolTable.setPreviousDefaultPrecisions(&parseContext.defaultPrecision[0]);
        parseContext.setDefaultPrecision((yyvsp[(1) - (4)].lex).loc, (yyvsp[(3) - (4)].interm.type), (yyvsp[(2) - (4)].interm.type).qualifier.precision);
        (yyval.interm.intermNode) = 0;
    ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 732 "MachineIndependent/glslang.y"
    {
        parseContext.declareBlock((yyvsp[(1) - (2)].interm).loc, *(yyvsp[(1) - (2)].interm).typeList);
        (yyval.interm.intermNode) = 0;
    ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 736 "MachineIndependent/glslang.y"
    {
        parseContext.declareBlock((yyvsp[(1) - (3)].interm).loc, *(yyvsp[(1) - (3)].interm).typeList, (yyvsp[(2) - (3)].lex).string);
        (yyval.interm.intermNode) = 0;
    ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 740 "MachineIndependent/glslang.y"
    {
        parseContext.declareBlock((yyvsp[(1) - (4)].interm).loc, *(yyvsp[(1) - (4)].interm).typeList, (yyvsp[(2) - (4)].lex).string, (yyvsp[(3) - (4)].interm).arraySizes);
        (yyval.interm.intermNode) = 0;
    ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 744 "MachineIndependent/glslang.y"
    {
        parseContext.globalQualifierFixCheck((yyvsp[(1) - (2)].interm.type).loc, (yyvsp[(1) - (2)].interm.type).qualifier);
        parseContext.updateStandaloneQualifierDefaults((yyvsp[(1) - (2)].interm.type).loc, (yyvsp[(1) - (2)].interm.type));
        (yyval.interm.intermNode) = 0;
    ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 749 "MachineIndependent/glslang.y"
    {
        parseContext.checkNoShaderLayouts((yyvsp[(1) - (3)].interm.type).loc, (yyvsp[(1) - (3)].interm.type).shaderQualifiers);
        parseContext.addQualifierToExisting((yyvsp[(1) - (3)].interm.type).loc, (yyvsp[(1) - (3)].interm.type).qualifier, *(yyvsp[(2) - (3)].lex).string);
        (yyval.interm.intermNode) = 0;
    ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 754 "MachineIndependent/glslang.y"
    {
        parseContext.checkNoShaderLayouts((yyvsp[(1) - (4)].interm.type).loc, (yyvsp[(1) - (4)].interm.type).shaderQualifiers);
        (yyvsp[(3) - (4)].interm.identifierList)->push_back((yyvsp[(2) - (4)].lex).string);
        parseContext.addQualifierToExisting((yyvsp[(1) - (4)].interm.type).loc, (yyvsp[(1) - (4)].interm.type).qualifier, *(yyvsp[(3) - (4)].interm.identifierList));
        (yyval.interm.intermNode) = 0;
    ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 763 "MachineIndependent/glslang.y"
    { parseContext.nestedBlockCheck((yyvsp[(1) - (3)].interm.type).loc); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 763 "MachineIndependent/glslang.y"
    {
        --parseContext.structNestingLevel;
        parseContext.blockName = (yyvsp[(2) - (6)].lex).string;
        parseContext.globalQualifierFixCheck((yyvsp[(1) - (6)].interm.type).loc, (yyvsp[(1) - (6)].interm.type).qualifier);
        parseContext.checkNoShaderLayouts((yyvsp[(1) - (6)].interm.type).loc, (yyvsp[(1) - (6)].interm.type).shaderQualifiers);
        parseContext.currentBlockQualifier = (yyvsp[(1) - (6)].interm.type).qualifier;
        (yyval.interm).loc = (yyvsp[(1) - (6)].interm.type).loc;
        (yyval.interm).typeList = (yyvsp[(5) - (6)].interm.typeList);
    ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 774 "MachineIndependent/glslang.y"
    {
        (yyval.interm.identifierList) = new TIdentifierList;
        (yyval.interm.identifierList)->push_back((yyvsp[(2) - (2)].lex).string);
    ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 778 "MachineIndependent/glslang.y"
    {
        (yyval.interm.identifierList) = (yyvsp[(1) - (3)].interm.identifierList);
        (yyval.interm.identifierList)->push_back((yyvsp[(3) - (3)].lex).string);
    ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 785 "MachineIndependent/glslang.y"
    {
        (yyval.interm).function = (yyvsp[(1) - (2)].interm.function);
        (yyval.interm).loc = (yyvsp[(2) - (2)].lex).loc;
    ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 792 "MachineIndependent/glslang.y"
    {
        (yyval.interm.function) = (yyvsp[(1) - (1)].interm.function);
    ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 795 "MachineIndependent/glslang.y"
    {
        (yyval.interm.function) = (yyvsp[(1) - (1)].interm.function);
    ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 802 "MachineIndependent/glslang.y"
    {
        // Add the parameter
        (yyval.interm.function) = (yyvsp[(1) - (2)].interm.function);
        if ((yyvsp[(2) - (2)].interm).param.type->getBasicType() != EbtVoid)
            (yyvsp[(1) - (2)].interm.function)->addParameter((yyvsp[(2) - (2)].interm).param);
        else
            delete (yyvsp[(2) - (2)].interm).param.type;
    ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 810 "MachineIndependent/glslang.y"
    {
        //
        // Only first parameter of one-parameter functions can be void
        // The check for named parameters not being void is done in parameter_declarator
        //
        if ((yyvsp[(3) - (3)].interm).param.type->getBasicType() == EbtVoid) {
            //
            // This parameter > first is void
            //
            parseContext.error((yyvsp[(2) - (3)].lex).loc, "cannot be an argument type except for '(void)'", "void", "");
            delete (yyvsp[(3) - (3)].interm).param.type;
        } else {
            // Add the parameter
            (yyval.interm.function) = (yyvsp[(1) - (3)].interm.function);
            (yyvsp[(1) - (3)].interm.function)->addParameter((yyvsp[(3) - (3)].interm).param);
        }
    ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 830 "MachineIndependent/glslang.y"
    {
        if ((yyvsp[(1) - (3)].interm.type).qualifier.storage != EvqGlobal && (yyvsp[(1) - (3)].interm.type).qualifier.storage != EvqTemporary) {
            parseContext.error((yyvsp[(2) - (3)].lex).loc, "no qualifiers allowed for function return",
                               GetStorageQualifierString((yyvsp[(1) - (3)].interm.type).qualifier.storage), "");
        }
        if ((yyvsp[(1) - (3)].interm.type).arraySizes)
            parseContext.arraySizeRequiredCheck((yyvsp[(1) - (3)].interm.type).loc, *(yyvsp[(1) - (3)].interm.type).arraySizes);

        // Add the function as a prototype after parsing it (we do not support recursion)
        TFunction *function;
        TType type((yyvsp[(1) - (3)].interm.type));
        function = new TFunction((yyvsp[(2) - (3)].lex).string, type);
        (yyval.interm.function) = function;
    ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 857 "MachineIndependent/glslang.y"
    {
/* ELSE 
    : type_specifier IDENTIFIER {
/* END FALCOR */
        if ((yyvsp[(1) - (3)].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[(1) - (3)].interm.type).loc, ENoProfile, 120, E_GL_3DL_array_objects, "arrayed type");
            parseContext.profileRequires((yyvsp[(1) - (3)].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            parseContext.arraySizeRequiredCheck((yyvsp[(1) - (3)].interm.type).loc, *(yyvsp[(1) - (3)].interm.type).arraySizes);
        }
        if ((yyvsp[(1) - (3)].interm.type).basicType == EbtVoid) {
            parseContext.error((yyvsp[(2) - (3)].lex).loc, "illegal use of type 'void'", (yyvsp[(2) - (3)].lex).string->c_str(), "");
        }
        parseContext.reservedErrorCheck((yyvsp[(2) - (3)].lex).loc, *(yyvsp[(2) - (3)].lex).string);

        TParameter param = {(yyvsp[(2) - (3)].lex).string, new TType((yyvsp[(1) - (3)].interm.type))};
        (yyval.interm).loc = (yyvsp[(2) - (3)].lex).loc;
        (yyval.interm).param = param;
    ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 876 "MachineIndependent/glslang.y"
    {
/* ELSE 
    | type_specifier IDENTIFIER array_specifier {
   END FALCOR */
        if ((yyvsp[(1) - (4)].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[(1) - (4)].interm.type).loc, ENoProfile, 120, E_GL_3DL_array_objects, "arrayed type");
            parseContext.profileRequires((yyvsp[(1) - (4)].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            parseContext.arraySizeRequiredCheck((yyvsp[(1) - (4)].interm.type).loc, *(yyvsp[(1) - (4)].interm.type).arraySizes);
        }
        parseContext.arrayDimCheck((yyvsp[(2) - (4)].lex).loc, (yyvsp[(1) - (4)].interm.type).arraySizes, (yyvsp[(3) - (4)].interm).arraySizes);

        parseContext.arraySizeRequiredCheck((yyvsp[(3) - (4)].interm).loc, *(yyvsp[(3) - (4)].interm).arraySizes);
        parseContext.reservedErrorCheck((yyvsp[(2) - (4)].lex).loc, *(yyvsp[(2) - (4)].lex).string);

        (yyvsp[(1) - (4)].interm.type).arraySizes = (yyvsp[(3) - (4)].interm).arraySizes;

        TParameter param = { (yyvsp[(2) - (4)].lex).string, new TType((yyvsp[(1) - (4)].interm.type))};
        (yyval.interm).loc = (yyvsp[(2) - (4)].lex).loc;
        (yyval.interm).param = param;
    ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 902 "MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(2) - (2)].interm);
        if ((yyvsp[(1) - (2)].interm.type).qualifier.precision != EpqNone)
            (yyval.interm).param.type->getQualifier().precision = (yyvsp[(1) - (2)].interm.type).qualifier.precision;
        parseContext.precisionQualifierCheck((yyval.interm).loc, (yyval.interm).param.type->getBasicType(), (yyval.interm).param.type->getQualifier());

        parseContext.checkNoShaderLayouts((yyvsp[(1) - (2)].interm.type).loc, (yyvsp[(1) - (2)].interm.type).shaderQualifiers);
        parseContext.parameterTypeCheck((yyvsp[(2) - (2)].interm).loc, (yyvsp[(1) - (2)].interm.type).qualifier.storage, *(yyval.interm).param.type);
        parseContext.paramCheckFix((yyvsp[(1) - (2)].interm.type).loc, (yyvsp[(1) - (2)].interm.type).qualifier, *(yyval.interm).param.type);

    ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 913 "MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (1)].interm);

        parseContext.parameterTypeCheck((yyvsp[(1) - (1)].interm).loc, EvqIn, *(yyvsp[(1) - (1)].interm).param.type);
        parseContext.paramCheckFix((yyvsp[(1) - (1)].interm).loc, EvqTemporary, *(yyval.interm).param.type);
        parseContext.precisionQualifierCheck((yyval.interm).loc, (yyval.interm).param.type->getBasicType(), (yyval.interm).param.type->getQualifier());
    ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 923 "MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(2) - (2)].interm);
        if ((yyvsp[(1) - (2)].interm.type).qualifier.precision != EpqNone)
            (yyval.interm).param.type->getQualifier().precision = (yyvsp[(1) - (2)].interm.type).qualifier.precision;
        parseContext.precisionQualifierCheck((yyvsp[(1) - (2)].interm.type).loc, (yyval.interm).param.type->getBasicType(), (yyval.interm).param.type->getQualifier());

        parseContext.checkNoShaderLayouts((yyvsp[(1) - (2)].interm.type).loc, (yyvsp[(1) - (2)].interm.type).shaderQualifiers);
        parseContext.parameterTypeCheck((yyvsp[(2) - (2)].interm).loc, (yyvsp[(1) - (2)].interm.type).qualifier.storage, *(yyval.interm).param.type);
        parseContext.paramCheckFix((yyvsp[(1) - (2)].interm.type).loc, (yyvsp[(1) - (2)].interm.type).qualifier, *(yyval.interm).param.type);
    ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 933 "MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (1)].interm);

        parseContext.parameterTypeCheck((yyvsp[(1) - (1)].interm).loc, EvqIn, *(yyvsp[(1) - (1)].interm).param.type);
        parseContext.paramCheckFix((yyvsp[(1) - (1)].interm).loc, EvqTemporary, *(yyval.interm).param.type);
        parseContext.precisionQualifierCheck((yyval.interm).loc, (yyval.interm).param.type->getBasicType(), (yyval.interm).param.type->getQualifier());
    ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 943 "MachineIndependent/glslang.y"
    {
        TParameter param = { 0, new TType((yyvsp[(1) - (1)].interm.type)) };
        (yyval.interm).param = param;
        if ((yyvsp[(1) - (1)].interm.type).arraySizes)
            parseContext.arraySizeRequiredCheck((yyvsp[(1) - (1)].interm.type).loc, *(yyvsp[(1) - (1)].interm.type).arraySizes);
    ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 952 "MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (1)].interm);
    ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 955 "MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (3)].interm);
        parseContext.declareVariable((yyvsp[(3) - (3)].lex).loc, *(yyvsp[(3) - (3)].lex).string, (yyvsp[(1) - (3)].interm).type);
    ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 959 "MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (4)].interm);
        parseContext.declareVariable((yyvsp[(3) - (4)].lex).loc, *(yyvsp[(3) - (4)].lex).string, (yyvsp[(1) - (4)].interm).type, (yyvsp[(4) - (4)].interm).arraySizes);
    ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 963 "MachineIndependent/glslang.y"
    {
        (yyval.interm).type = (yyvsp[(1) - (6)].interm).type;
        TIntermNode* initNode = parseContext.declareVariable((yyvsp[(3) - (6)].lex).loc, *(yyvsp[(3) - (6)].lex).string, (yyvsp[(1) - (6)].interm).type, (yyvsp[(4) - (6)].interm).arraySizes, (yyvsp[(6) - (6)].interm.intermTypedNode));
        (yyval.interm).intermNode = parseContext.intermediate.growAggregate((yyvsp[(1) - (6)].interm).intermNode, initNode, (yyvsp[(5) - (6)].lex).loc);
    ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 968 "MachineIndependent/glslang.y"
    {
        (yyval.interm).type = (yyvsp[(1) - (5)].interm).type;
        TIntermNode* initNode = parseContext.declareVariable((yyvsp[(3) - (5)].lex).loc, *(yyvsp[(3) - (5)].lex).string, (yyvsp[(1) - (5)].interm).type, 0, (yyvsp[(5) - (5)].interm.intermTypedNode));
        (yyval.interm).intermNode = parseContext.intermediate.growAggregate((yyvsp[(1) - (5)].interm).intermNode, initNode, (yyvsp[(4) - (5)].lex).loc);
    ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 976 "MachineIndependent/glslang.y"
    {
        (yyval.interm).type = (yyvsp[(1) - (1)].interm.type);
        (yyval.interm).intermNode = 0;
        parseContext.declareTypeDefaults((yyval.interm).loc, (yyval.interm).type);
    ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 981 "MachineIndependent/glslang.y"
    {
        (yyval.interm).type = (yyvsp[(1) - (2)].interm.type);
        (yyval.interm).intermNode = 0;
        parseContext.declareVariable((yyvsp[(2) - (2)].lex).loc, *(yyvsp[(2) - (2)].lex).string, (yyvsp[(1) - (2)].interm.type));
    ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 986 "MachineIndependent/glslang.y"
    {
        (yyval.interm).type = (yyvsp[(1) - (3)].interm.type);
        (yyval.interm).intermNode = 0;
        parseContext.declareVariable((yyvsp[(2) - (3)].lex).loc, *(yyvsp[(2) - (3)].lex).string, (yyvsp[(1) - (3)].interm.type), (yyvsp[(3) - (3)].interm).arraySizes);
    ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 991 "MachineIndependent/glslang.y"
    {
        (yyval.interm).type = (yyvsp[(1) - (5)].interm.type);
        TIntermNode* initNode = parseContext.declareVariable((yyvsp[(2) - (5)].lex).loc, *(yyvsp[(2) - (5)].lex).string, (yyvsp[(1) - (5)].interm.type), (yyvsp[(3) - (5)].interm).arraySizes, (yyvsp[(5) - (5)].interm.intermTypedNode));
        (yyval.interm).intermNode = parseContext.intermediate.growAggregate(0, initNode, (yyvsp[(4) - (5)].lex).loc);
    ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 996 "MachineIndependent/glslang.y"
    {
        (yyval.interm).type = (yyvsp[(1) - (4)].interm.type);
        TIntermNode* initNode = parseContext.declareVariable((yyvsp[(2) - (4)].lex).loc, *(yyvsp[(2) - (4)].lex).string, (yyvsp[(1) - (4)].interm.type), 0, (yyvsp[(4) - (4)].interm.intermTypedNode));
        (yyval.interm).intermNode = parseContext.intermediate.growAggregate(0, initNode, (yyvsp[(3) - (4)].lex).loc);
    ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1005 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);

        parseContext.globalQualifierTypeCheck((yyvsp[(1) - (1)].interm.type).loc, (yyvsp[(1) - (1)].interm.type).qualifier, (yyval.interm.type));
        if ((yyvsp[(1) - (1)].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[(1) - (1)].interm.type).loc, ENoProfile, 120, E_GL_3DL_array_objects, "arrayed type");
            parseContext.profileRequires((yyvsp[(1) - (1)].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
        }

        parseContext.precisionQualifierCheck((yyval.interm.type).loc, (yyval.interm.type).basicType, (yyval.interm.type).qualifier);
    ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1016 "MachineIndependent/glslang.y"
    {
        parseContext.globalQualifierFixCheck((yyvsp[(1) - (2)].interm.type).loc, (yyvsp[(1) - (2)].interm.type).qualifier);
        parseContext.globalQualifierTypeCheck((yyvsp[(1) - (2)].interm.type).loc, (yyvsp[(1) - (2)].interm.type).qualifier, (yyvsp[(2) - (2)].interm.type));

        if ((yyvsp[(2) - (2)].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[(2) - (2)].interm.type).loc, ENoProfile, 120, E_GL_3DL_array_objects, "arrayed type");
            parseContext.profileRequires((yyvsp[(2) - (2)].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
        }

        if ((yyvsp[(2) - (2)].interm.type).arraySizes && parseContext.arrayQualifierError((yyvsp[(2) - (2)].interm.type).loc, (yyvsp[(1) - (2)].interm.type).qualifier))
            (yyvsp[(2) - (2)].interm.type).arraySizes = 0;

        parseContext.checkNoShaderLayouts((yyvsp[(2) - (2)].interm.type).loc, (yyvsp[(1) - (2)].interm.type).shaderQualifiers);
        (yyvsp[(2) - (2)].interm.type).shaderQualifiers.merge((yyvsp[(1) - (2)].interm.type).shaderQualifiers);
        parseContext.mergeQualifiers((yyvsp[(2) - (2)].interm.type).loc, (yyvsp[(2) - (2)].interm.type).qualifier, (yyvsp[(1) - (2)].interm.type).qualifier, true);
        parseContext.precisionQualifierCheck((yyvsp[(2) - (2)].interm.type).loc, (yyvsp[(2) - (2)].interm.type).basicType, (yyvsp[(2) - (2)].interm.type).qualifier);

        (yyval.interm.type) = (yyvsp[(2) - (2)].interm.type);

        if (! (yyval.interm.type).qualifier.isInterpolation() &&
            ((parseContext.language == EShLangVertex   && (yyval.interm.type).qualifier.storage == EvqVaryingOut) ||
             (parseContext.language == EShLangFragment && (yyval.interm.type).qualifier.storage == EvqVaryingIn)))
            (yyval.interm.type).qualifier.smooth = true;
    ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1043 "MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, "invariant");
        parseContext.profileRequires((yyval.interm.type).loc, ENoProfile, 120, 0, "invariant");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.invariant = true;
    ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1052 "MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, "smooth");
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ENoProfile, 130, 0, "smooth");
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, EEsProfile, 300, 0, "smooth");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.smooth = true;
    ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1059 "MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, "flat");
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ENoProfile, 130, 0, "flat");
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, EEsProfile, 300, 0, "flat");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.flat = true;
    ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1066 "MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, "noperspective");
        parseContext.requireProfile((yyvsp[(1) - (1)].lex).loc, ~EEsProfile, "noperspective");
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ENoProfile, 130, 0, "noperspective");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.nopersp = true;
    ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1073 "MachineIndependent/glslang.y"
    {
#ifdef AMD_EXTENSIONS
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, "__explicitInterpAMD");
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ECoreProfile, 450, E_GL_AMD_shader_explicit_vertex_parameter, "explicit interpolation");
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ECompatibilityProfile, 450, E_GL_AMD_shader_explicit_vertex_parameter, "explicit interpolation");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.explicitInterp = true;
#endif
    ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1085 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(3) - (4)].interm.type);
    ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1091 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
    ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1094 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (3)].interm.type);
        (yyval.interm.type).shaderQualifiers.merge((yyvsp[(3) - (3)].interm.type).shaderQualifiers);
        parseContext.mergeObjectLayoutQualifiers((yyval.interm.type).qualifier, (yyvsp[(3) - (3)].interm.type).qualifier, false);
    ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1101 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        parseContext.setLayoutQualifier((yyvsp[(1) - (1)].lex).loc, (yyval.interm.type), *(yyvsp[(1) - (1)].lex).string);
    ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1105 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (3)].lex).loc);
        parseContext.setLayoutQualifier((yyvsp[(1) - (3)].lex).loc, (yyval.interm.type), *(yyvsp[(1) - (3)].lex).string, (yyvsp[(3) - (3)].interm.intermTypedNode));
    ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1109 "MachineIndependent/glslang.y"
    { // because "shared" is both an identifier and a keyword
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        TString strShared("shared");
        parseContext.setLayoutQualifier((yyvsp[(1) - (1)].lex).loc, (yyval.interm.type), strShared);
    ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1117 "MachineIndependent/glslang.y"
    {
        parseContext.profileRequires((yyval.interm.type).loc, ECoreProfile | ECompatibilityProfile, 400, E_GL_ARB_gpu_shader5, "precise");
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, EEsProfile, 320, Num_AEP_gpu_shader5, AEP_gpu_shader5, "precise");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.noContraction = true;
    ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1126 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
    ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1129 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (2)].interm.type);
        if ((yyval.interm.type).basicType == EbtVoid)
            (yyval.interm.type).basicType = (yyvsp[(2) - (2)].interm.type).basicType;

        (yyval.interm.type).shaderQualifiers.merge((yyvsp[(2) - (2)].interm.type).shaderQualifiers);
        parseContext.mergeQualifiers((yyval.interm.type).loc, (yyval.interm.type).qualifier, (yyvsp[(2) - (2)].interm.type).qualifier, false);
    ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1140 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
    ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1143 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
    ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1146 "MachineIndependent/glslang.y"
    {
        parseContext.checkPrecisionQualifier((yyvsp[(1) - (1)].interm.type).loc, (yyvsp[(1) - (1)].interm.type).qualifier.precision);
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
    ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1150 "MachineIndependent/glslang.y"
    {
        // allow inheritance of storage qualifier from block declaration
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
    ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1154 "MachineIndependent/glslang.y"
    {
        // allow inheritance of storage qualifier from block declaration
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
    ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1158 "MachineIndependent/glslang.y"
    {
        // allow inheritance of storage qualifier from block declaration
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
    ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1165 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqConst;  // will later turn into EvqConstReadOnly, if the initializer is not constant
    ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1169 "MachineIndependent/glslang.y"
    {
        parseContext.requireStage((yyvsp[(1) - (1)].lex).loc, EShLangVertex, "attribute");
        parseContext.checkDeprecated((yyvsp[(1) - (1)].lex).loc, ECoreProfile, 130, "attribute");
        parseContext.checkDeprecated((yyvsp[(1) - (1)].lex).loc, ENoProfile, 130, "attribute");
        parseContext.requireNotRemoved((yyvsp[(1) - (1)].lex).loc, ECoreProfile, 420, "attribute");
        parseContext.requireNotRemoved((yyvsp[(1) - (1)].lex).loc, EEsProfile, 300, "attribute");

        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, "attribute");

        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqVaryingIn;
    ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1181 "MachineIndependent/glslang.y"
    {
        parseContext.checkDeprecated((yyvsp[(1) - (1)].lex).loc, ENoProfile, 130, "varying");
        parseContext.checkDeprecated((yyvsp[(1) - (1)].lex).loc, ECoreProfile, 130, "varying");
        parseContext.requireNotRemoved((yyvsp[(1) - (1)].lex).loc, ECoreProfile, 420, "varying");
        parseContext.requireNotRemoved((yyvsp[(1) - (1)].lex).loc, EEsProfile, 300, "varying");

        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, "varying");

        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        if (parseContext.language == EShLangVertex)
            (yyval.interm.type).qualifier.storage = EvqVaryingOut;
        else
            (yyval.interm.type).qualifier.storage = EvqVaryingIn;
    ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1195 "MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, "inout");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqInOut;
    ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1200 "MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, "in");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        // whether this is a parameter "in" or a pipeline "in" will get sorted out a bit later
        (yyval.interm.type).qualifier.storage = EvqIn;
    ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1206 "MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, "out");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        // whether this is a parameter "out" or a pipeline "out" will get sorted out a bit later
        (yyval.interm.type).qualifier.storage = EvqOut;
    ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1212 "MachineIndependent/glslang.y"
    {
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ENoProfile, 120, 0, "centroid");
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, EEsProfile, 300, 0, "centroid");
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, "centroid");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.centroid = true;
    ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1219 "MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, "patch");
        parseContext.requireStage((yyvsp[(1) - (1)].lex).loc, (EShLanguageMask)(EShLangTessControlMask | EShLangTessEvaluationMask), "patch");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.patch = true;
    ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1225 "MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, "sample");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.sample = true;
    ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1230 "MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, "uniform");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqUniform;
    ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1235 "MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, "buffer");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqBuffer;
    ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1240 "MachineIndependent/glslang.y"
    {
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ECoreProfile | ECompatibilityProfile, 430, E_GL_ARB_compute_shader, "shared");
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, EEsProfile, 310, 0, "shared");
        parseContext.requireStage((yyvsp[(1) - (1)].lex).loc, EShLangCompute, "shared");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqShared;
    ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1247 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.coherent = true;
    ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1251 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.volatil = true;
    ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1255 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.restrict = true;
    ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1259 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.readonly = true;
    ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1263 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.writeonly = true;
    ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1267 "MachineIndependent/glslang.y"
    {
        parseContext.spvRemoved((yyvsp[(1) - (1)].lex).loc, "subroutine");
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, "subroutine");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqUniform;
    ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1273 "MachineIndependent/glslang.y"
    {
        parseContext.spvRemoved((yyvsp[(1) - (4)].lex).loc, "subroutine");
        parseContext.globalCheck((yyvsp[(1) - (4)].lex).loc, "subroutine");
        (yyval.interm.type).init((yyvsp[(1) - (4)].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqUniform;
        // TODO: 4.0 semantics: subroutines
        // 1) make sure each identifier is a type declared earlier with SUBROUTINE
        // 2) save all of the identifiers for future comparison with the declared function
    ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1285 "MachineIndependent/glslang.y"
    {
        // TODO: 4.0 functionality: subroutine type to list
    ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1288 "MachineIndependent/glslang.y"
    {
    ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1293 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
        (yyval.interm.type).qualifier.precision = parseContext.getDefaultPrecision((yyval.interm.type));
    ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1297 "MachineIndependent/glslang.y"
    {
        parseContext.arrayDimCheck((yyvsp[(2) - (2)].interm).loc, (yyvsp[(2) - (2)].interm).arraySizes, 0);
        (yyval.interm.type) = (yyvsp[(1) - (2)].interm.type);
        (yyval.interm.type).qualifier.precision = parseContext.getDefaultPrecision((yyval.interm.type));
        (yyval.interm.type).arraySizes = (yyvsp[(2) - (2)].interm).arraySizes;
    ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1306 "MachineIndependent/glslang.y"
    {
        (yyval.interm).loc = (yyvsp[(1) - (2)].lex).loc;
        (yyval.interm).arraySizes = new TArraySizes;
        (yyval.interm).arraySizes->addInnerSize();
    ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1311 "MachineIndependent/glslang.y"
    {
        (yyval.interm).loc = (yyvsp[(1) - (3)].lex).loc;
        (yyval.interm).arraySizes = new TArraySizes;

        TArraySize size;
        parseContext.arraySizeCheck((yyvsp[(2) - (3)].interm.intermTypedNode)->getLoc(), (yyvsp[(2) - (3)].interm.intermTypedNode), size);
        (yyval.interm).arraySizes->addInnerSize(size);
    ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1319 "MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (3)].interm);
        (yyval.interm).arraySizes->addInnerSize();
    ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1323 "MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (4)].interm);

        TArraySize size;
        parseContext.arraySizeCheck((yyvsp[(3) - (4)].interm.intermTypedNode)->getLoc(), (yyvsp[(3) - (4)].interm.intermTypedNode), size);
        (yyval.interm).arraySizes->addInnerSize(size);
    ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1333 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtVoid;
    ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1337 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
    ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1341 "MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
    ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1346 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
    ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1350 "MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "unsigned integer");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
    ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1355 "MachineIndependent/glslang.y"
    {
        parseContext.int64Check((yyvsp[(1) - (1)].lex).loc, "64-bit integer", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt64;
    ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1360 "MachineIndependent/glslang.y"
    {
        parseContext.int64Check((yyvsp[(1) - (1)].lex).loc, "64-bit unsigned integer", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint64;
    ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1366 "MachineIndependent/glslang.y"
    {
        parseContext.int64Check((yyvsp[(1) - (1)].lex).loc, "64-bit integer", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt64;
    ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1371 "MachineIndependent/glslang.y"
    {
        parseContext.int64Check((yyvsp[(1) - (1)].lex).loc, "64-bit unsigned integer", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint64;
    ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1377 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
    ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1381 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setVector(2);
    ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1386 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setVector(3);
    ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1391 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setVector(4);
    ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1396 "MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double vector");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setVector(2);
    ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1402 "MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double vector");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setVector(3);
    ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1408 "MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double vector");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setVector(4);
    ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1414 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
        (yyval.interm.type).setVector(2);
    ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1419 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
        (yyval.interm.type).setVector(3);
    ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1424 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
        (yyval.interm.type).setVector(4);
    ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1429 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).setVector(2);
    ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1434 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).setVector(3);
    ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1439 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).setVector(4);
    ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1444 "MachineIndependent/glslang.y"
    {
        parseContext.int64Check((yyvsp[(1) - (1)].lex).loc, "64-bit integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt64;
        (yyval.interm.type).setVector(2);
    ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1450 "MachineIndependent/glslang.y"
    {
        parseContext.int64Check((yyvsp[(1) - (1)].lex).loc, "64-bit integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt64;
        (yyval.interm.type).setVector(3);
    ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1456 "MachineIndependent/glslang.y"
    {
        parseContext.int64Check((yyvsp[(1) - (1)].lex).loc, "64-bit integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt64;
        (yyval.interm.type).setVector(4);
    ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1462 "MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "unsigned integer vector");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).setVector(2);
    ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1468 "MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "unsigned integer vector");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).setVector(3);
    ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1474 "MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "unsigned integer vector");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).setVector(4);
    ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1480 "MachineIndependent/glslang.y"
    {
        parseContext.int64Check((yyvsp[(1) - (1)].lex).loc, "64-bit unsigned integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint64;
        (yyval.interm.type).setVector(2);
    ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1486 "MachineIndependent/glslang.y"
    {
        parseContext.int64Check((yyvsp[(1) - (1)].lex).loc, "64-bit unsigned integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint64;
        (yyval.interm.type).setVector(3);
    ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1492 "MachineIndependent/glslang.y"
    {
        parseContext.int64Check((yyvsp[(1) - (1)].lex).loc, "64-bit unsigned integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint64;
        (yyval.interm.type).setVector(4);
    ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1498 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 2);
    ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1503 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 3);
    ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1508 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 4);
    ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1513 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 2);
    ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1518 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 3);
    ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1523 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 4);
    ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1528 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 2);
    ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 1533 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 3);
    ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 1538 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 4);
    ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 1543 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 2);
    ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 1548 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 3);
    ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 1553 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 4);
    ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 1558 "MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 2);
    ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 1564 "MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 3);
    ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 1570 "MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 4);
    ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 1576 "MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 2);
    ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 1582 "MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 3);
    ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 1588 "MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 4);
    ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 1594 "MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 2);
    ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 1600 "MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 3);
    ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1606 "MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 4);
    ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 1612 "MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 2);
    ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 1618 "MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 3);
    ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 1624 "MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 4);
    ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1630 "MachineIndependent/glslang.y"
    {
        parseContext.vulkanRemoved((yyvsp[(1) - (1)].lex).loc, "atomic counter types");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtAtomicUint;
    ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 1635 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd1D);
    ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1640 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D);
    ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1645 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd3D);
    ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 1650 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube);
    ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1655 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd1D, false, true);
    ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 1660 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, false, true);
    ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1665 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube, false, true);
    ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1670 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd1D, true);
    ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 1675 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, true);
    ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1680 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd1D, true, true);
    ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1685 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, true, true);
    ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 1690 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube, true);
    ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 1695 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube, true, true);
    ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1700 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd1D);
    ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1705 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd2D);
    ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1710 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd3D);
    ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 1715 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, EsdCube);
    ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 1720 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd1D, true);
    ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 1725 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd2D, true);
    ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1730 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, EsdCube, true);
    ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1735 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd1D);
    ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1740 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd2D);
    ;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1745 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd3D);
    ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1750 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, EsdCube);
    ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1755 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd1D, true);
    ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1760 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd2D, true);
    ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1765 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, EsdCube, true);
    ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1770 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdRect);
    ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1775 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdRect, false, true);
    ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1780 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, EsdRect);
    ;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1785 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, EsdRect);
    ;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1790 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdBuffer);
    ;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1795 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, EsdBuffer);
    ;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1800 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, EsdBuffer);
    ;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1805 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, false, false, true);
    ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1810 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd2D, false, false, true);
    ;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1815 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd2D, false, false, true);
    ;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1820 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, true, false, true);
    ;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1825 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd2D, true, false, true);
    ;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1830 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd2D, true, false, true);
    ;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1835 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setPureSampler(false);
    ;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1840 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setPureSampler(true);
    ;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1845 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, Esd1D);
    ;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1850 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, Esd2D);
    ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1855 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, Esd3D);
    ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1860 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, EsdCube);
    ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1865 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, Esd1D, true);
    ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1870 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, Esd2D, true);
    ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1875 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, EsdCube, true);
    ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1880 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, Esd1D);
    ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1885 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, Esd2D);
    ;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1890 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, Esd3D);
    ;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1895 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, EsdCube);
    ;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1900 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, Esd1D, true);
    ;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1905 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, Esd2D, true);
    ;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1910 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, EsdCube, true);
    ;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1915 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, Esd1D);
    ;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1920 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, Esd2D);
    ;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1925 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, Esd3D);
    ;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1930 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, EsdCube);
    ;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1935 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, Esd1D, true);
    ;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1940 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, Esd2D, true);
    ;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1945 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, EsdCube, true);
    ;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1950 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, EsdRect);
    ;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1955 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, EsdRect);
    ;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1960 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, EsdRect);
    ;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1965 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, EsdBuffer);
    ;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1970 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, EsdBuffer);
    ;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1975 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, EsdBuffer);
    ;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1980 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, Esd2D, false, false, true);
    ;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1985 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, Esd2D, false, false, true);
    ;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1990 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, Esd2D, false, false, true);
    ;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1995 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, Esd2D, true, false, true);
    ;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 2000 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, Esd2D, true, false, true);
    ;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2005 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, Esd2D, true, false, true);
    ;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 2010 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd1D);
    ;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 2015 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd1D);
    ;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2020 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd1D);
    ;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 2025 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd2D);
    ;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 2030 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd2D);
    ;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2035 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd2D);
    ;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2040 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd3D);
    ;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 2045 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd3D);
    ;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 2050 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd3D);
    ;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 2055 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, EsdRect);
    ;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 2060 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, EsdRect);
    ;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 2065 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, EsdRect);
    ;}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 2070 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, EsdCube);
    ;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 2075 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, EsdCube);
    ;}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 2080 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, EsdCube);
    ;}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 2085 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, EsdBuffer);
    ;}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 2090 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, EsdBuffer);
    ;}
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 2095 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, EsdBuffer);
    ;}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 2100 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd1D, true);
    ;}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 2105 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd1D, true);
    ;}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 2110 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd1D, true);
    ;}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 2115 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd2D, true);
    ;}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 2120 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd2D, true);
    ;}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 2125 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd2D, true);
    ;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 2130 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, EsdCube, true);
    ;}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 2135 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, EsdCube, true);
    ;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 2140 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, EsdCube, true);
    ;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 2145 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd2D, false, false, true);
    ;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 2150 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd2D, false, false, true);
    ;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 2155 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd2D, false, false, true);
    ;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 2160 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd2D, true, false, true);
    ;}
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 2165 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd2D, true, false, true);
    ;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 2170 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd2D, true, false, true);
    ;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 2175 "MachineIndependent/glslang.y"
    {  // GL_OES_EGL_image_external
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D);
        (yyval.interm.type).sampler.external = true;
    ;}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 2181 "MachineIndependent/glslang.y"
    {
        parseContext.requireStage((yyvsp[(1) - (1)].lex).loc, EShLangFragment, "subpass input");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setSubpass(EbtFloat);
    ;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 2187 "MachineIndependent/glslang.y"
    {
        parseContext.requireStage((yyvsp[(1) - (1)].lex).loc, EShLangFragment, "subpass input");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setSubpass(EbtFloat, true);
    ;}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 2193 "MachineIndependent/glslang.y"
    {
        parseContext.requireStage((yyvsp[(1) - (1)].lex).loc, EShLangFragment, "subpass input");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setSubpass(EbtInt);
    ;}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 2199 "MachineIndependent/glslang.y"
    {
        parseContext.requireStage((yyvsp[(1) - (1)].lex).loc, EShLangFragment, "subpass input");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setSubpass(EbtInt, true);
    ;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 2205 "MachineIndependent/glslang.y"
    {
        parseContext.requireStage((yyvsp[(1) - (1)].lex).loc, EShLangFragment, "subpass input");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setSubpass(EbtUint);
    ;}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 2211 "MachineIndependent/glslang.y"
    {
        parseContext.requireStage((yyvsp[(1) - (1)].lex).loc, EShLangFragment, "subpass input");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setSubpass(EbtUint, true);
    ;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 2217 "MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
        (yyval.interm.type).qualifier.storage = parseContext.symbolTable.atGlobalLevel() ? EvqGlobal : EvqTemporary;
        parseContext.structTypeCheck((yyval.interm.type).loc, (yyval.interm.type));
    ;}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 2222 "MachineIndependent/glslang.y"
    {
        //
        // This is for user defined type names.  The lexical phase looked up the
        // type.
        //
        if (const TVariable* variable = ((yyvsp[(1) - (1)].lex).symbol)->getAsVariable()) {
            const TType& structure = variable->getType();
            (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
            (yyval.interm.type).basicType = EbtStruct;
            (yyval.interm.type).userDef = &structure;
        } else
            parseContext.error((yyvsp[(1) - (1)].lex).loc, "expected type name", (yyvsp[(1) - (1)].lex).string->c_str(), "");
    ;}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 2238 "MachineIndependent/glslang.y"
    {
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ENoProfile, 130, 0, "highp precision qualifier");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        parseContext.handlePrecisionQualifier((yyvsp[(1) - (1)].lex).loc, (yyval.interm.type).qualifier, EpqHigh);
    ;}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 2243 "MachineIndependent/glslang.y"
    {
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ENoProfile, 130, 0, "mediump precision qualifier");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        parseContext.handlePrecisionQualifier((yyvsp[(1) - (1)].lex).loc, (yyval.interm.type).qualifier, EpqMedium);
    ;}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 2248 "MachineIndependent/glslang.y"
    {
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ENoProfile, 130, 0, "lowp precision qualifier");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        parseContext.handlePrecisionQualifier((yyvsp[(1) - (1)].lex).loc, (yyval.interm.type).qualifier, EpqLow);
    ;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 2256 "MachineIndependent/glslang.y"
    { parseContext.nestedStructCheck((yyvsp[(1) - (3)].lex).loc); ;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 2256 "MachineIndependent/glslang.y"
    {
        TType* structure = new TType((yyvsp[(5) - (6)].interm.typeList), *(yyvsp[(2) - (6)].lex).string);
        parseContext.structArrayCheck((yyvsp[(2) - (6)].lex).loc, *structure);
        TVariable* userTypeDef = new TVariable((yyvsp[(2) - (6)].lex).string, *structure, true);
        if (! parseContext.symbolTable.insert(*userTypeDef))
            parseContext.error((yyvsp[(2) - (6)].lex).loc, "redefinition", (yyvsp[(2) - (6)].lex).string->c_str(), "struct");
        (yyval.interm.type).init((yyvsp[(1) - (6)].lex).loc);
        (yyval.interm.type).basicType = EbtStruct;
        (yyval.interm.type).userDef = structure;
        --parseContext.structNestingLevel;
    ;}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 2267 "MachineIndependent/glslang.y"
    { parseContext.nestedStructCheck((yyvsp[(1) - (2)].lex).loc); ;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 2267 "MachineIndependent/glslang.y"
    {
        TType* structure = new TType((yyvsp[(4) - (5)].interm.typeList), TString(""));
        (yyval.interm.type).init((yyvsp[(1) - (5)].lex).loc);
        (yyval.interm.type).basicType = EbtStruct;
        (yyval.interm.type).userDef = structure;
        --parseContext.structNestingLevel;
    ;}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 2277 "MachineIndependent/glslang.y"
    {
        (yyval.interm.typeList) = (yyvsp[(1) - (1)].interm.typeList);
    ;}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 2280 "MachineIndependent/glslang.y"
    {
        (yyval.interm.typeList) = (yyvsp[(1) - (2)].interm.typeList);
        for (unsigned int i = 0; i < (yyvsp[(2) - (2)].interm.typeList)->size(); ++i) {
            for (unsigned int j = 0; j < (yyval.interm.typeList)->size(); ++j) {
                if ((*(yyval.interm.typeList))[j].type->getFieldName() == (*(yyvsp[(2) - (2)].interm.typeList))[i].type->getFieldName())
                    parseContext.error((*(yyvsp[(2) - (2)].interm.typeList))[i].loc, "duplicate member name:", "", (*(yyvsp[(2) - (2)].interm.typeList))[i].type->getFieldName().c_str());
            }
            (yyval.interm.typeList)->push_back((*(yyvsp[(2) - (2)].interm.typeList))[i]);
        }
    ;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 2293 "MachineIndependent/glslang.y"
    {
        if ((yyvsp[(1) - (3)].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[(1) - (3)].interm.type).loc, ENoProfile, 120, E_GL_3DL_array_objects, "arrayed type");
            parseContext.profileRequires((yyvsp[(1) - (3)].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            if (parseContext.profile == EEsProfile)
                parseContext.arraySizeRequiredCheck((yyvsp[(1) - (3)].interm.type).loc, *(yyvsp[(1) - (3)].interm.type).arraySizes);
        }

        (yyval.interm.typeList) = (yyvsp[(2) - (3)].interm.typeList);

        parseContext.voidErrorCheck((yyvsp[(1) - (3)].interm.type).loc, (*(yyvsp[(2) - (3)].interm.typeList))[0].type->getFieldName(), (yyvsp[(1) - (3)].interm.type).basicType);
        parseContext.precisionQualifierCheck((yyvsp[(1) - (3)].interm.type).loc, (yyvsp[(1) - (3)].interm.type).basicType, (yyvsp[(1) - (3)].interm.type).qualifier);

        for (unsigned int i = 0; i < (yyval.interm.typeList)->size(); ++i) {
            parseContext.arrayDimCheck((yyvsp[(1) - (3)].interm.type).loc, (*(yyval.interm.typeList))[i].type, (yyvsp[(1) - (3)].interm.type).arraySizes);
            (*(yyval.interm.typeList))[i].type->mergeType((yyvsp[(1) - (3)].interm.type));
        }
    ;}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 2311 "MachineIndependent/glslang.y"
    {
        parseContext.globalQualifierFixCheck((yyvsp[(1) - (4)].interm.type).loc, (yyvsp[(1) - (4)].interm.type).qualifier);
        if ((yyvsp[(2) - (4)].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[(2) - (4)].interm.type).loc, ENoProfile, 120, E_GL_3DL_array_objects, "arrayed type");
            parseContext.profileRequires((yyvsp[(2) - (4)].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            if (parseContext.profile == EEsProfile)
                parseContext.arraySizeRequiredCheck((yyvsp[(2) - (4)].interm.type).loc, *(yyvsp[(2) - (4)].interm.type).arraySizes);
        }

        (yyval.interm.typeList) = (yyvsp[(3) - (4)].interm.typeList);

        parseContext.checkNoShaderLayouts((yyvsp[(1) - (4)].interm.type).loc, (yyvsp[(1) - (4)].interm.type).shaderQualifiers);
        parseContext.voidErrorCheck((yyvsp[(2) - (4)].interm.type).loc, (*(yyvsp[(3) - (4)].interm.typeList))[0].type->getFieldName(), (yyvsp[(2) - (4)].interm.type).basicType);
        parseContext.mergeQualifiers((yyvsp[(2) - (4)].interm.type).loc, (yyvsp[(2) - (4)].interm.type).qualifier, (yyvsp[(1) - (4)].interm.type).qualifier, true);
        parseContext.precisionQualifierCheck((yyvsp[(2) - (4)].interm.type).loc, (yyvsp[(2) - (4)].interm.type).basicType, (yyvsp[(2) - (4)].interm.type).qualifier);

        for (unsigned int i = 0; i < (yyval.interm.typeList)->size(); ++i) {
            parseContext.arrayDimCheck((yyvsp[(1) - (4)].interm.type).loc, (*(yyval.interm.typeList))[i].type, (yyvsp[(2) - (4)].interm.type).arraySizes);
            (*(yyval.interm.typeList))[i].type->mergeType((yyvsp[(2) - (4)].interm.type));
        }
    ;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 2335 "MachineIndependent/glslang.y"
    {
        (yyval.interm.typeList) = new TTypeList;
        (yyval.interm.typeList)->push_back((yyvsp[(1) - (1)].interm.typeLine));
    ;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 2339 "MachineIndependent/glslang.y"
    {
        (yyval.interm.typeList)->push_back((yyvsp[(3) - (3)].interm.typeLine));
    ;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 2345 "MachineIndependent/glslang.y"
    {
        (yyval.interm.typeLine).type = new TType(EbtVoid);
        (yyval.interm.typeLine).loc = (yyvsp[(1) - (1)].lex).loc;
        (yyval.interm.typeLine).type->setFieldName(*(yyvsp[(1) - (1)].lex).string);
    ;}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 2350 "MachineIndependent/glslang.y"
    {
        parseContext.arrayDimCheck((yyvsp[(1) - (2)].lex).loc, (yyvsp[(2) - (2)].interm).arraySizes, 0);

        (yyval.interm.typeLine).type = new TType(EbtVoid);
        (yyval.interm.typeLine).loc = (yyvsp[(1) - (2)].lex).loc;
        (yyval.interm.typeLine).type->setFieldName(*(yyvsp[(1) - (2)].lex).string);
        (yyval.interm.typeLine).type->newArraySizes(*(yyvsp[(2) - (2)].interm).arraySizes);
    ;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 2361 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
    ;}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 2364 "MachineIndependent/glslang.y"
    {
        const char* initFeature = "{ } style initializers";
        parseContext.requireProfile((yyvsp[(1) - (3)].lex).loc, ~EEsProfile, initFeature);
        parseContext.profileRequires((yyvsp[(1) - (3)].lex).loc, ~EEsProfile, 420, E_GL_ARB_shading_language_420pack, initFeature);
        (yyval.interm.intermTypedNode) = (yyvsp[(2) - (3)].interm.intermTypedNode);
    ;}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 2370 "MachineIndependent/glslang.y"
    {
        const char* initFeature = "{ } style initializers";
        parseContext.requireProfile((yyvsp[(1) - (4)].lex).loc, ~EEsProfile, initFeature);
        parseContext.profileRequires((yyvsp[(1) - (4)].lex).loc, ~EEsProfile, 420, E_GL_ARB_shading_language_420pack, initFeature);
        (yyval.interm.intermTypedNode) = (yyvsp[(2) - (4)].interm.intermTypedNode);
    ;}
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 2379 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.growAggregate(0, (yyvsp[(1) - (1)].interm.intermTypedNode), (yyvsp[(1) - (1)].interm.intermTypedNode)->getLoc());
    ;}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 2382 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.growAggregate((yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode));
    ;}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 2388 "MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 2392 "MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 2393 "MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 2399 "MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 2400 "MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 2401 "MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 2402 "MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 2403 "MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 2404 "MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 2405 "MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 2409 "MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = 0; ;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 2410 "MachineIndependent/glslang.y"
    {
        parseContext.symbolTable.push();
        ++parseContext.statementNestingLevel;
    ;}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 2414 "MachineIndependent/glslang.y"
    {
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        --parseContext.statementNestingLevel;
    ;}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 2418 "MachineIndependent/glslang.y"
    {
        if ((yyvsp[(3) - (5)].interm.intermNode) && (yyvsp[(3) - (5)].interm.intermNode)->getAsAggregate())
            (yyvsp[(3) - (5)].interm.intermNode)->getAsAggregate()->setOperator(EOpSequence);
        (yyval.interm.intermNode) = (yyvsp[(3) - (5)].interm.intermNode);
    ;}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 2426 "MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 2427 "MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 2431 "MachineIndependent/glslang.y"
    {
        ++parseContext.controlFlowNestingLevel;
    ;}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 2434 "MachineIndependent/glslang.y"
    {
        --parseContext.controlFlowNestingLevel;
        (yyval.interm.intermNode) = (yyvsp[(2) - (2)].interm.intermNode);
    ;}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 2438 "MachineIndependent/glslang.y"
    {
        parseContext.symbolTable.push();
        ++parseContext.statementNestingLevel;
        ++parseContext.controlFlowNestingLevel;
    ;}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 2443 "MachineIndependent/glslang.y"
    {
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        --parseContext.statementNestingLevel;
        --parseContext.controlFlowNestingLevel;
        (yyval.interm.intermNode) = (yyvsp[(2) - (2)].interm.intermNode);
    ;}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 2452 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = 0;
    ;}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 2455 "MachineIndependent/glslang.y"
    {
        if ((yyvsp[(2) - (3)].interm.intermNode) && (yyvsp[(2) - (3)].interm.intermNode)->getAsAggregate())
            (yyvsp[(2) - (3)].interm.intermNode)->getAsAggregate()->setOperator(EOpSequence);
        (yyval.interm.intermNode) = (yyvsp[(2) - (3)].interm.intermNode);
    ;}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 2463 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = parseContext.intermediate.makeAggregate((yyvsp[(1) - (1)].interm.intermNode));
        if ((yyvsp[(1) - (1)].interm.intermNode) && (yyvsp[(1) - (1)].interm.intermNode)->getAsBranchNode() && ((yyvsp[(1) - (1)].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpCase ||
                                            (yyvsp[(1) - (1)].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpDefault)) {
            parseContext.wrapupSwitchSubsequence(0, (yyvsp[(1) - (1)].interm.intermNode));
            (yyval.interm.intermNode) = 0;  // start a fresh subsequence for what's after this case
        }
    ;}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 2471 "MachineIndependent/glslang.y"
    {
        if ((yyvsp[(2) - (2)].interm.intermNode) && (yyvsp[(2) - (2)].interm.intermNode)->getAsBranchNode() && ((yyvsp[(2) - (2)].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpCase ||
                                            (yyvsp[(2) - (2)].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpDefault)) {
            parseContext.wrapupSwitchSubsequence((yyvsp[(1) - (2)].interm.intermNode) ? (yyvsp[(1) - (2)].interm.intermNode)->getAsAggregate() : 0, (yyvsp[(2) - (2)].interm.intermNode));
            (yyval.interm.intermNode) = 0;  // start a fresh subsequence for what's after this case
        } else
            (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[(1) - (2)].interm.intermNode), (yyvsp[(2) - (2)].interm.intermNode));
    ;}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 2482 "MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = 0; ;}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 2483 "MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = static_cast<TIntermNode*>((yyvsp[(1) - (2)].interm.intermTypedNode)); ;}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 2487 "MachineIndependent/glslang.y"
    {
        parseContext.boolCheck((yyvsp[(1) - (5)].lex).loc, (yyvsp[(3) - (5)].interm.intermTypedNode));
        (yyval.interm.intermNode) = parseContext.intermediate.addSelection((yyvsp[(3) - (5)].interm.intermTypedNode), (yyvsp[(5) - (5)].interm.nodePair), (yyvsp[(1) - (5)].lex).loc);
    ;}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 2494 "MachineIndependent/glslang.y"
    {
        (yyval.interm.nodePair).node1 = (yyvsp[(1) - (3)].interm.intermNode);
        (yyval.interm.nodePair).node2 = (yyvsp[(3) - (3)].interm.intermNode);
    ;}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 2498 "MachineIndependent/glslang.y"
    {
        (yyval.interm.nodePair).node1 = (yyvsp[(1) - (1)].interm.intermNode);
        (yyval.interm.nodePair).node2 = 0;
    ;}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 2506 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
        parseContext.boolCheck((yyvsp[(1) - (1)].interm.intermTypedNode)->getLoc(), (yyvsp[(1) - (1)].interm.intermTypedNode));
    ;}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 2510 "MachineIndependent/glslang.y"
    {
        parseContext.boolCheck((yyvsp[(2) - (4)].lex).loc, (yyvsp[(1) - (4)].interm.type));

        TType type((yyvsp[(1) - (4)].interm.type));
        TIntermNode* initNode = parseContext.declareVariable((yyvsp[(2) - (4)].lex).loc, *(yyvsp[(2) - (4)].lex).string, (yyvsp[(1) - (4)].interm.type), 0, (yyvsp[(4) - (4)].interm.intermTypedNode));
        if (initNode)
            (yyval.interm.intermTypedNode) = initNode->getAsTyped();
        else
            (yyval.interm.intermTypedNode) = 0;
    ;}
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 2523 "MachineIndependent/glslang.y"
    {
        // start new switch sequence on the switch stack
        ++parseContext.controlFlowNestingLevel;
        ++parseContext.statementNestingLevel;
        parseContext.switchSequenceStack.push_back(new TIntermSequence);
        parseContext.switchLevel.push_back(parseContext.statementNestingLevel);
        parseContext.symbolTable.push();
    ;}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 2531 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = parseContext.addSwitch((yyvsp[(1) - (8)].lex).loc, (yyvsp[(3) - (8)].interm.intermTypedNode), (yyvsp[(7) - (8)].interm.intermNode) ? (yyvsp[(7) - (8)].interm.intermNode)->getAsAggregate() : 0);
        delete parseContext.switchSequenceStack.back();
        parseContext.switchSequenceStack.pop_back();
        parseContext.switchLevel.pop_back();
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        --parseContext.statementNestingLevel;
        --parseContext.controlFlowNestingLevel;
    ;}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 2543 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = 0;
    ;}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 2546 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode);
    ;}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 2552 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = 0;
        if (parseContext.switchLevel.size() == 0)
            parseContext.error((yyvsp[(1) - (3)].lex).loc, "cannot appear outside switch statement", "case", "");
        else if (parseContext.switchLevel.back() != parseContext.statementNestingLevel)
            parseContext.error((yyvsp[(1) - (3)].lex).loc, "cannot be nested inside control flow", "case", "");
        else {
            parseContext.constantValueCheck((yyvsp[(2) - (3)].interm.intermTypedNode), "case");
            parseContext.integerCheck((yyvsp[(2) - (3)].interm.intermTypedNode), "case");
            (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpCase, (yyvsp[(2) - (3)].interm.intermTypedNode), (yyvsp[(1) - (3)].lex).loc);
        }
    ;}
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 2564 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = 0;
        if (parseContext.switchLevel.size() == 0)
            parseContext.error((yyvsp[(1) - (2)].lex).loc, "cannot appear outside switch statement", "default", "");
        else if (parseContext.switchLevel.back() != parseContext.statementNestingLevel)
            parseContext.error((yyvsp[(1) - (2)].lex).loc, "cannot be nested inside control flow", "default", "");
        else
            (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpDefault, (yyvsp[(1) - (2)].lex).loc);
    ;}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 2576 "MachineIndependent/glslang.y"
    {
        if (! parseContext.limits.whileLoops)
            parseContext.error((yyvsp[(1) - (2)].lex).loc, "while loops not available", "limitation", "");
        parseContext.symbolTable.push();
        ++parseContext.loopNestingLevel;
        ++parseContext.statementNestingLevel;
        ++parseContext.controlFlowNestingLevel;
    ;}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 2584 "MachineIndependent/glslang.y"
    {
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        (yyval.interm.intermNode) = parseContext.intermediate.addLoop((yyvsp[(6) - (6)].interm.intermNode), (yyvsp[(4) - (6)].interm.intermTypedNode), 0, true, (yyvsp[(1) - (6)].lex).loc);
        --parseContext.loopNestingLevel;
        --parseContext.statementNestingLevel;
        --parseContext.controlFlowNestingLevel;
    ;}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 2591 "MachineIndependent/glslang.y"
    {
        ++parseContext.loopNestingLevel;
        ++parseContext.statementNestingLevel;
        ++parseContext.controlFlowNestingLevel;
    ;}
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 2596 "MachineIndependent/glslang.y"
    {
        if (! parseContext.limits.whileLoops)
            parseContext.error((yyvsp[(1) - (8)].lex).loc, "do-while loops not available", "limitation", "");

        parseContext.boolCheck((yyvsp[(8) - (8)].lex).loc, (yyvsp[(6) - (8)].interm.intermTypedNode));

        (yyval.interm.intermNode) = parseContext.intermediate.addLoop((yyvsp[(3) - (8)].interm.intermNode), (yyvsp[(6) - (8)].interm.intermTypedNode), 0, false, (yyvsp[(4) - (8)].lex).loc);
        --parseContext.loopNestingLevel;
        --parseContext.statementNestingLevel;
        --parseContext.controlFlowNestingLevel;
    ;}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 2607 "MachineIndependent/glslang.y"
    {
        parseContext.symbolTable.push();
        ++parseContext.loopNestingLevel;
        ++parseContext.statementNestingLevel;
        ++parseContext.controlFlowNestingLevel;
    ;}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 2613 "MachineIndependent/glslang.y"
    {
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        (yyval.interm.intermNode) = parseContext.intermediate.makeAggregate((yyvsp[(4) - (7)].interm.intermNode), (yyvsp[(2) - (7)].lex).loc);
        TIntermLoop* forLoop = parseContext.intermediate.addLoop((yyvsp[(7) - (7)].interm.intermNode), reinterpret_cast<TIntermTyped*>((yyvsp[(5) - (7)].interm.nodePair).node1), reinterpret_cast<TIntermTyped*>((yyvsp[(5) - (7)].interm.nodePair).node2), true, (yyvsp[(1) - (7)].lex).loc);
        if (! parseContext.limits.nonInductiveForLoops)
            parseContext.inductiveLoopCheck((yyvsp[(1) - (7)].lex).loc, (yyvsp[(4) - (7)].interm.intermNode), forLoop);
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyval.interm.intermNode), forLoop, (yyvsp[(1) - (7)].lex).loc);
        (yyval.interm.intermNode)->getAsAggregate()->setOperator(EOpSequence);
        --parseContext.loopNestingLevel;
        --parseContext.statementNestingLevel;
        --parseContext.controlFlowNestingLevel;
    ;}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 2628 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode);
    ;}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 2631 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode);
    ;}
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 2637 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
    ;}
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 2640 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = 0;
    ;}
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 2646 "MachineIndependent/glslang.y"
    {
        (yyval.interm.nodePair).node1 = (yyvsp[(1) - (2)].interm.intermTypedNode);
        (yyval.interm.nodePair).node2 = 0;
    ;}
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 2650 "MachineIndependent/glslang.y"
    {
        (yyval.interm.nodePair).node1 = (yyvsp[(1) - (3)].interm.intermTypedNode);
        (yyval.interm.nodePair).node2 = (yyvsp[(3) - (3)].interm.intermTypedNode);
    ;}
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 2657 "MachineIndependent/glslang.y"
    {
        if (parseContext.loopNestingLevel <= 0)
            parseContext.error((yyvsp[(1) - (2)].lex).loc, "continue statement only allowed in loops", "", "");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpContinue, (yyvsp[(1) - (2)].lex).loc);
    ;}
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 2662 "MachineIndependent/glslang.y"
    {
        if (parseContext.loopNestingLevel + parseContext.switchSequenceStack.size() <= 0)
            parseContext.error((yyvsp[(1) - (2)].lex).loc, "break statement only allowed in switch and loops", "", "");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpBreak, (yyvsp[(1) - (2)].lex).loc);
    ;}
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 2667 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpReturn, (yyvsp[(1) - (2)].lex).loc);
        if (parseContext.currentFunctionType->getBasicType() != EbtVoid)
            parseContext.error((yyvsp[(1) - (2)].lex).loc, "non-void function must return a value", "return", "");
        if (parseContext.inMain)
            parseContext.postMainReturn = true;
    ;}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 2674 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = parseContext.handleReturnValue((yyvsp[(1) - (3)].lex).loc, (yyvsp[(2) - (3)].interm.intermTypedNode));
    ;}
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 2677 "MachineIndependent/glslang.y"
    {
        parseContext.requireStage((yyvsp[(1) - (2)].lex).loc, EShLangFragment, "discard");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpKill, (yyvsp[(1) - (2)].lex).loc);
    ;}
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 2686 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode);
        parseContext.intermediate.setTreeRoot((yyval.interm.intermNode));
    ;}
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 2690 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[(1) - (2)].interm.intermNode), (yyvsp[(2) - (2)].interm.intermNode));
        parseContext.intermediate.setTreeRoot((yyval.interm.intermNode));
    ;}
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 2697 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode);
    ;}
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 2700 "MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode);
    ;}
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 2706 "MachineIndependent/glslang.y"
    {
        (yyvsp[(1) - (1)].interm).function = parseContext.handleFunctionDeclarator((yyvsp[(1) - (1)].interm).loc, *(yyvsp[(1) - (1)].interm).function, false /* not prototype */);
        (yyvsp[(1) - (1)].interm).intermNode = parseContext.handleFunctionDefinition((yyvsp[(1) - (1)].interm).loc, *(yyvsp[(1) - (1)].interm).function);
    ;}
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 2710 "MachineIndependent/glslang.y"
    {
        //   May be best done as post process phase on intermediate code
        if (parseContext.currentFunctionType->getBasicType() != EbtVoid && ! parseContext.functionReturnsValue)
            parseContext.error((yyvsp[(1) - (3)].interm).loc, "function does not return a value:", "", (yyvsp[(1) - (3)].interm).function->getName().c_str());
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[(1) - (3)].interm).intermNode, (yyvsp[(3) - (3)].interm.intermNode));
        parseContext.intermediate.setAggregateOperator((yyval.interm.intermNode), EOpFunction, (yyvsp[(1) - (3)].interm).function->getType(), (yyvsp[(1) - (3)].interm).loc);
        (yyval.interm.intermNode)->getAsAggregate()->setName((yyvsp[(1) - (3)].interm).function->getMangledName().c_str());

        // store the pragma information for debug and optimize and other vendor specific
        // information. This information can be queried from the parse tree
        (yyval.interm.intermNode)->getAsAggregate()->setOptimize(parseContext.contextPragma.optimize);
        (yyval.interm.intermNode)->getAsAggregate()->setDebug(parseContext.contextPragma.debug);
        (yyval.interm.intermNode)->getAsAggregate()->addToPragmaTable(parseContext.contextPragma.pragmaTable);
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 8191 "MachineIndependent/glslang_tab.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (pParseContext, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (pParseContext, yymsg);
	  }
	else
	  {
	    yyerror (pParseContext, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, pParseContext);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, pParseContext);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (pParseContext, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, pParseContext);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, pParseContext);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 2727 "MachineIndependent/glslang.y"


