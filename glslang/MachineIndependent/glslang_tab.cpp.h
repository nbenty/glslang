
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
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



/* Line 1676 of yacc.c  */
#line 360 "MachineIndependent/glslang_tab.cpp.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif




