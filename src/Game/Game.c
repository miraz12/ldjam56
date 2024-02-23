
#ifndef V_COMMIT_HASH
	#define V_COMMIT_HASH "ac2dcc2"
#endif

// V comptime_definitions:
// V compile time defines by -d or -define flags:
//     All custom defines      : no_main,emscripten
//     Turned ON custom defines: no_main,emscripten
#define CUSTOM_DEFINE_no_main
#define CUSTOM_DEFINE_emscripten

#define _VAUTOFREE (0)

// V typedefs:
typedef struct IError IError;
typedef struct none none;
typedef struct math__vec__Vec3_T_f32 math__vec__Vec3_T_f32;
typedef struct math__vec__Vec2_T_f32 math__vec__Vec2_T_f32;
typedef struct math__vec__Vec4_T_f32 math__vec__Vec4_T_f32;

// BEGIN_array_fixed_return_typedefs
// END_array_fixed_return_typedefs


// BEGIN_multi_return_typedefs
typedef struct multi_return_u32_u32 multi_return_u32_u32;
typedef struct multi_return_string_string multi_return_string_string;
typedef struct multi_return_int_int multi_return_int_int;
typedef struct multi_return_u32_u32_u32 multi_return_u32_u32_u32;
typedef struct multi_return_strconv__ParserState_strconv__PrepNumber multi_return_strconv__ParserState_strconv__PrepNumber;
typedef struct multi_return_u64_int multi_return_u64_int;
typedef struct multi_return_strconv__Dec32_bool multi_return_strconv__Dec32_bool;
typedef struct multi_return_strconv__Dec64_bool multi_return_strconv__Dec64_bool;
typedef struct multi_return_string_int multi_return_string_int;
typedef struct multi_return_int_bool multi_return_int_bool;
typedef struct multi_return_u64_u64 multi_return_u64_u64;
typedef struct multi_return_f64_int multi_return_f64_int;
typedef struct multi_return_i64_i64_i64 multi_return_i64_i64_i64;
typedef struct multi_return_f64_f64 multi_return_f64_f64;
// END_multi_return_typedefs

typedef struct strconv__BF_param strconv__BF_param;
typedef struct strconv__PrepNumber strconv__PrepNumber;
typedef struct strconv__Dec32 strconv__Dec32;
typedef struct strconv__Dec64 strconv__Dec64;
typedef struct strconv__Uint128 strconv__Uint128;
typedef union strconv__Uf32 strconv__Uf32;
typedef union strconv__Uf64 strconv__Uf64;
typedef union strconv__Float64u strconv__Float64u;
typedef union strconv__Float32u strconv__Float32u;
typedef struct array array;
typedef struct GCHeapUsage GCHeapUsage;
typedef struct VCastTypeIndexName VCastTypeIndexName;
typedef struct VAssertMetaInfo VAssertMetaInfo;
typedef struct MethodArgs MethodArgs;
typedef struct FunctionData FunctionData;
typedef struct VariantData VariantData;
typedef struct EnumData EnumData;
typedef struct FieldData FieldData;
typedef struct StructAttribute StructAttribute;
typedef struct DenseArray DenseArray;
typedef struct map map;
typedef struct Option Option;
typedef struct _option _option;
typedef struct None__ None__;
typedef struct _result _result;
typedef struct Error Error;
typedef struct MessageError MessageError;
typedef struct SortedMap SortedMap;
typedef struct mapnode mapnode;
typedef struct string string;
typedef struct RepIndex RepIndex;
typedef union StrIntpMem StrIntpMem;
typedef struct StrIntpCgenData StrIntpCgenData;
typedef struct StrIntpData StrIntpData;
typedef struct strings__textscanner__TextScanner strings__textscanner__TextScanner;
typedef struct term__termios__Termios term__termios__Termios;
typedef struct os__Eof os__Eof;
typedef struct os__NotExpected os__NotExpected;
typedef struct os__File os__File;
typedef struct os__FileNotOpenedError os__FileNotOpenedError;
typedef struct os__SizeOfTypeIs0Error os__SizeOfTypeIs0Error;
typedef struct os__FileMode os__FileMode;
typedef struct os__FileInfo os__FileInfo;
typedef struct os__FilePermission os__FilePermission;
typedef struct os__PathKind os__PathKind;
typedef struct os__Result os__Result;
typedef struct os__Command os__Command;
typedef struct os__MvParams os__MvParams;
typedef struct os__ExecutableNotFoundError os__ExecutableNotFoundError;
typedef struct os__MkdirParams os__MkdirParams;
typedef struct os__Uname os__Uname;
typedef struct os__Process os__Process;
typedef struct math__DigitParams math__DigitParams;
typedef struct math__ChebSeries math__ChebSeries;
typedef struct math__vec__Vec2 math__vec__Vec2;
typedef struct math__vec__Vec3 math__vec__Vec3;
typedef struct math__vec__Vec4 math__vec__Vec4;
typedef struct main__Player main__Player;
typedef struct _result_int _result_int;
typedef struct _result_f64 _result_f64;
typedef struct _result_u64 _result_u64;
typedef struct _result_i64 _result_i64;
typedef struct _result_rune _result_rune;
typedef struct _result_string _result_string;
typedef struct _result_os__File _result_os__File;
typedef struct _result_FILE_ptr _result_FILE_ptr;
typedef struct _result_void _result_void;
typedef struct _result_Array_u8 _result_Array_u8;
typedef struct _result_strings__Builder _result_strings__Builder;
typedef struct _result_Array_string _result_Array_string;
typedef struct _result_os__Result _result_os__Result;
typedef struct _result_anon_fn_os__signal _result_anon_fn_os__signal;
typedef struct _option_multi_return_string_string _option_multi_return_string_string;
typedef struct _option_int _option_int;
typedef struct _option_u8 _option_u8;
typedef struct _option_string _option_string;

 // V preincludes:

#if defined(__TINYC__) && defined(__has_include)
// tcc does not support has_include properly yet, turn it off completely
#undef __has_include
#endif

// V cheaders:
// Generated by the V compiler

#if defined(__TINYC__) && defined(__has_include)
// tcc does not support has_include properly yet, turn it off completely
#undef __has_include
#endif

#if defined(__has_include)

#if __has_include(<inttypes.h>)
#include <inttypes.h>
#else
#error VERROR_MESSAGE The C compiler can not find <inttypes.h>. Please install build-essentials
#endif

#else
#include <inttypes.h>
#endif


#if defined(__has_include)

#if __has_include(<stddef.h>)
#include <stddef.h>
#else
#error VERROR_MESSAGE The C compiler can not find <stddef.h>. Please install build-essentials
#endif

#else
#include <stddef.h>
#endif


//================================== builtin types ================================*/
typedef int64_t i64;
typedef int16_t i16;
typedef int8_t i8;
typedef uint64_t u64;
typedef uint32_t u32;
typedef uint8_t u8;
typedef uint16_t u16;
typedef u8 byte;
typedef int32_t i32;
typedef uint32_t rune;
typedef size_t usize;
typedef ptrdiff_t isize;
#ifndef VNOFLOAT
typedef float f32;
typedef double f64;
#else
typedef int32_t f32;
typedef int64_t f64;
#endif
typedef int64_t int_literal;
#ifndef VNOFLOAT
typedef double float_literal;
#else
typedef int64_t float_literal;
#endif
typedef unsigned char* byteptr;
typedef void* voidptr;
typedef char* charptr;
typedef u8 array_fixed_byte_300 [300];

typedef struct sync__Channel* chan;

#ifndef __cplusplus
	#ifndef bool
		#ifdef CUSTOM_DEFINE_4bytebool
			typedef int bool;
		#else
			typedef u8 bool;
		#endif
		#define true 1
		#define false 0
	#endif
#endif

typedef u64 (*MapHashFn)(voidptr);
typedef bool (*MapEqFn)(voidptr, voidptr);
typedef void (*MapCloneFn)(voidptr, voidptr);
typedef void (*MapFreeFn)(voidptr);

//============================== HELPER C MACROS =============================*/
// _SLIT0 is used as NULL string for literal arguments
// `"" s` is used to enforce a string literal argument
#define _SLIT0 (string){.str=(byteptr)(""), .len=0, .is_lit=1}
#define _SLIT(s) ((string){.str=(byteptr)("" s), .len=(sizeof(s)-1), .is_lit=1})
#define _SLEN(s, n) ((string){.str=(byteptr)("" s), .len=n, .is_lit=1})

// take the address of an rvalue
#define ADDR(type, expr) (&((type[]){expr}[0]))

// copy something to the heap
#define HEAP(type, expr) ((type*)memdup((void*)&((type[]){expr}[0]), sizeof(type)))
#define HEAP_noscan(type, expr) ((type*)memdup_noscan((void*)&((type[]){expr}[0]), sizeof(type)))

#define _PUSH_MANY(arr, val, tmp, tmp_typ) {tmp_typ tmp = (val); array_push_many(arr, tmp.data, tmp.len);}
#define _PUSH_MANY_noscan(arr, val, tmp, tmp_typ) {tmp_typ tmp = (val); array_push_many_noscan(arr, tmp.data, tmp.len);}

// unsigned/signed comparisons
static inline bool _us32_gt(uint32_t a, int32_t b) { return a > INT32_MAX || (int32_t)a > b; }
static inline bool _us32_ge(uint32_t a, int32_t b) { return a >= INT32_MAX || (int32_t)a >= b; }
static inline bool _us32_eq(uint32_t a, int32_t b) { return a <= INT32_MAX && (int32_t)a == b; }
static inline bool _us32_ne(uint32_t a, int32_t b) { return a > INT32_MAX || (int32_t)a != b; }
static inline bool _us32_le(uint32_t a, int32_t b) { return a <= INT32_MAX && (int32_t)a <= b; }
static inline bool _us32_lt(uint32_t a, int32_t b) { return a < INT32_MAX && (int32_t)a < b; }
static inline bool _us64_gt(uint64_t a, int64_t b) { return a > INT64_MAX || (int64_t)a > b; }
static inline bool _us64_ge(uint64_t a, int64_t b) { return a >= INT64_MAX || (int64_t)a >= b; }
static inline bool _us64_eq(uint64_t a, int64_t b) { return a <= INT64_MAX && (int64_t)a == b; }
static inline bool _us64_ne(uint64_t a, int64_t b) { return a > INT64_MAX || (int64_t)a != b; }
static inline bool _us64_le(uint64_t a, int64_t b) { return a <= INT64_MAX && (int64_t)a <= b; }
static inline bool _us64_lt(uint64_t a, int64_t b) { return a < INT64_MAX && (int64_t)a < b; }

#define EMPTY_VARG_INITIALIZATION 0
#define EMPTY_STRUCT_DECLARATION
#define EMPTY_STRUCT_INITIALIZATION
// Due to a tcc bug, the length of an array needs to be specified, but GCC crashes if it is...
#define EMPTY_ARRAY_OF_ELEMS(x,n) (x[])
#define TCCSKIP(x) x

#define __NOINLINE __attribute__((noinline))
#define __IRQHANDLER __attribute__((interrupt))

#define __V_architecture 0
#if defined(__x86_64__) || defined(_M_AMD64)
	#define __V_amd64  1
	#undef __V_architecture
	#define __V_architecture 1
#endif

#if defined(__aarch64__) || defined(__arm64__) || defined(_M_ARM64)
	#define __V_arm64  1
	#undef __V_architecture
	#define __V_architecture 2
#endif

#if defined(__arm__) || defined(_M_ARM)
	#define __V_arm32  1
	#undef __V_architecture
	#define __V_architecture 3
#endif

#if defined(__riscv) && __riscv_xlen == 64
	#define __V_rv64  1
	#undef __V_architecture
	#define __V_architecture 4
#endif

#if defined(__riscv) && __riscv_xlen == 32
	#define __V_rv32  1
	#undef __V_architecture
	#define __V_architecture 5
#endif

#if defined(__i386__) || defined(_M_IX86)
	#define __V_x86    1
	#undef __V_architecture
	#define __V_architecture 6
#endif

// Using just __GNUC__ for detecting gcc, is not reliable because other compilers define it too:
#ifdef __GNUC__
	#define __V_GCC__
#endif
#ifdef __TINYC__
	#undef __V_GCC__
#endif
#ifdef __cplusplus
	#undef __V_GCC__
#endif
#ifdef __clang__
	#undef __V_GCC__
#endif

#ifdef _MSC_VER
	#undef __V_GCC__
	#undef EMPTY_STRUCT_DECLARATION
	#undef EMPTY_STRUCT_INITIALIZATION
	#define EMPTY_STRUCT_DECLARATION unsigned char _dummy_pad
	#define EMPTY_STRUCT_INITIALIZATION 0
#endif

#ifndef _WIN32
	#if defined __has_include
		#if __has_include (<execinfo.h>)
			#include <execinfo.h>
		#else
			// On linux: int backtrace(void **__array, int __size);
			// On BSD: size_t backtrace(void **, size_t);
		#endif
	#endif
#endif

#ifdef __TINYC__
	#define _Atomic volatile
	#undef EMPTY_STRUCT_DECLARATION
	#undef EMPTY_STRUCT_INITIALIZATION
	#define EMPTY_STRUCT_DECLARATION unsigned char _dummy_pad
	#define EMPTY_STRUCT_INITIALIZATION 0
	#undef EMPTY_ARRAY_OF_ELEMS
	#define EMPTY_ARRAY_OF_ELEMS(x,n) (x[n])
	#undef __NOINLINE
	#undef __IRQHANDLER
	// tcc does not support inlining at all
	#define __NOINLINE
	#define __IRQHANDLER
	#undef TCCSKIP
	#define TCCSKIP(x)
	// #include <byteswap.h>
	#ifndef _WIN32
		int tcc_backtrace(const char *fmt, ...);
	#endif
#endif

// Use __offsetof_ptr instead of __offset_of, when you *do* have a valid pointer, to avoid UB:
#ifndef __offsetof_ptr
	#define __offsetof_ptr(ptr,PTYPE,FIELDNAME) ((size_t)((byte *)&((PTYPE *)ptr)->FIELDNAME - (byte *)ptr))
#endif

// for __offset_of
#ifndef __offsetof
	#define __offsetof(PTYPE,FIELDNAME) ((size_t)(&((PTYPE *)0)->FIELDNAME))
#endif

#define OPTION_CAST(x) (x)

#ifndef V64_PRINTFORMAT
	#ifdef PRIx64
		#define V64_PRINTFORMAT "0x%"PRIx64
	#elif defined(__WIN32__)
		#define V64_PRINTFORMAT "0x%I64x"
	#elif defined(__linux__) && defined(__LP64__)
		#define V64_PRINTFORMAT "0x%lx"
	#else
		#define V64_PRINTFORMAT "0x%llx"
	#endif
#endif

#if defined(_WIN32) || defined(__CYGWIN__)
	#define VV_EXPORTED_SYMBOL extern __declspec(dllexport)
	#define VV_LOCAL_SYMBOL static
#else
	// 4 < gcc < 5 is used by some older Ubuntu LTS and Centos versions,
	// and does not support __has_attribute(visibility) ...
	#ifndef __has_attribute
		#define __has_attribute(x) 0  // Compatibility with non-clang compilers.
	#endif
	#if (defined(__GNUC__) && (__GNUC__ >= 4)) || (defined(__clang__) && __has_attribute(visibility))
		#ifdef ARM
			#define VV_EXPORTED_SYMBOL  extern __attribute__((externally_visible,visibility("default")))
		#else
			#define VV_EXPORTED_SYMBOL  extern __attribute__((visibility("default")))
		#endif
		#if defined(__clang__) && (defined(_VUSECACHE) || defined(_VBUILDMODULE))
			#define VV_LOCAL_SYMBOL static
		#else
			#define VV_LOCAL_SYMBOL  __attribute__ ((visibility ("hidden")))
		#endif
	#else
		#define VV_EXPORTED_SYMBOL extern
		#define VV_LOCAL_SYMBOL static
	#endif
#endif

#ifdef __cplusplus
	#include <utility>
	#define _MOV std::move
#else
	#define _MOV
#endif

// tcc does not support has_include properly yet, turn it off completely
#if defined(__TINYC__) && defined(__has_include)
#undef __has_include
#endif


#if !defined(VWEAK)
	#define VWEAK __attribute__((weak))
	#ifdef _MSC_VER
		#undef VWEAK
		#define VWEAK
	#endif
	#if defined(__MINGW32__) || defined(__MINGW64__)
		#undef VWEAK
		#define VWEAK
	#endif
#endif

#if !defined(VNORETURN)
	#if defined(__TINYC__)
		#include <stdnoreturn.h>
		#define VNORETURN noreturn
	#endif
	# if !defined(__TINYC__) && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
	#  define VNORETURN _Noreturn
	# elif !defined(VNORETURN) && defined(__GNUC__) && __GNUC__ >= 2
	#  define VNORETURN __attribute__((noreturn))
	# endif
	#ifndef VNORETURN
		#define VNORETURN
	#endif
#endif

#if !defined(VUNREACHABLE)
	#if defined(__GNUC__) && !defined(__clang__)
		#define V_GCC_VERSION  (__GNUC__ * 10000L + __GNUC_MINOR__ * 100L + __GNUC_PATCHLEVEL__)
		#if (V_GCC_VERSION >= 40500L) && !defined(__TINYC__)
			#define VUNREACHABLE()  do { __builtin_unreachable(); } while (0)
		#endif
	#endif
	#if defined(__clang__) && defined(__has_builtin) && !defined(__TINYC__)
		#if __has_builtin(__builtin_unreachable)
			#define VUNREACHABLE()  do { __builtin_unreachable(); } while (0)
		#endif
	#endif
	#ifndef VUNREACHABLE
		#define VUNREACHABLE() do { } while (0)
	#endif
#endif

//likely and unlikely macros
#if defined(__GNUC__) || defined(__INTEL_COMPILER) || defined(__clang__)
	#define _likely_(x)  __builtin_expect(x,1)
	#define _unlikely_(x)  __builtin_expect(x,0)
#else
	#define _likely_(x) (x)
	#define _unlikely_(x) (x)
#endif


// c_headers
typedef int (*qsort_callback_func)(const void*, const void*);
#include <stdio.h>  // TODO remove all these includes, define all function signatures and types manually
#include <stdlib.h>
#include <string.h>

#include <stdarg.h> // for va_list

//================================== GLOBALS =================================*/
int load_so(byteptr);
void _vinit(int ___argc, voidptr ___argv);
void _vcleanup(void);
#define sigaction_size sizeof(sigaction);
#define _ARR_LEN(a) ( (sizeof(a)) / (sizeof(a[0])) )

void v_free(voidptr ptr);
//voidptr memdup(voidptr src, isize sz);

#if INTPTR_MAX == INT32_MAX
	#define TARGET_IS_32BIT 1
#elif INTPTR_MAX == INT64_MAX
	#define TARGET_IS_64BIT 1
#else
	#error "The environment is not 32 or 64-bit."
#endif

#if defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__ || defined(__BYTE_ORDER) && __BYTE_ORDER == __BIG_ENDIAN || defined(__BIG_ENDIAN__) || defined(__ARMEB__) || defined(__THUMBEB__) || defined(__AARCH64EB__) || defined(_MIBSEB) || defined(__MIBSEB) || defined(__MIBSEB__)
	#define TARGET_ORDER_IS_BIG 1
#elif defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ || defined(__BYTE_ORDER) && __BYTE_ORDER == __LITTLE_ENDIAN || defined(__LITTLE_ENDIAN__) || defined(__ARMEL__) || defined(__THUMBEL__) || defined(__AARCH64EL__) || defined(_MIPSEL) || defined(__MIPSEL) || defined(__MIPSEL__) || defined(_M_AMD64) || defined(_M_X64) || defined(_M_IX86)
	#define TARGET_ORDER_IS_LITTLE 1
#else
	#error "Unknown architecture endianness"
#endif

#ifndef _WIN32
	#include <ctype.h>
	#include <locale.h> // tolower
	#include <sys/time.h>
	#include <unistd.h> // sleep
	extern char **environ;
#endif

#if defined(__CYGWIN__) && !defined(_WIN32)
	#error Cygwin is not supported, please use MinGW or Visual Studio.
#endif

#if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__vinix__) || defined(__serenity__) || defined(__sun) || defined(__plan9__)
	#include <sys/types.h>
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __OpenBSD__
	#include <sys/types.h>
	#include <sys/resource.h>
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __NetBSD__
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef _WIN32
	#define WINVER 0x0600
	#ifdef _WIN32_WINNT
		#undef _WIN32_WINNT
	#endif
	#define _WIN32_WINNT 0x0600
	#ifndef WIN32_FULL
	#define WIN32_LEAN_AND_MEAN
	#endif
	#ifndef _UNICODE
	#define _UNICODE
	#endif
	#ifndef UNICODE
	#define UNICODE
	#endif
	#include <windows.h>

	#include <io.h> // _waccess
	#include <direct.h> // _wgetcwd
	#ifdef V_USE_SIGNAL_H
	#include <signal.h> // signal and SIGSEGV for segmentation fault handler
	#endif

	#ifdef _MSC_VER
		// On MSVC these are the same (as long as /volatile:ms is passed)
		#define _Atomic volatile

		// MSVC cannot parse some things properly
		#undef OPTION_CAST
		#define OPTION_CAST(x)
		#undef __NOINLINE
		#undef __IRQHANDLER
		#define __NOINLINE __declspec(noinline)
		#define __IRQHANDLER __declspec(naked)

		#include <dbghelp.h>
		#pragma comment(lib, "Dbghelp")
	#endif
#else
	#include <pthread.h>
	#ifndef PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP
		// musl does not have that
		#define pthread_rwlockattr_setkind_np(a, b)
	#endif
#endif

// g_live_info is used by live.info()
static void* g_live_info = NULL;

#if defined(__MINGW32__) || defined(__MINGW64__) || (defined(_WIN32) && defined(__TINYC__))
	#undef PRId64
	#undef PRIi64
	#undef PRIo64
	#undef PRIu64
	#undef PRIx64
	#undef PRIX64
	#define PRId64 "lld"
	#define PRIi64 "lli"
	#define PRIo64 "llo"
	#define PRIu64 "llu"
	#define PRIx64 "llx"
	#define PRIX64 "llX"
#endif

#ifdef _VFREESTANDING
#undef _VFREESTANDING
#endif


// ============== wyhash ==============
#ifndef wyhash_final_version_3
#define wyhash_final_version_3

#ifndef WYHASH_CONDOM
// protections that produce different results:
// 1: normal valid behavior
// 2: extra protection against entropy loss (probability=2^-63), aka. "blind multiplication"
#define WYHASH_CONDOM 1
#endif

#ifndef WYHASH_32BIT_MUM
// 0: normal version, slow on 32 bit systems
// 1: faster on 32 bit systems but produces different results, incompatible with wy2u0k function
#define WYHASH_32BIT_MUM 0
#endif

// includes
#include <stdint.h>
#if defined(_MSC_VER) && defined(_M_X64)
	#include <intrin.h>
	#pragma intrinsic(_umul128)
#endif

// 128bit multiply function
static inline uint64_t _wyrot(uint64_t x) { return (x>>32)|(x<<32); }
static inline void _wymum(uint64_t *A, uint64_t *B){
#if(WYHASH_32BIT_MUM)
	uint64_t hh=(*A>>32)*(*B>>32), hl=(*A>>32)*(uint32_t)*B, lh=(uint32_t)*A*(*B>>32), ll=(uint64_t)(uint32_t)*A*(uint32_t)*B;
	#if(WYHASH_CONDOM>1)
	*A^=_wyrot(hl)^hh; *B^=_wyrot(lh)^ll;
	#else
	*A=_wyrot(hl)^hh; *B=_wyrot(lh)^ll;
	#endif
#elif defined(__SIZEOF_INT128__) && !defined(VWASM)
	__uint128_t r=*A; r*=*B;
	#if(WYHASH_CONDOM>1)
	*A^=(uint64_t)r; *B^=(uint64_t)(r>>64);
	#else
	*A=(uint64_t)r; *B=(uint64_t)(r>>64);
	#endif
#elif defined(_MSC_VER) && defined(_M_X64)
	#if(WYHASH_CONDOM>1)
	uint64_t  a,  b;
	a=_umul128(*A,*B,&b);
	*A^=a;  *B^=b;
	#else
	*A=_umul128(*A,*B,B);
	#endif
#else
	uint64_t ha=*A>>32, hb=*B>>32, la=(uint32_t)*A, lb=(uint32_t)*B, hi, lo;
	uint64_t rh=ha*hb, rm0=ha*lb, rm1=hb*la, rl=la*lb, t=rl+(rm0<<32), c=t<rl;
	lo=t+(rm1<<32); c+=lo<t; hi=rh+(rm0>>32)+(rm1>>32)+c;
	#if(WYHASH_CONDOM>1)
	*A^=lo;  *B^=hi;
	#else
	*A=lo;  *B=hi;
	#endif
#endif
}

// multiply and xor mix function, aka MUM
static inline uint64_t _wymix(uint64_t A, uint64_t B){ _wymum(&A,&B); return A^B; }

// endian macros
#ifndef WYHASH_LITTLE_ENDIAN
	#ifdef TARGET_ORDER_IS_LITTLE
		#define WYHASH_LITTLE_ENDIAN 1
	#else
		#define WYHASH_LITTLE_ENDIAN 0
	#endif
#endif

// read functions
#if (WYHASH_LITTLE_ENDIAN)
	static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return v;}
	static inline uint64_t _wyr4(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return v;}
#elif !defined(__TINYC__) && (defined(__GNUC__) || defined(__INTEL_COMPILER) || defined(__clang__))
	static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return __builtin_bswap64(v);}
	static inline uint64_t _wyr4(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return __builtin_bswap32(v);}
#elif defined(_MSC_VER)
	static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return _byteswap_uint64(v);}
	static inline uint64_t _wyr4(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return _byteswap_ulong(v);}
#else
	static inline uint64_t _wyr8(const uint8_t *p) {
		uint64_t v; memcpy(&v, p, 8);
		return (((v >> 56) & 0xff)| ((v >> 40) & 0xff00)| ((v >> 24) & 0xff0000)| ((v >>  8) & 0xff000000)| ((v <<  8) & 0xff00000000)| ((v << 24) & 0xff0000000000)| ((v << 40) & 0xff000000000000)| ((v << 56) & 0xff00000000000000));
	}
	static inline uint64_t _wyr4(const uint8_t *p) {
		uint32_t v; memcpy(&v, p, 4);
		return (((v >> 24) & 0xff)| ((v >>  8) & 0xff00)| ((v <<  8) & 0xff0000)| ((v << 24) & 0xff000000));
	}
#endif
static inline uint64_t _wyr3(const uint8_t *p, size_t k) { return (((uint64_t)p[0])<<16)|(((uint64_t)p[k>>1])<<8)|p[k-1];}
// wyhash main function
static inline uint64_t wyhash(const void *key, size_t len, uint64_t seed, const uint64_t *secret){
	const uint8_t *p=(const uint8_t *)key; seed^=*secret;	uint64_t a, b;
	if (_likely_(len<=16)) {
		if (_likely_(len>=4)) { a=(_wyr4(p)<<32)|_wyr4(p+((len>>3)<<2)); b=(_wyr4(p+len-4)<<32)|_wyr4(p+len-4-((len>>3)<<2)); }
		else if (_likely_(len>0)) { a=_wyr3(p,len); b=0; }
		else a=b=0;
	} else {
		size_t i=len;
		if (_unlikely_(i>48)) {
			uint64_t see1=seed, see2=seed;
			do {
				seed=_wymix(_wyr8(p)^secret[1],_wyr8(p+8)^seed);
				see1=_wymix(_wyr8(p+16)^secret[2],_wyr8(p+24)^see1);
				see2=_wymix(_wyr8(p+32)^secret[3],_wyr8(p+40)^see2);
				p+=48; i-=48;
			} while(_likely_(i>48));
			seed^=see1^see2;
		}
		while(_unlikely_(i>16)) { seed=_wymix(_wyr8(p)^secret[1],_wyr8(p+8)^seed);  i-=16; p+=16; }
		a=_wyr8(p+i-16);  b=_wyr8(p+i-8);
	}
	return _wymix(secret[1]^len,_wymix(a^secret[1],b^seed));
}
// the default secret parameters
static const uint64_t _wyp[4] = {0xa0761d6478bd642full, 0xe7037ed1a0b428dbull, 0x8ebc6af09c88c6e3ull, 0x589965cc75374cc3ull};

// a useful 64bit-64bit mix function to produce deterministic pseudo random numbers that can pass BigCrush and PractRand
static inline uint64_t wyhash64(uint64_t A, uint64_t B){ A^=0xa0761d6478bd642full; B^=0xe7037ed1a0b428dbull; _wymum(&A,&B); return _wymix(A^0xa0761d6478bd642full,B^0xe7037ed1a0b428dbull);}

// the wyrand PRNG that pass BigCrush and PractRand
static inline uint64_t wyrand(uint64_t *seed){ *seed+=0xa0761d6478bd642full; return _wymix(*seed,*seed^0xe7037ed1a0b428dbull);}

#ifndef __vinix__
// convert any 64 bit pseudo random numbers to uniform distribution [0,1). It can be combined with wyrand, wyhash64 or wyhash.
static inline double wy2u01(uint64_t r){ const double _wynorm=1.0/(1ull<<52); return (r>>12)*_wynorm;}

// convert any 64 bit pseudo random numbers to APPROXIMATE Gaussian distribution. It can be combined with wyrand, wyhash64 or wyhash.
static inline double wy2gau(uint64_t r){ const double _wynorm=1.0/(1ull<<20); return ((r&0x1fffff)+((r>>21)&0x1fffff)+((r>>42)&0x1fffff))*_wynorm-3.0;}
#endif

#if(!WYHASH_32BIT_MUM)
// fast range integer random number generation on [0,k) credit to Daniel Lemire. May not work when WYHASH_32BIT_MUM=1. It can be combined with wyrand, wyhash64 or wyhash.
static inline uint64_t wy2u0k(uint64_t r, uint64_t k){ _wymum(&r,&k); return k; }
#endif
#endif

#define _IN_MAP(val, m) map_exists(m, val)



// V includes:

#if defined(__TINYC__) && defined(__has_include)
// tcc does not support has_include properly yet, turn it off completely
#undef __has_include
#endif

// added by module `builtin`, file: float.c.v:10:

#if defined(__has_include)

#if __has_include(<float.h>)
#include <float.h>
#else
#error VERROR_MESSAGE Header file <float.h>, needed for module `builtin` was not found. Please install the corresponding development headers.
#endif

#else
#include <float.h>
#endif


// added by module `os`, file: fd.c.v:6:

#if defined(__has_include)

#if __has_include(<sys/select.h>)
#include <sys/select.h>
#else
#error VERROR_MESSAGE Header file <sys/select.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/select.h>
#endif


// added by module `os`, file: os.c.v:5:

#if defined(__has_include)

#if __has_include(<sys/stat.h>)
#include <sys/stat.h>
#else
#error VERROR_MESSAGE Header file <sys/stat.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/stat.h>
#endif


// added by module `os`, file: os.c.v:6:
#include <errno.h>

// added by module `os`, file: os_nix.c.v:5:

#if defined(__has_include)

#if __has_include(<dirent.h>)
#include <dirent.h>
#else
#error VERROR_MESSAGE Header file <dirent.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <dirent.h>
#endif


// added by module `os`, file: os_nix.c.v:6:

#if defined(__has_include)

#if __has_include(<unistd.h>)
#include <unistd.h>
#else
#error VERROR_MESSAGE Header file <unistd.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <unistd.h>
#endif


// added by module `os`, file: os_nix.c.v:7:

#if defined(__has_include)

#if __has_include(<fcntl.h>)
#include <fcntl.h>
#else
#error VERROR_MESSAGE Header file <fcntl.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <fcntl.h>
#endif


// added by module `os`, file: os_nix.c.v:8:

#if defined(__has_include)

#if __has_include(<sys/utsname.h>)
#include <sys/utsname.h>
#else
#error VERROR_MESSAGE Header file <sys/utsname.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/utsname.h>
#endif


// added by module `os`, file: os_nix.c.v:9:

#if defined(__has_include)

#if __has_include(<sys/types.h>)
#include <sys/types.h>
#else
#error VERROR_MESSAGE Header file <sys/types.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/types.h>
#endif


// added by module `os`, file: os_nix.c.v:10:

#if defined(__has_include)

#if __has_include(<utime.h>)
#include <utime.h>
#else
#error VERROR_MESSAGE Header file <utime.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <utime.h>
#endif


// added by module `os`, file: signal.c.v:3:

#if defined(__has_include)

#if __has_include(<signal.h>)
#include <signal.h>
#else
#error VERROR_MESSAGE Header file <signal.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <signal.h>
#endif


// added by module `math`, file: math.c.v:6:

#if defined(__has_include)

#if __has_include(<math.h>)
#include <math.h>
#else
#error VERROR_MESSAGE Header file <math.h>, needed for module `math` was not found. Please install the corresponding development headers.
#endif

#else
#include <math.h>
#endif


// added by module `main`, file: Game.v:5:

#if defined(__has_include)

#if __has_include("engine_api.hpp")
#include "engine_api.hpp"
#else
#error VERROR_MESSAGE Header file "engine_api.hpp", needed for module `main` was not found. Please install the corresponding development headers.
#endif

#else
#include "engine_api.hpp"
#endif


// Enum definitions:

typedef enum {
	strconv__ParserState__ok, // 
	strconv__ParserState__pzero, // +1
	strconv__ParserState__mzero, // +2
	strconv__ParserState__pinf, // +3
	strconv__ParserState__minf, // +4
	strconv__ParserState__invalid_number, // +5
}  strconv__ParserState;

typedef enum {
	strconv__Align_text__right = 0, // 0
	strconv__Align_text__left, // 0+1
	strconv__Align_text__center, // 0+2
}  strconv__Align_text;

typedef enum {
	strconv__Char_parse_state__start, // 
	strconv__Char_parse_state__norm_char, // +1
	strconv__Char_parse_state__field_char, // +2
	strconv__Char_parse_state__pad_ch, // +3
	strconv__Char_parse_state__len_set_start, // +4
	strconv__Char_parse_state__len_set_in, // +5
	strconv__Char_parse_state__check_type, // +6
	strconv__Char_parse_state__check_float, // +7
	strconv__Char_parse_state__check_float_in, // +8
	strconv__Char_parse_state__reset_params, // +9
}  strconv__Char_parse_state;

typedef enum {
	ArrayFlags__noslices = 1U, // u64(1) << 0
	ArrayFlags__noshrink = 2U, // u64(1) << 1
	ArrayFlags__nogrow = 4U, // u64(1) << 2
	ArrayFlags__nofree = 8U, // u64(1) << 3
}  ArrayFlags;

typedef enum {
	AttributeKind__plain, // 
	AttributeKind__string, // +1
	AttributeKind__number, // +2
	AttributeKind__comptime_define, // +3
}  AttributeKind;

typedef enum {
	ChanState__success, // 
	ChanState__not_ready, // +1
	ChanState__closed, // +2
}  ChanState;

typedef enum {
	StrIntpType__si_no_str = 0, // 0
	StrIntpType__si_c, // 0+1
	StrIntpType__si_u8, // 0+2
	StrIntpType__si_i8, // 0+3
	StrIntpType__si_u16, // 0+4
	StrIntpType__si_i16, // 0+5
	StrIntpType__si_u32, // 0+6
	StrIntpType__si_i32, // 0+7
	StrIntpType__si_u64, // 0+8
	StrIntpType__si_i64, // 0+9
	StrIntpType__si_e32, // 0+10
	StrIntpType__si_e64, // 0+11
	StrIntpType__si_f32, // 0+12
	StrIntpType__si_f64, // 0+13
	StrIntpType__si_g32, // 0+14
	StrIntpType__si_g64, // 0+15
	StrIntpType__si_s, // 0+16
	StrIntpType__si_p, // 0+17
	StrIntpType__si_r, // 0+18
	StrIntpType__si_vp, // 0+19
}  StrIntpType;

typedef enum {
	os__SeekMode__start, // 
	os__SeekMode__current, // +1
	os__SeekMode__end, // +2
}  os__SeekMode;

typedef enum {
	os__FileType__unknown, // 
	os__FileType__regular, // +1
	os__FileType__directory, // +2
	os__FileType__character_device, // +3
	os__FileType__block_device, // +4
	os__FileType__fifo, // +5
	os__FileType__symbolic_link, // +6
	os__FileType__socket, // +7
}  os__FileType;

typedef enum {
	os__GlobMatch__exact, // 
	os__GlobMatch__ends_with, // +1
	os__GlobMatch__starts_with, // +2
	os__GlobMatch__start_and_ends_with, // +3
	os__GlobMatch__contains, // +4
	os__GlobMatch__any, // +5
}  os__GlobMatch;

typedef enum {
	os__ChildProcessPipeKind__stdin, // 
	os__ChildProcessPipeKind__stdout, // +1
	os__ChildProcessPipeKind__stderr, // +2
}  os__ChildProcessPipeKind;

typedef enum {
	os__ProcessState__not_started, // 
	os__ProcessState__running, // +1
	os__ProcessState__stopped, // +2
	os__ProcessState__exited, // +3
	os__ProcessState__aborted, // +4
	os__ProcessState__closed, // +5
}  os__ProcessState;

typedef enum {
	os__Signal__hup = 1, // 1
	os__Signal__int = 2, // 2
	os__Signal__quit = 3, // 3
	os__Signal__ill = 4, // 4
	os__Signal__trap = 5, // 5
	os__Signal__abrt = 6, // 6
	os__Signal__bus = 7, // 7
	os__Signal__fpe = 8, // 8
	os__Signal__kill = 9, // 9
	os__Signal__usr1 = 10, // 10
	os__Signal__segv = 11, // 11
	os__Signal__usr2 = 12, // 12
	os__Signal__pipe = 13, // 13
	os__Signal__alrm = 14, // 14
	os__Signal__term = 15, // 15
	os__Signal__stkflt = 16, // 16
	os__Signal__chld = 17, // 17
	os__Signal__cont = 18, // 18
	os__Signal__stop = 19, // 19
	os__Signal__tstp = 20, // 20
	os__Signal__ttin = 21, // 21
	os__Signal__ttou = 22, // 22
	os__Signal__urg = 23, // 23
	os__Signal__xcpu = 24, // 24
	os__Signal__xfsz = 25, // 25
	os__Signal__vtalrm = 26, // 26
	os__Signal__prof = 27, // 27
	os__Signal__winch = 28, // 28
	os__Signal__poll = 29, // 29
	os__Signal__pwr = 30, // 30
	os__Signal__sys = 31, // 31
}  os__Signal;

typedef enum {
	main__KEY__escape, // 
	main__KEY__w, // +1
	main__KEY__a, // +2
	main__KEY__s, // +3
	main__KEY__d, // +4
	main__KEY__f, // +5
	main__KEY__o, // +6
	main__KEY__space, // +7
	main__KEY__arrowup, // +8
	main__KEY__arrowdown, // +9
	main__KEY__arrowright, // +10
	main__KEY__arrowleft, // +11
	main__KEY__mouse1, // +12
}  main__KEY;

// Thread definitions:
typedef pthread_t __v_thread;

// V type definitions:
struct IError {
	union {
		void* _object;
		None__* _None__;
		voidptr* _voidptr;
		Error* _Error;
		MessageError* _MessageError;
		os__Eof* _os__Eof;
		os__NotExpected* _os__NotExpected;
		os__FileNotOpenedError* _os__FileNotOpenedError;
		os__SizeOfTypeIs0Error* _os__SizeOfTypeIs0Error;
		os__ExecutableNotFoundError* _os__ExecutableNotFoundError;
	};
	int _typ;
	string* msg;
	int* code;
};

struct string {
	u8* str;
	int len;
	int is_lit;
};

struct array {
	voidptr data;
	int offset;
	int len;
	int cap;
	ArrayFlags flags;
	int element_size;
};

struct DenseArray {
	int key_bytes;
	int value_bytes;
	int cap;
	int len;
	u32 deletes;
	u8* all_deleted;
	u8* keys;
	u8* values;
};

struct map {
	int key_bytes;
	int value_bytes;
	u32 even_index;
	u8 cached_hashbits;
	u8 shift;
	DenseArray key_values;
	u32* metas;
	u32 extra_metas;
	bool has_string_keys;
	MapHashFn hash_fn;
	MapEqFn key_eq_fn;
	MapCloneFn clone_fn;
	MapFreeFn free_fn;
	int len;
};

struct Error {
	EMPTY_STRUCT_DECLARATION;
};

struct _option {
	u8 state;
	IError err;
};

struct _result {
	bool is_error;
	IError err;
};
typedef array Array_string;
typedef array Array_u8;
typedef array Array_voidptr;
typedef array Array_VCastTypeIndexName;
typedef array Array_MethodArgs;
typedef array Array_u8_ptr;
typedef array Array_rune;
typedef string Array_fixed_string_11 [11];
typedef voidptr Array_fixed_voidptr_11 [11];
typedef array Array_int;
typedef array Array_RepIndex;
typedef array Array_u16;
typedef map Map_string_int;
typedef map Map_string_string;
typedef array Array_char_ptr;
typedef int Array_fixed_int_3 [3];
typedef array Array_os__Signal;
typedef char Array_fixed_char_256 [256];
typedef array Array_f64;
typedef u8 Array_fixed_u8_5 [5];
typedef u8 Array_fixed_u8_25 [25];
typedef u8 Array_fixed_u8_32 [32];
typedef u8 Array_fixed_u8_64 [64];
typedef u8 Array_fixed_u8_256 [256];
typedef u64 Array_fixed_u64_309 [309];
typedef u64 Array_fixed_u64_324 [324];
typedef u32 Array_fixed_u32_12 [12];
typedef u64 Array_fixed_u64_20 [20];
typedef u64 Array_fixed_u64_584 [584];
typedef u64 Array_fixed_u64_652 [652];
typedef f64 Array_fixed_f64_20 [20];
typedef u8 Array_fixed_u8_26 [26];
typedef u64 Array_fixed_u64_18 [18];
typedef u64 Array_fixed_u64_47 [47];
typedef u64 Array_fixed_u64_31 [31];
typedef u8 Array_fixed_u8_17 [17];
typedef array Array_StrIntpType;
typedef u8 Array_fixed_u8_4096 [4096];
typedef u8 Array_fixed_u8_1024 [1024];
typedef array Array_os__ProcessState;
typedef int Array_fixed_int_6 [6];
typedef voidptr C__intptr_t;
typedef Array_u8 strings__Builder;
typedef int term__termios__TcFlag;
typedef int term__termios__Speed;
typedef u8 term__termios__Cc;
typedef bool (*anon_fn_voidptr__bool)(voidptr);
typedef voidptr (*anon_fn_voidptr__voidptr)(voidptr);
typedef int (*anon_fn_voidptr_voidptr__int)(voidptr,voidptr);
typedef void (*FnExitCb)();
typedef int (*FnSortCB)(voidptr,voidptr);
typedef void (*anon_fn_string)(string);
typedef void (*os__FnWalkContextCB)(voidptr,string);
typedef void (*os__SignalHandler)(os__Signal);
typedef void (*os__FN_SA_Handler)(int);
// #start sorted_symbols
struct none {
	EMPTY_STRUCT_DECLARATION;
};

struct None__ {
	Error Error;
};

struct StrIntpCgenData {
	string str;
	string fmt;
	string d;
};

struct os__Eof {
	Error Error;
};

struct os__FileNotOpenedError {
	Error Error;
};

struct os__SizeOfTypeIs0Error {
	Error Error;
};

struct os__ExecutableNotFoundError {
	Error Error;
};

struct os__Uname {
	string sysname;
	string nodename;
	string release;
	string version;
	string machine;
};

struct GCHeapUsage {
	usize heap_size;
	usize free_bytes;
	usize total_bytes;
	usize unmapped_bytes;
	usize bytes_since_gc;
};

struct VCastTypeIndexName {
	int tindex;
	string tname;
};

struct VAssertMetaInfo {
	string fpath;
	int line_nr;
	string fn_name;
	string src;
	string op;
	string llabel;
	string rlabel;
	string lvalue;
	string rvalue;
	string message;
	bool has_msg;
};

struct MethodArgs {
	int typ;
	string name;
};

struct FunctionData {
	string name;
	Array_string attrs;
	Array_MethodArgs args;
	int return_type;
	int typ;
};

struct VariantData {
	int typ;
};

struct EnumData {
	string name;
	i64 value;
	Array_string attrs;
};

struct FieldData {
	string name;
	int typ;
	int unaliased_typ;
	Array_string attrs;
	bool is_pub;
	bool is_mut;
	bool is_shared;
	bool is_atomic;
	bool is_option;
	bool is_array;
	bool is_map;
	bool is_chan;
	bool is_enum;
	bool is_struct;
	bool is_alias;
	u8 indirections;
};

struct StructAttribute {
	string name;
	bool has_arg;
	string arg;
	AttributeKind kind;
};

union strconv__Float64u {
	f64 f;
	u64 u;
};

union strconv__Float32u {
	f32 f;
	u32 u;
};

struct Option {
	u8 state;
	IError err;
};

struct MessageError {
	string msg;
	int code;
};

struct SortedMap {
	int value_bytes;
	mapnode* root;
	int len;
};

struct RepIndex {
	int idx;
	int val_idx;
};

union StrIntpMem {
	u32 d_c;
	u8 d_u8;
	i8 d_i8;
	u16 d_u16;
	i16 d_i16;
	u32 d_u32;
	int d_i32;
	u64 d_u64;
	i64 d_i64;
	f32 d_f32;
	f64 d_f64;
	string d_s;
	string d_r;
	voidptr d_p;
	voidptr d_vp;
};

struct strconv__BF_param {
	u8 pad_ch;
	int len0;
	int len1;
	bool positive;
	bool sign_flag;
	strconv__Align_text align;
	strconv__Align_text allign;
	bool rm_tail_zero;
};

struct math__vec__Vec3_T_f32 {
	f32 x;
	f32 y;
	f32 z;
};

struct strconv__PrepNumber {
	bool negative;
	int exponent;
	u64 mantissa;
};

struct strconv__Dec32 {
	u32 m;
	int e;
};

union strconv__Uf32 {
	f32 f;
	u32 u;
};

struct strconv__Dec64 {
	u64 m;
	int e;
};

struct strconv__Uint128 {
	u64 lo;
	u64 hi;
};

union strconv__Uf64 {
	f64 f;
	u64 u;
};

struct os__NotExpected {
	string cause;
	int code;
};

struct os__File {
	voidptr cfile;
	int fd;
	bool is_opened;
};

struct os__FilePermission {
	bool read;
	bool write;
	bool execute;
};

struct os__PathKind {
	bool is_file;
	bool is_dir;
	bool is_link;
};

struct os__Result {
	int exit_code;
	string output;
};

struct os__Command {
	voidptr f;
	bool eof;
	int exit_code;
	string path;
	bool redirect_stdout;
};

struct os__MvParams {
	bool overwrite;
};

struct os__MkdirParams {
	u32 mode;
};

struct strings__textscanner__TextScanner {
	string input;
	int ilen;
	int pos;
};
typedef term__termios__Cc Array_fixed_term__termios__Cc_32 [32];

struct math__DigitParams {
	int base;
	bool reverse;
};

struct math__ChebSeries {
	Array_f64 c;
	int order;
	f64 a;
	f64 b;
};

struct math__vec__Vec2_T_f32 {
	f32 x;
	f32 y;
};

struct math__vec__Vec4_T_f32 {
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct mapnode {
	voidptr* children;
	int len;
	Array_fixed_string_11 keys;
	Array_fixed_voidptr_11 values;
};

struct StrIntpData {
	string str;
	u32 fmt;
	StrIntpMem d;
};

struct main__Player {
	math__vec__Vec3_T_f32 pos;
	math__vec__Vec3_T_f32 dir;
};

struct os__FileMode {
	os__FileType typ;
	os__FilePermission owner;
	os__FilePermission group;
	os__FilePermission others;
};

struct term__termios__Termios {
	term__termios__TcFlag c_iflag;
	term__termios__TcFlag c_oflag;
	term__termios__TcFlag c_cflag;
	term__termios__TcFlag c_lflag;
	term__termios__Cc c_line;
	Array_fixed_term__termios__Cc_32 c_cc;
	term__termios__Speed c_ispeed;
	term__termios__Speed c_ospeed;
};

struct os__Process {
	string filename;
	int pid;
	int code;
	os__ProcessState status;
	string err;
	Array_string args;
	string work_folder;
	bool env_is_custom;
	Array_string env;
	bool use_stdio_ctl;
	bool use_pgroup;
	Array_fixed_int_3 stdio_fd;
	voidptr wdata;
	bool create_no_window;
};

struct os__FileInfo {
	os__FileMode FileMode;
	u64 size;
	i64 mtime;
};
// #end sorted_symbols

// BEGIN_array_fixed_return_structs
// END_array_fixed_return_structs


// BEGIN_multi_return_structs
struct multi_return_u32_u32 {
	u32 arg0;
	u32 arg1;
};

struct multi_return_string_string {
	string arg0;
	string arg1;
};

struct multi_return_int_int {
	int arg0;
	int arg1;
};

struct multi_return_u32_u32_u32 {
	u32 arg0;
	u32 arg1;
	u32 arg2;
};

struct multi_return_strconv__ParserState_strconv__PrepNumber {
	strconv__ParserState arg0;
	strconv__PrepNumber arg1;
};

struct multi_return_u64_int {
	u64 arg0;
	int arg1;
};

struct multi_return_strconv__Dec32_bool {
	strconv__Dec32 arg0;
	bool arg1;
};

struct multi_return_strconv__Dec64_bool {
	strconv__Dec64 arg0;
	bool arg1;
};

struct multi_return_string_int {
	string arg0;
	int arg1;
};

struct multi_return_int_bool {
	int arg0;
	bool arg1;
};

struct multi_return_u64_u64 {
	u64 arg0;
	u64 arg1;
};

struct multi_return_f64_int {
	f64 arg0;
	int arg1;
};

struct multi_return_i64_i64_i64 {
	i64 arg0;
	i64 arg1;
	i64 arg2;
};

struct multi_return_f64_f64 {
	f64 arg0;
	f64 arg1;
};

// END_multi_return_structs

static bool Array_u8_contains(Array_u8 a, u8 v); // auto
static bool Array_string_contains(Array_string a, string v); // auto

// V alias definitions:

// V shared types:

// V Option_xxx definitions:
struct _option_multi_return_string_string {
	byte state;
	IError err;
	byte data[sizeof(multi_return_string_string) > 1 ? sizeof(multi_return_string_string) : 1];
};

struct _option_int {
	byte state;
	IError err;
	byte data[sizeof(int) > 1 ? sizeof(int) : 1];
};

struct _option_u8 {
	byte state;
	IError err;
	byte data[sizeof(u8) > 1 ? sizeof(u8) : 1];
};

struct _option_string {
	byte state;
	IError err;
	byte data[sizeof(string) > 1 ? sizeof(string) : 1];
};


// V result_xxx definitions:
struct _result_int {
	bool is_error;
	IError err;
	byte data[sizeof(int) > 1 ? sizeof(int) : 1];
};

struct _result_f64 {
	bool is_error;
	IError err;
	byte data[sizeof(f64) > 1 ? sizeof(f64) : 1];
};

struct _result_u64 {
	bool is_error;
	IError err;
	byte data[sizeof(u64) > 1 ? sizeof(u64) : 1];
};

struct _result_i64 {
	bool is_error;
	IError err;
	byte data[sizeof(i64) > 1 ? sizeof(i64) : 1];
};

struct _result_rune {
	bool is_error;
	IError err;
	byte data[sizeof(rune) > 1 ? sizeof(rune) : 1];
};

struct _result_string {
	bool is_error;
	IError err;
	byte data[sizeof(string) > 1 ? sizeof(string) : 1];
};

struct _result_os__File {
	bool is_error;
	IError err;
	byte data[sizeof(os__File) > 1 ? sizeof(os__File) : 1];
};

struct _result_FILE_ptr {
	bool is_error;
	IError err;
	byte data[sizeof(FILE*) > 1 ? sizeof(FILE*) : 1];
};

struct _result_void {
	bool is_error;
	IError err;
	byte data[sizeof(u8) > 1 ? sizeof(u8) : 1];
};

struct _result_Array_u8 {
	bool is_error;
	IError err;
	byte data[sizeof(Array_u8) > 1 ? sizeof(Array_u8) : 1];
};

struct _result_strings__Builder {
	bool is_error;
	IError err;
	byte data[sizeof(strings__Builder) > 1 ? sizeof(strings__Builder) : 1];
};

struct _result_Array_string {
	bool is_error;
	IError err;
	byte data[sizeof(Array_string) > 1 ? sizeof(Array_string) : 1];
};

struct _result_os__Result {
	bool is_error;
	IError err;
	byte data[sizeof(os__Result) > 1 ? sizeof(os__Result) : 1];
};

struct _result_anon_fn_os__signal {
	bool is_error;
	IError err;
	byte data[sizeof(void*) > 1 ? sizeof(void*) : 1];
};


// V json forward decls:

// V definitions:
static char * v_typeof_interface_IError(int sidx);
// end of definitions #endif
strings__Builder strings__new_builder(int initial_size);
Array_u8 strings__Builder_reuse_as_plain_u8_array(strings__Builder* b);
void strings__Builder_write_ptr(strings__Builder* b, u8* ptr, int len);
void strings__Builder_write_rune(strings__Builder* b, rune r);
void strings__Builder_write_runes(strings__Builder* b, Array_rune runes);
void strings__Builder_clear(strings__Builder* b);
void strings__Builder_write_u8(strings__Builder* b, u8 data);
void strings__Builder_write_byte(strings__Builder* b, u8 data);
void strings__Builder_write_decimal(strings__Builder* b, i64 n);
_result_int strings__Builder_write(strings__Builder* b, Array_u8 data);
void strings__Builder_drain_builder(strings__Builder* b, strings__Builder* other, int other_new_cap);
u8 strings__Builder_byte_at(strings__Builder* b, int n);
void strings__Builder_write_string(strings__Builder* b, string s);
void strings__Builder_writeln_string(strings__Builder* b, string s);
void strings__Builder_go_back(strings__Builder* b, int n);
VV_LOCAL_SYMBOL string strings__Builder_spart(strings__Builder* b, int start_pos, int n);
string strings__Builder_cut_last(strings__Builder* b, int n);
string strings__Builder_cut_to(strings__Builder* b, int pos);
void strings__Builder_go_back_to(strings__Builder* b, int pos);
void strings__Builder_writeln(strings__Builder* b, string s);
string strings__Builder_last_n(strings__Builder* b, int n);
string strings__Builder_after(strings__Builder* b, int n);
string strings__Builder_str(strings__Builder* b);
void strings__Builder_ensure_cap(strings__Builder* b, int n);
void strings__Builder_free(strings__Builder* b);
VV_LOCAL_SYMBOL u16 strings__imin(u16 x, u16 y);
int strings__levenshtein_distance(string a, string b);
f32 strings__levenshtein_distance_percentage(string a, string b);
f32 strings__dice_coefficient(string s1, string s2);
string strings__repeat(u8 c, int n);
string strings__repeat_string(string s, int n);
string strings__find_between_pair_u8(string input, u8 start, u8 end);
string strings__find_between_pair_rune(string input, rune start, rune end);
string strings__find_between_pair_string(string input, string start, string end);
Array_string strings__split_capital(string s);
int math__bits__leading_zeros_8(u8 x);
int math__bits__leading_zeros_16(u16 x);
int math__bits__leading_zeros_32(u32 x);
int math__bits__leading_zeros_64(u64 x);
int math__bits__trailing_zeros_8(u8 x);
int math__bits__trailing_zeros_16(u16 x);
int math__bits__trailing_zeros_32(u32 x);
int math__bits__trailing_zeros_64(u64 x);
int math__bits__ones_count_8(u8 x);
int math__bits__ones_count_16(u16 x);
int math__bits__ones_count_32(u32 x);
int math__bits__ones_count_64(u64 x);
u8 math__bits__rotate_left_8(u8 x, int k);
u16 math__bits__rotate_left_16(u16 x, int k);
u32 math__bits__rotate_left_32(u32 x, int k);
u64 math__bits__rotate_left_64(u64 x, int k);
u8 math__bits__reverse_8(u8 x);
u16 math__bits__reverse_16(u16 x);
u32 math__bits__reverse_32(u32 x);
u64 math__bits__reverse_64(u64 x);
u16 math__bits__reverse_bytes_16(u16 x);
u32 math__bits__reverse_bytes_32(u32 x);
u64 math__bits__reverse_bytes_64(u64 x);
int math__bits__len_8(u8 x);
int math__bits__len_16(u16 x);
int math__bits__len_32(u32 x);
int math__bits__len_64(u64 x);
multi_return_u32_u32 math__bits__add_32(u32 x, u32 y, u32 carry);
multi_return_u64_u64 math__bits__add_64(u64 x, u64 y, u64 carry);
multi_return_u32_u32 math__bits__sub_32(u32 x, u32 y, u32 borrow);
multi_return_u64_u64 math__bits__sub_64(u64 x, u64 y, u64 borrow);
multi_return_u32_u32 math__bits__mul_32(u32 x, u32 y);
multi_return_u64_u64 math__bits__mul_64(u64 x, u64 y);
multi_return_u32_u32 math__bits__div_32(u32 hi, u32 lo, u32 y);
multi_return_u64_u64 math__bits__div_64(u64 hi, u64 lo, u64 y1);
u32 math__bits__rem_32(u32 hi, u32 lo, u32 y);
u64 math__bits__rem_64(u64 hi, u64 lo, u64 y);
multi_return_f64_int math__bits__normalize(f64 x);
u32 math__bits__f32_bits(f32 f);
f32 math__bits__f32_from_bits(u32 b);
u64 math__bits__f64_bits(f64 f);
f64 math__bits__f64_from_bits(u64 b);
VV_LOCAL_SYMBOL multi_return_u32_u32_u32 strconv__lsr96(u32 s2, u32 s1, u32 s0);
VV_LOCAL_SYMBOL multi_return_u32_u32_u32 strconv__lsl96(u32 s2, u32 s1, u32 s0);
VV_LOCAL_SYMBOL multi_return_u32_u32_u32 strconv__add96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0);
VV_LOCAL_SYMBOL multi_return_u32_u32_u32 strconv__sub96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0);
VV_LOCAL_SYMBOL bool strconv__is_digit(u8 x);
VV_LOCAL_SYMBOL bool strconv__is_space(u8 x);
VV_LOCAL_SYMBOL bool strconv__is_exp(u8 x);
VV_LOCAL_SYMBOL multi_return_strconv__ParserState_strconv__PrepNumber strconv__parser(string s);
VV_LOCAL_SYMBOL u64 strconv__converter(strconv__PrepNumber* pn);
_result_f64 strconv__atof64(string s);
f64 strconv__atof_quick(string s);
u8 strconv__byte_to_lower(u8 c);
_result_u64 strconv__common_parse_uint(string s, int _base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit);
multi_return_u64_int strconv__common_parse_uint2(string s, int _base, int _bit_size);
_result_u64 strconv__parse_uint(string s, int _base, int _bit_size);
_result_i64 strconv__common_parse_int(string _s, int base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit);
_result_i64 strconv__parse_int(string _s, int base, int _bit_size);
_result_int strconv__atoi(string s);
string strconv__Dec32_get_string_32(strconv__Dec32 d, bool neg, int i_n_digit, int i_pad_digit);
VV_LOCAL_SYMBOL multi_return_strconv__Dec32_bool strconv__f32_to_decimal_exact_int(u32 i_mant, u32 exp);
VV_LOCAL_SYMBOL strconv__Dec32 strconv__f32_to_decimal(u32 mant, u32 exp);
string strconv__f32_to_str(f32 f, int n_digit);
string strconv__f32_to_str_pad(f32 f, int n_digit);
VV_LOCAL_SYMBOL string strconv__Dec64_get_string_64(strconv__Dec64 d, bool neg, int i_n_digit, int i_pad_digit);
VV_LOCAL_SYMBOL multi_return_strconv__Dec64_bool strconv__f64_to_decimal_exact_int(u64 i_mant, u64 exp);
VV_LOCAL_SYMBOL strconv__Dec64 strconv__f64_to_decimal(u64 mant, u64 exp);
string strconv__f64_to_str(f64 f, int n_digit);
string strconv__f64_to_str_pad(f64 f, int n_digit);
string strconv__format_str(string s, strconv__BF_param p);
void strconv__format_str_sb(string s, strconv__BF_param p, strings__Builder* sb);
void strconv__format_dec_sb(u64 d, strconv__BF_param p, strings__Builder* res);
string strconv__f64_to_str_lnd1(f64 f, int dec_digit);
string strconv__format_fl(f64 f, strconv__BF_param p);
string strconv__format_es(f64 f, strconv__BF_param p);
string strconv__remove_tail_zeros(string s);
string strconv__ftoa_64(f64 f);
string strconv__ftoa_long_64(f64 f);
string strconv__ftoa_32(f32 f);
string strconv__ftoa_long_32(f32 f);
string strconv__format_int(i64 n, int radix);
string strconv__format_uint(u64 n, int radix);
string strconv__f32_to_str_l(f32 f);
string strconv__f32_to_str_l_with_dot(f32 f);
string strconv__f64_to_str_l(f64 f);
string strconv__f64_to_str_l_with_dot(f64 f);
string strconv__fxx_to_str_l_parse(string s);
string strconv__fxx_to_str_l_parse_with_dot(string s);
VV_LOCAL_SYMBOL int strconv__bool_to_int(bool b);
VV_LOCAL_SYMBOL u32 strconv__bool_to_u32(bool b);
VV_LOCAL_SYMBOL u64 strconv__bool_to_u64(bool b);
VV_LOCAL_SYMBOL string strconv__get_string_special(bool neg, bool expZero, bool mantZero);
VV_LOCAL_SYMBOL u32 strconv__mul_shift_32(u32 m, u64 mul, int ishift);
VV_LOCAL_SYMBOL u32 strconv__mul_pow5_invdiv_pow2(u32 m, u32 q, int j);
VV_LOCAL_SYMBOL u32 strconv__mul_pow5_div_pow2(u32 m, u32 i, int j);
VV_LOCAL_SYMBOL u32 strconv__pow5_factor_32(u32 i_v);
VV_LOCAL_SYMBOL bool strconv__multiple_of_power_of_five_32(u32 v, u32 p);
VV_LOCAL_SYMBOL bool strconv__multiple_of_power_of_two_32(u32 v, u32 p);
VV_LOCAL_SYMBOL u32 strconv__log10_pow2(int e);
VV_LOCAL_SYMBOL u32 strconv__log10_pow5(int e);
VV_LOCAL_SYMBOL int strconv__pow5_bits(int e);
VV_LOCAL_SYMBOL u64 strconv__shift_right_128(strconv__Uint128 v, int shift);
VV_LOCAL_SYMBOL u64 strconv__mul_shift_64(u64 m, strconv__Uint128 mul, int shift);
VV_LOCAL_SYMBOL u32 strconv__pow5_factor_64(u64 v_i);
VV_LOCAL_SYMBOL bool strconv__multiple_of_power_of_five_64(u64 v, u32 p);
VV_LOCAL_SYMBOL bool strconv__multiple_of_power_of_two_64(u64 v, u32 p);
int strconv__dec_digits(u64 n);
void strconv__v_printf(string str, Array_voidptr pt);
string strconv__v_sprintf(string str, Array_voidptr pt);
VV_LOCAL_SYMBOL void strconv__v_sprintf_panic(int idx, int len);
VV_LOCAL_SYMBOL f64 strconv__fabs(f64 x);
string strconv__format_fl_old(f64 f, strconv__BF_param p);
VV_LOCAL_SYMBOL string strconv__format_es_old(f64 f, strconv__BF_param p);
VV_LOCAL_SYMBOL string strconv__remove_tail_zeros_old(string s);
string strconv__format_dec_old(u64 d, strconv__BF_param p);
VV_LOCAL_SYMBOL array __new_array(int mylen, int cap, int elm_size);
VV_LOCAL_SYMBOL array __new_array_with_default(int mylen, int cap, int elm_size, voidptr val);
VV_LOCAL_SYMBOL array __new_array_with_multi_default(int mylen, int cap, int elm_size, voidptr val);
VV_LOCAL_SYMBOL array __new_array_with_array_default(int mylen, int cap, int elm_size, array val, int depth);
VV_LOCAL_SYMBOL array __new_array_with_map_default(int mylen, int cap, int elm_size, map val);
VV_LOCAL_SYMBOL array new_array_from_c_array(int len, int cap, int elm_size, voidptr c_array);
VV_LOCAL_SYMBOL array new_array_from_c_array_no_alloc(int len, int cap, int elm_size, voidptr c_array);
VV_LOCAL_SYMBOL void array_ensure_cap(array* a, int required);
array array_repeat(array a, int count);
array array_repeat_to_depth(array a, int count, int depth);
void array_insert(array* a, int i, voidptr val);
VV_LOCAL_SYMBOL void array_insert_many(array* a, int i, voidptr val, int size);
void array_prepend(array* a, voidptr val);
VV_LOCAL_SYMBOL void array_prepend_many(array* a, voidptr val, int size);
void array_delete(array* a, int i);
void array_delete_many(array* a, int i, int size);
void array_clear(array* a);
void array_reset(array* a);
void array_trim(array* a, int index);
void array_drop(array* a, int num);
VV_LOCAL_SYMBOL voidptr array_get_unsafe(array a, int i);
VV_LOCAL_SYMBOL voidptr array_get(array a, int i);
VV_LOCAL_SYMBOL voidptr array_get_with_check(array a, int i);
voidptr array_first(array a);
voidptr array_last(array a);
voidptr array_pop(array* a);
void array_delete_last(array* a);
VV_LOCAL_SYMBOL array array_slice(array a, int start, int _end);
VV_LOCAL_SYMBOL array array_slice_ni(array a, int _start, int _end);
VV_LOCAL_SYMBOL array array_clone_static_to_depth(array a, int depth);
array array_clone(array* a);
array array_clone_to_depth(array* a, int depth);
VV_LOCAL_SYMBOL void array_set_unsafe(array* a, int i, voidptr val);
VV_LOCAL_SYMBOL void array_set(array* a, int i, voidptr val);
VV_LOCAL_SYMBOL void array_push(array* a, voidptr val);
void array_push_many(array* a3, voidptr val, int size);
void array_reverse_in_place(array* a);
array array_reverse(array a);
void array_free(array* a);
array array_filter(array a, bool (*predicate)(voidptr ));
bool array_any(array a, bool (*predicate)(voidptr ));
bool array_all(array a, bool (*predicate)(voidptr ));
array array_map(array a, voidptr (*callback)(voidptr ));
void array_sort(array* a, int (*callback)(voidptr , voidptr ));
array array_sorted(array* a, int (*callback)(voidptr , voidptr ));
void array_sort_with_compare(array* a, int (*callback)(voidptr , voidptr ));
array array_sorted_with_compare(array* a, int (*callback)(voidptr , voidptr ));
bool array_contains(array a, voidptr value);
int array_index(array a, voidptr value);
void Array_string_free(Array_string* a);
string Array_string_str(Array_string a);
string Array_u8_hex(Array_u8 b);
int copy(Array_u8* dst, Array_u8 src);
void array_grow_cap(array* a, int amount);
void array_grow_len(array* a, int amount);
Array_voidptr array_pointers(array a);
Array_u8 voidptr_vbytes(voidptr data, int len);
Array_u8 u8_vbytes(u8* data, int len);
VV_LOCAL_SYMBOL array __new_array_noscan(int mylen, int cap, int elm_size);
VV_LOCAL_SYMBOL array __new_array_with_default_noscan(int mylen, int cap, int elm_size, voidptr val);
VV_LOCAL_SYMBOL array __new_array_with_multi_default_noscan(int mylen, int cap, int elm_size, voidptr val);
VV_LOCAL_SYMBOL array __new_array_with_array_default_noscan(int mylen, int cap, int elm_size, array val, int depth);
void print_backtrace(void);
VV_LOCAL_SYMBOL bool print_backtrace_skipping_top_frames(int xskipframes);
VV_LOCAL_SYMBOL bool print_backtrace_skipping_top_frames_bsd(int skipframes);
VV_LOCAL_SYMBOL bool print_backtrace_skipping_top_frames_linux(int skipframes);
VV_LOCAL_SYMBOL void vhalt(void);
VV_LOCAL_SYMBOL void v_segmentation_fault_handler(int signal_number);
void _v_exit(int code);
VV_LOCAL_SYMBOL void panic_debug(int line_no, string file, string mod, string fn_name, string s);
void panic_option_not_set(string s);
void panic_result_not_set(string s);
void _v_panic(string s);
string c_error_number_str(int errnum);
void panic_error_number(string basestr, int errnum);
void eprintln(string s);
void eprint(string s);
void flush_stdout(void);
void flush_stderr(void);
void print(string s);
void println(string s);
VV_LOCAL_SYMBOL void _writeln_to_fd(int fd, string s);
VV_LOCAL_SYMBOL void _write_buf_to_fd(int fd, u8* buf, int buf_len);
u8* _v_malloc(isize n);
u8* malloc_noscan(isize n);
VV_LOCAL_SYMBOL u64 __at_least_one(u64 how_many);
u8* malloc_uncollectable(isize n);
u8* v_realloc(u8* b, isize n);
u8* realloc_data(u8* old_data, int old_size, int new_size);
u8* vcalloc(isize n);
u8* vcalloc_noscan(isize n);
void _v_free(voidptr ptr);
voidptr memdup(voidptr src, isize sz);
voidptr memdup_noscan(voidptr src, isize sz);
voidptr memdup_uncollectable(voidptr src, isize sz);
GCHeapUsage gc_heap_usage(void);
usize gc_memory_use(void);
VV_LOCAL_SYMBOL int v_fixed_index(int i, int len);
bool isnil(voidptr v);
VV_LOCAL_SYMBOL voidptr __as_cast(voidptr obj, int obj_type, int expected_type);
void VAssertMetaInfo_free(VAssertMetaInfo* ami);
VV_LOCAL_SYMBOL void __print_assert_failure(VAssertMetaInfo* i);
VV_LOCAL_SYMBOL void builtin_init(void);
VV_LOCAL_SYMBOL void break_if_debugger_attached(void);
void panic_lasterr(string base);
void gc_check_leaks(void);
VV_LOCAL_SYMBOL void print_libbacktrace(int frames_to_skip);
VV_LOCAL_SYMBOL void eprint_libbacktrace(int frames_to_skip);
int proc_pidpath(int , voidptr , int );
int vstrlen(u8* s);
int vstrlen_char(char* s);
voidptr vmemcpy(voidptr dest, const voidptr const_src, isize n);
voidptr vmemmove(voidptr dest, const voidptr const_src, isize n);
int vmemcmp(const voidptr const_s1, const voidptr const_s2, isize n);
voidptr vmemset(voidptr s, int c, isize n);
VV_LOCAL_SYMBOL void vqsort(voidptr base, usize nmemb, usize size, int (*sort_cb)(const voidptr const_a, const voidptr const_b));
void chan_close(chan ch);
ChanState chan_try_pop(chan ch, voidptr obj);
ChanState chan_try_push(chan ch, voidptr obj);
int input_character(void);
int print_character(u8 ch);
string f64_str(f64 x);
string f64_strg(f64 x);
string float_literal_str(float_literal d);
string f64_strsci(f64 x, int digit_num);
string f64_strlong(f64 x);
string f32_str(f32 x);
string f32_strg(f32 x);
string f32_strsci(f32 x, int digit_num);
string f32_strlong(f32 x);
f32 f32_abs(f32 a);
VV_LOCAL_SYMBOL f64 f64_abs(f64 a);
f32 f32_max(f32 a, f32 b);
f32 f32_min(f32 a, f32 b);
f64 f64_max(f64 a, f64 b);
VV_LOCAL_SYMBOL f64 f64_min(f64 a, f64 b);
bool f32_eq_epsilon(f32 a, f32 b);
bool f64_eq_epsilon(f64 a, f64 b);
VV_LOCAL_SYMBOL void float_test(void);
string ptr_str(voidptr ptr);
string isize_str(isize x);
string usize_str(usize x);
string char_str(char* cptr);
VV_LOCAL_SYMBOL string int_str_l(int nn, int max);
string i8_str(i8 n);
string i16_str(i16 n);
string u16_str(u16 n);
string i32_str(i32 n);
string int_hex_full(int nn);
string int_str(int n);
string u32_str(u32 nn);
string int_literal_str(int_literal n);
string i64_str(i64 nn);
string u64_str(u64 nn);
string bool_str(bool b);
VV_LOCAL_SYMBOL string u64_to_hex(u64 nn, u8 len);
VV_LOCAL_SYMBOL string u64_to_hex_no_leading_zeros(u64 nn, u8 len);
string u8_hex(u8 nn);
string i8_hex(i8 nn);
string u16_hex(u16 nn);
string i16_hex(i16 nn);
string u32_hex(u32 nn);
string int_hex(int nn);
string int_hex2(int n);
string u64_hex(u64 nn);
string i64_hex(i64 nn);
string int_literal_hex(int_literal nn);
string voidptr_str(voidptr nn);
string byteptr_str(byteptr nn);
string charptr_str(charptr nn);
string u8_hex_full(u8 nn);
string i8_hex_full(i8 nn);
string u16_hex_full(u16 nn);
string i16_hex_full(i16 nn);
string u32_hex_full(u32 nn);
string i64_hex_full(i64 nn);
string voidptr_hex_full(voidptr nn);
string int_literal_hex_full(int_literal nn);
string u64_hex_full(u64 nn);
string u8_str(u8 b);
string u8_ascii_str(u8 b);
string u8_str_escaped(u8 b);
bool u8_is_capital(u8 c);
string Array_u8_bytestr(Array_u8 b);
_result_rune Array_u8_byterune(Array_u8 b);
string u8_repeat(u8 b, int count);
VV_LOCAL_SYMBOL string _Atomic__int_str(int x);
VV_LOCAL_SYMBOL bool fast_string_eq(string a, string b);
VV_LOCAL_SYMBOL u64 map_hash_string(voidptr pkey);
VV_LOCAL_SYMBOL u64 map_hash_int_1(voidptr pkey);
VV_LOCAL_SYMBOL u64 map_hash_int_2(voidptr pkey);
VV_LOCAL_SYMBOL u64 map_hash_int_4(voidptr pkey);
VV_LOCAL_SYMBOL u64 map_hash_int_8(voidptr pkey);
VV_LOCAL_SYMBOL void DenseArray_zeros_to_end(DenseArray* d);
VV_LOCAL_SYMBOL DenseArray new_dense_array(int key_bytes, int value_bytes);
VV_LOCAL_SYMBOL voidptr DenseArray_key(DenseArray* d, int i);
VV_LOCAL_SYMBOL voidptr DenseArray_value(DenseArray* d, int i);
VV_LOCAL_SYMBOL bool DenseArray_has_index(DenseArray* d, int i);
VV_LOCAL_SYMBOL int DenseArray_expand(DenseArray* d);
VV_LOCAL_SYMBOL bool map_eq_string(voidptr a, voidptr b);
VV_LOCAL_SYMBOL bool map_eq_int_1(voidptr a, voidptr b);
VV_LOCAL_SYMBOL bool map_eq_int_2(voidptr a, voidptr b);
VV_LOCAL_SYMBOL bool map_eq_int_4(voidptr a, voidptr b);
VV_LOCAL_SYMBOL bool map_eq_int_8(voidptr a, voidptr b);
VV_LOCAL_SYMBOL void map_clone_string(voidptr dest, voidptr pkey);
VV_LOCAL_SYMBOL void map_clone_int_1(voidptr dest, voidptr pkey);
VV_LOCAL_SYMBOL void map_clone_int_2(voidptr dest, voidptr pkey);
VV_LOCAL_SYMBOL void map_clone_int_4(voidptr dest, voidptr pkey);
VV_LOCAL_SYMBOL void map_clone_int_8(voidptr dest, voidptr pkey);
VV_LOCAL_SYMBOL void map_free_string(voidptr pkey);
VV_LOCAL_SYMBOL void map_free_nop(voidptr _d1);
VV_LOCAL_SYMBOL map new_map(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ));
VV_LOCAL_SYMBOL map new_map_init(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values);
map map_move(map* m);
void map_clear(map* m);
VV_LOCAL_SYMBOL multi_return_u32_u32 map_key_to_index(map* m, voidptr pkey);
VV_LOCAL_SYMBOL multi_return_u32_u32 map_meta_less(map* m, u32 _index, u32 _metas);
VV_LOCAL_SYMBOL void map_meta_greater(map* m, u32 _index, u32 _metas, u32 kvi);
VV_LOCAL_SYMBOL void map_ensure_extra_metas(map* m, u32 probe_count);
VV_LOCAL_SYMBOL void map_set(map* m, voidptr key, voidptr value);
VV_LOCAL_SYMBOL void map_expand(map* m);
VV_LOCAL_SYMBOL void map_rehash(map* m);
void map_reserve(map* m, u32 meta_bytes);
VV_LOCAL_SYMBOL void map_cached_rehash(map* m, u32 old_cap);
VV_LOCAL_SYMBOL voidptr map_get_and_set(map* m, voidptr key, voidptr zero);
VV_LOCAL_SYMBOL voidptr map_get(map* m, voidptr key, voidptr zero);
VV_LOCAL_SYMBOL voidptr map_get_check(map* m, voidptr key);
VV_LOCAL_SYMBOL bool map_exists(map* m, voidptr key);
VV_LOCAL_SYMBOL void DenseArray_delete(DenseArray* d, int i);
void map_delete(map* m, voidptr key);
array map_keys(map* m);
array map_values(map* m);
VV_LOCAL_SYMBOL DenseArray DenseArray_clone(DenseArray* d);
map map_clone(map* m);
void map_free(map* m);
void IError_free(IError* ie);
VV_LOCAL_SYMBOL void _option_none(voidptr data, _option* option, int size);
VV_LOCAL_SYMBOL void _option_ok(voidptr data, _option* option, int size);
VV_LOCAL_SYMBOL string None___str(None__ _d1);
string none_str(none _d2);
VV_LOCAL_SYMBOL void _result_ok(voidptr data, _result* res, int size);
string IError_str(IError err);
string Error_msg(Error err);
int Error_code(Error err);
string MessageError_msg(MessageError err);
int MessageError_code(MessageError err);
void MessageError_free(MessageError* err);
IError _v_error(string message);
IError error_with_code(string message, int code);
string rune_str(rune c);
string Array_rune_string(Array_rune ra);
string rune_repeat(rune c, int count);
Array_u8 rune_bytes(rune c);
int rune_length_in_bytes(rune c);
VV_LOCAL_SYMBOL SortedMap new_sorted_map(int n, int value_bytes);
VV_LOCAL_SYMBOL SortedMap new_sorted_map_init(int n, int value_bytes, string* keys, voidptr values);
VV_LOCAL_SYMBOL mapnode* new_node(void);
VV_LOCAL_SYMBOL void SortedMap_set(SortedMap* m, string key, voidptr value);
VV_LOCAL_SYMBOL void mapnode_split_child(mapnode* n, int child_index, mapnode* y);
VV_LOCAL_SYMBOL bool SortedMap_get(SortedMap m, string key, voidptr out);
VV_LOCAL_SYMBOL bool SortedMap_exists(SortedMap m, string key);
VV_LOCAL_SYMBOL int mapnode_find_key(mapnode* n, string k);
VV_LOCAL_SYMBOL bool mapnode_remove_key(mapnode* n, string k);
VV_LOCAL_SYMBOL void mapnode_remove_from_leaf(mapnode* n, int idx);
VV_LOCAL_SYMBOL void mapnode_remove_from_non_leaf(mapnode* n, int idx);
VV_LOCAL_SYMBOL void mapnode_fill(mapnode* n, int idx);
VV_LOCAL_SYMBOL void mapnode_borrow_from_prev(mapnode* n, int idx);
VV_LOCAL_SYMBOL void mapnode_borrow_from_next(mapnode* n, int idx);
VV_LOCAL_SYMBOL void mapnode_merge(mapnode* n, int idx);
void SortedMap_delete(SortedMap* m, string key);
VV_LOCAL_SYMBOL int mapnode_subkeys(mapnode* n, Array_string* keys, int at);
Array_string SortedMap_keys(SortedMap* m);
VV_LOCAL_SYMBOL void mapnode_free(mapnode* n);
void SortedMap_free(SortedMap* m);
void SortedMap_print(SortedMap m);
Array_rune string_runes(string s);
string cstring_to_vstring(char* s);
string tos_clone(u8* s);
string tos(u8* s, int len);
string tos2(u8* s);
string tos3(char* s);
string tos4(u8* s);
string tos5(char* s);
string u8_vstring(u8* bp);
string u8_vstring_with_len(u8* bp, int len);
string char_vstring(char* cp);
string char_vstring_with_len(char* cp, int len);
string u8_vstring_literal(u8* bp);
string u8_vstring_literal_with_len(u8* bp, int len);
string char_vstring_literal(char* cp);
string char_vstring_literal_with_len(char* cp, int len);
int string_len_utf8(string s);
VV_LOCAL_SYMBOL string string_clone_static(string a);
string string_clone(string a);
string string_replace_once(string s, string rep, string with);
string string_replace(string s, string rep, string with);
string string_replace_each(string s, Array_string vals);
VV_LOCAL_SYMBOL  int compare_17357643468967463433_RepIndex_by_idx(RepIndex* a, RepIndex* b) {
	if (a->idx < b->idx) return -1;
	else return 1;
}

string string_replace_char(string s, u8 rep, u8 with, int repeat);
string string_normalize_tabs(string s, int tab_len);
bool string_bool(string s);
int string_int(string s);
i64 string_i64(string s);
i8 string_i8(string s);
i16 string_i16(string s);
f32 string_f32(string s);
f64 string_f64(string s);
u8 string_u8(string s);
u16 string_u16(string s);
u32 string_u32(string s);
u64 string_u64(string s);
_result_u64 string_parse_uint(string s, int _base, int _bit_size);
_result_i64 string_parse_int(string s, int _base, int _bit_size);
VV_LOCAL_SYMBOL bool string__eq(string s, string a);
int string_compare(string s, string a);
VV_LOCAL_SYMBOL bool string__lt(string s, string a);
VV_LOCAL_SYMBOL string string__plus(string s, string a);
Array_string string_split_any(string s, string delim);
Array_string string_rsplit_any(string s, string delim);
Array_string string_split(string s, string delim);
Array_string string_rsplit(string s, string delim);
_option_multi_return_string_string string_split_once(string s, string delim);
_option_multi_return_string_string string_rsplit_once(string s, string delim);
Array_string string_split_nth(string s, string delim, int nth);
Array_string string_rsplit_nth(string s, string delim, int nth);
Array_string string_split_into_lines(string s);
string string_substr(string s, int start, int _end);
string string_substr_unsafe(string s, int start, int _end);
_result_string string_substr_with_check(string s, int start, int _end);
string string_substr_ni(string s, int _start, int _end);
VV_LOCAL_SYMBOL int string_index_(string s, string p);
_option_int string_index(string s, string p);
_option_int string_index_last(string s, string needle);
_option_int string_last_index(string s, string needle);
VV_LOCAL_SYMBOL int string_index_kmp(string s, string p);
int string_index_any(string s, string chars);
VV_LOCAL_SYMBOL int string_index_last_(string s, string p);
int string_index_after(string s, string p, int start);
int string_index_u8(string s, u8 c);
int string_index_u8_last(string s, u8 c);
int string_last_index_u8(string s, u8 c);
int string_count(string s, string substr);
bool string_contains_u8(string s, u8 x);
bool string_contains(string s, string substr);
bool string_contains_any(string s, string chars);
bool string_contains_only(string s, string chars);
bool string_contains_any_substr(string s, Array_string substrs);
bool string_starts_with(string s, string p);
bool string_ends_with(string s, string p);
string string_to_lower(string s);
bool string_is_lower(string s);
string string_to_upper(string s);
bool string_is_upper(string s);
string string_capitalize(string s);
string string_uncapitalize(string s);
bool string_is_capital(string s);
bool string_starts_with_capital(string s);
string string_title(string s);
bool string_is_title(string s);
string string_find_between(string s, string start, string end);
string string_trim_space(string s);
string string_trim(string s, string cutset);
multi_return_int_int string_trim_indexes(string s, string cutset);
string string_trim_left(string s, string cutset);
string string_trim_right(string s, string cutset);
string string_trim_string_left(string s, string str);
string string_trim_string_right(string s, string str);
int compare_strings(string* a, string* b);
VV_LOCAL_SYMBOL int compare_strings_by_len(string* a, string* b);
VV_LOCAL_SYMBOL int compare_lower_strings(string* a, string* b);
void Array_string_sort_ignore_case(Array_string* s);
void Array_string_sort_by_len(Array_string* s);
string string_str(string s);
VV_LOCAL_SYMBOL u8 string_at(string s, int idx);
VV_LOCAL_SYMBOL _option_u8 string_at_with_check(string s, int idx);
bool u8_is_space(u8 c);
bool u8_is_digit(u8 c);
bool u8_is_hex_digit(u8 c);
bool u8_is_oct_digit(u8 c);
bool u8_is_bin_digit(u8 c);
bool u8_is_letter(u8 c);
bool u8_is_alnum(u8 c);
void string_free(string* s);
string string_before(string s, string sub);
string string_all_before(string s, string sub);
string string_all_before_last(string s, string sub);
string string_all_after(string s, string sub);
string string_all_after_last(string s, string sub);
string string_all_after_first(string s, string sub);
string string_after(string s, string sub);
string string_after_char(string s, u8 sub);
string Array_string_join(Array_string a, string sep);
string Array_string_join_lines(Array_string s);
string string_reverse(string s);
string string_limit(string s, int max);
int string_hash(string s);
Array_u8 string_bytes(string s);
string string_repeat(string s, int count);
Array_string string_fields(string s);
string string_strip_margin(string s);
string string_strip_margin_custom(string s, u8 del);
string string_trim_indent(string s);
int string_indent_width(string s);
bool string_is_blank(string s);
bool string_match_glob(string name, string pattern);
bool string_is_ascii(string s);
Array_u8 byteptr_vbytes(byteptr data, int len);
string byteptr_vstring(byteptr bp);
string byteptr_vstring_with_len(byteptr bp, int len);
string charptr_vstring(charptr cp);
string charptr_vstring_with_len(charptr cp, int len);
string byteptr_vstring_literal(byteptr bp);
string byteptr_vstring_literal_with_len(byteptr bp, int len);
string charptr_vstring_literal(charptr cp);
string charptr_vstring_literal_with_len(charptr cp, int len);
string StrIntpType_str(StrIntpType x);
VV_LOCAL_SYMBOL f32 fabs32(f32 x);
VV_LOCAL_SYMBOL f64 fabs64(f64 x);
VV_LOCAL_SYMBOL u64 abs64(i64 x);
u64 get_str_intp_u64_format(StrIntpType fmt_type, int in_width, int in_precision, bool in_tail_zeros, bool in_sign, u8 in_pad_ch, int in_base, bool in_upper_case);
u32 get_str_intp_u32_format(StrIntpType fmt_type, int in_width, int in_precision, bool in_tail_zeros, bool in_sign, u8 in_pad_ch, int in_base, bool in_upper_case);
VV_LOCAL_SYMBOL void StrIntpData_process_str_intp_data(StrIntpData* data, strings__Builder* sb);
string str_intp(int data_len, StrIntpData* input_base);
string str_intp_sq(string in_str);
string str_intp_rune(string in_str);
string str_intp_g32(string in_str);
string str_intp_g64(string in_str);
string str_intp_sub(string base_str, string in_str);
u16* string_to_wide(string _str);
string string_from_wide(u16* _wstr);
string string_from_wide2(u16* _wstr, int len);
int utf8_char_len(u8 b);
string utf32_to_str(u32 code);
string utf32_to_str_no_malloc(u32 code, u8* buf);
int utf32_decode_to_buffer(u32 code, u8* buf);
int string_utf32_code(string _rune);
_result_rune Array_u8_utf8_to_utf32(Array_u8 _bytes);
int utf8_str_visible_length(string s);
bool ArrayFlags_is_empty(ArrayFlags* e);
bool ArrayFlags_has(ArrayFlags* e, ArrayFlags flag);
bool ArrayFlags_all(ArrayFlags* e, ArrayFlags flag);
void ArrayFlags_set(ArrayFlags* e, ArrayFlags flag);
void ArrayFlags_set_all(ArrayFlags* e);
void ArrayFlags_clear(ArrayFlags* e, ArrayFlags flag);
void ArrayFlags_clear_all(ArrayFlags* e);
void ArrayFlags_toggle(ArrayFlags* e, ArrayFlags flag);
strings__textscanner__TextScanner strings__textscanner__new(string input);
void strings__textscanner__TextScanner_free(strings__textscanner__TextScanner* ss);
int strings__textscanner__TextScanner_remaining(strings__textscanner__TextScanner* ss);
int strings__textscanner__TextScanner_next(strings__textscanner__TextScanner* ss);
void strings__textscanner__TextScanner_skip(strings__textscanner__TextScanner* ss);
void strings__textscanner__TextScanner_skip_n(strings__textscanner__TextScanner* ss, int n);
int strings__textscanner__TextScanner_peek(strings__textscanner__TextScanner* ss);
int strings__textscanner__TextScanner_peek_n(strings__textscanner__TextScanner* ss, int n);
void strings__textscanner__TextScanner_back(strings__textscanner__TextScanner* ss);
void strings__textscanner__TextScanner_back_n(strings__textscanner__TextScanner* ss, int n);
int strings__textscanner__TextScanner_peek_back(strings__textscanner__TextScanner* ss);
int strings__textscanner__TextScanner_peek_back_n(strings__textscanner__TextScanner* ss, int n);
int strings__textscanner__TextScanner_current(strings__textscanner__TextScanner* ss);
void strings__textscanner__TextScanner_reset(strings__textscanner__TextScanner* ss);
void strings__textscanner__TextScanner_goto_end(strings__textscanner__TextScanner* ss);
term__termios__TcFlag term__termios__flag(int value);
term__termios__TcFlag term__termios__invert(term__termios__TcFlag value);
int term__termios__tcgetattr(int fd, term__termios__Termios* t);
int term__termios__tcsetattr(int fd, int optional_actions, term__termios__Termios* t);
int term__termios__ioctl(int fd, u64 request, voidptr arg);
int term__termios__set_state(int fd, term__termios__Termios new_state);
void term__termios__Termios_disable_echo(term__termios__Termios* t);
Array_string os__args_after(string cut_word);
Array_string os__args_before(string cut_word);
string os__getenv(string key);
_option_string os__getenv_opt(string key);
int os__setenv(string name, string value, bool overwrite);
int os__unsetenv(string name);
Map_string_string os__environ(void);
int os__fd_close(int fd);
void os__fd_write(int fd, string s);
Array_string os__fd_slurp(int fd);
multi_return_string_int os__fd_read(int fd, int maxbytes);
bool os__fd_is_pending(int fd);
VV_LOCAL_SYMBOL string os__NotExpected_msg(os__NotExpected err);
VV_LOCAL_SYMBOL int os__NotExpected_code(os__NotExpected err);
VV_LOCAL_SYMBOL string os__fix_windows_path(string path);
_result_os__File os__open_file(string path, string mode, Array_int options);
_result_os__File os__open(string path);
_result_os__File os__create(string path);
os__File os__stdin(void);
os__File os__stdout(void);
os__File os__stderr(void);
bool os__File_eof(os__File* f);
_result_void os__File_reopen(os__File* f, string path, string mode);
_result_int os__File_read(os__File* f, Array_u8* buf);
_result_int os__File_write(os__File* f, Array_u8 buf);
_result_int os__File_writeln(os__File* f, string s);
_result_int os__File_write_string(os__File* f, string s);
_result_int os__File_write_to(os__File* f, u64 pos, Array_u8 buf);
int os__File_write_ptr(os__File* f, voidptr data, int size);
_result_void os__File_write_full_buffer(os__File* f, voidptr buffer, usize buffer_len);
int os__File_write_ptr_at(os__File* f, voidptr data, int size, u64 pos);
VV_LOCAL_SYMBOL _result_int os__fread(voidptr ptr, int item_size, int items, FILE* stream);
Array_u8 os__File_read_bytes(os__File* f, int size);
Array_u8 os__File_read_bytes_at(os__File* f, int size, u64 pos);
_result_int os__File_read_bytes_into_newline(os__File* f, Array_u8* buf);
_result_int os__File_read_bytes_into(os__File* f, u64 pos, Array_u8* buf);
_result_int os__File_read_from(os__File* f, u64 pos, Array_u8* buf);
_result_int os__File_read_into_ptr(os__File* f, u8* ptr, int max_size);
void os__File_flush(os__File* f);
string os__FileNotOpenedError_msg(os__FileNotOpenedError err);
string os__SizeOfTypeIs0Error_msg(os__SizeOfTypeIs0Error err);
VV_LOCAL_SYMBOL IError os__error_file_not_opened(void);
VV_LOCAL_SYMBOL IError os__error_size_of_type_0(void);
_result_void os__File_seek(os__File* f, i64 pos, os__SeekMode mode);
_result_i64 os__File_tell(os__File* f);
bool os__is_abs_path(string path);
string os__abs_path(string path);
string os__norm_path(string path);
_result_string os__existing_path(string path);
VV_LOCAL_SYMBOL string os__clean_path(string path);
string os__to_slash(string path);
string os__from_slash(string path);
VV_LOCAL_SYMBOL int os__win_volume_len(string path);
VV_LOCAL_SYMBOL bool os__is_slash(u8 b);
VV_LOCAL_SYMBOL bool os__is_unc_path(string path);
VV_LOCAL_SYMBOL bool os__has_drive_letter(string path);
VV_LOCAL_SYMBOL bool os__starts_w_slash_slash(string path);
VV_LOCAL_SYMBOL bool os__is_drive_rooted(string path);
VV_LOCAL_SYMBOL bool os__is_normal_path(string path);
VV_LOCAL_SYMBOL bool os__is_curr_dir_ref(int byte_one, int byte_two, int byte_three);
u32 os__FilePermission_bitmask(os__FilePermission p);
u32 os__FileMode_bitmask(os__FileMode m);
os__FileInfo os__inode(string path);
_result_Array_u8 os__read_bytes(string path);
VV_LOCAL_SYMBOL _result_int os__find_cfile_size(FILE* fp);
VV_LOCAL_SYMBOL _result_strings__Builder os__slurp_file_in_builder(FILE* fp);
_result_string os__read_file(string path);
_result_void os__truncate(string path, u64 len);
VV_LOCAL_SYMBOL void os__eprintln_unknown_file_size(void);
u64 os__file_size(string path);
_result_void os__rename_dir(string src, string dst);
_result_void os__rename(string src, string dst);
_result_void os__cp(string src, string dst);
_result_FILE_ptr os__vfopen(string path, string mode);
int os__fileno(voidptr cfile);
VV_LOCAL_SYMBOL voidptr os__vpopen(string path);
VV_LOCAL_SYMBOL multi_return_int_bool os__posix_wait4_to_exit_status(int waitret);
string os__posix_get_error_msg(int code);
VV_LOCAL_SYMBOL int os__vpclose(voidptr f);
int os__system(string cmd);
bool os__exists(string path);
bool os__is_executable(string path);
bool os__is_writable(string path);
bool os__is_readable(string path);
_result_void os__rm(string path);
_result_void os__rmdir(string path);
VV_LOCAL_SYMBOL void os__print_c_errno(void);
string os__get_raw_line(void);
Array_u8 os__get_raw_stdin(void);
string os__executable(void);
bool os__is_dir(string path);
bool os__is_link(string path);
VV_LOCAL_SYMBOL os__PathKind os__kind_of_existing_path(string path);
_result_void os__chdir(string path);
string os__getwd(void);
string os__real_path(string fpath);
VV_LOCAL_SYMBOL void os__normalize_drive_letter(string path);
int os__fork(void);
int os__wait(void);
i64 os__file_last_mod_unix(string path);
void os__flush(void);
_result_void os__chmod(string path, int mode);
_result_void os__chown(string path, int owner, int group);
_result_os__File os__open_append(string path);
_result_void os__execvp(string cmdpath, Array_string cmdargs);
_result_void os__execve(string cmdpath, Array_string cmdargs, Array_string envs);
int os__is_atty(int fd);
_result_void os__write_file_array(string path, array buffer);
_result_Array_string os__glob(Array_string patterns);
VV_LOCAL_SYMBOL  int compare_11425276908114543126_string(string* a, string* b) {
	if (string__lt(*a, *b)) return -1;
	else return 1;
}

IError os__last_error(void);
void os__Result_free(os__Result* result);
VV_LOCAL_SYMBOL string os__executable_fallback(void);
_result_void os__cp_all(string src, string dst, bool overwrite);
_result_void os__mv_by_cp(string source, string target, os__MvParams opts);
_result_void os__mv(string source, string target, os__MvParams opts);
_result_Array_string os__read_lines(string path);
string os__sigint_to_signal_name(int si);
_result_void os__rmdir_all(string path);
bool os__is_dir_empty(string path);
string os__file_ext(string opath);
string os__dir(string opath);
string os__base(string opath);
string os__file_name(string opath);
_option_string os__input_opt(string prompt);
string os__input(string prompt);
string os__get_line(void);
Array_string os__get_lines(void);
string os__get_lines_joined(void);
string os__get_raw_lines_joined(void);
string os__user_os(void);
_result_Array_string os__user_names(void);
string os__home_dir(void);
string os__expand_tilde_to_home(string path);
_result_void os__write_file(string path, string text);
string os__ExecutableNotFoundError_msg(os__ExecutableNotFoundError err);
VV_LOCAL_SYMBOL IError os__error_failed_to_find_executable(void);
_result_string os__find_abs_path_of_executable(string exepath);
bool os__exists_in_system_path(string prog);
bool os__is_file(string path);
string os__join_path(string base, Array_string dirs);
string os__join_path_single(string base, string elem);
Array_string os__walk_ext(string path, string ext);
VV_LOCAL_SYMBOL void os__impl_walk_ext(string path, string ext, Array_string* out);
void os__walk(string path, void (*f)(string ));
void os__walk_with_context(string path, voidptr context, void (*fcb)(voidptr , string ));
void os__log(string s);
_result_void os__mkdir_all(string opath, os__MkdirParams params);
string os__cache_dir(void);
string os__temp_dir(void);
string os__vtmp_dir(void);
VV_LOCAL_SYMBOL string os__default_vmodules_path(void);
string os__vmodules_dir(void);
Array_string os__vmodules_paths(void);
string os__resource_abs_path(string path);
os__Result os__execute_or_panic(string cmd);
os__Result os__execute_or_exit(string cmd);
_result_os__Result os__execute_opt(string cmd);
string os__quoted_path(string path);
_result_string os__config_dir(void);
VV_LOCAL_SYMBOL Array_string os__glob_match(string dir, string pattern, string next_pattern, Array_string* matches);
VV_LOCAL_SYMBOL _result_void os__native_glob_pattern(string pattern, Array_string* matches);
_result_void os__utime(string path, int actime, int modtime);
os__Uname os__uname(void);
_result_string os__hostname(void);
_result_string os__loginname(void);
VV_LOCAL_SYMBOL Array_string os__init_os_args(int argc, u8** argv);
_result_Array_string os__ls(string path);
_result_void os__mkdir(string path, os__MkdirParams params);
os__Result os__execute(string cmd);
os__Result os__raw_execute(string cmd);
_result_void os__Command_start(os__Command* c);
string os__Command_read_line(os__Command* c);
_result_void os__Command_close(os__Command* c);
_result_void os__symlink(string origin, string target);
_result_void os__link(string origin, string target);
string os__get_error_msg(int code);
void os__File_close(os__File* f);
_result_void os__ensure_folder_is_writable(string folder);
int os__getpid(void);
int os__getppid(void);
int os__getuid(void);
int os__geteuid(void);
int os__getgid(void);
int os__getegid(void);
void os__posix_set_permission_bit(string path_s, u32 mode, bool enable);
VV_LOCAL_SYMBOL _result_string os__get_long_path(string path);
int os__page_size(void);
_result_string os__input_password(string prompt);
void os__Process_signal_kill(os__Process* p);
void os__Process_signal_pgkill(os__Process* p);
void os__Process_signal_stop(os__Process* p);
void os__Process_signal_continue(os__Process* p);
void os__Process_wait(os__Process* p);
void os__Process_close(os__Process* p);
void os__Process_free(os__Process* p);
VV_LOCAL_SYMBOL int os__Process__spawn(os__Process* p);
bool os__Process_is_alive(os__Process* p);
void os__Process_set_redirect_stdio(os__Process* p);
void os__Process_stdin_write(os__Process* p, string s);
string os__Process_stdout_slurp(os__Process* p);
string os__Process_stderr_slurp(os__Process* p);
string os__Process_stdout_read(os__Process* p);
string os__Process_stderr_read(os__Process* p);
_option_string os__Process_pipe_read(os__Process* p, os__ChildProcessPipeKind pkind);
bool os__Process_is_pending(os__Process* p, os__ChildProcessPipeKind pkind);
VV_LOCAL_SYMBOL string os__Process__read_from(os__Process* p, os__ChildProcessPipeKind pkind);
VV_LOCAL_SYMBOL string os__Process__slurp_from(os__Process* p, os__ChildProcessPipeKind pkind);
VV_LOCAL_SYMBOL void os__Process__write_to(os__Process* p, os__ChildProcessPipeKind pkind, string s);
VV_LOCAL_SYMBOL bool os__Process__is_pending(os__Process* p, os__ChildProcessPipeKind pkind);
VV_LOCAL_SYMBOL void os__Process__check_redirection_call(os__Process* p, string fn_name);
VV_LOCAL_SYMBOL void os__Process__signal_stop(os__Process* p);
VV_LOCAL_SYMBOL void os__Process__signal_continue(os__Process* p);
VV_LOCAL_SYMBOL void os__Process__signal_kill(os__Process* p);
VV_LOCAL_SYMBOL void os__Process__signal_pgkill(os__Process* p);
VV_LOCAL_SYMBOL void os__Process__wait(os__Process* p);
VV_LOCAL_SYMBOL bool os__Process__is_alive(os__Process* p);
void os__Process_run(os__Process* p);
os__Process* os__new_process(string filename);
void os__Process_set_args(os__Process* p, Array_string pargs);
void os__Process_set_work_folder(os__Process* p, string path);
void os__Process_set_environment(os__Process* p, Map_string_string envs);
VV_LOCAL_SYMBOL int os__Process_unix_spawn_process(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_unix_stop_process(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_unix_resume_process(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_unix_kill_process(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_unix_kill_pgroup(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_unix_wait(os__Process* p);
VV_LOCAL_SYMBOL bool os__Process_unix_is_alive(os__Process* p);
VV_LOCAL_SYMBOL bool os__Process_impl_check_pid_status(os__Process* p, bool exit_early_on_ret0, int waitpid_options);
VV_LOCAL_SYMBOL int os__Process_win_spawn_process(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_win_stop_process(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_win_resume_process(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_win_kill_process(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_win_kill_pgroup(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_win_wait(os__Process* p);
VV_LOCAL_SYMBOL bool os__Process_win_is_alive(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_win_write_string(os__Process* p, int idx, string s);
VV_LOCAL_SYMBOL multi_return_string_int os__Process_win_read_string(os__Process* p, int idx, int maxbytes);
VV_LOCAL_SYMBOL string os__Process_win_slurp(os__Process* p, int idx);
_result_anon_fn_os__signal os__signal_opt(os__Signal signum, void (*handler)(os__Signal ));
VV_LOCAL_SYMBOL void os__ignore_signal_handler(os__Signal signal);
void os__signal_ignore(Array_os__Signal args);
bool os__debugger_present(void);
_result_void os__open_uri(string uri);
bool os__is_main_thread(void);
VV_LOCAL_SYMBOL void os__signal_ignore_internal(Array_os__Signal args);
f64 math__inf(int sign);
f64 math__nan(void);
bool math__is_nan(f64 f);
bool math__is_inf(f64 f, int sign);
bool math__is_finite(f64 f);
multi_return_f64_int math__normalize(f64 x);
f64 math__cbrt(f64 a);
f64 math__mod(f64 x, f64 y);
f64 math__fmod(f64 x, f64 y);
i64 math__gcd(i64 a_, i64 b_);
multi_return_i64_i64_i64 math__egcd(i64 a, i64 b);
i64 math__lcm(i64 a, i64 b);
f64 math__erf(f64 a);
f64 math__erfc(f64 a);
f64 math__exp(f64 x);
f64 math__exp2(f64 x);
f64 math__ldexp(f64 frac, int exp);
f64 math__pure_v_but_overridden_by_c_exp(f64 x);
f64 math__pure_v_but_overridden_by_c_exp2(f64 x);
f64 math__pure_v_but_overridden_by_c_ldexp(f64 frac, int exp);
multi_return_f64_int math__frexp(f64 x);
f64 math__expm1(f64 x);
VV_LOCAL_SYMBOL f64 math__expmulti(f64 hi, f64 lo, int k);
f64 math__factorial(f64 n);
f64 math__log_factorial(f64 n);
VV_LOCAL_SYMBOL f64 math__log_factorial_asymptotic_expansion(int n);
i64 math__factoriali(int n);
f64 math__floor(f64 x);
f64 math__ceil(f64 x);
f64 math__trunc(f64 x);
f64 math__round(f64 x);
f64 math__round_sig(f64 x, int sig_digits);
f64 math__round_to_even(f64 x);
VV_LOCAL_SYMBOL multi_return_f64_f64 math__stirling(f64 x);
f64 math__gamma(f64 a);
f64 math__log_gamma(f64 x);
multi_return_f64_int math__log_gamma_sign(f64 a);
VV_LOCAL_SYMBOL f64 math__sin_pi(f64 x_);
f64 math__hypot(f64 x, f64 y);
f64 math__acosh(f64 x);
f64 math__asinh(f64 x);
f64 math__atanh(f64 x);
VV_LOCAL_SYMBOL f64 math__xatan(f64 x);
VV_LOCAL_SYMBOL f64 math__satan(f64 x);
f64 math__atan(f64 x);
f64 math__atan2(f64 y, f64 x);
f64 math__asin(f64 x_);
f64 math__acos(f64 x);
f64 math__log(f64 a);
f32 math__logf(f32 a);
f64 math__log_n(f64 x, f64 b);
f64 math__log10(f64 x);
f64 math__log2(f64 x);
f64 math__log1p(f64 x);
f64 math__log_b(f64 x);
int math__ilog_b(f64 x);
VV_LOCAL_SYMBOL int math__ilog_b_(f64 x_);
f64 math__pure_v_but_overridden_by_c_log(f64 a);
f64 math__aprox_sin(f64 a);
f64 math__aprox_cos(f64 a);
f64 math__copysign(f64 x, f64 y);
f64 math__degrees(f64 radians);
f64 math__angle_diff(f64 radian_a, f64 radian_b);
Array_int math__digits(i64 num, math__DigitParams params);
int math__count_digits(i64 number);
multi_return_f64_f64 math__minmax(f64 a, f64 b);
f64 math__clamp(f64 x, f64 a, f64 b);
f64 math__sign(f64 n);
int math__signi(f64 n);
f64 math__radians(f64 degrees);
bool math__signbit(f64 x);
bool math__tolerance(f64 a, f64 b, f64 tol);
bool math__close(f64 a, f64 b);
bool math__veryclose(f64 a, f64 b);
bool math__alike(f64 a, f64 b);
VV_LOCAL_SYMBOL bool math__is_odd_int(f64 x);
VV_LOCAL_SYMBOL bool math__is_neg_int(f64 x);
int math__min_T_int(int a, int b);
f32 math__max_T_f32(f32 a, f32 b);
f64 math__abs_T_f64(f64 a);
f32 math__abs_T_f32(f32 a);
multi_return_f64_f64 math__modf(f64 f);
f32 math__nextafter32(f32 x, f32 y);
f64 math__nextafter(f64 x, f64 y);
VV_LOCAL_SYMBOL f64 math__poly_n_eval(Array_f64 c, int n, f64 x);
VV_LOCAL_SYMBOL f64 math__poly_n_1_eval(Array_f64 c, int n, f64 x);
VV_LOCAL_SYMBOL f64 math__poly_eval(Array_f64 c, f64 x);
VV_LOCAL_SYMBOL f64 math__poly_1_eval(Array_f64 c, f64 x);
VV_LOCAL_SYMBOL multi_return_f64_f64 math__ChebSeries_eval_e(math__ChebSeries cs, f64 x);
f64 math__pow(f64 x, f64 y);
f32 math__powf(f32 a, f32 b);
f32 math__pure_v_but_overridden_by_c_powf(f32 a, f32 b);
f64 math__pow10(int n);
i64 math__powi(i64 a, i64 b);
f64 math__pure_v_but_overridden_by_c_pow(f64 x, f64 y);
f64 math__q_rsqrt(f64 x);
f64 math__scalbn(f64 x, int n_);
f64 math__cos(f64 a);
f64 math__sin(f64 a);
f32 math__cosf(f32 a);
f32 math__sinf(f32 a);
f64 math__pure_v_but_overridden_by_c_sin(f64 x);
f64 math__pure_v_but_overridden_by_c_cos(f64 x);
f32 math__pure_v_but_overridden_by_c_cosf(f32 a);
f32 math__pure_v_but_overridden_by_c_sinf(f32 a);
multi_return_f64_f64 math__sincos(f64 x);
f64 math__sinh(f64 x_);
f64 math__cosh(f64 x);
f64 math__sqrt(f64 a);
f32 math__sqrtf(f32 a);
f64 math__pure_v_but_overridden_by_c_sqrt(f64 a);
f32 math__pure_v_but_overridden_by_c_sqrtf(f32 a);
i64 math__sqrti(i64 a);
f32 math__tanf(f32 a);
f64 math__tan(f64 a);
f32 math__pure_v_but_overridden_by_c_tanf(f32 a);
f64 math__cot(f64 a);
f64 math__tanh(f64 x);
u32 math__f32_bits(f32 f);
f32 math__f32_from_bits(u32 b);
u64 math__f64_bits(f64 f);
f64 math__f64_from_bits(u64 b);
f64 math__with_set_low_word(f64 f, u32 lo);
f64 math__with_set_high_word(f64 f, u32 hi);
u32 math__get_high_word(f64 f);
math__vec__Vec2_T_f32 math__vec__vec2_T_f32(f32 x, f32 y);
void math__vec__Vec2_T_f32_zero_T_f32(math__vec__Vec2_T_f32* v);
void math__vec__Vec2_T_f32_one_T_f32(math__vec__Vec2_T_f32* v);
math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_copy_T_f32(math__vec__Vec2_T_f32 v);
void math__vec__Vec2_T_f32_from_T_f32(math__vec__Vec2_T_f32* v, math__vec__Vec2_T_f32 u);
math__vec__Vec3_T_f32 math__vec__Vec2_T_f32_as_vec3_T_f32(math__vec__Vec2_T_f32 v);
math__vec__Vec4_T_f32 math__vec__Vec2_T_f32_as_vec4_T_f32(math__vec__Vec2_T_f32 v);
math__vec__Vec2_T_f32 math__vec__Vec2_T_f32__plus_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u);
math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_add_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u);
void math__vec__Vec2_T_f32_plus_T_f32(math__vec__Vec2_T_f32* v, math__vec__Vec2_T_f32 u);
math__vec__Vec2_T_f32 math__vec__Vec2_T_f32__minus_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u);
math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_sub_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u);
void math__vec__Vec2_T_f32_subtract_T_f32(math__vec__Vec2_T_f32* v, math__vec__Vec2_T_f32 u);
math__vec__Vec2_T_f32 math__vec__Vec2_T_f32__mult_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u);
math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_mul_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u);
math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_mul_scalar_T_f32_f32(math__vec__Vec2_T_f32 v, f32 scalar);
void math__vec__Vec2_T_f32_multiply_T_f32(math__vec__Vec2_T_f32* v, math__vec__Vec2_T_f32 u);
math__vec__Vec2_T_f32 math__vec__Vec2_T_f32__div_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u);
math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_div_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u);
void math__vec__Vec2_T_f32_divide_T_f32(math__vec__Vec2_T_f32* v, math__vec__Vec2_T_f32 u);
f32 math__vec__Vec2_T_f32_magnitude_T_f32(math__vec__Vec2_T_f32 v);
f32 math__vec__Vec2_T_f32_magnitude_x_T_f32(math__vec__Vec2_T_f32 v);
f32 math__vec__Vec2_T_f32_magnitude_y_T_f32(math__vec__Vec2_T_f32 v);
f32 math__vec__Vec2_T_f32_dot_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u);
f32 math__vec__Vec2_T_f32_cross_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u);
math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_unit_T_f32(math__vec__Vec2_T_f32 v);
math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_perp_cw_T_f32(math__vec__Vec2_T_f32 v);
math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_perp_ccw_T_f32(math__vec__Vec2_T_f32 v);
math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_perpendicular_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u);
math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_project_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u);
bool math__vec__Vec2_T_f32_eq_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u);
bool math__vec__Vec2_T_f32_eq_epsilon_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u);
bool math__vec__Vec2_T_f32_eq_approx_T_f32_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u, f32 tolerance);
bool math__vec__Vec2_T_f32_is_approx_zero_T_f32(math__vec__Vec2_T_f32 v, f32 tolerance);
f32 math__vec__Vec2_T_f32_distance_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u);
f32 math__vec__Vec2_T_f32_manhattan_distance_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u);
f32 math__vec__Vec2_T_f32_angle_between_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u);
f32 math__vec__Vec2_T_f32_angle_T_f32(math__vec__Vec2_T_f32 v);
void math__vec__Vec2_T_f32_abs_T_f32(math__vec__Vec2_T_f32* v);
math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_inv_T_f32(math__vec__Vec2_T_f32 v);
math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_normalize_T_f32(math__vec__Vec2_T_f32 v);
f32 math__vec__Vec2_T_f32_sum_T_f32(math__vec__Vec2_T_f32 v);
math__vec__Vec3_T_f32 math__vec__vec3_T_f32(f32 x, f32 y, f32 z);
void math__vec__Vec3_T_f32_zero_T_f32(math__vec__Vec3_T_f32* v);
void math__vec__Vec3_T_f32_one_T_f32(math__vec__Vec3_T_f32* v);
math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_copy_T_f32(math__vec__Vec3_T_f32* v);
void math__vec__Vec3_T_f32_from_T_f32(math__vec__Vec3_T_f32* v, math__vec__Vec3_T_f32 u);
math__vec__Vec2_T_f32 math__vec__Vec3_T_f32_as_vec2_T_f32(math__vec__Vec3_T_f32* v);
math__vec__Vec4_T_f32 math__vec__Vec3_T_f32_as_vec4_T_f32(math__vec__Vec3_T_f32* v);
math__vec__Vec3_T_f32 math__vec__Vec3_T_f32__plus_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u);
math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_add_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u);
void math__vec__Vec3_T_f32_plus_T_f32(math__vec__Vec3_T_f32* v, math__vec__Vec3_T_f32 u);
math__vec__Vec3_T_f32 math__vec__Vec3_T_f32__minus_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u);
math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_sub_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u);
void math__vec__Vec3_T_f32_subtract_T_f32(math__vec__Vec3_T_f32* v, math__vec__Vec3_T_f32 u);
math__vec__Vec3_T_f32 math__vec__Vec3_T_f32__mult_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u);
math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_mul_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u);
math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_mul_scalar_T_f32_f32(math__vec__Vec3_T_f32 v, f32 scalar);
void math__vec__Vec3_T_f32_multiply_T_f32(math__vec__Vec3_T_f32* v, math__vec__Vec3_T_f32 u);
math__vec__Vec3_T_f32 math__vec__Vec3_T_f32__div_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u);
math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_div_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u);
void math__vec__Vec3_T_f32_divide_T_f32(math__vec__Vec3_T_f32* v, math__vec__Vec3_T_f32 u);
f32 math__vec__Vec3_T_f32_magnitude_T_f32(math__vec__Vec3_T_f32 v);
f32 math__vec__Vec3_T_f32_dot_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u);
math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_cross_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u);
math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_unit_T_f32(math__vec__Vec3_T_f32 v);
math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_perpendicular_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u);
math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_project_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u);
bool math__vec__Vec3_T_f32_eq_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u);
bool math__vec__Vec3_T_f32_eq_epsilon_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u);
bool math__vec__Vec3_T_f32_eq_approx_T_f32_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u, f32 tolerance);
bool math__vec__Vec3_T_f32_is_approx_zero_T_f32(math__vec__Vec3_T_f32 v, f64 tolerance);
f64 math__vec__Vec3_T_f32_distance_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u);
f64 math__vec__Vec3_T_f32_manhattan_distance_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u);
f32 math__vec__Vec3_T_f32_angle_between_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u);
void math__vec__Vec3_T_f32_abs_T_f32(math__vec__Vec3_T_f32* v);
math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_inv_T_f32(math__vec__Vec3_T_f32 v);
math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_normalize_T_f32(math__vec__Vec3_T_f32 v);
f32 math__vec__Vec3_T_f32_sum_T_f32(math__vec__Vec3_T_f32 v);
math__vec__Vec4_T_f32 math__vec__vec4_T_f32(f32 x, f32 y, f32 z, f32 w);
void math__vec__Vec4_T_f32_zero_T_f32(math__vec__Vec4_T_f32* v);
void math__vec__Vec4_T_f32_one_T_f32(math__vec__Vec4_T_f32* v);
math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_copy_T_f32(math__vec__Vec4_T_f32 v);
void math__vec__Vec4_T_f32_from_T_f32(math__vec__Vec4_T_f32* v, math__vec__Vec4_T_f32 u);
void math__vec__Vec4_T_f32_from_vec2_T_f32(math__vec__Vec4_T_f32* v, math__vec__Vec2_T_f32 u);
math__vec__Vec4_T_f32 math__vec__Vec4_T_f32__plus_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u);
math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_add_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u);
void math__vec__Vec4_T_f32_plus_T_f32(math__vec__Vec4_T_f32* v, math__vec__Vec4_T_f32 u);
math__vec__Vec4_T_f32 math__vec__Vec4_T_f32__minus_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u);
math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_sub_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u);
void math__vec__Vec4_T_f32_subtract_T_f32(math__vec__Vec4_T_f32* v, math__vec__Vec4_T_f32 u);
math__vec__Vec4_T_f32 math__vec__Vec4_T_f32__mult_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u);
math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_mul_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u);
math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_mul_scalar_T_f32_f32(math__vec__Vec4_T_f32 v, f32 scalar);
void math__vec__Vec4_T_f32_multiply_T_f32(math__vec__Vec4_T_f32* v, math__vec__Vec4_T_f32 u);
math__vec__Vec4_T_f32 math__vec__Vec4_T_f32__div_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u);
math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_div_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u);
void math__vec__Vec4_T_f32_divide_T_f32(math__vec__Vec4_T_f32* v, math__vec__Vec4_T_f32 u);
f32 math__vec__Vec4_T_f32_magnitude_T_f32(math__vec__Vec4_T_f32 v);
f32 math__vec__Vec4_T_f32_dot_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u);
math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_cross_xyz_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u);
math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_unit_T_f32(math__vec__Vec4_T_f32 v);
math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_perpendicular_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u);
math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_project_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u);
bool math__vec__Vec4_T_f32_eq_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u);
bool math__vec__Vec4_T_f32_eq_epsilon_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u);
bool math__vec__Vec4_T_f32_eq_approx_T_f32_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u, f32 tolerance);
bool math__vec__Vec4_T_f32_is_approx_zero_T_f32(math__vec__Vec4_T_f32 v, f64 tolerance);
f64 math__vec__Vec4_T_f32_distance_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u);
f64 math__vec__Vec4_T_f32_manhattan_distance_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u);
void math__vec__Vec4_T_f32_abs_T_f32(math__vec__Vec4_T_f32* v);
math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_inv_T_f32(math__vec__Vec4_T_f32 v);
math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_normalize_T_f32(math__vec__Vec4_T_f32 v);
f32 math__vec__Vec4_T_f32_sum_T_f32(math__vec__Vec4_T_f32 v);
VV_LOCAL_SYMBOL void main__game_initialize(void);
VV_EXPORTED_SYMBOL void game_initialize(void); // exported fn main.game_initialize
VV_LOCAL_SYMBOL void main__game_update(f32 dt);
VV_EXPORTED_SYMBOL void game_update(f32 dt); // exported fn main.game_update
VV_LOCAL_SYMBOL void main__main(void);
void main__update_input(void);
VV_LOCAL_SYMBOL void main__player_update(main__Player p, f32 dt);

static string term__termios__Termios_str(term__termios__Termios it); // auto
static string indent_term__termios__Termios_str(term__termios__Termios it, int indent_count); // auto
static string term__termios__TcFlag_str(term__termios__TcFlag it); // auto
static string indent_term__termios__TcFlag_str(term__termios__TcFlag it, int indent_count); // auto
static string term__termios__Cc_str(term__termios__Cc it); // auto
static string indent_term__termios__Cc_str(term__termios__Cc it, int indent_count); // auto
static string Array_fixed_term__termios__Cc_32_str(); // auto
static string indent_Array_fixed_term__termios__Cc_32_str(Array_fixed_term__termios__Cc_32 a, int indent_count); // auto
static string term__termios__Speed_str(term__termios__Speed it); // auto
static string indent_term__termios__Speed_str(term__termios__Speed it, int indent_count); // auto
static bool Array_rune_arr_eq(Array_rune a, Array_rune b); // auto

// V global/const definitions:
string _const_math__bits__overflow_error; // a string literal, inited later
string _const_math__bits__divide_error; // a string literal, inited later
#define _const_strconv__digits 18
#define _const_strconv__c_dpoint '.'
#define _const_strconv__c_plus '+'
#define _const_strconv__c_minus '-'
#define _const_strconv__c_zero '0'
#define _const_strconv__c_nine '9'
#define _const_strconv__int_size 32
#define _const_strconv__bias32 127
#define _const_strconv__maxexp32 255
#define _const_strconv__bias64 1023
#define _const_strconv__maxexp64 2047
#define _const_strconv__max_size_f64_char 32
string _const_strconv__digit_pairs; // a string literal, inited later
string _const_strconv__base_digits; // a string literal, inited later
#define _const_strconv__pow5_num_bits_32 61
#define _const_strconv__pow5_inv_num_bits_32 59
#define _const_strconv__pow5_num_bits_64 121
#define _const_strconv__pow5_inv_num_bits_64 122
string _const_digit_pairs; // a string literal, inited later
#define _const_hashbits 24
#define _const_max_cached_hashbits 16
#define _const_init_log_capicity 5
#define _const_init_capicity 32
#define _const_init_even_index 30
#define _const_extra_metas_inc 4
#define _const_degree 6
#define _const_mid_index 5
#define _const_max_len 11
string _const_si_s_code; // a string literal, inited later
string _const_si_g32_code; // a string literal, inited later
string _const_si_g64_code; // a string literal, inited later
#define _const_cp_utf8 65001
#define _const_math__internal__max_int_fact_arg 170
#define _const_os__max_path_buffer_size 4096
#define _const_os__o_binary 0
#define _const_os__fslash '/'
#define _const_os__bslash '\\'
#define _const_os__dot '.'
#define _const_os__qmark '?'
string _const_os__fslash_str; // a string literal, inited later
string _const_os__dot_dot; // a string literal, inited later
string _const_os__empty_str; // a string literal, inited later
string _const_os__dot_str; // a string literal, inited later
#define _const_os__buf_size 4096
#define _const_os__max_path_len 4096
#define _const_os__f_ok 0
#define _const_os__x_ok 1
#define _const_os__w_ok 2
#define _const_os__r_ok 4
string _const_os__path_separator; // a string literal, inited later
string _const_os__path_delimiter; // a string literal, inited later
string _const_os__path_devnull; // a string literal, inited later
#define _const_os__stdin_value 0
#define _const_os__stdout_value 1
#define _const_os__stderr_value 2
#define _const_os__s_ifmt 61440
#define _const_os__s_ifdir 16384
#define _const_os__s_ifreg 32768
#define _const_os__s_iflnk 40960
#define _const_os__s_isuid 2048
#define _const_os__s_isgid 1024
#define _const_os__s_isvtx 512
#define _const_os__s_irusr 256
#define _const_os__s_iwusr 128
#define _const_os__s_ixusr 64
#define _const_os__s_irgrp 32
#define _const_os__s_iwgrp 16
#define _const_os__s_ixgrp 8
#define _const_os__s_iroth 4
#define _const_os__s_iwoth 2
#define _const_os__s_ixoth 1
#define _const_math__mask 2047
#define _const_math__shift 52
#define _const_math__bias 1023
 const u32 _const_math__bits__de_bruijn32 = 125613361; // precomputed2
Array_fixed_u8_32 _const_math__bits__de_bruijn32tab = {((u8)(0)), 1, 28, 2, 29, 14, 24, 3, 30, 22, 20, 15, 25, 17, 4, 8, 31, 27, 13, 23, 21, 19, 16, 7, 26, 12, 18, 6, 11, 5, 10, 9}; // fixed array const
 const u64 _const_math__bits__de_bruijn64 = 285870213051353865U; // precomputed2
Array_fixed_u8_64 _const_math__bits__de_bruijn64tab = {((u8)(0)), 1, 56, 2, 57, 49, 28, 3, 61, 58, 42, 50, 38, 29, 17, 4, 62, 47, 59, 36, 45, 43, 51, 22, 53, 39, 33, 30, 24, 18, 12, 5, 63, 55, 48, 27, 60, 41, 37, 16, 46, 35, 44, 21, 52, 32, 23, 11, 54, 26, 40, 15, 34, 20, 31, 10, 25, 14, 19, 9, 13, 8, 7, 6}; // fixed array const
 const u64 _const_math__bits__m0 = 6148914691236517205U; // precomputed2
 const u64 _const_math__bits__m1 = 3689348814741910323U; // precomputed2
 const u64 _const_math__bits__m2 = 1085102592571150095U; // precomputed2
 const u64 _const_math__bits__m3 = 71777214294589695U; // precomputed2
 const u64 _const_math__bits__m4 = 281470681808895U; // precomputed2
 const u8 _const_math__bits__n8 = 8; // precomputed2
 const u16 _const_math__bits__n16 = 16; // precomputed2
 const u32 _const_math__bits__n32 = 32; // precomputed2
 const u64 _const_math__bits__n64 = 64U; // precomputed2
 const u64 _const_math__bits__two32 = 4294967296U; // precomputed2
 const u64 _const_math__bits__mask32 = 4294967295U; // precomputed2
Array_fixed_u8_256 _const_math__bits__ntz_8_tab = {((u8)(0x08)), 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x06, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x07, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x06, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00}; // fixed array const
Array_fixed_u8_256 _const_math__bits__pop_8_tab = {((u8)(0x00)), 0x01, 0x01, 0x02, 0x01, 0x02, 0x02, 0x03, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x05, 0x06, 0x06, 0x07, 0x06, 0x07, 0x07, 0x08}; // fixed array const
Array_fixed_u8_256 _const_math__bits__rev_8_tab = {((u8)(0x00)), 0x80, 0x40, 0xc0, 0x20, 0xa0, 0x60, 0xe0, 0x10, 0x90, 0x50, 0xd0, 0x30, 0xb0, 0x70, 0xf0, 0x08, 0x88, 0x48, 0xc8, 0x28, 0xa8, 0x68, 0xe8, 0x18, 0x98, 0x58, 0xd8, 0x38, 0xb8, 0x78, 0xf8, 0x04, 0x84, 0x44, 0xc4, 0x24, 0xa4, 0x64, 0xe4, 0x14, 0x94, 0x54, 0xd4, 0x34, 0xb4, 0x74, 0xf4, 0x0c, 0x8c, 0x4c, 0xcc, 0x2c, 0xac, 0x6c, 0xec, 0x1c, 0x9c, 0x5c, 0xdc, 0x3c, 0xbc, 0x7c, 0xfc, 0x02, 0x82, 0x42, 0xc2, 0x22, 0xa2, 0x62, 0xe2, 0x12, 0x92, 0x52, 0xd2, 0x32, 0xb2, 0x72, 0xf2, 0x0a, 0x8a, 0x4a, 0xca, 0x2a, 0xaa, 0x6a, 0xea, 0x1a, 0x9a, 0x5a, 0xda, 0x3a, 0xba, 0x7a, 0xfa, 0x06, 0x86, 0x46, 0xc6, 0x26, 0xa6, 0x66, 0xe6, 0x16, 0x96, 0x56, 0xd6, 0x36, 0xb6, 0x76, 0xf6, 0x0e, 0x8e, 0x4e, 0xce, 0x2e, 0xae, 0x6e, 0xee, 0x1e, 0x9e, 0x5e, 0xde, 0x3e, 0xbe, 0x7e, 0xfe, 0x01, 0x81, 0x41, 0xc1, 0x21, 0xa1, 0x61, 0xe1, 0x11, 0x91, 0x51, 0xd1, 0x31, 0xb1, 0x71, 0xf1, 0x09, 0x89, 0x49, 0xc9, 0x29, 0xa9, 0x69, 0xe9, 0x19, 0x99, 0x59, 0xd9, 0x39, 0xb9, 0x79, 0xf9, 0x05, 0x85, 0x45, 0xc5, 0x25, 0xa5, 0x65, 0xe5, 0x15, 0x95, 0x55, 0xd5, 0x35, 0xb5, 0x75, 0xf5, 0x0d, 0x8d, 0x4d, 0xcd, 0x2d, 0xad, 0x6d, 0xed, 0x1d, 0x9d, 0x5d, 0xdd, 0x3d, 0xbd, 0x7d, 0xfd, 0x03, 0x83, 0x43, 0xc3, 0x23, 0xa3, 0x63, 0xe3, 0x13, 0x93, 0x53, 0xd3, 0x33, 0xb3, 0x73, 0xf3, 0x0b, 0x8b, 0x4b, 0xcb, 0x2b, 0xab, 0x6b, 0xeb, 0x1b, 0x9b, 0x5b, 0xdb, 0x3b, 0xbb, 0x7b, 0xfb, 0x07, 0x87, 0x47, 0xc7, 0x27, 0xa7, 0x67, 0xe7, 0x17, 0x97, 0x57, 0xd7, 0x37, 0xb7, 0x77, 0xf7, 0x0f, 0x8f, 0x4f, 0xcf, 0x2f, 0xaf, 0x6f, 0xef, 0x1f, 0x9f, 0x5f, 0xdf, 0x3f, 0xbf, 0x7f, 0xff}; // fixed array const
Array_fixed_u8_256 _const_math__bits__len_8_tab = {((u8)(0x00)), 0x01, 0x02, 0x02, 0x03, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08}; // fixed array const
 const u32 _const_strconv__single_plus_zero = 0; // precomputed2
 const u32 _const_strconv__single_minus_zero = 2147483648; // precomputed2
 const u32 _const_strconv__single_plus_infinity = 2139095040; // precomputed2
 const u32 _const_strconv__single_minus_infinity = 4286578688; // precomputed2
 const u64 _const_strconv__double_plus_zero = 0U; // precomputed2
 const u64 _const_strconv__double_minus_zero = 9223372036854775808U; // precomputed2
 const u64 _const_strconv__double_plus_infinity = 9218868437227405312U; // precomputed2
 const u64 _const_strconv__double_minus_infinity = 18442240474082181120U; // precomputed2
 const u32 _const_strconv__c_ten = 10; // precomputed2
Array_fixed_u64_309 _const_strconv__pos_exp = {((u64)(0x3ff0000000000000U)), ((u64)(0x4024000000000000U)), ((u64)(0x4059000000000000U)), ((u64)(0x408f400000000000U)), ((u64)(0x40c3880000000000U)), ((u64)(0x40f86a0000000000U)), ((u64)(0x412e848000000000U)), ((u64)(0x416312d000000000U)), ((u64)(0x4197d78400000000U)), ((u64)(0x41cdcd6500000000U)), ((u64)(0x4202a05f20000000U)), ((u64)(0x42374876e8000000U)), ((u64)(0x426d1a94a2000000U)), ((u64)(0x42a2309ce5400000U)), ((u64)(0x42d6bcc41e900000U)), ((u64)(0x430c6bf526340000U)), ((u64)(0x4341c37937e08000U)), ((u64)(0x4376345785d8a000U)), ((u64)(0x43abc16d674ec800U)), ((u64)(0x43e158e460913d00U)), ((u64)(0x4415af1d78b58c40U)), ((u64)(0x444b1ae4d6e2ef50U)), ((u64)(0x4480f0cf064dd592U)), ((u64)(0x44b52d02c7e14af6U)), ((u64)(0x44ea784379d99db4U)), ((u64)(0x45208b2a2c280291U)), ((u64)(0x4554adf4b7320335U)), ((u64)(0x4589d971e4fe8402U)), ((u64)(0x45c027e72f1f1281U)), ((u64)(0x45f431e0fae6d721U)), ((u64)(0x46293e5939a08ceaU)), ((u64)(0x465f8def8808b024U)), ((u64)(0x4693b8b5b5056e17U)), ((u64)(0x46c8a6e32246c99cU)), ((u64)(0x46fed09bead87c03U)), ((u64)(0x4733426172c74d82U)), ((u64)(0x476812f9cf7920e3U)), ((u64)(0x479e17b84357691bU)), ((u64)(0x47d2ced32a16a1b1U)), ((u64)(0x48078287f49c4a1dU)), ((u64)(0x483d6329f1c35ca5U)), ((u64)(0x48725dfa371a19e7U)), ((u64)(0x48a6f578c4e0a061U)), ((u64)(0x48dcb2d6f618c879U)), ((u64)(0x4911efc659cf7d4cU)), ((u64)(0x49466bb7f0435c9eU)), ((u64)(0x497c06a5ec5433c6U)), ((u64)(0x49b18427b3b4a05cU)), ((u64)(0x49e5e531a0a1c873U)), ((u64)(0x4a1b5e7e08ca3a8fU)), ((u64)(0x4a511b0ec57e649aU)), ((u64)(0x4a8561d276ddfdc0U)), ((u64)(0x4ababa4714957d30U)), ((u64)(0x4af0b46c6cdd6e3eU)), ((u64)(0x4b24e1878814c9ceU)), ((u64)(0x4b5a19e96a19fc41U)), ((u64)(0x4b905031e2503da9U)), ((u64)(0x4bc4643e5ae44d13U)), ((u64)(0x4bf97d4df19d6057U)), ((u64)(0x4c2fdca16e04b86dU)), ((u64)(0x4c63e9e4e4c2f344U)), ((u64)(0x4c98e45e1df3b015U)), ((u64)(0x4ccf1d75a5709c1bU)), ((u64)(0x4d03726987666191U)), ((u64)(0x4d384f03e93ff9f5U)), ((u64)(0x4d6e62c4e38ff872U)), ((u64)(0x4da2fdbb0e39fb47U)), ((u64)(0x4dd7bd29d1c87a19U)), ((u64)(0x4e0dac74463a989fU)), ((u64)(0x4e428bc8abe49f64U)), ((u64)(0x4e772ebad6ddc73dU)), ((u64)(0x4eacfa698c95390cU)), ((u64)(0x4ee21c81f7dd43a7U)), ((u64)(0x4f16a3a275d49491U)), ((u64)(0x4f4c4c8b1349b9b5U)), ((u64)(0x4f81afd6ec0e1411U)), ((u64)(0x4fb61bcca7119916U)), ((u64)(0x4feba2bfd0d5ff5bU)), ((u64)(0x502145b7e285bf99U)), ((u64)(0x50559725db272f7fU)), ((u64)(0x508afcef51f0fb5fU)), ((u64)(0x50c0de1593369d1bU)), ((u64)(0x50f5159af8044462U)), ((u64)(0x512a5b01b605557bU)), ((u64)(0x516078e111c3556dU)), ((u64)(0x5194971956342ac8U)), ((u64)(0x51c9bcdfabc1357aU)), ((u64)(0x5200160bcb58c16cU)), ((u64)(0x52341b8ebe2ef1c7U)), ((u64)(0x526922726dbaae39U)), ((u64)(0x529f6b0f092959c7U)), ((u64)(0x52d3a2e965b9d81dU)), ((u64)(0x53088ba3bf284e24U)), ((u64)(0x533eae8caef261adU)), ((u64)(0x53732d17ed577d0cU)), ((u64)(0x53a7f85de8ad5c4fU)), ((u64)(0x53ddf67562d8b363U)), ((u64)(0x5412ba095dc7701eU)), ((u64)(0x5447688bb5394c25U)), ((u64)(0x547d42aea2879f2eU)), ((u64)(0x54b249ad2594c37dU)), ((u64)(0x54e6dc186ef9f45cU)), ((u64)(0x551c931e8ab87173U)), ((u64)(0x5551dbf316b346e8U)), ((u64)(0x558652efdc6018a2U)), ((u64)(0x55bbe7abd3781ecaU)), ((u64)(0x55f170cb642b133fU)), ((u64)(0x5625ccfe3d35d80eU)), ((u64)(0x565b403dcc834e12U)), ((u64)(0x569108269fd210cbU)), ((u64)(0x56c54a3047c694feU)), ((u64)(0x56fa9cbc59b83a3dU)), ((u64)(0x5730a1f5b8132466U)), ((u64)(0x5764ca732617ed80U)), ((u64)(0x5799fd0fef9de8e0U)), ((u64)(0x57d03e29f5c2b18cU)), ((u64)(0x58044db473335defU)), ((u64)(0x583961219000356bU)), ((u64)(0x586fb969f40042c5U)), ((u64)(0x58a3d3e2388029bbU)), ((u64)(0x58d8c8dac6a0342aU)), ((u64)(0x590efb1178484135U)), ((u64)(0x59435ceaeb2d28c1U)), ((u64)(0x59783425a5f872f1U)), ((u64)(0x59ae412f0f768fadU)), ((u64)(0x59e2e8bd69aa19ccU)), ((u64)(0x5a17a2ecc414a03fU)), ((u64)(0x5a4d8ba7f519c84fU)), ((u64)(0x5a827748f9301d32U)), ((u64)(0x5ab7151b377c247eU)), ((u64)(0x5aecda62055b2d9eU)), ((u64)(0x5b22087d4358fc82U)), ((u64)(0x5b568a9c942f3ba3U)), ((u64)(0x5b8c2d43b93b0a8cU)), ((u64)(0x5bc19c4a53c4e697U)), ((u64)(0x5bf6035ce8b6203dU)), ((u64)(0x5c2b843422e3a84dU)), ((u64)(0x5c6132a095ce4930U)), ((u64)(0x5c957f48bb41db7cU)), ((u64)(0x5ccadf1aea12525bU)), ((u64)(0x5d00cb70d24b7379U)), ((u64)(0x5d34fe4d06de5057U)), ((u64)(0x5d6a3de04895e46dU)), ((u64)(0x5da066ac2d5daec4U)), ((u64)(0x5dd4805738b51a75U)), ((u64)(0x5e09a06d06e26112U)), ((u64)(0x5e400444244d7cabU)), ((u64)(0x5e7405552d60dbd6U)), ((u64)(0x5ea906aa78b912ccU)), ((u64)(0x5edf485516e7577fU)), ((u64)(0x5f138d352e5096afU)), ((u64)(0x5f48708279e4bc5bU)), ((u64)(0x5f7e8ca3185deb72U)), ((u64)(0x5fb317e5ef3ab327U)), ((u64)(0x5fe7dddf6b095ff1U)), ((u64)(0x601dd55745cbb7edU)), ((u64)(0x6052a5568b9f52f4U)), ((u64)(0x60874eac2e8727b1U)), ((u64)(0x60bd22573a28f19dU)), ((u64)(0x60f2357684599702U)), ((u64)(0x6126c2d4256ffcc3U)), ((u64)(0x615c73892ecbfbf4U)), ((u64)(0x6191c835bd3f7d78U)), ((u64)(0x61c63a432c8f5cd6U)), ((u64)(0x61fbc8d3f7b3340cU)), ((u64)(0x62315d847ad00087U)), ((u64)(0x6265b4e5998400a9U)), ((u64)(0x629b221effe500d4U)), ((u64)(0x62d0f5535fef2084U)), ((u64)(0x630532a837eae8a5U)), ((u64)(0x633a7f5245e5a2cfU)), ((u64)(0x63708f936baf85c1U)), ((u64)(0x63a4b378469b6732U)), ((u64)(0x63d9e056584240feU)), ((u64)(0x64102c35f729689fU)), ((u64)(0x6444374374f3c2c6U)), ((u64)(0x647945145230b378U)), ((u64)(0x64af965966bce056U)), ((u64)(0x64e3bdf7e0360c36U)), ((u64)(0x6518ad75d8438f43U)), ((u64)(0x654ed8d34e547314U)), ((u64)(0x6583478410f4c7ecU)), ((u64)(0x65b819651531f9e8U)), ((u64)(0x65ee1fbe5a7e7861U)), ((u64)(0x6622d3d6f88f0b3dU)), ((u64)(0x665788ccb6b2ce0cU)), ((u64)(0x668d6affe45f818fU)), ((u64)(0x66c262dfeebbb0f9U)), ((u64)(0x66f6fb97ea6a9d38U)), ((u64)(0x672cba7de5054486U)), ((u64)(0x6761f48eaf234ad4U)), ((u64)(0x679671b25aec1d89U)), ((u64)(0x67cc0e1ef1a724ebU)), ((u64)(0x680188d357087713U)), ((u64)(0x6835eb082cca94d7U)), ((u64)(0x686b65ca37fd3a0dU)), ((u64)(0x68a11f9e62fe4448U)), ((u64)(0x68d56785fbbdd55aU)), ((u64)(0x690ac1677aad4ab1U)), ((u64)(0x6940b8e0acac4eafU)), ((u64)(0x6974e718d7d7625aU)), ((u64)(0x69aa20df0dcd3af1U)), ((u64)(0x69e0548b68a044d6U)), ((u64)(0x6a1469ae42c8560cU)), ((u64)(0x6a498419d37a6b8fU)), ((u64)(0x6a7fe52048590673U)), ((u64)(0x6ab3ef342d37a408U)), ((u64)(0x6ae8eb0138858d0aU)), ((u64)(0x6b1f25c186a6f04cU)), ((u64)(0x6b537798f4285630U)), ((u64)(0x6b88557f31326bbbU)), ((u64)(0x6bbe6adefd7f06aaU)), ((u64)(0x6bf302cb5e6f642aU)), ((u64)(0x6c27c37e360b3d35U)), ((u64)(0x6c5db45dc38e0c82U)), ((u64)(0x6c9290ba9a38c7d1U)), ((u64)(0x6cc734e940c6f9c6U)), ((u64)(0x6cfd022390f8b837U)), ((u64)(0x6d3221563a9b7323U)), ((u64)(0x6d66a9abc9424febU)), ((u64)(0x6d9c5416bb92e3e6U)), ((u64)(0x6dd1b48e353bce70U)), ((u64)(0x6e0621b1c28ac20cU)), ((u64)(0x6e3baa1e332d728fU)), ((u64)(0x6e714a52dffc6799U)), ((u64)(0x6ea59ce797fb817fU)), ((u64)(0x6edb04217dfa61dfU)), ((u64)(0x6f10e294eebc7d2cU)), ((u64)(0x6f451b3a2a6b9c76U)), ((u64)(0x6f7a6208b5068394U)), ((u64)(0x6fb07d457124123dU)), ((u64)(0x6fe49c96cd6d16ccU)), ((u64)(0x7019c3bc80c85c7fU)), ((u64)(0x70501a55d07d39cfU)), ((u64)(0x708420eb449c8843U)), ((u64)(0x70b9292615c3aa54U)), ((u64)(0x70ef736f9b3494e9U)), ((u64)(0x7123a825c100dd11U)), ((u64)(0x7158922f31411456U)), ((u64)(0x718eb6bafd91596bU)), ((u64)(0x71c33234de7ad7e3U)), ((u64)(0x71f7fec216198ddcU)), ((u64)(0x722dfe729b9ff153U)), ((u64)(0x7262bf07a143f6d4U)), ((u64)(0x72976ec98994f489U)), ((u64)(0x72cd4a7bebfa31abU)), ((u64)(0x73024e8d737c5f0bU)), ((u64)(0x7336e230d05b76cdU)), ((u64)(0x736c9abd04725481U)), ((u64)(0x73a1e0b622c774d0U)), ((u64)(0x73d658e3ab795204U)), ((u64)(0x740bef1c9657a686U)), ((u64)(0x74417571ddf6c814U)), ((u64)(0x7475d2ce55747a18U)), ((u64)(0x74ab4781ead1989eU)), ((u64)(0x74e10cb132c2ff63U)), ((u64)(0x75154fdd7f73bf3cU)), ((u64)(0x754aa3d4df50af0bU)), ((u64)(0x7580a6650b926d67U)), ((u64)(0x75b4cffe4e7708c0U)), ((u64)(0x75ea03fde214caf1U)), ((u64)(0x7620427ead4cfed6U)), ((u64)(0x7654531e58a03e8cU)), ((u64)(0x768967e5eec84e2fU)), ((u64)(0x76bfc1df6a7a61bbU)), ((u64)(0x76f3d92ba28c7d15U)), ((u64)(0x7728cf768b2f9c5aU)), ((u64)(0x775f03542dfb8370U)), ((u64)(0x779362149cbd3226U)), ((u64)(0x77c83a99c3ec7eb0U)), ((u64)(0x77fe494034e79e5cU)), ((u64)(0x7832edc82110c2f9U)), ((u64)(0x7867a93a2954f3b8U)), ((u64)(0x789d9388b3aa30a5U)), ((u64)(0x78d27c35704a5e67U)), ((u64)(0x79071b42cc5cf601U)), ((u64)(0x793ce2137f743382U)), ((u64)(0x79720d4c2fa8a031U)), ((u64)(0x79a6909f3b92c83dU)), ((u64)(0x79dc34c70a777a4dU)), ((u64)(0x7a11a0fc668aac70U)), ((u64)(0x7a46093b802d578cU)), ((u64)(0x7a7b8b8a6038ad6fU)), ((u64)(0x7ab137367c236c65U)), ((u64)(0x7ae585041b2c477fU)), ((u64)(0x7b1ae64521f7595eU)), ((u64)(0x7b50cfeb353a97dbU)), ((u64)(0x7b8503e602893dd2U)), ((u64)(0x7bba44df832b8d46U)), ((u64)(0x7bf06b0bb1fb384cU)), ((u64)(0x7c2485ce9e7a065fU)), ((u64)(0x7c59a742461887f6U)), ((u64)(0x7c9008896bcf54faU)), ((u64)(0x7cc40aabc6c32a38U)), ((u64)(0x7cf90d56b873f4c7U)), ((u64)(0x7d2f50ac6690f1f8U)), ((u64)(0x7d63926bc01a973bU)), ((u64)(0x7d987706b0213d0aU)), ((u64)(0x7dce94c85c298c4cU)), ((u64)(0x7e031cfd3999f7b0U)), ((u64)(0x7e37e43c8800759cU)), ((u64)(0x7e6ddd4baa009303U)), ((u64)(0x7ea2aa4f4a405be2U)), ((u64)(0x7ed754e31cd072daU)), ((u64)(0x7f0d2a1be4048f90U)), ((u64)(0x7f423a516e82d9baU)), ((u64)(0x7f76c8e5ca239029U)), ((u64)(0x7fac7b1f3cac7433U)), ((u64)(0x7fe1ccf385ebc8a0U))}; // fixed array const
Array_fixed_u64_324 _const_strconv__neg_exp = {((u64)(0x3ff0000000000000U)), ((u64)(0x3fb999999999999aU)), ((u64)(0x3f847ae147ae147bU)), ((u64)(0x3f50624dd2f1a9fcU)), ((u64)(0x3f1a36e2eb1c432dU)), ((u64)(0x3ee4f8b588e368f1U)), ((u64)(0x3eb0c6f7a0b5ed8dU)), ((u64)(0x3e7ad7f29abcaf48U)), ((u64)(0x3e45798ee2308c3aU)), ((u64)(0x3e112e0be826d695U)), ((u64)(0x3ddb7cdfd9d7bdbbU)), ((u64)(0x3da5fd7fe1796495U)), ((u64)(0x3d719799812dea11U)), ((u64)(0x3d3c25c268497682U)), ((u64)(0x3d06849b86a12b9bU)), ((u64)(0x3cd203af9ee75616U)), ((u64)(0x3c9cd2b297d889bcU)), ((u64)(0x3c670ef54646d497U)), ((u64)(0x3c32725dd1d243acU)), ((u64)(0x3bfd83c94fb6d2acU)), ((u64)(0x3bc79ca10c924223U)), ((u64)(0x3b92e3b40a0e9b4fU)), ((u64)(0x3b5e392010175ee6U)), ((u64)(0x3b282db34012b251U)), ((u64)(0x3af357c299a88ea7U)), ((u64)(0x3abef2d0f5da7dd9U)), ((u64)(0x3a88c240c4aecb14U)), ((u64)(0x3a53ce9a36f23c10U)), ((u64)(0x3a1fb0f6be506019U)), ((u64)(0x39e95a5efea6b347U)), ((u64)(0x39b4484bfeebc2a0U)), ((u64)(0x398039d665896880U)), ((u64)(0x3949f623d5a8a733U)), ((u64)(0x3914c4e977ba1f5cU)), ((u64)(0x38e09d8792fb4c49U)), ((u64)(0x38aa95a5b7f87a0fU)), ((u64)(0x38754484932d2e72U)), ((u64)(0x3841039d428a8b8fU)), ((u64)(0x380b38fb9daa78e4U)), ((u64)(0x37d5c72fb1552d83U)), ((u64)(0x37a16c262777579cU)), ((u64)(0x376be03d0bf225c7U)), ((u64)(0x37364cfda3281e39U)), ((u64)(0x3701d7314f534b61U)), ((u64)(0x36cc8b8218854567U)), ((u64)(0x3696d601ad376ab9U)), ((u64)(0x366244ce242c5561U)), ((u64)(0x362d3ae36d13bbceU)), ((u64)(0x35f7624f8a762fd8U)), ((u64)(0x35c2b50c6ec4f313U)), ((u64)(0x358dee7a4ad4b81fU)), ((u64)(0x3557f1fb6f10934cU)), ((u64)(0x352327fc58da0f70U)), ((u64)(0x34eea6608e29b24dU)), ((u64)(0x34b8851a0b548ea4U)), ((u64)(0x34839dae6f76d883U)), ((u64)(0x344f62b0b257c0d2U)), ((u64)(0x34191bc08eac9a41U)), ((u64)(0x33e41633a556e1ceU)), ((u64)(0x33b011c2eaabe7d8U)), ((u64)(0x3379b604aaaca626U)), ((u64)(0x3344919d5556eb52U)), ((u64)(0x3310747ddddf22a8U)), ((u64)(0x32da53fc9631d10dU)), ((u64)(0x32a50ffd44f4a73dU)), ((u64)(0x3270d9976a5d5297U)), ((u64)(0x323af5bf109550f2U)), ((u64)(0x32059165a6ddda5bU)), ((u64)(0x31d1411e1f17e1e3U)), ((u64)(0x319b9b6364f30304U)), ((u64)(0x316615e91d8f359dU)), ((u64)(0x3131ab20e472914aU)), ((u64)(0x30fc45016d841baaU)), ((u64)(0x30c69d9abe034955U)), ((u64)(0x309217aefe690777U)), ((u64)(0x305cf2b1970e7258U)), ((u64)(0x3027288e1271f513U)), ((u64)(0x2ff286d80ec190dcU)), ((u64)(0x2fbda48ce468e7c7U)), ((u64)(0x2f87b6d71d20b96cU)), ((u64)(0x2f52f8ac174d6123U)), ((u64)(0x2f1e5aacf2156838U)), ((u64)(0x2ee8488a5b445360U)), ((u64)(0x2eb36d3b7c36a91aU)), ((u64)(0x2e7f152bf9f10e90U)), ((u64)(0x2e48ddbcc7f40ba6U)), ((u64)(0x2e13e497065cd61fU)), ((u64)(0x2ddfd424d6faf031U)), ((u64)(0x2da97683df2f268dU)), ((u64)(0x2d745ecfe5bf520bU)), ((u64)(0x2d404bd984990e6fU)), ((u64)(0x2d0a12f5a0f4e3e5U)), ((u64)(0x2cd4dbf7b3f71cb7U)), ((u64)(0x2ca0aff95cc5b092U)), ((u64)(0x2c6ab328946f80eaU)), ((u64)(0x2c355c2076bf9a55U)), ((u64)(0x2c0116805effaeaaU)), ((u64)(0x2bcb5733cb32b111U)), ((u64)(0x2b95df5ca28ef40dU)), ((u64)(0x2b617f7d4ed8c33eU)), ((u64)(0x2b2bff2ee48e0530U)), ((u64)(0x2af665bf1d3e6a8dU)), ((u64)(0x2ac1eaff4a98553dU)), ((u64)(0x2a8cab3210f3bb95U)), ((u64)(0x2a56ef5b40c2fc77U)), ((u64)(0x2a225915cd68c9f9U)), ((u64)(0x29ed5b561574765bU)), ((u64)(0x29b77c44ddf6c516U)), ((u64)(0x2982c9d0b1923745U)), ((u64)(0x294e0fb44f50586eU)), ((u64)(0x29180c903f7379f2U)), ((u64)(0x28e33d4032c2c7f5U)), ((u64)(0x28aec866b79e0cbaU)), ((u64)(0x2878a0522c7e7095U)), ((u64)(0x2843b374f06526deU)), ((u64)(0x280f8587e7083e30U)), ((u64)(0x27d9379fec069826U)), ((u64)(0x27a42c7ff0054685U)), ((u64)(0x277023998cd10537U)), ((u64)(0x2739d28f47b4d525U)), ((u64)(0x2704a8729fc3ddb7U)), ((u64)(0x26d086c219697e2cU)), ((u64)(0x269a71368f0f3047U)), ((u64)(0x2665275ed8d8f36cU)), ((u64)(0x2630ec4be0ad8f89U)), ((u64)(0x25fb13ac9aaf4c0fU)), ((u64)(0x25c5a956e225d672U)), ((u64)(0x2591544581b7dec2U)), ((u64)(0x255bba08cf8c979dU)), ((u64)(0x25262e6d72d6dfb0U)), ((u64)(0x24f1bebdf578b2f4U)), ((u64)(0x24bc6463225ab7ecU)), ((u64)(0x2486b6b5b5155ff0U)), ((u64)(0x24522bc490dde65aU)), ((u64)(0x241d12d41afca3c3U)), ((u64)(0x23e7424348ca1c9cU)), ((u64)(0x23b29b69070816e3U)), ((u64)(0x237dc574d80cf16bU)), ((u64)(0x2347d12a4670c123U)), ((u64)(0x23130dbb6b8d674fU)), ((u64)(0x22de7c5f127bd87eU)), ((u64)(0x22a8637f41fcad32U)), ((u64)(0x227382cc34ca2428U)), ((u64)(0x223f37ad21436d0cU)), ((u64)(0x2208f9574dcf8a70U)), ((u64)(0x21d3faac3e3fa1f3U)), ((u64)(0x219ff779fd329cb9U)), ((u64)(0x216992c7fdc216faU)), ((u64)(0x2134756ccb01abfbU)), ((u64)(0x21005df0a267bcc9U)), ((u64)(0x20ca2fe76a3f9475U)), ((u64)(0x2094f31f8832dd2aU)), ((u64)(0x2060c27fa028b0efU)), ((u64)(0x202ad0cc33744e4bU)), ((u64)(0x1ff573d68f903ea2U)), ((u64)(0x1fc1297872d9cbb5U)), ((u64)(0x1f8b758d848fac55U)), ((u64)(0x1f55f7a46a0c89ddU)), ((u64)(0x1f2192e9ee706e4bU)), ((u64)(0x1eec1e43171a4a11U)), ((u64)(0x1eb67e9c127b6e74U)), ((u64)(0x1e81fee341fc585dU)), ((u64)(0x1e4ccb0536608d61U)), ((u64)(0x1e1708d0f84d3de7U)), ((u64)(0x1de26d73f9d764b9U)), ((u64)(0x1dad7becc2f23ac2U)), ((u64)(0x1d779657025b6235U)), ((u64)(0x1d42deac01e2b4f7U)), ((u64)(0x1d0e3113363787f2U)), ((u64)(0x1cd8274291c6065bU)), ((u64)(0x1ca3529ba7d19eafU)), ((u64)(0x1c6eea92a61c3118U)), ((u64)(0x1c38bba884e35a7aU)), ((u64)(0x1c03c9539d82aec8U)), ((u64)(0x1bcfa885c8d117a6U)), ((u64)(0x1b99539e3a40dfb8U)), ((u64)(0x1b6442e4fb671960U)), ((u64)(0x1b303583fc527ab3U)), ((u64)(0x1af9ef3993b72ab8U)), ((u64)(0x1ac4bf6142f8eefaU)), ((u64)(0x1a90991a9bfa58c8U)), ((u64)(0x1a5a8e90f9908e0dU)), ((u64)(0x1a253eda614071a4U)), ((u64)(0x19f0ff151a99f483U)), ((u64)(0x19bb31bb5dc320d2U)), ((u64)(0x1985c162b168e70eU)), ((u64)(0x1951678227871f3eU)), ((u64)(0x191bd8d03f3e9864U)), ((u64)(0x18e6470cff6546b6U)), ((u64)(0x18b1d270cc51055fU)), ((u64)(0x187c83e7ad4e6efeU)), ((u64)(0x1846cfec8aa52598U)), ((u64)(0x18123ff06eea847aU)), ((u64)(0x17dd331a4b10d3f6U)), ((u64)(0x17a75c1508da432bU)), ((u64)(0x1772b010d3e1cf56U)), ((u64)(0x173de6815302e556U)), ((u64)(0x1707eb9aa8cf1ddeU)), ((u64)(0x16d322e220a5b17eU)), ((u64)(0x169e9e369aa2b597U)), ((u64)(0x16687e92154ef7acU)), ((u64)(0x16339874ddd8c623U)), ((u64)(0x15ff5a549627a36cU)), ((u64)(0x15c91510781fb5f0U)), ((u64)(0x159410d9f9b2f7f3U)), ((u64)(0x15600d7b2e28c65cU)), ((u64)(0x1529af2b7d0e0a2dU)), ((u64)(0x14f48c22ca71a1bdU)), ((u64)(0x14c0701bd527b498U)), ((u64)(0x148a4cf9550c5426U)), ((u64)(0x14550a6110d6a9b8U)), ((u64)(0x1420d51a73deee2dU)), ((u64)(0x13eaee90b964b047U)), ((u64)(0x13b58ba6fab6f36cU)), ((u64)(0x13813c85955f2923U)), ((u64)(0x134b9408eefea839U)), ((u64)(0x1316100725988694U)), ((u64)(0x12e1a66c1e139eddU)), ((u64)(0x12ac3d79c9b8fe2eU)), ((u64)(0x12769794a160cb58U)), ((u64)(0x124212dd4de70913U)), ((u64)(0x120ceafbafd80e85U)), ((u64)(0x11d72262f3133ed1U)), ((u64)(0x11a281e8c275cbdaU)), ((u64)(0x116d9ca79d89462aU)), ((u64)(0x1137b08617a104eeU)), ((u64)(0x1102f39e794d9d8bU)), ((u64)(0x10ce5297287c2f45U)), ((u64)(0x1098421286c9bf6bU)), ((u64)(0x1063680ed23aff89U)), ((u64)(0x102f0ce4839198dbU)), ((u64)(0x0ff8d71d360e13e2U)), ((u64)(0x0fc3df4a91a4dcb5U)), ((u64)(0x0f8fcbaa82a16121U)), ((u64)(0x0f596fbb9bb44db4U)), ((u64)(0x0f245962e2f6a490U)), ((u64)(0x0ef047824f2bb6daU)), ((u64)(0x0eba0c03b1df8af6U)), ((u64)(0x0e84d6695b193bf8U)), ((u64)(0x0e50ab877c142ffaU)), ((u64)(0x0e1aac0bf9b9e65cU)), ((u64)(0x0de5566ffafb1eb0U)), ((u64)(0x0db111f32f2f4bc0U)), ((u64)(0x0d7b4feb7eb212cdU)), ((u64)(0x0d45d98932280f0aU)), ((u64)(0x0d117ad428200c08U)), ((u64)(0x0cdbf7b9d9cce00dU)), ((u64)(0x0ca65fc7e170b33eU)), ((u64)(0x0c71e6398126f5cbU)), ((u64)(0x0c3ca38f350b22dfU)), ((u64)(0x0c06e93f5da2824cU)), ((u64)(0x0bd25432b14ecea3U)), ((u64)(0x0b9d53844ee47dd1U)), ((u64)(0x0b677603725064a8U)), ((u64)(0x0b32c4cf8ea6b6ecU)), ((u64)(0x0afe07b27dd78b14U)), ((u64)(0x0ac8062864ac6f43U)), ((u64)(0x0a9338205089f29cU)), ((u64)(0x0a5ec033b40fea93U)), ((u64)(0x0a2899c2f6732210U)), ((u64)(0x09f3ae3591f5b4d9U)), ((u64)(0x09bf7d228322baf5U)), ((u64)(0x098930e868e89591U)), ((u64)(0x0954272053ed4474U)), ((u64)(0x09201f4d0ff10390U)), ((u64)(0x08e9cbae7fe805b3U)), ((u64)(0x08b4a2f1ffecd15cU)), ((u64)(0x0880825b3323dab0U)), ((u64)(0x084a6a2b85062ab3U)), ((u64)(0x081521bc6a6b555cU)), ((u64)(0x07e0e7c9eebc444aU)), ((u64)(0x07ab0c764ac6d3a9U)), ((u64)(0x0775a391d56bdc87U)), ((u64)(0x07414fa7ddefe3a0U)), ((u64)(0x070bb2a62fe638ffU)), ((u64)(0x06d62884f31e93ffU)), ((u64)(0x06a1ba03f5b21000U)), ((u64)(0x066c5cd322b67fffU)), ((u64)(0x0636b0a8e891ffffU)), ((u64)(0x060226ed86db3333U)), ((u64)(0x05cd0b15a491eb84U)), ((u64)(0x05973c115074bc6aU)), ((u64)(0x05629674405d6388U)), ((u64)(0x052dbd86cd6238d9U)), ((u64)(0x04f7cad23de82d7bU)), ((u64)(0x04c308a831868ac9U)), ((u64)(0x048e74404f3daadbU)), ((u64)(0x04585d003f6488afU)), ((u64)(0x04237d99cc506d59U)), ((u64)(0x03ef2f5c7a1a488eU)), ((u64)(0x03b8f2b061aea072U)), ((u64)(0x0383f559e7bee6c1U)), ((u64)(0x034feef63f97d79cU)), ((u64)(0x03198bf832dfdfb0U)), ((u64)(0x02e46ff9c24cb2f3U)), ((u64)(0x02b059949b708f29U)), ((u64)(0x027a28edc580e50eU)), ((u64)(0x0244ed8b04671da5U)), ((u64)(0x0210be08d0527e1dU)), ((u64)(0x01dac9a7b3b7302fU)), ((u64)(0x01a56e1fc2f8f359U)), ((u64)(0x017124e63593f5e1U)), ((u64)(0x013b6e3d22865634U)), ((u64)(0x0105f1ca820511c3U)), ((u64)(0x00d18e3b9b374169U)), ((u64)(0x009c16c5c5253575U)), ((u64)(0x0066789e3750f791U)), ((u64)(0x0031fa182c40c60dU)), ((u64)(0x000730d67819e8d2U)), ((u64)(0x0000b8157268fdafU)), ((u64)(0x000012688b70e62bU)), ((u64)(0x000001d74124e3d1U)), ((u64)(0x0000002f201d49fbU)), ((u64)(0x00000004b6695433U)), ((u64)(0x0000000078a42205U)), ((u64)(0x000000000c1069cdU)), ((u64)(0x000000000134d761U)), ((u64)(0x00000000001ee257U)), ((u64)(0x00000000000316a2U)), ((u64)(0x0000000000004f10U)), ((u64)(0x00000000000007e8U)), ((u64)(0x00000000000000caU)), ((u64)(0x0000000000000014U)), ((u64)(0x0000000000000002U))}; // fixed array const
 const u64 _const_strconv__max_u64 = 18446744073709551615U; // precomputed2
Array_fixed_u32_12 _const_strconv__ten_pow_table_32 = {((u32)(1U)), ((u32)(10U)), ((u32)(100U)), ((u32)(1000U)), ((u32)(10000U)), ((u32)(100000U)), ((u32)(1000000U)), ((u32)(10000000U)), ((u32)(100000000U)), ((u32)(1000000000U)), ((u32)(10000000000U)), ((u32)(100000000000U))}; // fixed array const
 const u32 _const_strconv__mantbits32 = 23; // precomputed2
 const u32 _const_strconv__expbits32 = 8; // precomputed2
Array_fixed_u64_20 _const_strconv__ten_pow_table_64 = {((u64)(1U)), ((u64)(10U)), ((u64)(100U)), ((u64)(1000U)), ((u64)(10000U)), ((u64)(100000U)), ((u64)(1000000U)), ((u64)(10000000U)), ((u64)(100000000U)), ((u64)(1000000000U)), ((u64)(10000000000U)), ((u64)(100000000000U)), ((u64)(1000000000000U)), ((u64)(10000000000000U)), ((u64)(100000000000000U)), ((u64)(1000000000000000U)), ((u64)(10000000000000000U)), ((u64)(100000000000000000U)), ((u64)(1000000000000000000U)), ((u64)(10000000000000000000U))}; // fixed array const
 const u32 _const_strconv__mantbits64 = 52; // precomputed2
 const u32 _const_strconv__expbits64 = 11; // precomputed2
Array_fixed_f64_20 _const_strconv__dec_round = {((f64)(0.5)), 0.05, 0.005, 0.0005, 0.00005, 0.000005, 0.0000005, 0.00000005, 0.000000005, 0.0000000005, 0.00000000005, 0.000000000005, 0.0000000000005, 0.00000000000005, 0.000000000000005, 0.0000000000000005, 0.00000000000000005, 0.000000000000000005, 0.0000000000000000005, 0.00000000000000000005}; // fixed array const
Array_fixed_u64_18 _const_strconv__powers_of_10 = {((u64)(1e0)), ((u64)(1e1)), ((u64)(1e2)), ((u64)(1e3)), ((u64)(1e4)), ((u64)(1e5)), ((u64)(1e6)), ((u64)(1e7)), ((u64)(1e8)), ((u64)(1e9)), ((u64)(1e10)), ((u64)(1e11)), ((u64)(1e12)), ((u64)(1e13)), ((u64)(1e14)), ((u64)(1e15)), ((u64)(1e16)), ((u64)(1e17))}; // fixed array const
Array_fixed_u64_47 _const_strconv__pow5_split_32 = {((u64)(1152921504606846976U)), ((u64)(1441151880758558720U)), ((u64)(1801439850948198400U)), ((u64)(2251799813685248000U)), ((u64)(1407374883553280000U)), ((u64)(1759218604441600000U)), ((u64)(2199023255552000000U)), ((u64)(1374389534720000000U)), ((u64)(1717986918400000000U)), ((u64)(2147483648000000000U)), ((u64)(1342177280000000000U)), ((u64)(1677721600000000000U)), ((u64)(2097152000000000000U)), ((u64)(1310720000000000000U)), ((u64)(1638400000000000000U)), ((u64)(2048000000000000000U)), ((u64)(1280000000000000000U)), ((u64)(1600000000000000000U)), ((u64)(2000000000000000000U)), ((u64)(1250000000000000000U)), ((u64)(1562500000000000000U)), ((u64)(1953125000000000000U)), ((u64)(1220703125000000000U)), ((u64)(1525878906250000000U)), ((u64)(1907348632812500000U)), ((u64)(1192092895507812500U)), ((u64)(1490116119384765625U)), ((u64)(1862645149230957031U)), ((u64)(1164153218269348144U)), ((u64)(1455191522836685180U)), ((u64)(1818989403545856475U)), ((u64)(2273736754432320594U)), ((u64)(1421085471520200371U)), ((u64)(1776356839400250464U)), ((u64)(2220446049250313080U)), ((u64)(1387778780781445675U)), ((u64)(1734723475976807094U)), ((u64)(2168404344971008868U)), ((u64)(1355252715606880542U)), ((u64)(1694065894508600678U)), ((u64)(2117582368135750847U)), ((u64)(1323488980084844279U)), ((u64)(1654361225106055349U)), ((u64)(2067951531382569187U)), ((u64)(1292469707114105741U)), ((u64)(1615587133892632177U)), ((u64)(2019483917365790221U))}; // fixed array const
Array_fixed_u64_31 _const_strconv__pow5_inv_split_32 = {((u64)(576460752303423489U)), ((u64)(461168601842738791U)), ((u64)(368934881474191033U)), ((u64)(295147905179352826U)), ((u64)(472236648286964522U)), ((u64)(377789318629571618U)), ((u64)(302231454903657294U)), ((u64)(483570327845851670U)), ((u64)(386856262276681336U)), ((u64)(309485009821345069U)), ((u64)(495176015714152110U)), ((u64)(396140812571321688U)), ((u64)(316912650057057351U)), ((u64)(507060240091291761U)), ((u64)(405648192073033409U)), ((u64)(324518553658426727U)), ((u64)(519229685853482763U)), ((u64)(415383748682786211U)), ((u64)(332306998946228969U)), ((u64)(531691198313966350U)), ((u64)(425352958651173080U)), ((u64)(340282366920938464U)), ((u64)(544451787073501542U)), ((u64)(435561429658801234U)), ((u64)(348449143727040987U)), ((u64)(557518629963265579U)), ((u64)(446014903970612463U)), ((u64)(356811923176489971U)), ((u64)(570899077082383953U)), ((u64)(456719261665907162U)), ((u64)(365375409332725730U))}; // fixed array const
Array_fixed_u64_652 _const_strconv__pow5_split_64_x = {((u64)(0x0000000000000000U)), ((u64)(0x0100000000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0140000000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0190000000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01f4000000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0138800000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0186a00000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01e8480000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01312d0000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x017d784000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01dcd65000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x012a05f200000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0174876e80000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01d1a94a20000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x012309ce54000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x016bcc41e9000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01c6bf5263400000U)), ((u64)(0x0000000000000000U)), ((u64)(0x011c37937e080000U)), ((u64)(0x0000000000000000U)), ((u64)(0x016345785d8a0000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01bc16d674ec8000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01158e460913d000U)), ((u64)(0x0000000000000000U)), ((u64)(0x015af1d78b58c400U)), ((u64)(0x0000000000000000U)), ((u64)(0x01b1ae4d6e2ef500U)), ((u64)(0x0000000000000000U)), ((u64)(0x010f0cf064dd5920U)), ((u64)(0x0000000000000000U)), ((u64)(0x0152d02c7e14af68U)), ((u64)(0x0000000000000000U)), ((u64)(0x01a784379d99db42U)), ((u64)(0x4000000000000000U)), ((u64)(0x0108b2a2c2802909U)), ((u64)(0x9000000000000000U)), ((u64)(0x014adf4b7320334bU)), ((u64)(0x7400000000000000U)), ((u64)(0x019d971e4fe8401eU)), ((u64)(0x0880000000000000U)), ((u64)(0x01027e72f1f12813U)), ((u64)(0xcaa0000000000000U)), ((u64)(0x01431e0fae6d7217U)), ((u64)(0xbd48000000000000U)), ((u64)(0x0193e5939a08ce9dU)), ((u64)(0x2c9a000000000000U)), ((u64)(0x01f8def8808b0245U)), ((u64)(0x3be0400000000000U)), ((u64)(0x013b8b5b5056e16bU)), ((u64)(0x0ad8500000000000U)), ((u64)(0x018a6e32246c99c6U)), ((u64)(0x8d8e640000000000U)), ((u64)(0x01ed09bead87c037U)), ((u64)(0xb878fe8000000000U)), ((u64)(0x013426172c74d822U)), ((u64)(0x66973e2000000000U)), ((u64)(0x01812f9cf7920e2bU)), ((u64)(0x403d0da800000000U)), ((u64)(0x01e17b84357691b6U)), ((u64)(0xe826288900000000U)), ((u64)(0x012ced32a16a1b11U)), ((u64)(0x622fb2ab40000000U)), ((u64)(0x0178287f49c4a1d6U)), ((u64)(0xfabb9f5610000000U)), ((u64)(0x01d6329f1c35ca4bU)), ((u64)(0x7cb54395ca000000U)), ((u64)(0x0125dfa371a19e6fU)), ((u64)(0x5be2947b3c800000U)), ((u64)(0x016f578c4e0a060bU)), ((u64)(0x32db399a0ba00000U)), ((u64)(0x01cb2d6f618c878eU)), ((u64)(0xdfc9040047440000U)), ((u64)(0x011efc659cf7d4b8U)), ((u64)(0x17bb450059150000U)), ((u64)(0x0166bb7f0435c9e7U)), ((u64)(0xddaa16406f5a4000U)), ((u64)(0x01c06a5ec5433c60U)), ((u64)(0x8a8a4de845986800U)), ((u64)(0x0118427b3b4a05bcU)), ((u64)(0xad2ce16256fe8200U)), ((u64)(0x015e531a0a1c872bU)), ((u64)(0x987819baecbe2280U)), ((u64)(0x01b5e7e08ca3a8f6U)), ((u64)(0x1f4b1014d3f6d590U)), ((u64)(0x0111b0ec57e6499aU)), ((u64)(0xa71dd41a08f48af4U)), ((u64)(0x01561d276ddfdc00U)), ((u64)(0xd0e549208b31adb1U)), ((u64)(0x01aba4714957d300U)), ((u64)(0x828f4db456ff0c8eU)), ((u64)(0x010b46c6cdd6e3e0U)), ((u64)(0xa33321216cbecfb2U)), ((u64)(0x014e1878814c9cd8U)), ((u64)(0xcbffe969c7ee839eU)), ((u64)(0x01a19e96a19fc40eU)), ((u64)(0x3f7ff1e21cf51243U)), ((u64)(0x0105031e2503da89U)), ((u64)(0x8f5fee5aa43256d4U)), ((u64)(0x014643e5ae44d12bU)), ((u64)(0x7337e9f14d3eec89U)), ((u64)(0x0197d4df19d60576U)), ((u64)(0x1005e46da08ea7abU)), ((u64)(0x01fdca16e04b86d4U)), ((u64)(0x8a03aec4845928cbU)), ((u64)(0x013e9e4e4c2f3444U)), ((u64)(0xac849a75a56f72fdU)), ((u64)(0x018e45e1df3b0155U)), ((u64)(0x17a5c1130ecb4fbdU)), ((u64)(0x01f1d75a5709c1abU)), ((u64)(0xeec798abe93f11d6U)), ((u64)(0x013726987666190aU)), ((u64)(0xaa797ed6e38ed64bU)), ((u64)(0x0184f03e93ff9f4dU)), ((u64)(0x1517de8c9c728bdeU)), ((u64)(0x01e62c4e38ff8721U)), ((u64)(0xad2eeb17e1c7976bU)), ((u64)(0x012fdbb0e39fb474U)), ((u64)(0xd87aa5ddda397d46U)), ((u64)(0x017bd29d1c87a191U)), ((u64)(0x4e994f5550c7dc97U)), ((u64)(0x01dac74463a989f6U)), ((u64)(0xf11fd195527ce9deU)), ((u64)(0x0128bc8abe49f639U)), ((u64)(0x6d67c5faa71c2456U)), ((u64)(0x0172ebad6ddc73c8U)), ((u64)(0x88c1b77950e32d6cU)), ((u64)(0x01cfa698c95390baU)), ((u64)(0x957912abd28dfc63U)), ((u64)(0x0121c81f7dd43a74U)), ((u64)(0xbad75756c7317b7cU)), ((u64)(0x016a3a275d494911U)), ((u64)(0x298d2d2c78fdda5bU)), ((u64)(0x01c4c8b1349b9b56U)), ((u64)(0xd9f83c3bcb9ea879U)), ((u64)(0x011afd6ec0e14115U)), ((u64)(0x50764b4abe865297U)), ((u64)(0x0161bcca7119915bU)), ((u64)(0x2493de1d6e27e73dU)), ((u64)(0x01ba2bfd0d5ff5b2U)), ((u64)(0x56dc6ad264d8f086U)), ((u64)(0x01145b7e285bf98fU)), ((u64)(0x2c938586fe0f2ca8U)), ((u64)(0x0159725db272f7f3U)), ((u64)(0xf7b866e8bd92f7d2U)), ((u64)(0x01afcef51f0fb5efU)), ((u64)(0xfad34051767bdae3U)), ((u64)(0x010de1593369d1b5U)), ((u64)(0x79881065d41ad19cU)), ((u64)(0x015159af80444623U)), ((u64)(0x57ea147f49218603U)), ((u64)(0x01a5b01b605557acU)), ((u64)(0xb6f24ccf8db4f3c1U)), ((u64)(0x01078e111c3556cbU)), ((u64)(0xa4aee003712230b2U)), ((u64)(0x014971956342ac7eU)), ((u64)(0x4dda98044d6abcdfU)), ((u64)(0x019bcdfabc13579eU)), ((u64)(0xf0a89f02b062b60bU)), ((u64)(0x010160bcb58c16c2U)), ((u64)(0xacd2c6c35c7b638eU)), ((u64)(0x0141b8ebe2ef1c73U)), ((u64)(0x98077874339a3c71U)), ((u64)(0x01922726dbaae390U)), ((u64)(0xbe0956914080cb8eU)), ((u64)(0x01f6b0f092959c74U)), ((u64)(0xf6c5d61ac8507f38U)), ((u64)(0x013a2e965b9d81c8U)), ((u64)(0x34774ba17a649f07U)), ((u64)(0x0188ba3bf284e23bU)), ((u64)(0x01951e89d8fdc6c8U)), ((u64)(0x01eae8caef261acaU)), ((u64)(0x40fd3316279e9c3dU)), ((u64)(0x0132d17ed577d0beU)), ((u64)(0xd13c7fdbb186434cU)), ((u64)(0x017f85de8ad5c4edU)), ((u64)(0x458b9fd29de7d420U)), ((u64)(0x01df67562d8b3629U)), ((u64)(0xcb7743e3a2b0e494U)), ((u64)(0x012ba095dc7701d9U)), ((u64)(0x3e5514dc8b5d1db9U)), ((u64)(0x017688bb5394c250U)), ((u64)(0x4dea5a13ae346527U)), ((u64)(0x01d42aea2879f2e4U)), ((u64)(0xb0b2784c4ce0bf38U)), ((u64)(0x01249ad2594c37ceU)), ((u64)(0x5cdf165f6018ef06U)), ((u64)(0x016dc186ef9f45c2U)), ((u64)(0xf416dbf7381f2ac8U)), ((u64)(0x01c931e8ab871732U)), ((u64)(0xd88e497a83137abdU)), ((u64)(0x011dbf316b346e7fU)), ((u64)(0xceb1dbd923d8596cU)), ((u64)(0x01652efdc6018a1fU)), ((u64)(0xc25e52cf6cce6fc7U)), ((u64)(0x01be7abd3781eca7U)), ((u64)(0xd97af3c1a40105dcU)), ((u64)(0x01170cb642b133e8U)), ((u64)(0x0fd9b0b20d014754U)), ((u64)(0x015ccfe3d35d80e3U)), ((u64)(0xd3d01cde90419929U)), ((u64)(0x01b403dcc834e11bU)), ((u64)(0x6462120b1a28ffb9U)), ((u64)(0x01108269fd210cb1U)), ((u64)(0xbd7a968de0b33fa8U)), ((u64)(0x0154a3047c694fddU)), ((u64)(0x2cd93c3158e00f92U)), ((u64)(0x01a9cbc59b83a3d5U)), ((u64)(0x3c07c59ed78c09bbU)), ((u64)(0x010a1f5b81324665U)), ((u64)(0x8b09b7068d6f0c2aU)), ((u64)(0x014ca732617ed7feU)), ((u64)(0x2dcc24c830cacf34U)), ((u64)(0x019fd0fef9de8dfeU)), ((u64)(0xdc9f96fd1e7ec180U)), ((u64)(0x0103e29f5c2b18beU)), ((u64)(0x93c77cbc661e71e1U)), ((u64)(0x0144db473335deeeU)), ((u64)(0x38b95beb7fa60e59U)), ((u64)(0x01961219000356aaU)), ((u64)(0xc6e7b2e65f8f91efU)), ((u64)(0x01fb969f40042c54U)), ((u64)(0xfc50cfcffbb9bb35U)), ((u64)(0x013d3e2388029bb4U)), ((u64)(0x3b6503c3faa82a03U)), ((u64)(0x018c8dac6a0342a2U)), ((u64)(0xca3e44b4f9523484U)), ((u64)(0x01efb1178484134aU)), ((u64)(0xbe66eaf11bd360d2U)), ((u64)(0x0135ceaeb2d28c0eU)), ((u64)(0x6e00a5ad62c83907U)), ((u64)(0x0183425a5f872f12U)), ((u64)(0x0980cf18bb7a4749U)), ((u64)(0x01e412f0f768fad7U)), ((u64)(0x65f0816f752c6c8dU)), ((u64)(0x012e8bd69aa19cc6U)), ((u64)(0xff6ca1cb527787b1U)), ((u64)(0x017a2ecc414a03f7U)), ((u64)(0xff47ca3e2715699dU)), ((u64)(0x01d8ba7f519c84f5U)), ((u64)(0xbf8cde66d86d6202U)), ((u64)(0x0127748f9301d319U)), ((u64)(0x2f7016008e88ba83U)), ((u64)(0x017151b377c247e0U)), ((u64)(0x3b4c1b80b22ae923U)), ((u64)(0x01cda62055b2d9d8U)), ((u64)(0x250f91306f5ad1b6U)), ((u64)(0x012087d4358fc827U)), ((u64)(0xee53757c8b318623U)), ((u64)(0x0168a9c942f3ba30U)), ((u64)(0x29e852dbadfde7acU)), ((u64)(0x01c2d43b93b0a8bdU)), ((u64)(0x3a3133c94cbeb0ccU)), ((u64)(0x0119c4a53c4e6976U)), ((u64)(0xc8bd80bb9fee5cffU)), ((u64)(0x016035ce8b6203d3U)), ((u64)(0xbaece0ea87e9f43eU)), ((u64)(0x01b843422e3a84c8U)), ((u64)(0x74d40c9294f238a7U)), ((u64)(0x01132a095ce492fdU)), ((u64)(0xd2090fb73a2ec6d1U)), ((u64)(0x0157f48bb41db7bcU)), ((u64)(0x068b53a508ba7885U)), ((u64)(0x01adf1aea12525acU)), ((u64)(0x8417144725748b53U)), ((u64)(0x010cb70d24b7378bU)), ((u64)(0x651cd958eed1ae28U)), ((u64)(0x014fe4d06de5056eU)), ((u64)(0xfe640faf2a8619b2U)), ((u64)(0x01a3de04895e46c9U)), ((u64)(0x3efe89cd7a93d00fU)), ((u64)(0x01066ac2d5daec3eU)), ((u64)(0xcebe2c40d938c413U)), ((u64)(0x014805738b51a74dU)), ((u64)(0x426db7510f86f518U)), ((u64)(0x019a06d06e261121U)), ((u64)(0xc9849292a9b4592fU)), ((u64)(0x0100444244d7cab4U)), ((u64)(0xfbe5b73754216f7aU)), ((u64)(0x01405552d60dbd61U)), ((u64)(0x7adf25052929cb59U)), ((u64)(0x01906aa78b912cbaU)), ((u64)(0x1996ee4673743e2fU)), ((u64)(0x01f485516e7577e9U)), ((u64)(0xaffe54ec0828a6ddU)), ((u64)(0x0138d352e5096af1U)), ((u64)(0x1bfdea270a32d095U)), ((u64)(0x018708279e4bc5aeU)), ((u64)(0xa2fd64b0ccbf84baU)), ((u64)(0x01e8ca3185deb719U)), ((u64)(0x05de5eee7ff7b2f4U)), ((u64)(0x01317e5ef3ab3270U)), ((u64)(0x0755f6aa1ff59fb1U)), ((u64)(0x017dddf6b095ff0cU)), ((u64)(0x092b7454a7f3079eU)), ((u64)(0x01dd55745cbb7ecfU)), ((u64)(0x65bb28b4e8f7e4c3U)), ((u64)(0x012a5568b9f52f41U)), ((u64)(0xbf29f2e22335ddf3U)), ((u64)(0x0174eac2e8727b11U)), ((u64)(0x2ef46f9aac035570U)), ((u64)(0x01d22573a28f19d6U)), ((u64)(0xdd58c5c0ab821566U)), ((u64)(0x0123576845997025U)), ((u64)(0x54aef730d6629ac0U)), ((u64)(0x016c2d4256ffcc2fU)), ((u64)(0x29dab4fd0bfb4170U)), ((u64)(0x01c73892ecbfbf3bU)), ((u64)(0xfa28b11e277d08e6U)), ((u64)(0x011c835bd3f7d784U)), ((u64)(0x38b2dd65b15c4b1fU)), ((u64)(0x0163a432c8f5cd66U)), ((u64)(0xc6df94bf1db35de7U)), ((u64)(0x01bc8d3f7b3340bfU)), ((u64)(0xdc4bbcf772901ab0U)), ((u64)(0x0115d847ad000877U)), ((u64)(0xd35eac354f34215cU)), ((u64)(0x015b4e5998400a95U)), ((u64)(0x48365742a30129b4U)), ((u64)(0x01b221effe500d3bU)), ((u64)(0x0d21f689a5e0ba10U)), ((u64)(0x010f5535fef20845U)), ((u64)(0x506a742c0f58e894U)), ((u64)(0x01532a837eae8a56U)), ((u64)(0xe4851137132f22b9U)), ((u64)(0x01a7f5245e5a2cebU)), ((u64)(0x6ed32ac26bfd75b4U)), ((u64)(0x0108f936baf85c13U)), ((u64)(0x4a87f57306fcd321U)), ((u64)(0x014b378469b67318U)), ((u64)(0x5d29f2cfc8bc07e9U)), ((u64)(0x019e056584240fdeU)), ((u64)(0xfa3a37c1dd7584f1U)), ((u64)(0x0102c35f729689eaU)), ((u64)(0xb8c8c5b254d2e62eU)), ((u64)(0x014374374f3c2c65U)), ((u64)(0x26faf71eea079fb9U)), ((u64)(0x01945145230b377fU)), ((u64)(0xf0b9b4e6a48987a8U)), ((u64)(0x01f965966bce055eU)), ((u64)(0x5674111026d5f4c9U)), ((u64)(0x013bdf7e0360c35bU)), ((u64)(0x2c111554308b71fbU)), ((u64)(0x018ad75d8438f432U)), ((u64)(0xb7155aa93cae4e7aU)), ((u64)(0x01ed8d34e547313eU)), ((u64)(0x326d58a9c5ecf10cU)), ((u64)(0x013478410f4c7ec7U)), ((u64)(0xff08aed437682d4fU)), ((u64)(0x01819651531f9e78U)), ((u64)(0x3ecada89454238a3U)), ((u64)(0x01e1fbe5a7e78617U)), ((u64)(0x873ec895cb496366U)), ((u64)(0x012d3d6f88f0b3ceU)), ((u64)(0x290e7abb3e1bbc3fU)), ((u64)(0x01788ccb6b2ce0c2U)), ((u64)(0xb352196a0da2ab4fU)), ((u64)(0x01d6affe45f818f2U)), ((u64)(0xb0134fe24885ab11U)), ((u64)(0x01262dfeebbb0f97U)), ((u64)(0x9c1823dadaa715d6U)), ((u64)(0x016fb97ea6a9d37dU)), ((u64)(0x031e2cd19150db4bU)), ((u64)(0x01cba7de5054485dU)), ((u64)(0x21f2dc02fad2890fU)), ((u64)(0x011f48eaf234ad3aU)), ((u64)(0xaa6f9303b9872b53U)), ((u64)(0x01671b25aec1d888U)), ((u64)(0xd50b77c4a7e8f628U)), ((u64)(0x01c0e1ef1a724eaaU)), ((u64)(0xc5272adae8f199d9U)), ((u64)(0x01188d357087712aU)), ((u64)(0x7670f591a32e004fU)), ((u64)(0x015eb082cca94d75U)), ((u64)(0xd40d32f60bf98063U)), ((u64)(0x01b65ca37fd3a0d2U)), ((u64)(0xc4883fd9c77bf03eU)), ((u64)(0x0111f9e62fe44483U)), ((u64)(0xb5aa4fd0395aec4dU)), ((u64)(0x0156785fbbdd55a4U)), ((u64)(0xe314e3c447b1a760U)), ((u64)(0x01ac1677aad4ab0dU)), ((u64)(0xaded0e5aaccf089cU)), ((u64)(0x010b8e0acac4eae8U)), ((u64)(0xd96851f15802cac3U)), ((u64)(0x014e718d7d7625a2U)), ((u64)(0x8fc2666dae037d74U)), ((u64)(0x01a20df0dcd3af0bU)), ((u64)(0x39d980048cc22e68U)), ((u64)(0x010548b68a044d67U)), ((u64)(0x084fe005aff2ba03U)), ((u64)(0x01469ae42c8560c1U)), ((u64)(0x4a63d8071bef6883U)), ((u64)(0x0198419d37a6b8f1U)), ((u64)(0x9cfcce08e2eb42a4U)), ((u64)(0x01fe52048590672dU)), ((u64)(0x821e00c58dd309a7U)), ((u64)(0x013ef342d37a407cU)), ((u64)(0xa2a580f6f147cc10U)), ((u64)(0x018eb0138858d09bU)), ((u64)(0x8b4ee134ad99bf15U)), ((u64)(0x01f25c186a6f04c2U)), ((u64)(0x97114cc0ec80176dU)), ((u64)(0x0137798f428562f9U)), ((u64)(0xfcd59ff127a01d48U)), ((u64)(0x018557f31326bbb7U)), ((u64)(0xfc0b07ed7188249aU)), ((u64)(0x01e6adefd7f06aa5U)), ((u64)(0xbd86e4f466f516e0U)), ((u64)(0x01302cb5e6f642a7U)), ((u64)(0xace89e3180b25c98U)), ((u64)(0x017c37e360b3d351U)), ((u64)(0x1822c5bde0def3beU)), ((u64)(0x01db45dc38e0c826U)), ((u64)(0xcf15bb96ac8b5857U)), ((u64)(0x01290ba9a38c7d17U)), ((u64)(0xc2db2a7c57ae2e6dU)), ((u64)(0x01734e940c6f9c5dU)), ((u64)(0x3391f51b6d99ba08U)), ((u64)(0x01d022390f8b8375U)), ((u64)(0x403b393124801445U)), ((u64)(0x01221563a9b73229U)), ((u64)(0x904a077d6da01956U)), ((u64)(0x016a9abc9424feb3U)), ((u64)(0x745c895cc9081facU)), ((u64)(0x01c5416bb92e3e60U)), ((u64)(0x48b9d5d9fda513cbU)), ((u64)(0x011b48e353bce6fcU)), ((u64)(0x5ae84b507d0e58beU)), ((u64)(0x01621b1c28ac20bbU)), ((u64)(0x31a25e249c51eeeeU)), ((u64)(0x01baa1e332d728eaU)), ((u64)(0x5f057ad6e1b33554U)), ((u64)(0x0114a52dffc67992U)), ((u64)(0xf6c6d98c9a2002aaU)), ((u64)(0x0159ce797fb817f6U)), ((u64)(0xb4788fefc0a80354U)), ((u64)(0x01b04217dfa61df4U)), ((u64)(0xf0cb59f5d8690214U)), ((u64)(0x010e294eebc7d2b8U)), ((u64)(0x2cfe30734e83429aU)), ((u64)(0x0151b3a2a6b9c767U)), ((u64)(0xf83dbc9022241340U)), ((u64)(0x01a6208b50683940U)), ((u64)(0x9b2695da15568c08U)), ((u64)(0x0107d457124123c8U)), ((u64)(0xc1f03b509aac2f0aU)), ((u64)(0x0149c96cd6d16cbaU)), ((u64)(0x726c4a24c1573acdU)), ((u64)(0x019c3bc80c85c7e9U)), ((u64)(0xe783ae56f8d684c0U)), ((u64)(0x0101a55d07d39cf1U)), ((u64)(0x616499ecb70c25f0U)), ((u64)(0x01420eb449c8842eU)), ((u64)(0xf9bdc067e4cf2f6cU)), ((u64)(0x019292615c3aa539U)), ((u64)(0x782d3081de02fb47U)), ((u64)(0x01f736f9b3494e88U)), ((u64)(0x4b1c3e512ac1dd0cU)), ((u64)(0x013a825c100dd115U)), ((u64)(0x9de34de57572544fU)), ((u64)(0x018922f31411455aU)), ((u64)(0x455c215ed2cee963U)), ((u64)(0x01eb6bafd91596b1U)), ((u64)(0xcb5994db43c151deU)), ((u64)(0x0133234de7ad7e2eU)), ((u64)(0x7e2ffa1214b1a655U)), ((u64)(0x017fec216198ddbaU)), ((u64)(0x1dbbf89699de0febU)), ((u64)(0x01dfe729b9ff1529U)), ((u64)(0xb2957b5e202ac9f3U)), ((u64)(0x012bf07a143f6d39U)), ((u64)(0x1f3ada35a8357c6fU)), ((u64)(0x0176ec98994f4888U)), ((u64)(0x270990c31242db8bU)), ((u64)(0x01d4a7bebfa31aaaU)), ((u64)(0x5865fa79eb69c937U)), ((u64)(0x0124e8d737c5f0aaU)), ((u64)(0xee7f791866443b85U)), ((u64)(0x016e230d05b76cd4U)), ((u64)(0x2a1f575e7fd54a66U)), ((u64)(0x01c9abd04725480aU)), ((u64)(0x5a53969b0fe54e80U)), ((u64)(0x011e0b622c774d06U)), ((u64)(0xf0e87c41d3dea220U)), ((u64)(0x01658e3ab7952047U)), ((u64)(0xed229b5248d64aa8U)), ((u64)(0x01bef1c9657a6859U)), ((u64)(0x3435a1136d85eea9U)), ((u64)(0x0117571ddf6c8138U)), ((u64)(0x4143095848e76a53U)), ((u64)(0x015d2ce55747a186U)), ((u64)(0xd193cbae5b2144e8U)), ((u64)(0x01b4781ead1989e7U)), ((u64)(0xe2fc5f4cf8f4cb11U)), ((u64)(0x0110cb132c2ff630U)), ((u64)(0x1bbb77203731fdd5U)), ((u64)(0x0154fdd7f73bf3bdU)), ((u64)(0x62aa54e844fe7d4aU)), ((u64)(0x01aa3d4df50af0acU)), ((u64)(0xbdaa75112b1f0e4eU)), ((u64)(0x010a6650b926d66bU)), ((u64)(0xad15125575e6d1e2U)), ((u64)(0x014cffe4e7708c06U)), ((u64)(0x585a56ead360865bU)), ((u64)(0x01a03fde214caf08U)), ((u64)(0x37387652c41c53f8U)), ((u64)(0x010427ead4cfed65U)), ((u64)(0x850693e7752368f7U)), ((u64)(0x014531e58a03e8beU)), ((u64)(0x264838e1526c4334U)), ((u64)(0x01967e5eec84e2eeU)), ((u64)(0xafda4719a7075402U)), ((u64)(0x01fc1df6a7a61ba9U)), ((u64)(0x0de86c7008649481U)), ((u64)(0x013d92ba28c7d14aU)), ((u64)(0x9162878c0a7db9a1U)), ((u64)(0x018cf768b2f9c59cU)), ((u64)(0xb5bb296f0d1d280aU)), ((u64)(0x01f03542dfb83703U)), ((u64)(0x5194f9e568323906U)), ((u64)(0x01362149cbd32262U)), ((u64)(0xe5fa385ec23ec747U)), ((u64)(0x0183a99c3ec7eafaU)), ((u64)(0x9f78c67672ce7919U)), ((u64)(0x01e494034e79e5b9U)), ((u64)(0x03ab7c0a07c10bb0U)), ((u64)(0x012edc82110c2f94U)), ((u64)(0x04965b0c89b14e9cU)), ((u64)(0x017a93a2954f3b79U)), ((u64)(0x45bbf1cfac1da243U)), ((u64)(0x01d9388b3aa30a57U)), ((u64)(0x8b957721cb92856aU)), ((u64)(0x0127c35704a5e676U)), ((u64)(0x2e7ad4ea3e7726c4U)), ((u64)(0x0171b42cc5cf6014U)), ((u64)(0x3a198a24ce14f075U)), ((u64)(0x01ce2137f7433819U)), ((u64)(0xc44ff65700cd1649U)), ((u64)(0x0120d4c2fa8a030fU)), ((u64)(0xb563f3ecc1005bdbU)), ((u64)(0x016909f3b92c83d3U)), ((u64)(0xa2bcf0e7f14072d2U)), ((u64)(0x01c34c70a777a4c8U)), ((u64)(0x65b61690f6c847c3U)), ((u64)(0x011a0fc668aac6fdU)), ((u64)(0xbf239c35347a59b4U)), ((u64)(0x016093b802d578bcU)), ((u64)(0xeeec83428198f021U)), ((u64)(0x01b8b8a6038ad6ebU)), ((u64)(0x7553d20990ff9615U)), ((u64)(0x01137367c236c653U)), ((u64)(0x52a8c68bf53f7b9aU)), ((u64)(0x01585041b2c477e8U)), ((u64)(0x6752f82ef28f5a81U)), ((u64)(0x01ae64521f7595e2U)), ((u64)(0x8093db1d57999890U)), ((u64)(0x010cfeb353a97dadU)), ((u64)(0xe0b8d1e4ad7ffeb4U)), ((u64)(0x01503e602893dd18U)), ((u64)(0x18e7065dd8dffe62U)), ((u64)(0x01a44df832b8d45fU)), ((u64)(0x6f9063faa78bfefdU)), ((u64)(0x0106b0bb1fb384bbU)), ((u64)(0x4b747cf9516efebcU)), ((u64)(0x01485ce9e7a065eaU)), ((u64)(0xde519c37a5cabe6bU)), ((u64)(0x019a742461887f64U)), ((u64)(0x0af301a2c79eb703U)), ((u64)(0x01008896bcf54f9fU)), ((u64)(0xcdafc20b798664c4U)), ((u64)(0x0140aabc6c32a386U)), ((u64)(0x811bb28e57e7fdf5U)), ((u64)(0x0190d56b873f4c68U)), ((u64)(0xa1629f31ede1fd72U)), ((u64)(0x01f50ac6690f1f82U)), ((u64)(0xa4dda37f34ad3e67U)), ((u64)(0x013926bc01a973b1U)), ((u64)(0x0e150c5f01d88e01U)), ((u64)(0x0187706b0213d09eU)), ((u64)(0x919a4f76c24eb181U)), ((u64)(0x01e94c85c298c4c5U)), ((u64)(0x7b0071aa39712ef1U)), ((u64)(0x0131cfd3999f7afbU)), ((u64)(0x59c08e14c7cd7aadU)), ((u64)(0x017e43c8800759baU)), ((u64)(0xf030b199f9c0d958U)), ((u64)(0x01ddd4baa0093028U)), ((u64)(0x961e6f003c1887d7U)), ((u64)(0x012aa4f4a405be19U)), ((u64)(0xfba60ac04b1ea9cdU)), ((u64)(0x01754e31cd072d9fU)), ((u64)(0xfa8f8d705de65440U)), ((u64)(0x01d2a1be4048f907U)), ((u64)(0xfc99b8663aaff4a8U)), ((u64)(0x0123a516e82d9ba4U)), ((u64)(0x3bc0267fc95bf1d2U)), ((u64)(0x016c8e5ca239028eU)), ((u64)(0xcab0301fbbb2ee47U)), ((u64)(0x01c7b1f3cac74331U)), ((u64)(0x1eae1e13d54fd4ecU)), ((u64)(0x011ccf385ebc89ffU)), ((u64)(0xe659a598caa3ca27U)), ((u64)(0x01640306766bac7eU)), ((u64)(0x9ff00efefd4cbcb1U)), ((u64)(0x01bd03c81406979eU)), ((u64)(0x23f6095f5e4ff5efU)), ((u64)(0x0116225d0c841ec3U)), ((u64)(0xecf38bb735e3f36aU)), ((u64)(0x015baaf44fa52673U)), ((u64)(0xe8306ea5035cf045U)), ((u64)(0x01b295b1638e7010U)), ((u64)(0x911e4527221a162bU)), ((u64)(0x010f9d8ede39060aU)), ((u64)(0x3565d670eaa09bb6U)), ((u64)(0x015384f295c7478dU)), ((u64)(0x82bf4c0d2548c2a3U)), ((u64)(0x01a8662f3b391970U)), ((u64)(0x51b78f88374d79a6U)), ((u64)(0x01093fdd8503afe6U)), ((u64)(0xe625736a4520d810U)), ((u64)(0x014b8fd4e6449bdfU)), ((u64)(0xdfaed044d6690e14U)), ((u64)(0x019e73ca1fd5c2d7U)), ((u64)(0xebcd422b0601a8ccU)), ((u64)(0x0103085e53e599c6U)), ((u64)(0xa6c092b5c78212ffU)), ((u64)(0x0143ca75e8df0038U)), ((u64)(0xd070b763396297bfU)), ((u64)(0x0194bd136316c046U)), ((u64)(0x848ce53c07bb3dafU)), ((u64)(0x01f9ec583bdc7058U)), ((u64)(0x52d80f4584d5068dU)), ((u64)(0x013c33b72569c637U)), ((u64)(0x278e1316e60a4831U)), ((u64)(0x018b40a4eec437c5U))}; // fixed array const
Array_fixed_u64_584 _const_strconv__pow5_inv_split_64_x = {((u64)(0x0000000000000001U)), ((u64)(0x0400000000000000U)), ((u64)(0x3333333333333334U)), ((u64)(0x0333333333333333U)), ((u64)(0x28f5c28f5c28f5c3U)), ((u64)(0x028f5c28f5c28f5cU)), ((u64)(0xed916872b020c49cU)), ((u64)(0x020c49ba5e353f7cU)), ((u64)(0xaf4f0d844d013a93U)), ((u64)(0x0346dc5d63886594U)), ((u64)(0x8c3f3e0370cdc876U)), ((u64)(0x029f16b11c6d1e10U)), ((u64)(0xd698fe69270b06c5U)), ((u64)(0x0218def416bdb1a6U)), ((u64)(0xf0f4ca41d811a46eU)), ((u64)(0x035afe535795e90aU)), ((u64)(0xf3f70834acdae9f1U)), ((u64)(0x02af31dc4611873bU)), ((u64)(0x5cc5a02a23e254c1U)), ((u64)(0x0225c17d04dad296U)), ((u64)(0xfad5cd10396a2135U)), ((u64)(0x036f9bfb3af7b756U)), ((u64)(0xfbde3da69454e75eU)), ((u64)(0x02bfaffc2f2c92abU)), ((u64)(0x2fe4fe1edd10b918U)), ((u64)(0x0232f33025bd4223U)), ((u64)(0x4ca19697c81ac1bfU)), ((u64)(0x0384b84d092ed038U)), ((u64)(0x3d4e1213067bce33U)), ((u64)(0x02d09370d4257360U)), ((u64)(0x643e74dc052fd829U)), ((u64)(0x024075f3dceac2b3U)), ((u64)(0x6d30baf9a1e626a7U)), ((u64)(0x039a5652fb113785U)), ((u64)(0x2426fbfae7eb5220U)), ((u64)(0x02e1dea8c8da92d1U)), ((u64)(0x1cebfcc8b9890e80U)), ((u64)(0x024e4bba3a487574U)), ((u64)(0x94acc7a78f41b0ccU)), ((u64)(0x03b07929f6da5586U)), ((u64)(0xaa23d2ec729af3d7U)), ((u64)(0x02f394219248446bU)), ((u64)(0xbb4fdbf05baf2979U)), ((u64)(0x025c768141d369efU)), ((u64)(0xc54c931a2c4b758dU)), ((u64)(0x03c7240202ebdcb2U)), ((u64)(0x9dd6dc14f03c5e0bU)), ((u64)(0x0305b66802564a28U)), ((u64)(0x4b1249aa59c9e4d6U)), ((u64)(0x026af8533511d4edU)), ((u64)(0x44ea0f76f60fd489U)), ((u64)(0x03de5a1ebb4fbb15U)), ((u64)(0x6a54d92bf80caa07U)), ((u64)(0x0318481895d96277U)), ((u64)(0x21dd7a89933d54d2U)), ((u64)(0x0279d346de4781f9U)), ((u64)(0x362f2a75b8622150U)), ((u64)(0x03f61ed7ca0c0328U)), ((u64)(0xf825bb91604e810dU)), ((u64)(0x032b4bdfd4d668ecU)), ((u64)(0xc684960de6a5340bU)), ((u64)(0x0289097fdd7853f0U)), ((u64)(0xd203ab3e521dc33cU)), ((u64)(0x02073accb12d0ff3U)), ((u64)(0xe99f7863b696052cU)), ((u64)(0x033ec47ab514e652U)), ((u64)(0x87b2c6b62bab3757U)), ((u64)(0x02989d2ef743eb75U)), ((u64)(0xd2f56bc4efbc2c45U)), ((u64)(0x0213b0f25f69892aU)), ((u64)(0x1e55793b192d13a2U)), ((u64)(0x0352b4b6ff0f41deU)), ((u64)(0x4b77942f475742e8U)), ((u64)(0x02a8909265a5ce4bU)), ((u64)(0xd5f9435905df68baU)), ((u64)(0x022073a8515171d5U)), ((u64)(0x565b9ef4d6324129U)), ((u64)(0x03671f73b54f1c89U)), ((u64)(0xdeafb25d78283421U)), ((u64)(0x02b8e5f62aa5b06dU)), ((u64)(0x188c8eb12cecf681U)), ((u64)(0x022d84c4eeeaf38bU)), ((u64)(0x8dadb11b7b14bd9bU)), ((u64)(0x037c07a17e44b8deU)), ((u64)(0x7157c0e2c8dd647cU)), ((u64)(0x02c99fb46503c718U)), ((u64)(0x8ddfcd823a4ab6caU)), ((u64)(0x023ae629ea696c13U)), ((u64)(0x1632e269f6ddf142U)), ((u64)(0x0391704310a8acecU)), ((u64)(0x44f581ee5f17f435U)), ((u64)(0x02dac035a6ed5723U)), ((u64)(0x372ace584c1329c4U)), ((u64)(0x024899c4858aac1cU)), ((u64)(0xbeaae3c079b842d3U)), ((u64)(0x03a75c6da27779c6U)), ((u64)(0x6555830061603576U)), ((u64)(0x02ec49f14ec5fb05U)), ((u64)(0xb7779c004de6912bU)), ((u64)(0x0256a18dd89e626aU)), ((u64)(0xf258f99a163db512U)), ((u64)(0x03bdcf495a9703ddU)), ((u64)(0x5b7a614811caf741U)), ((u64)(0x02fe3f6de212697eU)), ((u64)(0xaf951aa00e3bf901U)), ((u64)(0x0264ff8b1b41edfeU)), ((u64)(0x7f54f7667d2cc19bU)), ((u64)(0x03d4cc11c5364997U)), ((u64)(0x32aa5f8530f09ae3U)), ((u64)(0x0310a3416a91d479U)), ((u64)(0xf55519375a5a1582U)), ((u64)(0x0273b5cdeedb1060U)), ((u64)(0xbbbb5b8bc3c3559dU)), ((u64)(0x03ec56164af81a34U)), ((u64)(0x2fc916096969114aU)), ((u64)(0x03237811d593482aU)), ((u64)(0x596dab3ababa743cU)), ((u64)(0x0282c674aadc39bbU)), ((u64)(0x478aef622efb9030U)), ((u64)(0x0202385d557cfafcU)), ((u64)(0xd8de4bd04b2c19e6U)), ((u64)(0x0336c0955594c4c6U)), ((u64)(0xad7ea30d08f014b8U)), ((u64)(0x029233aaaadd6a38U)), ((u64)(0x24654f3da0c01093U)), ((u64)(0x020e8fbbbbe454faU)), ((u64)(0x3a3bb1fc346680ebU)), ((u64)(0x034a7f92c63a2190U)), ((u64)(0x94fc8e635d1ecd89U)), ((u64)(0x02a1ffa89e94e7a6U)), ((u64)(0xaa63a51c4a7f0ad4U)), ((u64)(0x021b32ed4baa52ebU)), ((u64)(0xdd6c3b607731aaedU)), ((u64)(0x035eb7e212aa1e45U)), ((u64)(0x1789c919f8f488bdU)), ((u64)(0x02b22cb4dbbb4b6bU)), ((u64)(0xac6e3a7b2d906d64U)), ((u64)(0x022823c3e2fc3c55U)), ((u64)(0x13e390c515b3e23aU)), ((u64)(0x03736c6c9e606089U)), ((u64)(0xdcb60d6a77c31b62U)), ((u64)(0x02c2bd23b1e6b3a0U)), ((u64)(0x7d5e7121f968e2b5U)), ((u64)(0x0235641c8e52294dU)), ((u64)(0xc8971b698f0e3787U)), ((u64)(0x0388a02db0837548U)), ((u64)(0xa078e2bad8d82c6cU)), ((u64)(0x02d3b357c0692aa0U)), ((u64)(0xe6c71bc8ad79bd24U)), ((u64)(0x0242f5dfcd20eee6U)), ((u64)(0x0ad82c7448c2c839U)), ((u64)(0x039e5632e1ce4b0bU)), ((u64)(0x3be023903a356cfaU)), ((u64)(0x02e511c24e3ea26fU)), ((u64)(0x2fe682d9c82abd95U)), ((u64)(0x0250db01d8321b8cU)), ((u64)(0x4ca4048fa6aac8eeU)), ((u64)(0x03b4919c8d1cf8e0U)), ((u64)(0x3d5003a61eef0725U)), ((u64)(0x02f6dae3a4172d80U)), ((u64)(0x9773361e7f259f51U)), ((u64)(0x025f1582e9ac2466U)), ((u64)(0x8beb89ca6508fee8U)), ((u64)(0x03cb559e42ad070aU)), ((u64)(0x6fefa16eb73a6586U)), ((u64)(0x0309114b688a6c08U)), ((u64)(0xf3261abef8fb846bU)), ((u64)(0x026da76f86d52339U)), ((u64)(0x51d691318e5f3a45U)), ((u64)(0x03e2a57f3e21d1f6U)), ((u64)(0x0e4540f471e5c837U)), ((u64)(0x031bb798fe8174c5U)), ((u64)(0xd8376729f4b7d360U)), ((u64)(0x027c92e0cb9ac3d0U)), ((u64)(0xf38bd84321261effU)), ((u64)(0x03fa849adf5e061aU)), ((u64)(0x293cad0280eb4bffU)), ((u64)(0x032ed07be5e4d1afU)), ((u64)(0xedca240200bc3cccU)), ((u64)(0x028bd9fcb7ea4158U)), ((u64)(0xbe3b50019a3030a4U)), ((u64)(0x02097b309321cde0U)), ((u64)(0xc9f88002904d1a9fU)), ((u64)(0x03425eb41e9c7c9aU)), ((u64)(0x3b2d3335403daee6U)), ((u64)(0x029b7ef67ee396e2U)), ((u64)(0x95bdc291003158b8U)), ((u64)(0x0215ff2b98b6124eU)), ((u64)(0x892f9db4cd1bc126U)), ((u64)(0x035665128df01d4aU)), ((u64)(0x07594af70a7c9a85U)), ((u64)(0x02ab840ed7f34aa2U)), ((u64)(0x6c476f2c0863aed1U)), ((u64)(0x0222d00bdff5d54eU)), ((u64)(0x13a57eacda3917b4U)), ((u64)(0x036ae67966562217U)), ((u64)(0x0fb7988a482dac90U)), ((u64)(0x02bbeb9451de81acU)), ((u64)(0xd95fad3b6cf156daU)), ((u64)(0x022fefa9db1867bcU)), ((u64)(0xf565e1f8ae4ef15cU)), ((u64)(0x037fe5dc91c0a5faU)), ((u64)(0x911e4e608b725ab0U)), ((u64)(0x02ccb7e3a7cd5195U)), ((u64)(0xda7ea51a0928488dU)), ((u64)(0x023d5fe9530aa7aaU)), ((u64)(0xf7310829a8407415U)), ((u64)(0x039566421e7772aaU)), ((u64)(0x2c2739baed005cdeU)), ((u64)(0x02ddeb68185f8eefU)), ((u64)(0xbcec2e2f24004a4bU)), ((u64)(0x024b22b9ad193f25U)), ((u64)(0x94ad16b1d333aa11U)), ((u64)(0x03ab6ac2ae8ecb6fU)), ((u64)(0xaa241227dc2954dbU)), ((u64)(0x02ef889bbed8a2bfU)), ((u64)(0x54e9a81fe35443e2U)), ((u64)(0x02593a163246e899U)), ((u64)(0x2175d9cc9eed396aU)), ((u64)(0x03c1f689ea0b0dc2U)), ((u64)(0xe7917b0a18bdc788U)), ((u64)(0x03019207ee6f3e34U)), ((u64)(0xb9412f3b46fe393aU)), ((u64)(0x0267a8065858fe90U)), ((u64)(0xf535185ed7fd285cU)), ((u64)(0x03d90cd6f3c1974dU)), ((u64)(0xc42a79e57997537dU)), ((u64)(0x03140a458fce12a4U)), ((u64)(0x03552e512e12a931U)), ((u64)(0x02766e9e0ca4dbb7U)), ((u64)(0x9eeeb081e3510eb4U)), ((u64)(0x03f0b0fce107c5f1U)), ((u64)(0x4bf226ce4f740bc3U)), ((u64)(0x0326f3fd80d304c1U)), ((u64)(0xa3281f0b72c33c9cU)), ((u64)(0x02858ffe00a8d09aU)), ((u64)(0x1c2018d5f568fd4aU)), ((u64)(0x020473319a20a6e2U)), ((u64)(0xf9ccf48988a7fba9U)), ((u64)(0x033a51e8f69aa49cU)), ((u64)(0xfb0a5d3ad3b99621U)), ((u64)(0x02950e53f87bb6e3U)), ((u64)(0x2f3b7dc8a96144e7U)), ((u64)(0x0210d8432d2fc583U)), ((u64)(0xe52bfc7442353b0cU)), ((u64)(0x034e26d1e1e608d1U)), ((u64)(0xb756639034f76270U)), ((u64)(0x02a4ebdb1b1e6d74U)), ((u64)(0x2c451c735d92b526U)), ((u64)(0x021d897c15b1f12aU)), ((u64)(0x13a1c71efc1deea3U)), ((u64)(0x0362759355e981ddU)), ((u64)(0x761b05b2634b2550U)), ((u64)(0x02b52adc44bace4aU)), ((u64)(0x91af37c1e908eaa6U)), ((u64)(0x022a88b036fbd83bU)), ((u64)(0x82b1f2cfdb417770U)), ((u64)(0x03774119f192f392U)), ((u64)(0xcef4c23fe29ac5f3U)), ((u64)(0x02c5cdae5adbf60eU)), ((u64)(0x3f2a34ffe87bd190U)), ((u64)(0x0237d7beaf165e72U)), ((u64)(0x984387ffda5fb5b2U)), ((u64)(0x038c8c644b56fd83U)), ((u64)(0xe0360666484c915bU)), ((u64)(0x02d6d6b6a2abfe02U)), ((u64)(0x802b3851d3707449U)), ((u64)(0x024578921bbccb35U)), ((u64)(0x99dec082ebe72075U)), ((u64)(0x03a25a835f947855U)), ((u64)(0xae4bcd358985b391U)), ((u64)(0x02e8486919439377U)), ((u64)(0xbea30a913ad15c74U)), ((u64)(0x02536d20e102dc5fU)), ((u64)(0xfdd1aa81f7b560b9U)), ((u64)(0x03b8ae9b019e2d65U)), ((u64)(0x97daeece5fc44d61U)), ((u64)(0x02fa2548ce182451U)), ((u64)(0xdfe258a51969d781U)), ((u64)(0x0261b76d71ace9daU)), ((u64)(0x996a276e8f0fbf34U)), ((u64)(0x03cf8be24f7b0fc4U)), ((u64)(0xe121b9253f3fcc2aU)), ((u64)(0x030c6fe83f95a636U)), ((u64)(0xb41afa8432997022U)), ((u64)(0x02705986994484f8U)), ((u64)(0xecf7f739ea8f19cfU)), ((u64)(0x03e6f5a4286da18dU)), ((u64)(0x23f99294bba5ae40U)), ((u64)(0x031f2ae9b9f14e0bU)), ((u64)(0x4ffadbaa2fb7be99U)), ((u64)(0x027f5587c7f43e6fU)), ((u64)(0x7ff7c5dd1925fdc2U)), ((u64)(0x03feef3fa6539718U)), ((u64)(0xccc637e4141e649bU)), ((u64)(0x033258ffb842df46U)), ((u64)(0xd704f983434b83afU)), ((u64)(0x028ead9960357f6bU)), ((u64)(0x126a6135cf6f9c8cU)), ((u64)(0x020bbe144cf79923U)), ((u64)(0x83dd685618b29414U)), ((u64)(0x0345fced47f28e9eU)), ((u64)(0x9cb12044e08edcddU)), ((u64)(0x029e63f1065ba54bU)), ((u64)(0x16f419d0b3a57d7dU)), ((u64)(0x02184ff405161dd6U)), ((u64)(0x8b20294dec3bfbfbU)), ((u64)(0x035a19866e89c956U)), ((u64)(0x3c19baa4bcfcc996U)), ((u64)(0x02ae7ad1f207d445U)), ((u64)(0xc9ae2eea30ca3adfU)), ((u64)(0x02252f0e5b39769dU)), ((u64)(0x0f7d17dd1add2afdU)), ((u64)(0x036eb1b091f58a96U)), ((u64)(0x3f97464a7be42264U)), ((u64)(0x02bef48d41913babU)), ((u64)(0xcc790508631ce850U)), ((u64)(0x02325d3dce0dc955U)), ((u64)(0xe0c1a1a704fb0d4dU)), ((u64)(0x0383c862e3494222U)), ((u64)(0x4d67b4859d95a43eU)), ((u64)(0x02cfd3824f6dce82U)), ((u64)(0x711fc39e17aae9cbU)), ((u64)(0x023fdc683f8b0b9bU)), ((u64)(0xe832d2968c44a945U)), ((u64)(0x039960a6cc11ac2bU)), ((u64)(0xecf575453d03ba9eU)), ((u64)(0x02e11a1f09a7bcefU)), ((u64)(0x572ac4376402fbb1U)), ((u64)(0x024dae7f3aec9726U)), ((u64)(0x58446d256cd192b5U)), ((u64)(0x03af7d985e47583dU)), ((u64)(0x79d0575123dadbc4U)), ((u64)(0x02f2cae04b6c4697U)), ((u64)(0x94a6ac40e97be303U)), ((u64)(0x025bd5803c569edfU)), ((u64)(0x8771139b0f2c9e6cU)), ((u64)(0x03c62266c6f0fe32U)), ((u64)(0x9f8da948d8f07ebdU)), ((u64)(0x0304e85238c0cb5bU)), ((u64)(0xe60aedd3e0c06564U)), ((u64)(0x026a5374fa33d5e2U)), ((u64)(0xa344afb9679a3bd2U)), ((u64)(0x03dd5254c3862304U)), ((u64)(0xe903bfc78614fca8U)), ((u64)(0x031775109c6b4f36U)), ((u64)(0xba6966393810ca20U)), ((u64)(0x02792a73b055d8f8U)), ((u64)(0x2a423d2859b4769aU)), ((u64)(0x03f510b91a22f4c1U)), ((u64)(0xee9b642047c39215U)), ((u64)(0x032a73c7481bf700U)), ((u64)(0xbee2b680396941aaU)), ((u64)(0x02885c9f6ce32c00U)), ((u64)(0xff1bc53361210155U)), ((u64)(0x0206b07f8a4f5666U)), ((u64)(0x31c6085235019bbbU)), ((u64)(0x033de73276e5570bU)), ((u64)(0x27d1a041c4014963U)), ((u64)(0x0297ec285f1ddf3cU)), ((u64)(0xeca7b367d0010782U)), ((u64)(0x021323537f4b18fcU)), ((u64)(0xadd91f0c8001a59dU)), ((u64)(0x0351d21f3211c194U)), ((u64)(0xf17a7f3d3334847eU)), ((u64)(0x02a7db4c280e3476U)), ((u64)(0x279532975c2a0398U)), ((u64)(0x021fe2a3533e905fU)), ((u64)(0xd8eeb75893766c26U)), ((u64)(0x0366376bb8641a31U)), ((u64)(0x7a5892ad42c52352U)), ((u64)(0x02b82c562d1ce1c1U)), ((u64)(0xfb7a0ef102374f75U)), ((u64)(0x022cf044f0e3e7cdU)), ((u64)(0xc59017e8038bb254U)), ((u64)(0x037b1a07e7d30c7cU)), ((u64)(0x37a67986693c8eaaU)), ((u64)(0x02c8e19feca8d6caU)), ((u64)(0xf951fad1edca0bbbU)), ((u64)(0x023a4e198a20abd4U)), ((u64)(0x28832ae97c76792bU)), ((u64)(0x03907cf5a9cddfbbU)), ((u64)(0x2068ef21305ec756U)), ((u64)(0x02d9fd9154a4b2fcU)), ((u64)(0x19ed8c1a8d189f78U)), ((u64)(0x0247fe0ddd508f30U)), ((u64)(0x5caf4690e1c0ff26U)), ((u64)(0x03a66349621a7eb3U)), ((u64)(0x4a25d20d81673285U)), ((u64)(0x02eb82a11b48655cU)), ((u64)(0x3b5174d79ab8f537U)), ((u64)(0x0256021a7c39eab0U)), ((u64)(0x921bee25c45b21f1U)), ((u64)(0x03bcd02a605caab3U)), ((u64)(0xdb498b5169e2818eU)), ((u64)(0x02fd735519e3bbc2U)), ((u64)(0x15d46f7454b53472U)), ((u64)(0x02645c4414b62fcfU)), ((u64)(0xefba4bed545520b6U)), ((u64)(0x03d3c6d35456b2e4U)), ((u64)(0xf2fb6ff110441a2bU)), ((u64)(0x030fd242a9def583U)), ((u64)(0x8f2f8cc0d9d014efU)), ((u64)(0x02730e9bbb18c469U)), ((u64)(0xb1e5ae015c80217fU)), ((u64)(0x03eb4a92c4f46d75U)), ((u64)(0xc1848b344a001accU)), ((u64)(0x0322a20f03f6bdf7U)), ((u64)(0xce03a2903b3348a3U)), ((u64)(0x02821b3f365efe5fU)), ((u64)(0xd802e873628f6d4fU)), ((u64)(0x0201af65c518cb7fU)), ((u64)(0x599e40b89db2487fU)), ((u64)(0x0335e56fa1c14599U)), ((u64)(0xe14b66fa17c1d399U)), ((u64)(0x029184594e3437adU)), ((u64)(0x81091f2e7967dc7aU)), ((u64)(0x020e037aa4f692f1U)), ((u64)(0x9b41cb7d8f0c93f6U)), ((u64)(0x03499f2aa18a84b5U)), ((u64)(0xaf67d5fe0c0a0ff8U)), ((u64)(0x02a14c221ad536f7U)), ((u64)(0xf2b977fe70080cc7U)), ((u64)(0x021aa34e7bddc592U)), ((u64)(0x1df58cca4cd9ae0bU)), ((u64)(0x035dd2172c9608ebU)), ((u64)(0xe4c470a1d7148b3cU)), ((u64)(0x02b174df56de6d88U)), ((u64)(0x83d05a1b1276d5caU)), ((u64)(0x022790b2abe5246dU)), ((u64)(0x9fb3c35e83f1560fU)), ((u64)(0x0372811ddfd50715U)), ((u64)(0xb2f635e5365aab3fU)), ((u64)(0x02c200e4b310d277U)), ((u64)(0xf591c4b75eaeef66U)), ((u64)(0x0234cd83c273db92U)), ((u64)(0xef4fa125644b18a3U)), ((u64)(0x0387af39371fc5b7U)), ((u64)(0x8c3fb41de9d5ad4fU)), ((u64)(0x02d2f2942c196af9U)), ((u64)(0x3cffc34b2177bdd9U)), ((u64)(0x02425ba9bce12261U)), ((u64)(0x94cc6bab68bf9628U)), ((u64)(0x039d5f75fb01d09bU)), ((u64)(0x10a38955ed6611b9U)), ((u64)(0x02e44c5e6267da16U)), ((u64)(0xda1c6dde5784dafbU)), ((u64)(0x02503d184eb97b44U)), ((u64)(0xf693e2fd58d49191U)), ((u64)(0x03b394f3b128c53aU)), ((u64)(0xc5431bfde0aa0e0eU)), ((u64)(0x02f610c2f4209dc8U)), ((u64)(0x6a9c1664b3bb3e72U)), ((u64)(0x025e73cf29b3b16dU)), ((u64)(0x10f9bd6dec5eca4fU)), ((u64)(0x03ca52e50f85e8afU)), ((u64)(0xda616457f04bd50cU)), ((u64)(0x03084250d937ed58U)), ((u64)(0xe1e783798d09773dU)), ((u64)(0x026d01da475ff113U)), ((u64)(0x030c058f480f252eU)), ((u64)(0x03e19c9072331b53U)), ((u64)(0x68d66ad906728425U)), ((u64)(0x031ae3a6c1c27c42U)), ((u64)(0x8711ef14052869b7U)), ((u64)(0x027be952349b969bU)), ((u64)(0x0b4fe4ecd50d75f2U)), ((u64)(0x03f97550542c242cU)), ((u64)(0xa2a650bd773df7f5U)), ((u64)(0x032df7737689b689U)), ((u64)(0xb551da312c31932aU)), ((u64)(0x028b2c5c5ed49207U)), ((u64)(0x5ddb14f4235adc22U)), ((u64)(0x0208f049e576db39U)), ((u64)(0x2fc4ee536bc49369U)), ((u64)(0x034180763bf15ec2U)), ((u64)(0xbfd0bea92303a921U)), ((u64)(0x029acd2b63277f01U)), ((u64)(0x9973cbba8269541aU)), ((u64)(0x021570ef8285ff34U)), ((u64)(0x5bec792a6a42202aU)), ((u64)(0x0355817f373ccb87U)), ((u64)(0xe3239421ee9b4cefU)), ((u64)(0x02aacdff5f63d605U)), ((u64)(0xb5b6101b25490a59U)), ((u64)(0x02223e65e5e97804U)), ((u64)(0x22bce691d541aa27U)), ((u64)(0x0369fd6fd64259a1U)), ((u64)(0xb563eba7ddce21b9U)), ((u64)(0x02bb31264501e14dU)), ((u64)(0xf78322ecb171b494U)), ((u64)(0x022f5a850401810aU)), ((u64)(0x259e9e47824f8753U)), ((u64)(0x037ef73b399c01abU)), ((u64)(0x1e187e9f9b72d2a9U)), ((u64)(0x02cbf8fc2e1667bcU)), ((u64)(0x4b46cbb2e2c24221U)), ((u64)(0x023cc73024deb963U)), ((u64)(0x120adf849e039d01U)), ((u64)(0x039471e6a1645bd2U)), ((u64)(0xdb3be603b19c7d9aU)), ((u64)(0x02dd27ebb4504974U)), ((u64)(0x7c2feb3627b0647cU)), ((u64)(0x024a865629d9d45dU)), ((u64)(0x2d197856a5e7072cU)), ((u64)(0x03aa7089dc8fba2fU)), ((u64)(0x8a7ac6abb7ec05bdU)), ((u64)(0x02eec06e4a0c94f2U)), ((u64)(0xd52f05562cbcd164U)), ((u64)(0x025899f1d4d6dd8eU)), ((u64)(0x21e4d556adfae8a0U)), ((u64)(0x03c0f64fbaf1627eU)), ((u64)(0xe7ea444557fbed4dU)), ((u64)(0x0300c50c958de864U)), ((u64)(0xecbb69d1132ff10aU)), ((u64)(0x0267040a113e5383U)), ((u64)(0xadf8a94e851981aaU)), ((u64)(0x03d8067681fd526cU)), ((u64)(0x8b2d543ed0e13488U)), ((u64)(0x0313385ece6441f0U)), ((u64)(0xd5bddcff0d80f6d3U)), ((u64)(0x0275c6b23eb69b26U)), ((u64)(0x892fc7fe7c018aebU)), ((u64)(0x03efa45064575ea4U)), ((u64)(0x3a8c9ffec99ad589U)), ((u64)(0x03261d0d1d12b21dU)), ((u64)(0xc8707fff07af113bU)), ((u64)(0x0284e40a7da88e7dU)), ((u64)(0x39f39998d2f2742fU)), ((u64)(0x0203e9a1fe2071feU)), ((u64)(0x8fec28f484b7204bU)), ((u64)(0x033975cffd00b663U)), ((u64)(0xd989ba5d36f8e6a2U)), ((u64)(0x02945e3ffd9a2b82U)), ((u64)(0x47a161e42bfa521cU)), ((u64)(0x02104b66647b5602U)), ((u64)(0x0c35696d132a1cf9U)), ((u64)(0x034d4570a0c5566aU)), ((u64)(0x09c454574288172dU)), ((u64)(0x02a4378d4d6aab88U)), ((u64)(0xa169dd129ba0128bU)), ((u64)(0x021cf93dd7888939U)), ((u64)(0x0242fb50f9001dabU)), ((u64)(0x03618ec958da7529U)), ((u64)(0x9b68c90d940017bcU)), ((u64)(0x02b4723aad7b90edU)), ((u64)(0x4920a0d7a999ac96U)), ((u64)(0x0229f4fbbdfc73f1U)), ((u64)(0x750101590f5c4757U)), ((u64)(0x037654c5fcc71fe8U)), ((u64)(0x2a6734473f7d05dfU)), ((u64)(0x02c5109e63d27fedU)), ((u64)(0xeeb8f69f65fd9e4cU)), ((u64)(0x0237407eb641fff0U)), ((u64)(0xe45b24323cc8fd46U)), ((u64)(0x038b9a6456cfffe7U)), ((u64)(0xb6af502830a0ca9fU)), ((u64)(0x02d6151d123fffecU)), ((u64)(0xf88c402026e7087fU)), ((u64)(0x0244ddb0db666656U)), ((u64)(0x2746cd003e3e73feU)), ((u64)(0x03a162b4923d708bU)), ((u64)(0x1f6bd73364fec332U)), ((u64)(0x02e7822a0e978d3cU)), ((u64)(0xe5efdf5c50cbcf5bU)), ((u64)(0x0252ce880bac70fcU)), ((u64)(0x3cb2fefa1adfb22bU)), ((u64)(0x03b7b0d9ac471b2eU)), ((u64)(0x308f3261af195b56U)), ((u64)(0x02f95a47bd05af58U)), ((u64)(0x5a0c284e25ade2abU)), ((u64)(0x0261150630d15913U)), ((u64)(0x29ad0d49d5e30445U)), ((u64)(0x03ce8809e7b55b52U)), ((u64)(0x548a7107de4f369dU)), ((u64)(0x030ba007ec9115dbU)), ((u64)(0xdd3b8d9fe50c2bb1U)), ((u64)(0x026fb3398a0dab15U)), ((u64)(0x952c15cca1ad12b5U)), ((u64)(0x03e5eb8f434911bcU)), ((u64)(0x775677d6e7bda891U)), ((u64)(0x031e560c35d40e30U)), ((u64)(0xc5dec645863153a7U)), ((u64)(0x027eab3cf7dcd826U))}; // fixed array const
 i64  total_m = ((i64)(0)); // global4

 int  g_main_argc = ((int)(0)); // global4

 voidptr  g_main_argv = ((void*)0); // global4

 Array_VCastTypeIndexName  as_cast_type_indexes; // global4

 const i8 _const_min_i8 = -128; // precomputed2
 const i8 _const_max_i8 = 127; // precomputed2
 const i16 _const_min_i16 = -32768; // precomputed2
 const i16 _const_max_i16 = 32767; // precomputed2
 const i32 _const_min_i32 = -2147483648; // precomputed2
 const i32 _const_max_i32 = 2147483647; // precomputed2
 const i32 _const_min_int = -2147483648; // precomputed2
 const i32 _const_max_int = 2147483647; // precomputed2
i64 _const_min_i64; // inited later
i64 _const_max_i64; // inited later
 const u8 _const_min_u8 = 0; // precomputed2
 const u8 _const_max_u8 = 255; // precomputed2
 const u16 _const_min_u16 = 0; // precomputed2
 const u16 _const_max_u16 = 65535; // precomputed2
 const u32 _const_min_u32 = 0; // precomputed2
 const u32 _const_max_u32 = 4294967295; // precomputed2
 const u64 _const_min_u64 = 0U; // precomputed2
 const u64 _const_max_u64 = 18446744073709551615U; // precomputed2
 const f64 _const_max_load_factor = 0.8; // precomputed2
 const u32 _const_hash_mask = 16777215; // precomputed2
 const u32 _const_probe_inc = 16777216; // precomputed2
IError _const_none__; // inited later
 const u32 _const_children_bytes = 96; // precomputed2
 const f64 _const_math__internal__f64_epsilon = 2.220446049250313e-16; // precomputed2
 const f64 _const_math__internal__sqrt_f64_epsilon = 1.4901161193847656e-08; // precomputed2
 const f64 _const_math__internal__root3_f64_epsilon = 6.055454452393343e-06; // precomputed2
 const f64 _const_math__internal__root4_f64_epsilon = 0.0001220703125; // precomputed2
 const f64 _const_math__internal__root5_f64_epsilon = 0.000740095979741405; // precomputed2
 const f64 _const_math__internal__root6_f64_epsilon = 0.002460783300575925; // precomputed2
 const f64 _const_math__internal__log_f64_epsilon = -36.04365338911715; // precomputed2
 const f64 _const_math__internal__f64_min = 2.2250738585072014e-308; // precomputed2
 const f64 _const_math__internal__sqrt_f64_min = 1.4916681462400413e-154; // precomputed2
 const f64 _const_math__internal__root3_f64_min = 2.8126442852362996e-103; // precomputed2
 const f64 _const_math__internal__root4_f64_min = 1.221338669755462e-77; // precomputed2
 const f64 _const_math__internal__root5_f64_min = 2.9476022969691763e-62; // precomputed2
 const f64 _const_math__internal__root6_f64_min = 5.303436890579822e-52; // precomputed2
 const f64 _const_math__internal__log_f64_min = -708.3964185322641; // precomputed2
 const f64 _const_math__internal__f64_max = 1.7976931348623157e+308; // precomputed2
 const f64 _const_math__internal__sqrt_f64_max = 1.3407807929942596e+154; // precomputed2
 const f64 _const_math__internal__root3_f64_max = 5.64380309412229e+102; // precomputed2
 const f64 _const_math__internal__root4_f64_max = 1.157920892373162e+77; // precomputed2
 const f64 _const_math__internal__root5_f64_max = 4.4765466227572707e+61; // precomputed2
 const f64 _const_math__internal__root6_f64_max = 2.3756689782295612e+51; // precomputed2
 const f64 _const_math__internal__log_f64_max = 709.782712893384; // precomputed2
 const f64 _const_math__internal__f32_epsilon = 1.1920928955078125e-07; // precomputed2
 const f64 _const_math__internal__sqrt_f32_epsilon = 0.00034526698300124393; // precomputed2
 const f64 _const_math__internal__root3_f32_epsilon = 0.00492156660115185; // precomputed2
 const f64 _const_math__internal__root4_f32_epsilon = 0.018581361171917516; // precomputed2
 const f64 _const_math__internal__root5_f32_epsilon = 0.04123462221165294; // precomputed2
 const f64 _const_math__internal__root6_f32_epsilon = 0.07015387801933583; // precomputed2
 const f64 _const_math__internal__log_f32_epsilon = -15.942385152878742; // precomputed2
 const f64 _const_math__internal__f32_min = 1.1754943508222875e-38; // precomputed2
 const f64 _const_math__internal__sqrt_f32_min = 1.0842021724855044e-19; // precomputed2
 const f64 _const_math__internal__root3_f32_min = 2.273736754432324e-13; // precomputed2
 const f64 _const_math__internal__root4_f32_min = 3.2927225399135965e-10; // precomputed2
 const f64 _const_math__internal__root5_f32_min = 2.5944428542140822e-08; // precomputed2
 const f64 _const_math__internal__root6_f32_min = 4.768371582031254e-07; // precomputed2
 const f64 _const_math__internal__log_f32_min = -87.3365447505531; // precomputed2
 const f64 _const_math__internal__f32_max = 3.4028234663852886e+38; // precomputed2
 const f64 _const_math__internal__sqrt_f32_max = 1.844674352395373e+19; // precomputed2
 const f64 _const_math__internal__root3_f32_max = 6.981463519622324e+12; // precomputed2
 const f64 _const_math__internal__root4_f32_max = 4.2949672319999986e+09; // precomputed2
 const f64 _const_math__internal__root5_f32_max = 5.085900785596004e+07; // precomputed2
 const f64 _const_math__internal__root6_f32_max = 2.642245923380775e+06; // precomputed2
 const f64 _const_math__internal__log_f32_max = 88.72283905206835; // precomputed2
 const f64 _const_math__internal__sflt_epsilon = 0.00048828125; // precomputed2
 const f64 _const_math__internal__sqrt_sflt_epsilon = 0.02209708691207961; // precomputed2
 const f64 _const_math__internal__root3_sflt_epsilon = 0.07874506561842959; // precomputed2
 const f64 _const_math__internal__root4_sflt_epsilon = 0.14865088937534013; // precomputed2
 const f64 _const_math__internal__root5_sflt_epsilon = 0.217637640824031; // precomputed2
 const f64 _const_math__internal__root6_sflt_epsilon = 0.28061551207734325; // precomputed2
 const f64 _const_math__internal__log_sflt_epsilon = -7.6246189861593985; // precomputed2
 const f64 _const_math__internal__max_f64_fact_arg = 171.0; // precomputed2
 const f64 _const_math__internal__max_long_f64_fact_arg = 1755.5; // precomputed2
int _const_os__o_rdonly; // inited later
int _const_os__o_wronly; // inited later
int _const_os__o_rdwr; // inited later
int _const_os__o_create; // inited later
int _const_os__o_excl; // inited later
int _const_os__o_noctty; // inited later
int _const_os__o_trunc; // inited later
int _const_os__o_append; // inited later
int _const_os__o_nonblock; // inited later
int _const_os__o_sync; // inited later
Array_string _const_os__args; // inited later
string _const_os__wd_at_startup; // inited later
Array_string _const_os__executable_suffixes; // inited later
 u64  g_main_thread_id; // global4

 const u64 _const_math__uvnan = 9221120237041090561U; // precomputed2
 const u64 _const_math__uvinf = 9218868437227405312U; // precomputed2
 const u64 _const_math__uvneginf = 18442240474082181120U; // precomputed2
 const u64 _const_math__uvone = 4607182418800017408U; // precomputed2
 const u64 _const_math__normalize_smallest_mask = 4503599627370496U; // precomputed2
 const u64 _const_math__sign_mask = 9223372036854775808U; // precomputed2
 const u64 _const_math__frac_mask = 4503599627370495U; // precomputed2
 const f64 _const_math__epsilon = 2.220446049250313e-16; // precomputed2
 const f64 _const_math__e = 2.718281828459045; // precomputed2
 const f64 _const_math__pi = 3.141592653589793; // precomputed2
 const f64 _const_math__phi = 1.618033988749895; // precomputed2
 const f64 _const_math__tau = 6.283185307179586; // precomputed2
 const f64 _const_math__sqrt2 = 1.4142135623730951; // precomputed2
 const f64 _const_math__sqrt_3 = 1.7320508075688772; // precomputed2
 const f64 _const_math__sqrt_5 = 2.23606797749979; // precomputed2
 const f64 _const_math__sqrt_e = 1.6487212707001282; // precomputed2
 const f64 _const_math__sqrt_pi = 1.772453850905516; // precomputed2
 const f64 _const_math__sqrt_tau = 2.5066282746310007; // precomputed2
 const f64 _const_math__sqrt_phi = 1.272019649514069; // precomputed2
 const f64 _const_math__ln2 = 0.6931471805599453; // precomputed2
 const f64 _const_math__ln10 = 2.302585092994046; // precomputed2
 const f64 _const_math__two_thirds = 0.6666666666666666; // precomputed2
 const f64 _const_math__max_f32 = 3.4028234663852886e+38; // precomputed2
 const f64 _const_math__smallest_non_zero_f32 = 1.401298464324817e-45; // precomputed2
 const f64 _const_math__max_f64 = 1.7976931348623157e+308; // precomputed2
 const f64 _const_math__smallest_non_zero_f64 = 0.0; // precomputed2
 const i8 _const_math__min_i8 = -128; // precomputed2
 const i8 _const_math__max_i8 = 127; // precomputed2
 const i16 _const_math__min_i16 = -32768; // precomputed2
 const i16 _const_math__max_i16 = 32767; // precomputed2
 const i32 _const_math__min_i32 = -2147483648; // precomputed2
 const i32 _const_math__max_i32 = 2147483647; // precomputed2
i64 _const_math__min_i64; // inited later
i64 _const_math__max_i64; // inited later
 const u8 _const_math__min_u8 = 0; // precomputed2
 const u8 _const_math__max_u8 = 255; // precomputed2
 const u16 _const_math__min_u16 = 0; // precomputed2
 const u16 _const_math__max_u16 = 65535; // precomputed2
 const u32 _const_math__min_u32 = 0; // precomputed2
 const u32 _const_math__max_u32 = 4294967295; // precomputed2
 const u64 _const_math__min_u64 = 0U; // precomputed2
 const u64 _const_math__max_u64 = 18446744073709551615U; // precomputed2
 const f64 _const_math__erx = 0.8450629115104675; // precomputed2
 const f64 _const_math__efx = 0.1283791670955126; // precomputed2
 const f64 _const_math__efx8 = 1.0270333367641007; // precomputed2
 const f64 _const_math__pp0 = 0.12837916709551256; // precomputed2
 const f64 _const_math__pp1 = -0.3250421072470015; // precomputed2
 const f64 _const_math__pp2 = -0.02848174957559851; // precomputed2
 const f64 _const_math__pp3 = -0.005770270296489442; // precomputed2
 const f64 _const_math__pp4 = -2.3763016656650163e-05; // precomputed2
 const f64 _const_math__qq1 = 0.39791722395915535; // precomputed2
 const f64 _const_math__qq2 = 0.0650222499887673; // precomputed2
 const f64 _const_math__qq3 = 0.005081306281875766; // precomputed2
 const f64 _const_math__qq4 = 0.00013249473800432164; // precomputed2
 const f64 _const_math__qq5 = -3.960228278775368e-06; // precomputed2
 const f64 _const_math__pa0 = -0.0023621185607526594; // precomputed2
 const f64 _const_math__pa1 = 0.41485611868374833; // precomputed2
 const f64 _const_math__pa2 = -0.3722078760357013; // precomputed2
 const f64 _const_math__pa3 = 0.31834661990116175; // precomputed2
 const f64 _const_math__pa4 = -0.11089469428239668; // precomputed2
 const f64 _const_math__pa5 = 0.035478304325618236; // precomputed2
 const f64 _const_math__pa6 = -0.002166375594868791; // precomputed2
 const f64 _const_math__qa1 = 0.10642088040084423; // precomputed2
 const f64 _const_math__qa2 = 0.540397917702171; // precomputed2
 const f64 _const_math__qa3 = 0.07182865441419627; // precomputed2
 const f64 _const_math__qa4 = 0.12617121980876164; // precomputed2
 const f64 _const_math__qa5 = 0.01363708391202905; // precomputed2
 const f64 _const_math__qa6 = 0.011984499846799107; // precomputed2
 const f64 _const_math__ra0 = -0.009864944034847148; // precomputed2
 const f64 _const_math__ra1 = -0.6938585727071818; // precomputed2
 const f64 _const_math__ra2 = -10.558626225323291; // precomputed2
 const f64 _const_math__ra3 = -62.375332450326006; // precomputed2
 const f64 _const_math__ra4 = -162.39666946257347; // precomputed2
 const f64 _const_math__ra5 = -184.60509290671104; // precomputed2
 const f64 _const_math__ra6 = -81.2874355063066; // precomputed2
 const f64 _const_math__ra7 = -9.814329344169145; // precomputed2
 const f64 _const_math__sa1 = 19.651271667439257; // precomputed2
 const f64 _const_math__sa2 = 137.65775414351904; // precomputed2
 const f64 _const_math__sa3 = 434.56587747522923; // precomputed2
 const f64 _const_math__sa4 = 645.3872717332679; // precomputed2
 const f64 _const_math__sa5 = 429.00814002756783; // precomputed2
 const f64 _const_math__sa6 = 108.63500554177944; // precomputed2
 const f64 _const_math__sa7 = 6.570249770319282; // precomputed2
 const f64 _const_math__sa8 = -0.0604244152148581; // precomputed2
 const f64 _const_math__rb0 = -0.0098649429247001; // precomputed2
 const f64 _const_math__rb1 = -0.799283237680523; // precomputed2
 const f64 _const_math__rb2 = -17.757954917754752; // precomputed2
 const f64 _const_math__rb3 = -160.63638485582192; // precomputed2
 const f64 _const_math__rb4 = -637.5664433683896; // precomputed2
 const f64 _const_math__rb5 = -1025.0951316110772; // precomputed2
 const f64 _const_math__rb6 = -483.5191916086514; // precomputed2
 const f64 _const_math__sb1 = 30.33806074348246; // precomputed2
 const f64 _const_math__sb2 = 325.7925129965739; // precomputed2
 const f64 _const_math__sb3 = 1536.729586084437; // precomputed2
 const f64 _const_math__sb4 = 3199.8582195085955; // precomputed2
 const f64 _const_math__sb5 = 2553.0504064331644; // precomputed2
 const f64 _const_math__sb6 = 474.52854120695537; // precomputed2
 const f64 _const_math__sb7 = -22.44095244658582; // precomputed2
 const f64 _const_math__f64_max_exp = 1024.0; // precomputed2
 const f64 _const_math__f64_min_exp = -1021.0; // precomputed2
 const f64 _const_math__threshold = 709.782712893384; // precomputed2
 const f64 _const_math__ln2_x56 = 38.816242111356935; // precomputed2
 const f64 _const_math__ln2_halfx3 = 1.0397207708399179; // precomputed2
 const f64 _const_math__ln2_half = 0.34657359027997264; // precomputed2
 const f64 _const_math__ln2hi = 0.6931471803691238; // precomputed2
 const f64 _const_math__ln2lo = 1.9082149292705877e-10; // precomputed2
 const f64 _const_math__inv_ln2 = 1.4426950408889634; // precomputed2
 const f64 _const_math__expm1_q1 = -0.03333333333333313; // precomputed2
 const f64 _const_math__expm1_q2 = 0.0015873015872548146; // precomputed2
 const f64 _const_math__expm1_q3 = -7.93650757867488e-05; // precomputed2
 const f64 _const_math__expm1_q4 = 4.008217827329362e-06; // precomputed2
 const f64 _const_math__expm1_q5 = -2.0109921818362437e-07; // precomputed2
 const f64 _const_math__log_sqrt_2pi = 0.9189385332046728; // precomputed2
Array_f64 _const_math__bernoulli; // inited later
Array_f64 _const_math__factorials_table; // inited later
Array_f64 _const_math__log_factorials_table; // inited later
Array_f64 _const_math__gamma_p; // inited later
Array_f64 _const_math__gamma_q; // inited later
Array_f64 _const_math__gamma_s; // inited later
Array_f64 _const_math__lgamma_a; // inited later
Array_f64 _const_math__lgamma_r; // inited later
Array_f64 _const_math__lgamma_s; // inited later
Array_f64 _const_math__lgamma_t; // inited later
Array_f64 _const_math__lgamma_u; // inited later
Array_f64 _const_math__lgamma_v; // inited later
Array_f64 _const_math__lgamma_w; // inited later
 const f64 _const_math__morebits = 6.123233995736766e-17; // precomputed2
 const f64 _const_math__tan3pio8 = 2.414213562373095; // precomputed2
 const f64 _const_math__modf_maxpowtwo = 4.503599627370496e+15; // precomputed2
Array_f64 _const_math__pow10tab; // inited later
Array_f64 _const_math__pow10postab32; // inited later
Array_f64 _const_math__pow10negtab32; // inited later
Array_f64 _const_math__sin_data; // inited later
Array_f64 _const_math__cos_data; // inited later
Array_f64 _const_math__tan_p; // inited later
Array_f64 _const_math__tan_q; // inited later
 const f64 _const_math__tan_dp1 = 0.7853981554508209; // precomputed2
 const f64 _const_math__tan_dp2 = 7.946627356147928e-09; // precomputed2
 const f64 _const_math__tan_dp3 = 3.061616997868383e-17; // precomputed2
 const f64 _const_math__tan_lossth = 1.073741824e+09; // precomputed2
Array_f64 _const_math__tanh_p; // inited later
Array_f64 _const_math__tanh_q; // inited later
 const f32 _const_math__vec__vec_epsilon = 1.e-06; // precomputed2
f64 _const_math__pi_2; // inited later
f64 _const_math__pi_4; // inited later
f64 _const_math__one_over_tau; // inited later
f64 _const_math__one_over_pi; // inited later
f64 _const_math__tau_over2; // inited later
f64 _const_math__tau_over4; // inited later
f64 _const_math__tau_over8; // inited later
f64 _const_math__log2_e; // inited later
f64 _const_math__log10_e; // inited later
math__ChebSeries _const_math__sin_cs; // inited later
math__ChebSeries _const_math__cos_cs; // inited later

// V interface table:
static IError I_None___to_Interface_IError(None__* x);
 const int _IError_None___index = 0;
static IError I_voidptr_to_Interface_IError(voidptr* x);
 const int _IError_voidptr_index = 1;
static IError I_Error_to_Interface_IError(Error* x);
 const int _IError_Error_index = 2;
static IError I_MessageError_to_Interface_IError(MessageError* x);
 const int _IError_MessageError_index = 3;
static IError I_os__Eof_to_Interface_IError(os__Eof* x);
 const int _IError_os__Eof_index = 4;
static IError I_os__NotExpected_to_Interface_IError(os__NotExpected* x);
 const int _IError_os__NotExpected_index = 5;
static IError I_os__FileNotOpenedError_to_Interface_IError(os__FileNotOpenedError* x);
 const int _IError_os__FileNotOpenedError_index = 6;
static IError I_os__SizeOfTypeIs0Error_to_Interface_IError(os__SizeOfTypeIs0Error* x);
 const int _IError_os__SizeOfTypeIs0Error_index = 7;
static IError I_os__ExecutableNotFoundError_to_Interface_IError(os__ExecutableNotFoundError* x);
 const int _IError_os__ExecutableNotFoundError_index = 8;
// ^^^ number of types for interface IError: 9

// Methods wrapper for interface "IError"
static inline string None___msg_Interface_IError_method_wrapper(None__* err) {
	return Error_msg(err->Error);
}
static inline int None___code_Interface_IError_method_wrapper(None__* err) {
	return Error_code(err->Error);
}
static inline string Error_msg_Interface_IError_method_wrapper(Error* err) {
	return Error_msg(*err);
}
static inline int Error_code_Interface_IError_method_wrapper(Error* err) {
	return Error_code(*err);
}
static inline string MessageError_msg_Interface_IError_method_wrapper(MessageError* err) {
	return MessageError_msg(*err);
}
static inline int MessageError_code_Interface_IError_method_wrapper(MessageError* err) {
	return MessageError_code(*err);
}
static inline string os__Eof_msg_Interface_IError_method_wrapper(os__Eof* err) {
	return Error_msg(err->Error);
}
static inline int os__Eof_code_Interface_IError_method_wrapper(os__Eof* err) {
	return Error_code(err->Error);
}
static inline string os__NotExpected_msg_Interface_IError_method_wrapper(os__NotExpected* err) {
	return os__NotExpected_msg(*err);
}
static inline int os__NotExpected_code_Interface_IError_method_wrapper(os__NotExpected* err) {
	return os__NotExpected_code(*err);
}
static inline string os__FileNotOpenedError_msg_Interface_IError_method_wrapper(os__FileNotOpenedError* err) {
	return os__FileNotOpenedError_msg(*err);
}
static inline int os__FileNotOpenedError_code_Interface_IError_method_wrapper(os__FileNotOpenedError* err) {
	return Error_code(err->Error);
}
static inline string os__SizeOfTypeIs0Error_msg_Interface_IError_method_wrapper(os__SizeOfTypeIs0Error* err) {
	return os__SizeOfTypeIs0Error_msg(*err);
}
static inline int os__SizeOfTypeIs0Error_code_Interface_IError_method_wrapper(os__SizeOfTypeIs0Error* err) {
	return Error_code(err->Error);
}
static inline string os__ExecutableNotFoundError_msg_Interface_IError_method_wrapper(os__ExecutableNotFoundError* err) {
	return os__ExecutableNotFoundError_msg(*err);
}
static inline int os__ExecutableNotFoundError_code_Interface_IError_method_wrapper(os__ExecutableNotFoundError* err) {
	return Error_code(err->Error);
}

struct _IError_interface_methods {
	string (*_method_msg)(void* _);
	int (*_method_code)(void* _);
};

 struct _IError_interface_methods IError_name_table[9] = {
	{
		._method_msg = (void*) None___msg_Interface_IError_method_wrapper,
		._method_code = (void*) None___code_Interface_IError_method_wrapper,
	},
	{
		._method_msg = (void*) 0,
		._method_code = (void*) 0,
	},
	{
		._method_msg = (void*) Error_msg_Interface_IError_method_wrapper,
		._method_code = (void*) Error_code_Interface_IError_method_wrapper,
	},
	{
		._method_msg = (void*) MessageError_msg_Interface_IError_method_wrapper,
		._method_code = (void*) MessageError_code_Interface_IError_method_wrapper,
	},
	{
		._method_msg = (void*) os__Eof_msg_Interface_IError_method_wrapper,
		._method_code = (void*) os__Eof_code_Interface_IError_method_wrapper,
	},
	{
		._method_msg = (void*) os__NotExpected_msg_Interface_IError_method_wrapper,
		._method_code = (void*) os__NotExpected_code_Interface_IError_method_wrapper,
	},
	{
		._method_msg = (void*) os__FileNotOpenedError_msg_Interface_IError_method_wrapper,
		._method_code = (void*) os__FileNotOpenedError_code_Interface_IError_method_wrapper,
	},
	{
		._method_msg = (void*) os__SizeOfTypeIs0Error_msg_Interface_IError_method_wrapper,
		._method_code = (void*) os__SizeOfTypeIs0Error_code_Interface_IError_method_wrapper,
	},
	{
		._method_msg = (void*) os__ExecutableNotFoundError_msg_Interface_IError_method_wrapper,
		._method_code = (void*) os__ExecutableNotFoundError_code_Interface_IError_method_wrapper,
	},
};


// Casting functions for converting "None__" to interface "IError"
static inline IError I_None___to_Interface_IError(None__* x) {
	return (IError) {
		._None__ = x,
		._typ = _IError_None___index,
		.msg = (string*)((char*)x),
		.code = (int*)((char*)x),
	};
}

// Casting functions for converting "voidptr" to interface "IError"
static inline IError I_voidptr_to_Interface_IError(voidptr* x) {
	return (IError) {
		._voidptr = x,
		._typ = _IError_voidptr_index,
		.msg = (string*)((char*)x/*.... ast.voidptr_type */),
		.code = (int*)((char*)x/*.... ast.voidptr_type */),
	};
}

// Casting functions for converting "Error" to interface "IError"
static inline IError I_Error_to_Interface_IError(Error* x) {
	return (IError) {
		._Error = x,
		._typ = _IError_Error_index,
		.msg = (string*)((char*)x),
		.code = (int*)((char*)x),
	};
}

// Casting functions for converting "MessageError" to interface "IError"
static inline IError I_MessageError_to_Interface_IError(MessageError* x) {
	return (IError) {
		._MessageError = x,
		._typ = _IError_MessageError_index,
		.msg = (string*)((char*)x + __offsetof_ptr(x, MessageError, msg)),
		.code = (int*)((char*)x + __offsetof_ptr(x, MessageError, code)),
	};
}

// Casting functions for converting "os__Eof" to interface "IError"
static inline IError I_os__Eof_to_Interface_IError(os__Eof* x) {
	return (IError) {
		._os__Eof = x,
		._typ = _IError_os__Eof_index,
		.msg = (string*)((char*)x),
		.code = (int*)((char*)x),
	};
}

// Casting functions for converting "os__NotExpected" to interface "IError"
static inline IError I_os__NotExpected_to_Interface_IError(os__NotExpected* x) {
	return (IError) {
		._os__NotExpected = x,
		._typ = _IError_os__NotExpected_index,
		.msg = (string*)((char*)x),
		.code = (int*)((char*)x + __offsetof_ptr(x, os__NotExpected, code)),
	};
}

// Casting functions for converting "os__FileNotOpenedError" to interface "IError"
static inline IError I_os__FileNotOpenedError_to_Interface_IError(os__FileNotOpenedError* x) {
	return (IError) {
		._os__FileNotOpenedError = x,
		._typ = _IError_os__FileNotOpenedError_index,
		.msg = (string*)((char*)x),
		.code = (int*)((char*)x),
	};
}

// Casting functions for converting "os__SizeOfTypeIs0Error" to interface "IError"
static inline IError I_os__SizeOfTypeIs0Error_to_Interface_IError(os__SizeOfTypeIs0Error* x) {
	return (IError) {
		._os__SizeOfTypeIs0Error = x,
		._typ = _IError_os__SizeOfTypeIs0Error_index,
		.msg = (string*)((char*)x),
		.code = (int*)((char*)x),
	};
}

// Casting functions for converting "os__ExecutableNotFoundError" to interface "IError"
static inline IError I_os__ExecutableNotFoundError_to_Interface_IError(os__ExecutableNotFoundError* x) {
	return (IError) {
		._os__ExecutableNotFoundError = x,
		._typ = _IError_os__ExecutableNotFoundError_index,
		.msg = (string*)((char*)x),
		.code = (int*)((char*)x),
	};
}



// V auto str functions:
static string term__termios__Termios_str(term__termios__Termios it) { return indent_term__termios__Termios_str(it, 0);}
static string term__termios__TcFlag_str(term__termios__TcFlag it) { return indent_term__termios__TcFlag_str(it, 0); }
static string indent_term__termios__TcFlag_str(term__termios__TcFlag it, int indent_count) {
	string indents = string_repeat(_SLIT("    "), indent_count);
	string tmp_ds = int_str(it);
	string res = str_intp(3, _MOV((StrIntpData[]){
		{_SLIT0, 0xfe10, {.d_s = indents }},
		{_SLIT("term.termios.TcFlag("), 0xfe10, {.d_s = tmp_ds }},
		{_SLIT(")"), 0, {.d_c = 0 }}
	}));
	string_free(&indents);
	string_free(&tmp_ds);
	return res;
}
static string term__termios__Cc_str(term__termios__Cc it) { return indent_term__termios__Cc_str(it, 0); }
static string indent_term__termios__Cc_str(term__termios__Cc it, int indent_count) {
	string indents = string_repeat(_SLIT("    "), indent_count);
	string tmp_ds = u8_str(it);
	string res = str_intp(3, _MOV((StrIntpData[]){
		{_SLIT0, 0xfe10, {.d_s = indents }},
		{_SLIT("term.termios.Cc("), 0xfe10, {.d_s = tmp_ds }},
		{_SLIT(")"), 0, {.d_c = 0 }}
	}));
	string_free(&indents);
	string_free(&tmp_ds);
	return res;
}
static string Array_fixed_term__termios__Cc_32_str(Array_fixed_term__termios__Cc_32 a) { return indent_Array_fixed_term__termios__Cc_32_str(a, 0);}
static string indent_Array_fixed_term__termios__Cc_32_str(Array_fixed_term__termios__Cc_32 a, int indent_count) {
	strings__Builder sb = strings__new_builder(32 * 10);
	strings__Builder_write_string(&sb, _SLIT("["));
	for (int i = 0; i < 32; ++i) {
		strings__Builder_write_string(&sb, u8_str(a[i]));
		if (i < 31) {
			strings__Builder_write_string(&sb, _SLIT(", "));
		}
	}
	strings__Builder_write_string(&sb, _SLIT("]"));
	string res = strings__Builder_str(&sb);
	strings__Builder_free(&sb);
	return res;
}
static string term__termios__Speed_str(term__termios__Speed it) { return indent_term__termios__Speed_str(it, 0); }
static string indent_term__termios__Speed_str(term__termios__Speed it, int indent_count) {
	string indents = string_repeat(_SLIT("    "), indent_count);
	string tmp_ds = int_str(it);
	string res = str_intp(3, _MOV((StrIntpData[]){
		{_SLIT0, 0xfe10, {.d_s = indents }},
		{_SLIT("term.termios.Speed("), 0xfe10, {.d_s = tmp_ds }},
		{_SLIT(")"), 0, {.d_c = 0 }}
	}));
	string_free(&indents);
	string_free(&tmp_ds);
	return res;
}

// V dump functions:


// V auto functions:
static string indent_term__termios__Termios_str(term__termios__Termios it, int indent_count) {
	string indents = string_repeat(_SLIT("    "), indent_count);
	string _t1 = indent_term__termios__TcFlag_str(it.c_iflag, indent_count + 1);
	string _t2 = indent_term__termios__TcFlag_str(it.c_oflag, indent_count + 1);
	string _t3 = indent_term__termios__TcFlag_str(it.c_cflag, indent_count + 1);
	string _t4 = indent_term__termios__TcFlag_str(it.c_lflag, indent_count + 1);
	string _t5 = indent_term__termios__Cc_str(it.c_line, indent_count + 1);
	string _t6 = indent_Array_fixed_term__termios__Cc_32_str(it.c_cc, indent_count + 1);
	string _t7 = indent_term__termios__Speed_str(it.c_ispeed, indent_count + 1);
	string _t8 = indent_term__termios__Speed_str(it.c_ospeed, indent_count + 1);
	string res = str_intp( 35, _MOV((StrIntpData[]){
		{_SLIT("termios.Termios{\n"), 0, {.d_c=0}},
		{_SLIT0, 0xfe10, {.d_s=indents}}, {_SLIT("    c_iflag: "), 0, {.d_c=0}}, {_SLIT(""), 16, {.d_s=_t1}}, {_SLIT(""), 0, {.d_c=0}},
		{_SLIT("\n"), 0xfe10, {.d_s=indents}}, {_SLIT("    c_oflag: "), 0, {.d_c=0}}, {_SLIT(""), 16, {.d_s=_t2}}, {_SLIT(""), 0, {.d_c=0}},
		{_SLIT("\n"), 0xfe10, {.d_s=indents}}, {_SLIT("    c_cflag: "), 0, {.d_c=0}}, {_SLIT(""), 16, {.d_s=_t3}}, {_SLIT(""), 0, {.d_c=0}},
		{_SLIT("\n"), 0xfe10, {.d_s=indents}}, {_SLIT("    c_lflag: "), 0, {.d_c=0}}, {_SLIT(""), 16, {.d_s=_t4}}, {_SLIT(""), 0, {.d_c=0}},
		{_SLIT("\n"), 0xfe10, {.d_s=indents}}, {_SLIT("    c_line: "), 0, {.d_c=0}}, {_SLIT(""), 16, {.d_s=_t5}}, {_SLIT(""), 0, {.d_c=0}},
		{_SLIT("\n"), 0xfe10, {.d_s=indents}}, {_SLIT("    c_cc: "), 0, {.d_c=0}}, {_SLIT(""), 16, {.d_s=_t6}}, {_SLIT(""), 0, {.d_c=0}},
		{_SLIT("\n"), 0xfe10, {.d_s=indents}}, {_SLIT("    c_ispeed: "), 0, {.d_c=0}}, {_SLIT(""), 16, {.d_s=_t7}}, {_SLIT(""), 0, {.d_c=0}},
		{_SLIT("\n"), 0xfe10, {.d_s=indents}}, {_SLIT("    c_ospeed: "), 0, {.d_c=0}}, {_SLIT(""), 16, {.d_s=_t8}}, {_SLIT(""), 0, {.d_c=0}},
		{_SLIT("\n"), 0xfe10, {.d_s=indents}}, {_SLIT("}"), 0, {.d_c=0}},
	}));
	string_free(&_t8);
	string_free(&_t7);
	string_free(&_t6);
	string_free(&_t5);
	string_free(&_t4);
	string_free(&_t3);
	string_free(&_t2);
	string_free(&_t1);
	string_free(&indents);
	return res;
}

static bool Array_u8_contains(Array_u8 a, u8 v) {
	for (int i = 0; i < a.len; ++i) {
		if (((u8*)a.data)[i] == v) {
			return true;
		}
	}
	return false;
}

static bool Array_string_contains(Array_string a, string v) {
	for (int i = 0; i < a.len; ++i) {
		if (fast_string_eq(((string*)a.data)[i], v)) {
			return true;
		}
	}
	return false;
}

static bool Array_rune_arr_eq(Array_rune a, Array_rune b) {
	if (a.len != b.len) {
		return false;
	}
	for (int i = 0; i < a.len; ++i) {
		if (*((rune*)((byte*)a.data+(i*a.element_size))) != *((rune*)((byte*)b.data+(i*b.element_size)))) {
			return false;
		}
	}
	return true;
}


// end of V out

// >> typeof() support for sum types / interfaces
static char * v_typeof_interface_IError(int sidx) { /* IError */ 
	if (sidx == _IError_None___index) return "None__";
	if (sidx == _IError_voidptr_index) return "voidptr";
	if (sidx == _IError_Error_index) return "Error";
	if (sidx == _IError_MessageError_index) return "MessageError";
	if (sidx == _IError_os__Eof_index) return "os.Eof";
	if (sidx == _IError_os__NotExpected_index) return "os.NotExpected";
	if (sidx == _IError_os__FileNotOpenedError_index) return "os.FileNotOpenedError";
	if (sidx == _IError_os__SizeOfTypeIs0Error_index) return "os.SizeOfTypeIs0Error";
	if (sidx == _IError_os__ExecutableNotFoundError_index) return "os.ExecutableNotFoundError";
	return "unknown IError";
}

static int v_typeof_interface_idx_IError(int sidx) { /* IError */ 
	if (sidx == _IError_None___index) return 76;
	if (sidx == _IError_voidptr_index) return 2;
	if (sidx == _IError_Error_index) return 77;
	if (sidx == _IError_MessageError_index) return 79;
	if (sidx == _IError_os__Eof_index) return 119;
	if (sidx == _IError_os__NotExpected_index) return 120;
	if (sidx == _IError_os__FileNotOpenedError_index) return 122;
	if (sidx == _IError_os__SizeOfTypeIs0Error_index) return 123;
	if (sidx == _IError_os__ExecutableNotFoundError_index) return 139;
	return 30;
}
// << typeof() support for sum types

// TypeDecl
strings__Builder strings__new_builder(int initial_size) {
	strings__Builder res = ((__new_array_with_default(0, initial_size, sizeof(u8), 0)));
	ArrayFlags_set(&res.flags, ArrayFlags__noslices);
	return res;
}

// Attr: [unsafe]
Array_u8 strings__Builder_reuse_as_plain_u8_array(strings__Builder* b) {
	ArrayFlags_clear(&b->flags, ArrayFlags__noslices);
	return *b;
}

// Attr: [unsafe]
void strings__Builder_write_ptr(strings__Builder* b, u8* ptr, int len) {
	if (len == 0) {
		return;
	}
	array_push_many(b, ptr, len);
}

// Attr: [manualfree]
void strings__Builder_write_rune(strings__Builder* b, rune r) {
	Array_fixed_u8_5 buffer = {0, 0, 0, 0, 0};
	string res = utf32_to_str_no_malloc(((u32)(r)), &buffer[0]);
	if (res.len == 0) {
		return;
	}
	array_push_many(b, res.str, res.len);
}

void strings__Builder_write_runes(strings__Builder* b, Array_rune runes) {
	Array_fixed_u8_5 buffer = {0, 0, 0, 0, 0};
	for (int _t1 = 0; _t1 < runes.len; ++_t1) {
		rune r = ((rune*)runes.data)[_t1];
		string res = utf32_to_str_no_malloc(((u32)(r)), &buffer[0]);
		if (res.len == 0) {
			continue;
		}
		array_push_many(b, res.str, res.len);
	}
}

void strings__Builder_clear(strings__Builder* b) {
	*b = __new_array_with_default(0, b->cap, sizeof(u8), 0);
}

void strings__Builder_write_u8(strings__Builder* b, u8 data) {
	array_push((array*)b, _MOV((u8[]){ data }));
}

void strings__Builder_write_byte(strings__Builder* b, u8 data) {
	array_push((array*)b, _MOV((u8[]){ data }));
}

// Attr: [direct_array_access]
void strings__Builder_write_decimal(strings__Builder* b, i64 n) {
	if (n == 0) {
		strings__Builder_write_u8(b, 0x30);
		return;
	}
	Array_fixed_u8_25 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	i64 x = (n < 0 ? (-n) : (n));
	int i = 24;
	for (;;) {
		if (!(x != 0)) break;
		i64 nextx = (i64)(x / 10);
		i64 r = (i64)(x % 10);
		buf[i] = (u8)(((u8)(r)) + 0x30);
		x = nextx;
		i--;
	}
	if (n < 0) {
		buf[i] = '-';
		i--;
	}
	strings__Builder_write_ptr(b, &buf[(int)(i + 1)], (int)(24 - i));
}

_result_int strings__Builder_write(strings__Builder* b, Array_u8 data) {
	if (data.len == 0) {
		_result_int _t1;
		_result_ok(&(int[]) { 0 }, (_result*)(&_t1), sizeof(int));
		return _t1;
	}
	_PUSH_MANY(b, (data), _t2, strings__Builder);
	_result_int _t3;
	_result_ok(&(int[]) { data.len }, (_result*)(&_t3), sizeof(int));
	return _t3;
}

// Attr: [manualfree]
void strings__Builder_drain_builder(strings__Builder* b, strings__Builder* other, int other_new_cap) {
	if (other->len > 0) {
		_PUSH_MANY(b, (*other), _t1, strings__Builder);
	}
	strings__Builder_free(other);
	*other = strings__new_builder(other_new_cap);
}

// Attr: [inline]
inline u8 strings__Builder_byte_at(strings__Builder* b, int n) {
	return (*(u8*)array_get(*(((Array_u8*)(b))), n));
}

// Attr: [inline]
inline void strings__Builder_write_string(strings__Builder* b, string s) {
	if (s.len == 0) {
		return;
	}
	array_push_many(b, s.str, s.len);
}

// Attr: [inline]
inline void strings__Builder_writeln_string(strings__Builder* b, string s) {
	strings__Builder_write_string(b, s);
	strings__Builder_write_string(b, _SLIT("\n"));
}

void strings__Builder_go_back(strings__Builder* b, int n) {
	array_trim(b, (int)(b->len - n));
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL string strings__Builder_spart(strings__Builder* b, int start_pos, int n) {
	{ // Unsafe block
		u8* x = malloc_noscan((int)(n + 1));
		vmemcpy(x, ((u8*)(b->data)) + start_pos, n);
		x[n] = 0;
		return tos(x, n);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

string strings__Builder_cut_last(strings__Builder* b, int n) {
	int cut_pos = (int)(b->len - n);
	string res = strings__Builder_spart(b, cut_pos, n);
	array_trim(b, cut_pos);
	return res;
}

string strings__Builder_cut_to(strings__Builder* b, int pos) {
	if (pos > b->len) {
		return _SLIT("");
	}
	return strings__Builder_cut_last(b, (int)(b->len - pos));
}

void strings__Builder_go_back_to(strings__Builder* b, int pos) {
	array_trim(b, pos);
}

// Attr: [inline]
inline void strings__Builder_writeln(strings__Builder* b, string s) {
	if (s.len > 0) {
		array_push_many(b, s.str, s.len);
	}
	array_push((array*)b, _MOV((u8[]){ ((u8)('\n')) }));
}

string strings__Builder_last_n(strings__Builder* b, int n) {
	if (n > b->len) {
		return _SLIT("");
	}
	return strings__Builder_spart(b, (int)(b->len - n), n);
}

string strings__Builder_after(strings__Builder* b, int n) {
	if (n >= b->len) {
		return _SLIT("");
	}
	return strings__Builder_spart(b, n, (int)(b->len - n));
}

string strings__Builder_str(strings__Builder* b) {
	array_push((array*)b, _MOV((u8[]){ ((u8)(0)) }));
	u8* bcopy = ((u8*)(memdup_noscan(b->data, b->len)));
	string s = u8_vstring_with_len(bcopy, (int)(b->len - 1));
	array_trim(b, 0);
	return s;
}

void strings__Builder_ensure_cap(strings__Builder* b, int n) {
	if (n <= b->cap) {
		return;
	}
	u8* new_data = vcalloc((int)(n * b->element_size));
	if (b->data != ((void*)0)) {
		vmemcpy(new_data, b->data, (int)(b->len * b->element_size));
		if (ArrayFlags_has(&b->flags, ArrayFlags__noslices)) {
			_v_free(b->data);
		}
	}
	{ // Unsafe block
		b->data = new_data;
		b->offset = 0;
		b->cap = n;
	}
}

// Attr: [unsafe]
void strings__Builder_free(strings__Builder* b) {
	if (b->data != 0) {
		_v_free(b->data);
		{ // Unsafe block
			b->data = ((void*)0);
		}
	}
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL u16 strings__imin(u16 x, u16 y) {
	return (x < y ? (x) : (y));
}

// Attr: [direct_array_access]
int strings__levenshtein_distance(string a, string b) {
	if (a.len == 0) {
		return b.len;
	}
	if (b.len == 0) {
		return a.len;
	}
	if (string__eq(a, b)) {
		return 0;
	}
	Array_u16 row = 	__new_array_with_default((int)(a.len + 1), 0, sizeof(u16), 0);
	{
		u16* pelem = (u16*)row.data;
		for (int index=0; index<row.len; index++, pelem++) {
			int it = index;
			*pelem = ((u16)(index));
		}
	}
	;
	for (int i = 1; i < b.len; i++) {
		u16 prev = ((u16)(i));
		for (int j = 1; j < a.len; j++) {
			u16 current = ((u16*)row.data)[(int)(j - 1)];
			if (b.str[ (int)(i - 1)] != a.str[ (int)(j - 1)]) {
				current = strings__imin(strings__imin((u16)(((u16*)row.data)[(int)(j - 1)] + 1U), (u16)(prev + 1U)), (u16)(((u16*)row.data)[j] + 1U));
			}
			((u16*)row.data)[(int)(j - 1)] = prev;
			prev = current;
		}
		((u16*)row.data)[a.len] = prev;
	}
	return ((u16*)row.data)[a.len];
}

f32 strings__levenshtein_distance_percentage(string a, string b) {
	int d = strings__levenshtein_distance(a, b);
	int l = (a.len >= b.len ? (a.len) : (b.len));
	return (f32)(((f32)(((f32)(1.00)) - (f32)(((f32)(d)) / ((f32)(l))))) * ((f32)(100.00)));
}

f32 strings__dice_coefficient(string s1, string s2) {
	if (s1.len == 0 || s2.len == 0) {
		return 0.0;
	}
	if (string__eq(s1, s2)) {
		return 1.0;
	}
	if (s1.len < 2 || s2.len < 2) {
		return 0.0;
	}
	string a = (s1.len > s2.len ? (s1) : (s2));
	string b = (string__eq(a, s1) ? (s2) : (s1));
	Map_string_int first_bigrams = new_map(sizeof(string), sizeof(int), &map_hash_string, &map_eq_string, &map_clone_string, &map_free_string)
	;
	for (int i = 0; i < (int)(a.len - 1); ++i) {
		string bigram = string_substr(a, i, (int_literal)(i + 2));
		int q = (_IN_MAP(ADDR(string, bigram), ADDR(map, first_bigrams)) ? ((int)((*(int*)map_get(ADDR(map, first_bigrams), &(string[]){bigram}, &(int[]){ 0 })) + 1)) : (1));
		map_set(&first_bigrams, &(string[]){bigram}, &(int[]) { q });
	}
	int intersection_size = 0;
	for (int i = 0; i < (int)(b.len - 1); ++i) {
		string bigram = string_substr(b, i, (int_literal)(i + 2));
		int count = (_IN_MAP(ADDR(string, bigram), ADDR(map, first_bigrams)) ? ((*(int*)map_get(ADDR(map, first_bigrams), &(string[]){bigram}, &(int[]){ 0 }))) : (0));
		if (count > 0) {
			map_set(&first_bigrams, &(string[]){bigram}, &(int[]) { (int)(count - 1) });
			intersection_size++;
		}
	}
	return (f32)(((f32)(((f32)(2.0)) * ((f32)(intersection_size)))) / ((f32)((f32)(((f32)(a.len)) + ((f32)(b.len))) - 2)));
}

// Attr: [direct_array_access]
string strings__repeat(u8 c, int n) {
	if (n <= 0) {
		return _SLIT("");
	}
	u8* bytes = malloc_noscan((int)(n + 1));
	{ // Unsafe block
		memset(bytes, c, n);
		bytes[n] = '0';
	}
	return u8_vstring_with_len(bytes, n);
}

// Attr: [direct_array_access]
string strings__repeat_string(string s, int n) {
	if (n <= 0 || s.len == 0) {
		return _SLIT("");
	}
	int slen = s.len;
	int blen = (int)(slen * n);
	u8* bytes = malloc_noscan((int)(blen + 1));
	for (int bi = 0; bi < n; ++bi) {
		int bislen = (int)(bi * slen);
		for (int si = 0; si < slen; ++si) {
			{ // Unsafe block
				bytes[(int)(bislen + si)] = s.str[ si];
			}
		}
	}
	{ // Unsafe block
		bytes[blen] = '0';
	}
	return u8_vstring_with_len(bytes, blen);
}

string strings__find_between_pair_u8(string input, u8 start, u8 end) {
	int marks = 0;
	int start_index = -1;
	for (int i = 0; i < input.len; ++i) {
		u8 b = input.str[i];
		if (b == start) {
			if (start_index == -1) {
				start_index = (int)(i + 1);
			}
			marks++;
			continue;
		}
		if (start_index > 0) {
			if (b == end) {
				marks--;
				if (marks == 0) {
					return string_substr(input, start_index, i);
				}
			}
		}
	}
	return _SLIT("");
}

string strings__find_between_pair_rune(string input, rune start, rune end) {
	int marks = 0;
	int start_index = -1;
	Array_rune runes = string_runes(input);
	for (int i = 0; i < runes.len; ++i) {
		rune r = ((rune*)runes.data)[i];
		if (r == start) {
			if (start_index == -1) {
				start_index = (int)(i + 1);
			}
			marks++;
			continue;
		}
		if (start_index > 0) {
			if (r == end) {
				marks--;
				if (marks == 0) {
					return Array_rune_string(array_slice(runes, start_index, i));
				}
			}
		}
	}
	return _SLIT("");
}

string strings__find_between_pair_string(string input, string start, string end) {
	int start_index = -1;
	int marks = 0;
	Array_rune start_runes = string_runes(start);
	Array_rune end_runes = string_runes(end);
	Array_rune runes = string_runes(input);
	int i = 0;
	for (; i < runes.len; i++) {
		Array_rune start_slice = array_slice_ni(runes, i, (int)(i + start_runes.len));
		if (Array_rune_arr_eq(start_slice, start_runes)) {
			i = (int)((int)(i + start_runes.len) - 1);
			if (start_index < 0) {
				start_index = (int)(i + 1);
			}
			marks++;
			continue;
		}
		if (start_index > 0) {
			Array_rune end_slice = array_slice_ni(runes, i, (int)(i + end_runes.len));
			if (Array_rune_arr_eq(end_slice, end_runes)) {
				marks--;
				if (marks == 0) {
					return Array_rune_string(array_slice(runes, start_index, i));
				}
				i = (int)((int)(i + end_runes.len) - 1);
				continue;
			}
		}
	}
	return _SLIT("");
}

Array_string strings__split_capital(string s) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	int word_start = 0;
	for (int idx = 0; idx < s.len; ++idx) {
		u8 c = s.str[idx];
		if (c >= 'A' && c <= 'Z') {
			if (word_start != idx) {
				array_push((array*)&res, _MOV((string[]){ string_substr_ni(s, word_start, idx) }));
			}
			word_start = idx;
			continue;
		}
	}
	if (word_start != s.len) {
		array_push((array*)&res, _MOV((string[]){ string_substr_ni(s, word_start, 2147483647) }));
	}
	return res;
}

int math__bits__leading_zeros_8(u8 x) {
	return (int)(8 - math__bits__len_8(x));
}

int math__bits__leading_zeros_16(u16 x) {
	return (int)(16 - math__bits__len_16(x));
}

int math__bits__leading_zeros_32(u32 x) {
	return (int)(32 - math__bits__len_32(x));
}

int math__bits__leading_zeros_64(u64 x) {
	return (int)(64 - math__bits__len_64(x));
}

int math__bits__trailing_zeros_8(u8 x) {
	return ((int)(_const_math__bits__ntz_8_tab[v_fixed_index(x, 256)]));
}

int math__bits__trailing_zeros_16(u16 x) {
	if (x == 0U) {
		return 16;
	}
	return ((int)(_const_math__bits__de_bruijn32tab[v_fixed_index(((u32)(((u32)((x & -x))) * _const_math__bits__de_bruijn32) >> (27)), 32)]));
}

int math__bits__trailing_zeros_32(u32 x) {
	if (x == 0U) {
		return 32;
	}
	return ((int)(_const_math__bits__de_bruijn32tab[v_fixed_index(((u32)(((x & -x)) * _const_math__bits__de_bruijn32) >> (27)), 32)]));
}

int math__bits__trailing_zeros_64(u64 x) {
	if (x == 0U) {
		return 64;
	}
	return ((int)(_const_math__bits__de_bruijn64tab[v_fixed_index(((u64)(((x & -x)) * _const_math__bits__de_bruijn64) >> (58)), 64)]));
}

int math__bits__ones_count_8(u8 x) {
	return ((int)(_const_math__bits__pop_8_tab[v_fixed_index(x, 256)]));
}

int math__bits__ones_count_16(u16 x) {
	return ((int)((u8)(_const_math__bits__pop_8_tab[v_fixed_index((x >> 8U), 256)] + _const_math__bits__pop_8_tab[v_fixed_index((x & ((u16)(0xffU))), 256)])));
}

int math__bits__ones_count_32(u32 x) {
	return ((int)((u8)((u8)((u8)(_const_math__bits__pop_8_tab[v_fixed_index((x >> 24U), 256)] + _const_math__bits__pop_8_tab[v_fixed_index(((x >> 16U) & 0xffU), 256)]) + _const_math__bits__pop_8_tab[v_fixed_index(((x >> 8U) & 0xffU), 256)]) + _const_math__bits__pop_8_tab[v_fixed_index((x & ((u32)(0xffU))), 256)])));
}

int math__bits__ones_count_64(u64 x) {
	u64 y = (u64)((((x >> ((u64)(1U))) & ((_const_math__bits__m0 & _const_max_u64)))) + ((x & ((_const_math__bits__m0 & _const_max_u64)))));
	y = (u64)((((y >> ((u64)(2U))) & ((_const_math__bits__m1 & _const_max_u64)))) + ((y & ((_const_math__bits__m1 & _const_max_u64)))));
	y = (((u64)(((y >> 4U)) + y)) & ((_const_math__bits__m2 & _const_max_u64)));
	y += (y >> 8U);
	y += (y >> 16U);
	y += (y >> 32U);
	return (((int)(y)) & ((int_literal)((128) - 1)));
}

// Attr: [inline]
inline u8 math__bits__rotate_left_8(u8 x, int k) {
	u8 s = (((u8)(k)) & ((u8)(_const_math__bits__n8 - ((u8)(1)))));
	return (((x << s)) | ((x >> ((u8)(_const_math__bits__n8 - s)))));
}

// Attr: [inline]
inline u16 math__bits__rotate_left_16(u16 x, int k) {
	u16 s = (((u16)(k)) & ((u16)(_const_math__bits__n16 - ((u16)(1U)))));
	return (((x << s)) | ((x >> ((u16)(_const_math__bits__n16 - s)))));
}

// Attr: [inline]
inline u32 math__bits__rotate_left_32(u32 x, int k) {
	u32 s = (((u32)(k)) & ((u32)(_const_math__bits__n32 - ((u32)(1U)))));
	return (((x << s)) | ((x >> ((u32)(_const_math__bits__n32 - s)))));
}

// Attr: [inline]
inline u64 math__bits__rotate_left_64(u64 x, int k) {
	u64 s = (((u64)(k)) & ((u64)(_const_math__bits__n64 - ((u64)(1U)))));
	return (((x << s)) | ((x >> ((u64)(_const_math__bits__n64 - s)))));
}

// Attr: [inline]
inline u8 math__bits__reverse_8(u8 x) {
	return _const_math__bits__rev_8_tab[v_fixed_index(x, 256)];
}

// Attr: [inline]
inline u16 math__bits__reverse_16(u16 x) {
	return (((u16)(_const_math__bits__rev_8_tab[v_fixed_index((x >> 8U), 256)])) | ((((u16)(_const_math__bits__rev_8_tab[v_fixed_index((x & ((u16)(0xffU))), 256)])) << 8U)));
}

// Attr: [inline]
inline u32 math__bits__reverse_32(u32 x) {
	u64 y = (((((x >> ((u32)(1U))) & ((_const_math__bits__m0 & _const_max_u32)))) | ((((x & ((_const_math__bits__m0 & _const_max_u32)))) << 1U))));
	y = (((((y >> ((u32)(2U))) & ((_const_math__bits__m1 & _const_max_u32)))) | ((((y & ((_const_math__bits__m1 & _const_max_u32)))) << ((u32)(2U))))));
	y = (((((y >> ((u32)(4U))) & ((_const_math__bits__m2 & _const_max_u32)))) | ((((y & ((_const_math__bits__m2 & _const_max_u32)))) << ((u32)(4U))))));
	return math__bits__reverse_bytes_32(((u32)(y)));
}

// Attr: [inline]
inline u64 math__bits__reverse_64(u64 x) {
	u64 y = (((((x >> ((u64)(1U))) & ((_const_math__bits__m0 & _const_max_u64)))) | ((((x & ((_const_math__bits__m0 & _const_max_u64)))) << 1U))));
	y = (((((y >> ((u64)(2U))) & ((_const_math__bits__m1 & _const_max_u64)))) | ((((y & ((_const_math__bits__m1 & _const_max_u64)))) << 2U))));
	y = (((((y >> ((u64)(4U))) & ((_const_math__bits__m2 & _const_max_u64)))) | ((((y & ((_const_math__bits__m2 & _const_max_u64)))) << 4U))));
	return math__bits__reverse_bytes_64(y);
}

// Attr: [inline]
inline u16 math__bits__reverse_bytes_16(u16 x) {
	return (((x >> 8U)) | ((x << 8U)));
}

// Attr: [inline]
inline u32 math__bits__reverse_bytes_32(u32 x) {
	u64 y = (((((x >> ((u32)(8U))) & ((_const_math__bits__m3 & _const_max_u32)))) | ((((x & ((_const_math__bits__m3 & _const_max_u32)))) << ((u32)(8U))))));
	return ((u32)((((y >> 16U)) | ((y << 16U)))));
}

// Attr: [inline]
inline u64 math__bits__reverse_bytes_64(u64 x) {
	u64 y = (((((x >> ((u64)(8U))) & ((_const_math__bits__m3 & _const_max_u64)))) | ((((x & ((_const_math__bits__m3 & _const_max_u64)))) << ((u64)(8U))))));
	y = (((((y >> ((u64)(16U))) & ((_const_math__bits__m4 & _const_max_u64)))) | ((((y & ((_const_math__bits__m4 & _const_max_u64)))) << ((u64)(16U))))));
	return (((y >> 32U)) | ((y << 32U)));
}

int math__bits__len_8(u8 x) {
	return ((int)(_const_math__bits__len_8_tab[v_fixed_index(x, 256)]));
}

int math__bits__len_16(u16 x) {
	u16 y = x;
	int n = 0;
	if (y >= 256U) {
		y >>= 8U;
		n = 8;
	}
	return (int)(n + ((int)(_const_math__bits__len_8_tab[v_fixed_index(y, 256)])));
}

int math__bits__len_32(u32 x) {
	u32 y = x;
	int n = 0;
	if (y >= (65536)) {
		y >>= 16U;
		n = 16;
	}
	if (y >= (256)) {
		y >>= 8U;
		n += 8;
	}
	return (int)(n + ((int)(_const_math__bits__len_8_tab[v_fixed_index(y, 256)])));
}

int math__bits__len_64(u64 x) {
	u64 y = x;
	int n = 0;
	if (y >= (((u64)(1U)) << ((u64)(32U)))) {
		y >>= 32U;
		n = 32;
	}
	if (y >= (((u64)(1U)) << ((u64)(16U)))) {
		y >>= 16U;
		n += 16;
	}
	if (y >= (((u64)(1U)) << ((u64)(8U)))) {
		y >>= 8U;
		n += 8;
	}
	return (int)(n + ((int)(_const_math__bits__len_8_tab[v_fixed_index(y, 256)])));
}

multi_return_u32_u32 math__bits__add_32(u32 x, u32 y, u32 carry) {
	u64 sum64 = (u64)((u64)(((u64)(x)) + ((u64)(y))) + ((u64)(carry)));
	u32 sum = ((u32)(sum64));
	u32 carry_out = ((u32)((sum64 >> 32U)));
	return (multi_return_u32_u32){.arg0=sum, .arg1=carry_out};
}

multi_return_u64_u64 math__bits__add_64(u64 x, u64 y, u64 carry) {
	u64 sum = (u64)((u64)(x + y) + carry);
	u64 carry_out = (((((x & y)) | ((((x | y)) & ~sum)))) >> 63U);
	return (multi_return_u64_u64){.arg0=sum, .arg1=carry_out};
}

multi_return_u32_u32 math__bits__sub_32(u32 x, u32 y, u32 borrow) {
	u32 diff = (u32)((u32)(x - y) - borrow);
	u32 borrow_out = (((((~x & y)) | ((~((x ^ y)) & diff)))) >> 31U);
	return (multi_return_u32_u32){.arg0=diff, .arg1=borrow_out};
}

multi_return_u64_u64 math__bits__sub_64(u64 x, u64 y, u64 borrow) {
	u64 diff = (u64)((u64)(x - y) - borrow);
	u64 borrow_out = (((((~x & y)) | ((~((x ^ y)) & diff)))) >> 63U);
	return (multi_return_u64_u64){.arg0=diff, .arg1=borrow_out};
}

multi_return_u32_u32 math__bits__mul_32(u32 x, u32 y) {
	u64 tmp = (u64)(((u64)(x)) * ((u64)(y)));
	u32 hi = ((u32)((tmp >> 32U)));
	u32 lo = ((u32)(tmp));
	return (multi_return_u32_u32){.arg0=hi, .arg1=lo};
}

multi_return_u64_u64 math__bits__mul_64(u64 x, u64 y) {
	u64 x0 = (x & _const_math__bits__mask32);
	u64 x1 = (x >> 32U);
	u64 y0 = (y & _const_math__bits__mask32);
	u64 y1 = (y >> 32U);
	u64 w0 = (u64)(x0 * y0);
	u64 t = (u64)((u64)(x1 * y0) + ((w0 >> 32U)));
	u64 w1 = (t & _const_math__bits__mask32);
	u64 w2 = (t >> 32U);
	w1 += (u64)(x0 * y1);
	u64 hi = (u64)((u64)((u64)(x1 * y1) + w2) + ((w1 >> 32U)));
	u64 lo = (u64)(x * y);
	return (multi_return_u64_u64){.arg0=hi, .arg1=lo};
}

multi_return_u32_u32 math__bits__div_32(u32 hi, u32 lo, u32 y) {
	if (y != 0U && y <= hi) {
		_v_panic(_const_math__bits__overflow_error);
		VUNREACHABLE();
	}
	u64 z = (((((u64)(hi)) << 32U)) | ((u64)(lo)));
	u32 quo = ((u32)((u64)(z / ((u64)(y)))));
	u32 rem = ((u32)((u64)(z % ((u64)(y)))));
	return (multi_return_u32_u32){.arg0=quo, .arg1=rem};
}

multi_return_u64_u64 math__bits__div_64(u64 hi, u64 lo, u64 y1) {
	u64 y = y1;
	if (y == 0U) {
		_v_panic(_const_math__bits__overflow_error);
		VUNREACHABLE();
	}
	if (y <= hi) {
		_v_panic(_const_math__bits__overflow_error);
		VUNREACHABLE();
	}
	u32 s = ((u32)(math__bits__leading_zeros_64(y)));
	y <<= s;
	u64 yn1 = (y >> 32U);
	u64 yn0 = (y & _const_math__bits__mask32);
	u64 ss1 = ((hi << s));
	u32 xxx = (u32)(64 - s);
	u64 ss2 = (lo >> xxx);
	if (xxx == 64U) {
		ss2 = 0U;
	}
	u64 un32 = (ss1 | ss2);
	u64 un10 = (lo << s);
	u64 un1 = (un10 >> 32U);
	u64 un0 = (un10 & _const_math__bits__mask32);
	u64 q1 = (u64)(un32 / yn1);
	u64 rhat = (u64)(un32 - ((u64)(q1 * yn1)));
	for (;;) {
		if (!(q1 >= _const_math__bits__two32 || ((u64)(q1 * yn0)) > ((u64)(((u64)(_const_math__bits__two32 * rhat)) + un1)))) break;
		q1--;
		rhat += yn1;
		if (rhat >= _const_math__bits__two32) {
			break;
		}
	}
	u64 un21 = (u64)(((u64)(un32 * _const_math__bits__two32)) + ((u64)(un1 - ((u64)(q1 * y)))));
	u64 q0 = (u64)(un21 / yn1);
	rhat = (u64)(un21 - (u64)(q0 * yn1));
	for (;;) {
		if (!(q0 >= _const_math__bits__two32 || ((u64)(q0 * yn0)) > ((u64)(((u64)(_const_math__bits__two32 * rhat)) + un0)))) break;
		q0--;
		rhat += yn1;
		if (rhat >= _const_math__bits__two32) {
			break;
		}
	}
	u64 qq = ((u64)(((u64)(q1 * _const_math__bits__two32)) + q0));
	u64 rr = (((u64)((u64)(((u64)(un21 * _const_math__bits__two32)) + un0) - ((u64)(q0 * y)))) >> s);
	return (multi_return_u64_u64){.arg0=qq, .arg1=rr};
}

u32 math__bits__rem_32(u32 hi, u32 lo, u32 y) {
	return ((u32)((u64)(((((((u64)(hi)) << 32U)) | ((u64)(lo)))) % ((u64)(y)))));
}

u64 math__bits__rem_64(u64 hi, u64 lo, u64 y) {
	multi_return_u64_u64 mr_16453 = math__bits__div_64((u64)(hi % y), lo, y);
	u64 rem = mr_16453.arg1;
	return rem;
}

multi_return_f64_int math__bits__normalize(f64 x) {
	f64 smallest_normal = 2.2250738585072014e-308;
	if (((x > ((f64)(0.0)) ? (x) : (-x))) < smallest_normal) {
		return (multi_return_f64_int){.arg0=(f64)(x * ((((u64)(1U)) << ((u64)(52U))))), .arg1=-52};
	}
	return (multi_return_f64_int){.arg0=x, .arg1=0};
}

// Attr: [inline]
inline u32 math__bits__f32_bits(f32 f) {
	u32 p = *((u32*)(&f));
	return p;
}

// Attr: [inline]
inline f32 math__bits__f32_from_bits(u32 b) {
	f32 p = *((f32*)(&b));
	return p;
}

// Attr: [inline]
inline u64 math__bits__f64_bits(f64 f) {
	u64 p = *((u64*)(&f));
	return p;
}

// Attr: [inline]
inline f64 math__bits__f64_from_bits(u64 b) {
	f64 p = *((f64*)(&b));
	return p;
}

VV_LOCAL_SYMBOL multi_return_u32_u32_u32 strconv__lsr96(u32 s2, u32 s1, u32 s0) {
	u32 r0 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	r0 = (((s0 >> 1U)) | ((((s1 & ((u32)(1U)))) << 31U)));
	r1 = (((s1 >> 1U)) | ((((s2 & ((u32)(1U)))) << 31U)));
	r2 = (s2 >> 1U);
	return (multi_return_u32_u32_u32){.arg0=r2, .arg1=r1, .arg2=r0};
}

VV_LOCAL_SYMBOL multi_return_u32_u32_u32 strconv__lsl96(u32 s2, u32 s1, u32 s0) {
	u32 r0 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	r2 = (((s2 << 1U)) | ((((s1 & ((((u32)(1U)) << 31U)))) >> 31U)));
	r1 = (((s1 << 1U)) | ((((s0 & ((((u32)(1U)) << 31U)))) >> 31U)));
	r0 = (s0 << 1U);
	return (multi_return_u32_u32_u32){.arg0=r2, .arg1=r1, .arg2=r0};
}

VV_LOCAL_SYMBOL multi_return_u32_u32_u32 strconv__add96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0) {
	u64 w = ((u64)(0U));
	u32 r0 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	w = (u64)(((u64)(s0)) + ((u64)(d0)));
	r0 = ((u32)(w));
	w >>= 32U;
	w += (u64)(((u64)(s1)) + ((u64)(d1)));
	r1 = ((u32)(w));
	w >>= 32U;
	w += (u64)(((u64)(s2)) + ((u64)(d2)));
	r2 = ((u32)(w));
	return (multi_return_u32_u32_u32){.arg0=r2, .arg1=r1, .arg2=r0};
}

VV_LOCAL_SYMBOL multi_return_u32_u32_u32 strconv__sub96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0) {
	u64 w = ((u64)(0U));
	u32 r0 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	w = (u64)(((u64)(s0)) - ((u64)(d0)));
	r0 = ((u32)(w));
	w >>= 32U;
	w += (u64)(((u64)(s1)) - ((u64)(d1)));
	r1 = ((u32)(w));
	w >>= 32U;
	w += (u64)(((u64)(s2)) - ((u64)(d2)));
	r2 = ((u32)(w));
	return (multi_return_u32_u32_u32){.arg0=r2, .arg1=r1, .arg2=r0};
}

VV_LOCAL_SYMBOL bool strconv__is_digit(u8 x) {
	return x >= _const_strconv__c_zero && x <= _const_strconv__c_nine;
}

VV_LOCAL_SYMBOL bool strconv__is_space(u8 x) {
	return x == '\t' || x == '\n' || x == '\v' || x == '\f' || x == '\r' || x == ' ';
}

VV_LOCAL_SYMBOL bool strconv__is_exp(u8 x) {
	return x == 'E' || x == 'e';
}

// Attr: [direct_array_access]
VV_LOCAL_SYMBOL multi_return_strconv__ParserState_strconv__PrepNumber strconv__parser(string s) {
	int digx = 0;
	strconv__ParserState result = strconv__ParserState__ok;
	bool expneg = false;
	int expexp = 0;
	int i = 0;
	strconv__PrepNumber pn = ((strconv__PrepNumber){.negative = 0,.exponent = 0,.mantissa = 0,});
	for (;;) {
		if (!(i < s.len && u8_is_space(s.str[ i]))) break;
		i++;
	}
	if (s.str[ i] == '-') {
		pn.negative = true;
		i++;
	}
	if (s.str[ i] == '+') {
		i++;
	}
	for (;;) {
		if (!(i < s.len && u8_is_digit(s.str[ i]))) break;
		if (digx < _const_strconv__digits) {
			pn.mantissa *= 10U;
			pn.mantissa += ((u64)((rune)(s.str[ i] - _const_strconv__c_zero)));
			digx++;
		} else if (pn.exponent < 2147483647) {
			pn.exponent++;
		}
		i++;
	}
	if (i < s.len && s.str[ i] == '.') {
		i++;
		for (;;) {
			if (!(i < s.len && u8_is_digit(s.str[ i]))) break;
			if (digx < _const_strconv__digits) {
				pn.mantissa *= 10U;
				pn.mantissa += ((u64)((rune)(s.str[ i] - _const_strconv__c_zero)));
				pn.exponent--;
				digx++;
			}
			i++;
		}
	}
	if (i < s.len && (s.str[ i] == 'e' || s.str[ i] == 'E')) {
		i++;
		if (i < s.len) {
			if (s.str[ i] == _const_strconv__c_plus) {
				i++;
			} else if (s.str[ i] == _const_strconv__c_minus) {
				expneg = true;
				i++;
			}
			for (;;) {
				if (!(i < s.len && u8_is_digit(s.str[ i]))) break;
				if (expexp < 214748364) {
					expexp *= 10;
					expexp += ((int)((rune)(s.str[ i] - _const_strconv__c_zero)));
				}
				i++;
			}
		}
	}
	if (expneg) {
		expexp = -expexp;
	}
	pn.exponent += expexp;
	if (pn.mantissa == 0U) {
		if (pn.negative) {
			result = strconv__ParserState__mzero;
		} else {
			result = strconv__ParserState__pzero;
		}
	} else if (pn.exponent > 309) {
		if (pn.negative) {
			result = strconv__ParserState__minf;
		} else {
			result = strconv__ParserState__pinf;
		}
	} else if (pn.exponent < -328) {
		if (pn.negative) {
			result = strconv__ParserState__mzero;
		} else {
			result = strconv__ParserState__pzero;
		}
	}
	if (i == 0 && s.len > 0) {
		return (multi_return_strconv__ParserState_strconv__PrepNumber){.arg0=strconv__ParserState__invalid_number, .arg1=pn};
	}
	return (multi_return_strconv__ParserState_strconv__PrepNumber){.arg0=result, .arg1=pn};
}

VV_LOCAL_SYMBOL u64 strconv__converter(strconv__PrepNumber* pn) {
	int binexp = 92;
	u32 s2 = ((u32)(0U));
	u32 s1 = ((u32)(0U));
	u32 s0 = ((u32)(0U));
	u32 q2 = ((u32)(0U));
	u32 q1 = ((u32)(0U));
	u32 q0 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r0 = ((u32)(0U));
	u32 mask28 = ((u32)((((u64)(0xFU)) << 28U)));
	u64 result = ((u64)(0U));
	s0 = ((u32)((pn->mantissa & ((u64)(0x00000000FFFFFFFFU)))));
	s1 = ((u32)((pn->mantissa >> 32U)));
	s2 = ((u32)(0U));
	for (;;) {
		if (!(pn->exponent > 0)) break;
		multi_return_u32_u32_u32 mr_5541 = strconv__lsl96(s2, s1, s0);
		q2 = mr_5541.arg0;
		q1 = mr_5541.arg1;
		q0 = mr_5541.arg2;
		multi_return_u32_u32_u32 mr_5587 = strconv__lsl96(q2, q1, q0);
		r2 = mr_5587.arg0;
		r1 = mr_5587.arg1;
		r0 = mr_5587.arg2;
		multi_return_u32_u32_u32 mr_5643 = strconv__lsl96(r2, r1, r0);
		s2 = mr_5643.arg0;
		s1 = mr_5643.arg1;
		s0 = mr_5643.arg2;
		multi_return_u32_u32_u32 mr_5699 = strconv__add96(s2, s1, s0, q2, q1, q0);
		s2 = mr_5699.arg0;
		s1 = mr_5699.arg1;
		s0 = mr_5699.arg2;
		pn->exponent--;
		for (;;) {
			if (!(((s2 & mask28)) != 0U)) break;
			multi_return_u32_u32_u32 mr_5822 = strconv__lsr96(s2, s1, s0);
			q2 = mr_5822.arg0;
			q1 = mr_5822.arg1;
			q0 = mr_5822.arg2;
			binexp++;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
	}
	for (;;) {
		if (!(pn->exponent < 0)) break;
		for (;;) {
			if (!(!(((s2 & ((((u32)(1U)) << 31U)))) != 0U))) break;
			multi_return_u32_u32_u32 mr_5969 = strconv__lsl96(s2, s1, s0);
			q2 = mr_5969.arg0;
			q1 = mr_5969.arg1;
			q0 = mr_5969.arg2;
			binexp--;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
		q2 = (u32)(s2 / _const_strconv__c_ten);
		r1 = (u32)(s2 % _const_strconv__c_ten);
		r2 = (((s1 >> 8U)) | ((r1 << 24U)));
		q1 = (u32)(r2 / _const_strconv__c_ten);
		r1 = (u32)(r2 % _const_strconv__c_ten);
		r2 = ((((((s1 & ((u32)(0xFFU)))) << 16U)) | ((s0 >> 16U))) | ((r1 << 24U)));
		r0 = (u32)(r2 / _const_strconv__c_ten);
		r1 = (u32)(r2 % _const_strconv__c_ten);
		q1 = (((q1 << 8U)) | ((((r0 & ((u32)(0x00FF0000U)))) >> 16U)));
		q0 = (r0 << 16U);
		r2 = (((s0 & ((u32)(0xFFFFU)))) | ((r1 << 16U)));
		q0 |= (u32)(r2 / _const_strconv__c_ten);
		s2 = q2;
		s1 = q1;
		s0 = q0;
		pn->exponent++;
	}
	if (s2 != 0U || s1 != 0U || s0 != 0U) {
		for (;;) {
			if (!(((s2 & mask28)) == 0U)) break;
			multi_return_u32_u32_u32 mr_6705 = strconv__lsl96(s2, s1, s0);
			q2 = mr_6705.arg0;
			q1 = mr_6705.arg1;
			q0 = mr_6705.arg2;
			binexp--;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
	}
	int nbit = 7;
	u32 check_round_bit = (((u32)(1U)) << ((u32)(nbit)));
	u32 check_round_mask = (((u32)(0xFFFFFFFFU)) << ((u32)(nbit)));
	if (((s1 & check_round_bit)) != 0U) {
		if (((s1 & ~check_round_mask)) != 0U) {
			multi_return_u32_u32_u32 mr_7790 = strconv__add96(s2, s1, s0, 0U, check_round_bit, 0U);
			s2 = mr_7790.arg0;
			s1 = mr_7790.arg1;
			s0 = mr_7790.arg2;
		} else {
			if (((s1 & ((check_round_bit << ((u32)(1U)))))) != 0U) {
				multi_return_u32_u32_u32 mr_7984 = strconv__add96(s2, s1, s0, 0U, check_round_bit, 0U);
				s2 = mr_7984.arg0;
				s1 = mr_7984.arg1;
				s0 = mr_7984.arg2;
			}
		}
		s1 = (s1 & check_round_mask);
		s0 = ((u32)(0U));
		if ((s2 & ((mask28 << ((u32)(1U))))) != 0U) {
			multi_return_u32_u32_u32 mr_8191 = strconv__lsr96(s2, s1, s0);
			q2 = mr_8191.arg0;
			q1 = mr_8191.arg1;
			q0 = mr_8191.arg2;
			binexp++;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
	}
	binexp += 1023;
	if (binexp > 2046) {
		if (pn->negative) {
			result = _const_strconv__double_minus_infinity;
		} else {
			result = _const_strconv__double_plus_infinity;
		}
	} else if (binexp < 1) {
		if (pn->negative) {
			result = _const_strconv__double_minus_zero;
		} else {
			result = _const_strconv__double_plus_zero;
		}
	} else if (s2 != 0U) {
		u64 q = ((u64)(0U));
		u64 binexs2 = (((u64)(binexp)) << 52U);
		q = ((((((u64)((s2 & ~mask28))) << 24U)) | ((((u64)(((u64)(s1)) + ((u64)(128U)))) >> 8U))) | binexs2);
		if (pn->negative) {
			q |= ((((u64)(1U)) << 63U));
		}
		result = q;
	}
	return result;
}

_result_f64 strconv__atof64(string s) {
	if (s.len == 0) {
		return (_result_f64){ .is_error=true, .err=_v_error(_SLIT("expected a number found an empty string")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	strconv__Float64u res = ((strconv__Float64u){0});
	multi_return_strconv__ParserState_strconv__PrepNumber mr_9282 = strconv__parser(s);
	strconv__ParserState res_parsing = mr_9282.arg0;
	strconv__PrepNumber pn = mr_9282.arg1;
	switch (res_parsing) {
		case strconv__ParserState__ok: {
				res.u = strconv__converter((voidptr)&/*qq*/pn);
				break;
		}
		case strconv__ParserState__pzero: {
				res.u = _const_strconv__double_plus_zero;
				break;
		}
		case strconv__ParserState__mzero: {
				res.u = _const_strconv__double_minus_zero;
				break;
		}
		case strconv__ParserState__pinf: {
				res.u = _const_strconv__double_plus_infinity;
				break;
		}
		case strconv__ParserState__minf: {
				res.u = _const_strconv__double_minus_infinity;
				break;
		}
		case strconv__ParserState__invalid_number: {
				return (_result_f64){ .is_error=true, .err=_v_error(_SLIT("not a number")), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	}
	
	_result_f64 _t3;
	_result_ok(&(f64[]) { res.f }, (_result*)(&_t3), sizeof(f64));
	return _t3;
}

// Attr: [direct_array_access]
f64 strconv__atof_quick(string s) {
	strconv__Float64u f = ((strconv__Float64u){0});
	f64 sign = ((f64)(1.0));
	int i = 0;
	for (;;) {
		if (!(i < s.len && s.str[ i] == ' ')) break;
		i++;
	}
	if (i < s.len) {
		if (s.str[ i] == '-') {
			sign = -1.0;
			i++;
		} else if (s.str[ i] == '+') {
			i++;
		}
	}
	if (s.str[ i] == 'i' && (int)(i + 2) < s.len && s.str[ (int)(i + 1)] == 'n' && s.str[ (int)(i + 2)] == 'f') {
		if (sign > ((f64)(0.0))) {
			f.u = _const_strconv__double_plus_infinity;
		} else {
			f.u = _const_strconv__double_minus_infinity;
		}
		return f.f;
	}
	for (;;) {
		if (!(i < s.len && s.str[ i] == '0')) break;
		i++;
		if (i >= s.len) {
			if (sign > ((f64)(0.0))) {
				f.u = _const_strconv__double_plus_zero;
			} else {
				f.u = _const_strconv__double_minus_zero;
			}
			return f.f;
		}
	}
	for (;;) {
		if (!(i < s.len && (s.str[ i] >= '0' && s.str[ i] <= '9'))) break;
		f.f *= ((f64)(10.0));
		f.f += ((f64)((rune)(s.str[ i] - '0')));
		i++;
	}
	if (i < s.len && s.str[ i] == '.') {
		i++;
		f64 frac_mul = ((f64)(0.1));
		for (;;) {
			if (!(i < s.len && (s.str[ i] >= '0' && s.str[ i] <= '9'))) break;
			f.f += (f64)(((f64)((rune)(s.str[ i] - '0'))) * frac_mul);
			frac_mul *= ((f64)(0.1));
			i++;
		}
	}
	if (i < s.len && (s.str[ i] == 'e' || s.str[ i] == 'E')) {
		i++;
		int exp = 0;
		int exp_sign = 1;
		if (i < s.len) {
			if (s.str[ i] == '-') {
				exp_sign = -1;
				i++;
			} else if (s.str[ i] == '+') {
				i++;
			}
		}
		for (;;) {
			if (!(i < s.len && s.str[ i] == '0')) break;
			i++;
		}
		for (;;) {
			if (!(i < s.len && (s.str[ i] >= '0' && s.str[ i] <= '9'))) break;
			exp *= 10;
			exp += ((int)((rune)(s.str[ i] - '0')));
			i++;
		}
		if (exp_sign == 1) {
			if (exp > 309) {
				if (sign > 0) {
					f.u = _const_strconv__double_plus_infinity;
				} else {
					f.u = _const_strconv__double_minus_infinity;
				}
				return f.f;
			}
			strconv__Float64u tmp_mul = ((strconv__Float64u){.u = _const_strconv__pos_exp[exp],});
			f.f = (f64)(f.f * tmp_mul.f);
		} else {
			if (exp > 324) {
				if (sign > 0) {
					f.u = _const_strconv__double_plus_zero;
				} else {
					f.u = _const_strconv__double_minus_zero;
				}
				return f.f;
			}
			strconv__Float64u tmp_mul = ((strconv__Float64u){.u = _const_strconv__neg_exp[exp],});
			f.f = (f64)(f.f * tmp_mul.f);
		}
	}
	{ // Unsafe block
		f.f = (f64)(f.f * sign);
		return f.f;
	}
	return 0;
}

// Attr: [inline]
inline u8 strconv__byte_to_lower(u8 c) {
	return (c | 32);
}

_result_u64 strconv__common_parse_uint(string s, int _base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit) {
	multi_return_u64_int mr_772 = strconv__common_parse_uint2(s, _base, _bit_size);
	u64 result = mr_772.arg0;
	int err = mr_772.arg1;
	if (err != 0 && (error_on_non_digit || error_on_high_digit)) {
		switch (err) {
			case -1: {
					return (_result_u64){ .is_error=true, .err=_v_error( str_intp(3, _MOV((StrIntpData[]){{_SLIT("common_parse_uint: wrong base "), /*100 &int*/0xfe07, {.d_i32 = _base}}, {_SLIT(" for "), /*115 &string*/0xfe10, {.d_s = s}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			case -2: {
					return (_result_u64){ .is_error=true, .err=_v_error( str_intp(3, _MOV((StrIntpData[]){{_SLIT("common_parse_uint: wrong bit size "), /*100 &int*/0xfe07, {.d_i32 = _bit_size}}, {_SLIT(" for "), /*115 &string*/0xfe10, {.d_s = s}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			case -3: {
					return (_result_u64){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("common_parse_uint: integer overflow "), /*115 &string*/0xfe10, {.d_s = s}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			default: {
					return (_result_u64){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("common_parse_uint: syntax error "), /*115 &string*/0xfe10, {.d_s = s}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		
	}
	_result_u64 _t5;
	_result_ok(&(u64[]) { result }, (_result*)(&_t5), sizeof(u64));
	return _t5;
}

// Attr: [direct_array_access]
multi_return_u64_int strconv__common_parse_uint2(string s, int _base, int _bit_size) {
	if (s.len < 1) {
		return (multi_return_u64_int){.arg0=((u64)(0U)), .arg1=1};
	}
	int bit_size = _bit_size;
	int base = _base;
	int start_index = 0;
	if (base == 0) {
		base = 10;
		if (s.str[ 0] == '0') {
			u8 ch = (s.str[ 1] | 32);
			if (s.len >= 3) {
				if (ch == 'b') {
					base = 2;
					start_index += 2;
				} else if (ch == 'o') {
					base = 8;
					start_index += 2;
				} else if (ch == 'x') {
					base = 16;
					start_index += 2;
				}
				if (s.str[ start_index] == '_') {
					start_index++;
				}
			} else if (s.len >= 2 && (s.str[ 1] >= '0' && s.str[ 1] <= '9')) {
				base = 10;
				start_index++;
			} else {
				base = 8;
				start_index++;
			}
		}
	}
	if (bit_size == 0) {
		bit_size = _const_strconv__int_size;
	} else if (bit_size < 0 || bit_size > 64) {
		return (multi_return_u64_int){.arg0=((u64)(0U)), .arg1=-2};
	}
	u64 cutoff = (u64)((u64)(_const_strconv__max_u64 / ((u64)(base))) + ((u64)(1U)));
	u64 max_val = (bit_size == 64 ? (_const_strconv__max_u64) : ((u64)(((((u64)(1U)) << ((u64)(bit_size)))) - ((u64)(1U)))));
	int basem1 = (int)(base - 1);
	u64 n = ((u64)(0U));
	for (int i = start_index; i < s.len; ++i) {
		u8 c = s.str[ i];
		if (c == '_') {
			if (i == start_index || i >= ((int)(s.len - 1))) {
				return (multi_return_u64_int){.arg0=((u64)(0U)), .arg1=1};
			}
			if (s.str[ (int)(i - 1)] == '_' || s.str[ (int)(i + 1)] == '_') {
				return (multi_return_u64_int){.arg0=((u64)(0U)), .arg1=1};
			}
			continue;
		}
		int sub_count = 0;
		c -= 48;
		if (c >= 17) {
			sub_count++;
			c -= 7;
			if (c >= 42) {
				sub_count++;
				c -= 32;
			}
		}
		if (c > basem1 || (sub_count == 0 && c > 9)) {
			return (multi_return_u64_int){.arg0=n, .arg1=(int)(i + 1)};
		}
		if (n >= cutoff) {
			return (multi_return_u64_int){.arg0=max_val, .arg1=-3};
		}
		n *= ((u64)(base));
		u64 n1 = (u64)(n + ((u64)(c)));
		if (n1 < n || n1 > max_val) {
			return (multi_return_u64_int){.arg0=max_val, .arg1=-3};
		}
		n = n1;
	}
	return (multi_return_u64_int){.arg0=n, .arg1=0};
}

_result_u64 strconv__parse_uint(string s, int _base, int _bit_size) {
	_result_u64 _t1 = strconv__common_parse_uint(s, _base, _bit_size, true, true);
	return _t1;
}

// Attr: [direct_array_access]
_result_i64 strconv__common_parse_int(string _s, int base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit) {
	if (_s.len < 1) {
		_result_i64 _t1;
		_result_ok(&(i64[]) { ((i64)(0)) }, (_result*)(&_t1), sizeof(i64));
		return _t1;
	}
	int bit_size = _bit_size;
	if (bit_size == 0) {
		bit_size = _const_strconv__int_size;
	}
	string s = _s;
	bool neg = false;
	if (s.str[ 0] == '+') {
		{ // Unsafe block
			s = tos(s.str + 1, (int)(s.len - 1));
		}
	} else if (s.str[ 0] == '-') {
		neg = true;
		{ // Unsafe block
			s = tos(s.str + 1, (int)(s.len - 1));
		}
	}
	_result_u64 _t2 = strconv__common_parse_uint(s, base, bit_size, error_on_non_digit, error_on_high_digit);
	if (_t2.is_error) {
		_result_i64 _t3;
		memcpy(&_t3, &_t2, sizeof(_result));
		return _t3;
	}
	
 	u64 un =  (*(u64*)_t2.data);
	if (un == 0U) {
		_result_i64 _t4;
		_result_ok(&(i64[]) { ((i64)(0)) }, (_result*)(&_t4), sizeof(i64));
		return _t4;
	}
	u64 cutoff = (((u64)(1U)) << ((u64)((int)(bit_size - 1))));
	if (!neg && un >= cutoff) {
		_result_i64 _t5;
		_result_ok(&(i64[]) { ((i64)((u64)(cutoff - ((u64)(1U))))) }, (_result*)(&_t5), sizeof(i64));
		return _t5;
	}
	if (neg && un > cutoff) {
		_result_i64 _t6;
		_result_ok(&(i64[]) { -((i64)(cutoff)) }, (_result*)(&_t6), sizeof(i64));
		return _t6;
	}
	_result_i64 _t8; /* if prepend */
	if (neg) {
		_result_ok(&(i64[]) { -((i64)(un)) }, (_result*)(&_t8), sizeof(i64));
	} else {
		_result_ok(&(i64[]) { ((i64)(un)) }, (_result*)(&_t8), sizeof(i64));
	}
	return  _t8;
}

_result_i64 strconv__parse_int(string _s, int base, int _bit_size) {
	_result_i64 _t1 = strconv__common_parse_int(_s, base, _bit_size, true, true);
	return _t1;
}

// Attr: [direct_array_access]
_result_int strconv__atoi(string s) {
	if ((s).len == 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_SLIT("strconv.atoi: parsing \"\": invalid syntax")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if ((_const_strconv__int_size == 32 && (0 < s.len && s.len < 10)) || (_const_strconv__int_size == 64 && (0 < s.len && s.len < 19))) {
		int start_idx = 0;
		if (s.str[ 0] == '-' || s.str[ 0] == '+') {
			start_idx++;
			if ((int)(s.len - start_idx) < 1) {
				return (_result_int){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("strconv.atoi: parsing \""), /*115 &string*/0xfe10, {.d_s = s}}, {_SLIT("\": invalid syntax"), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		int n = 0;
		for (int i = start_idx; i < s.len; ++i) {
			rune ch = (rune)(s.str[ i] - '0');
			if (ch > 9) {
				return (_result_int){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("strconv.atoi: parsing \""), /*115 &string*/0xfe10, {.d_s = s}}, {_SLIT("\": invalid syntax"), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			n = (int)((int)(n * 10) + ((int)(ch)));
		}
		_result_int _t5; /* if prepend */
		if (s.str[ 0] == '-') {
			_result_ok(&(int[]) { -n }, (_result*)(&_t5), sizeof(int));
		} else {
			_result_ok(&(int[]) { n }, (_result*)(&_t5), sizeof(int));
		}
		return  _t5;
	}
	_result_i64 _t6 = strconv__parse_int(s, 10, 0);
	if (_t6.is_error) {
		_result_int _t7;
		memcpy(&_t7, &_t6, sizeof(_result));
		return _t7;
	}
	
 	i64 int64 =  (*(i64*)_t6.data);
	_result_int _t8;
	_result_ok(&(int[]) { ((int)(int64)) }, (_result*)(&_t8), sizeof(int));
	return _t8;
}

// Attr: [direct_array_access]
string strconv__Dec32_get_string_32(strconv__Dec32 d, bool neg, int i_n_digit, int i_pad_digit) {
	int n_digit = (int)(i_n_digit + 1);
	int pad_digit = (int)(i_pad_digit + 1);
	u32 out = d.m;
	int out_len = strconv__dec_digits(out);
	int out_len_original = out_len;
	int fw_zeros = 0;
	if (pad_digit > out_len) {
		fw_zeros = (int)(pad_digit - out_len);
	}
	Array_u8 buf = __new_array_with_default(((int)((int)((int)((int)(out_len + 5) + 1) + 1))), 0, sizeof(u8), 0);
	int i = 0;
	if (neg) {
		if (buf.data != 0) {
			((u8*)buf.data)[i] = '-';
		}
		i++;
	}
	int disp = 0;
	if (out_len <= 1) {
		disp = 1;
	}
	if (n_digit < out_len) {
		out += (u32)(_const_strconv__ten_pow_table_32[(int)((int)(out_len - n_digit) - 1)] * 5U);
		out /= _const_strconv__ten_pow_table_32[(int)(out_len - n_digit)];
		out_len = n_digit;
	}
	int y = (int)(i + out_len);
	int x = 0;
	for (;;) {
		if (!(x < ((int)((int)(out_len - disp) - 1)))) break;
		((u8*)buf.data)[(int)(y - x)] = (rune)('0' + ((u8)((u32)(out % 10U))));
		out /= 10U;
		i++;
		x++;
	}
	if (i_n_digit == 0) {
		{ // Unsafe block
			((u8*)buf.data)[i] = 0;
			return tos(((u8*)(&((u8*)buf.data)[0])), i);
		}
	}
	if (out_len >= 1) {
		((u8*)buf.data)[(int)(y - x)] = '.';
		x++;
		i++;
	}
	if ((int)(y - x) >= 0) {
		((u8*)buf.data)[(int)(y - x)] = (rune)('0' + ((u8)((u32)(out % 10U))));
		i++;
	}
	for (;;) {
		if (!(fw_zeros > 0)) break;
		((u8*)buf.data)[i] = '0';
		i++;
		fw_zeros--;
	}
	((u8*)buf.data)[i] = 'e';
	i++;
	int exp = (int)((int)(d.e + out_len_original) - 1);
	if (exp < 0) {
		((u8*)buf.data)[i] = '-';
		i++;
		exp = -exp;
	} else {
		((u8*)buf.data)[i] = '+';
		i++;
	}
	int d1 = (int)(exp % 10);
	int d0 = (int)(exp / 10);
	((u8*)buf.data)[i] = (rune)('0' + ((u8)(d0)));
	i++;
	((u8*)buf.data)[i] = (rune)('0' + ((u8)(d1)));
	i++;
	((u8*)buf.data)[i] = 0;
	return tos(((u8*)(&((u8*)buf.data)[0])), i);
}

VV_LOCAL_SYMBOL multi_return_strconv__Dec32_bool strconv__f32_to_decimal_exact_int(u32 i_mant, u32 exp) {
	strconv__Dec32 d = ((strconv__Dec32){.m = 0,.e = 0,});
	u32 e = (u32)(exp - _const_strconv__bias32);
	if (e > _const_strconv__mantbits32) {
		return (multi_return_strconv__Dec32_bool){.arg0=d, .arg1=false};
	}
	u32 shift = (u32)(_const_strconv__mantbits32 - e);
	u32 mant = (i_mant | 0x00800000U);
	d.m = (mant >> shift);
	if (((d.m << shift)) != mant) {
		return (multi_return_strconv__Dec32_bool){.arg0=d, .arg1=false};
	}
	for (;;) {
		if (!(((u32)(d.m % 10U)) == 0U)) break;
		d.m /= 10U;
		d.e++;
	}
	return (multi_return_strconv__Dec32_bool){.arg0=d, .arg1=true};
}

VV_LOCAL_SYMBOL strconv__Dec32 strconv__f32_to_decimal(u32 mant, u32 exp) {
	int e2 = 0;
	u32 m2 = ((u32)(0U));
	if (exp == 0U) {
		e2 = (int)((int)((int_literal)(1 - _const_strconv__bias32) - ((int)(_const_strconv__mantbits32))) - 2);
		m2 = mant;
	} else {
		e2 = (int)((int)((int)(((int)(exp)) - _const_strconv__bias32) - ((int)(_const_strconv__mantbits32))) - 2);
		m2 = (((((u32)(1U)) << _const_strconv__mantbits32)) | mant);
	}
	bool even = ((m2 & 1U)) == 0U;
	bool accept_bounds = even;
	u32 mv = ((u32)((u32)(4 * m2)));
	u32 mp = ((u32)((u32)((u32)(4 * m2) + 2U)));
	u32 mm_shift = strconv__bool_to_u32(mant != 0U || exp <= 1U);
	u32 mm = ((u32)((u32)((u32)((u32)(4 * m2) - 1U) - mm_shift)));
	u32 vr = ((u32)(0U));
	u32 vp = ((u32)(0U));
	u32 vm = ((u32)(0U));
	int e10 = 0;
	bool vm_is_trailing_zeros = false;
	bool vr_is_trailing_zeros = false;
	u8 last_removed_digit = ((u8)(0));
	if (e2 >= 0) {
		u32 q = strconv__log10_pow2(e2);
		e10 = ((int)(q));
		int k = (int)((int)(_const_strconv__pow5_inv_num_bits_32 + strconv__pow5_bits(((int)(q)))) - 1);
		int i = (int)((int)(-e2 + ((int)(q))) + k);
		vr = strconv__mul_pow5_invdiv_pow2(mv, q, i);
		vp = strconv__mul_pow5_invdiv_pow2(mp, q, i);
		vm = strconv__mul_pow5_invdiv_pow2(mm, q, i);
		if (q != 0U && (u32)(((u32)(vp - 1U)) / 10U) <= (u32)(vm / 10U)) {
			int l = (int)((int)(_const_strconv__pow5_inv_num_bits_32 + strconv__pow5_bits(((int)((u32)(q - 1U))))) - 1);
			last_removed_digit = ((u8)((u32)(strconv__mul_pow5_invdiv_pow2(mv, (u32)(q - 1U), (int)((int)(-e2 + ((int)((u32)(q - 1U)))) + l)) % 10U)));
		}
		if (q <= 9U) {
			if ((u32)(mv % 5U) == 0U) {
				vr_is_trailing_zeros = strconv__multiple_of_power_of_five_32(mv, q);
			} else if (accept_bounds) {
				vm_is_trailing_zeros = strconv__multiple_of_power_of_five_32(mm, q);
			} else if (strconv__multiple_of_power_of_five_32(mp, q)) {
				vp--;
			}
		}
	} else {
		u32 q = strconv__log10_pow5(-e2);
		e10 = (int)(((int)(q)) + e2);
		int i = (int)(-e2 - ((int)(q)));
		int k = (int)(strconv__pow5_bits(i) - _const_strconv__pow5_num_bits_32);
		int j = (int)(((int)(q)) - k);
		vr = strconv__mul_pow5_div_pow2(mv, ((u32)(i)), j);
		vp = strconv__mul_pow5_div_pow2(mp, ((u32)(i)), j);
		vm = strconv__mul_pow5_div_pow2(mm, ((u32)(i)), j);
		if (q != 0U && ((u32)(((u32)(vp - 1U)) / 10U)) <= (u32)(vm / 10U)) {
			j = (int)((int)(((int)(q)) - 1) - ((int)(strconv__pow5_bits((int)(i + 1)) - _const_strconv__pow5_num_bits_32)));
			last_removed_digit = ((u8)((u32)(strconv__mul_pow5_div_pow2(mv, ((u32)((int)(i + 1))), j) % 10U)));
		}
		if (q <= 1U) {
			vr_is_trailing_zeros = true;
			if (accept_bounds) {
				vm_is_trailing_zeros = mm_shift == 1U;
			} else {
				vp--;
			}
		} else if (q < 31U) {
			vr_is_trailing_zeros = strconv__multiple_of_power_of_two_32(mv, (u32)(q - 1U));
		}
	}
	int removed = 0;
	u32 out = ((u32)(0U));
	if (vm_is_trailing_zeros || vr_is_trailing_zeros) {
		for (;;) {
			if (!((u32)(vp / 10U) > (u32)(vm / 10U))) break;
			vm_is_trailing_zeros = vm_is_trailing_zeros && ((u32)(vm % 10U)) == 0U;
			vr_is_trailing_zeros = vr_is_trailing_zeros && last_removed_digit == 0;
			last_removed_digit = ((u8)((u32)(vr % 10U)));
			vr /= 10U;
			vp /= 10U;
			vm /= 10U;
			removed++;
		}
		if (vm_is_trailing_zeros) {
			for (;;) {
				if (!((u32)(vm % 10U) == 0U)) break;
				vr_is_trailing_zeros = vr_is_trailing_zeros && last_removed_digit == 0;
				last_removed_digit = ((u8)((u32)(vr % 10U)));
				vr /= 10U;
				vp /= 10U;
				vm /= 10U;
				removed++;
			}
		}
		if (vr_is_trailing_zeros && last_removed_digit == 5 && ((u32)(vr % 2U)) == 0U) {
			last_removed_digit = 4;
		}
		out = vr;
		if ((vr == vm && (!accept_bounds || !vm_is_trailing_zeros)) || last_removed_digit >= 5) {
			out++;
		}
	} else {
		for (;;) {
			if (!((u32)(vp / 10U) > (u32)(vm / 10U))) break;
			last_removed_digit = ((u8)((u32)(vr % 10U)));
			vr /= 10U;
			vp /= 10U;
			vm /= 10U;
			removed++;
		}
		out = (u32)(vr + strconv__bool_to_u32(vr == vm || last_removed_digit >= 5));
	}
	return ((strconv__Dec32){.m = out,.e = (int)(e10 + removed),});
}

string strconv__f32_to_str(f32 f, int n_digit) {
	strconv__Uf32 u1 = ((strconv__Uf32){0});
	u1.f = f;
	u32 u = u1.u;
	bool neg = ((u >> ((u32)(_const_strconv__mantbits32 + _const_strconv__expbits32)))) != 0U;
	u32 mant = (u & ((u32)(((((u32)(1U)) << _const_strconv__mantbits32)) - ((u32)(1U)))));
	u32 exp = (((u >> _const_strconv__mantbits32)) & ((u32)(((((u32)(1U)) << _const_strconv__expbits32)) - ((u32)(1U)))));
	if (exp == _const_strconv__maxexp32 || (exp == 0U && mant == 0U)) {
		return strconv__get_string_special(neg, exp == 0U, mant == 0U);
	}
	multi_return_strconv__Dec32_bool mr_8733 = strconv__f32_to_decimal_exact_int(mant, exp);
	strconv__Dec32 d = mr_8733.arg0;
	bool ok = mr_8733.arg1;
	if (!ok) {
		d = strconv__f32_to_decimal(mant, exp);
	}
	return strconv__Dec32_get_string_32(d, neg, n_digit, 0);
}

string strconv__f32_to_str_pad(f32 f, int n_digit) {
	strconv__Uf32 u1 = ((strconv__Uf32){0});
	u1.f = f;
	u32 u = u1.u;
	bool neg = ((u >> ((u32)(_const_strconv__mantbits32 + _const_strconv__expbits32)))) != 0U;
	u32 mant = (u & ((u32)(((((u32)(1U)) << _const_strconv__mantbits32)) - ((u32)(1U)))));
	u32 exp = (((u >> _const_strconv__mantbits32)) & ((u32)(((((u32)(1U)) << _const_strconv__expbits32)) - ((u32)(1U)))));
	if (exp == _const_strconv__maxexp32 || (exp == 0U && mant == 0U)) {
		return strconv__get_string_special(neg, exp == 0U, mant == 0U);
	}
	multi_return_strconv__Dec32_bool mr_9515 = strconv__f32_to_decimal_exact_int(mant, exp);
	strconv__Dec32 d = mr_9515.arg0;
	bool ok = mr_9515.arg1;
	if (!ok) {
		d = strconv__f32_to_decimal(mant, exp);
	}
	return strconv__Dec32_get_string_32(d, neg, n_digit, n_digit);
}

// Attr: [direct_array_access]
VV_LOCAL_SYMBOL string strconv__Dec64_get_string_64(strconv__Dec64 d, bool neg, int i_n_digit, int i_pad_digit) {
	int n_digit = (int)(i_n_digit + 1);
	int pad_digit = (int)(i_pad_digit + 1);
	u64 out = d.m;
	int d_exp = d.e;
	int out_len = strconv__dec_digits(out);
	int out_len_original = out_len;
	int fw_zeros = 0;
	if (pad_digit > out_len) {
		fw_zeros = (int)(pad_digit - out_len);
	}
	Array_u8 buf = __new_array_with_default(((int)((int)((int)((int)(out_len + 6) + 1) + 1) + fw_zeros)), 0, sizeof(u8), 0);
	int i = 0;
	if (neg) {
		((u8*)buf.data)[i] = '-';
		i++;
	}
	int disp = 0;
	if (out_len <= 1) {
		disp = 1;
	}
	if (n_digit < out_len) {
		out += (u64)(_const_strconv__ten_pow_table_64[(int)((int)(out_len - n_digit) - 1)] * 5U);
		out /= _const_strconv__ten_pow_table_64[(int)(out_len - n_digit)];
		if ((u64)(d.m / _const_strconv__ten_pow_table_64[(int)(out_len - n_digit)]) < out) {
			d_exp++;
			n_digit++;
		}
		out_len = n_digit;
	}
	int y = (int)(i + out_len);
	int x = 0;
	for (;;) {
		if (!(x < ((int)((int)(out_len - disp) - 1)))) break;
		((u8*)buf.data)[(int)(y - x)] = (rune)('0' + ((u8)((u64)(out % 10U))));
		out /= 10U;
		i++;
		x++;
	}
	if (i_n_digit == 0) {
		{ // Unsafe block
			((u8*)buf.data)[i] = 0;
			return tos(((u8*)(&((u8*)buf.data)[0])), i);
		}
	}
	if (out_len >= 1) {
		((u8*)buf.data)[(int)(y - x)] = '.';
		x++;
		i++;
	}
	if ((int)(y - x) >= 0) {
		((u8*)buf.data)[(int)(y - x)] = (rune)('0' + ((u8)((u64)(out % 10U))));
		i++;
	}
	for (;;) {
		if (!(fw_zeros > 0)) break;
		((u8*)buf.data)[i] = '0';
		i++;
		fw_zeros--;
	}
	((u8*)buf.data)[i] = 'e';
	i++;
	int exp = (int)((int)(d_exp + out_len_original) - 1);
	if (exp < 0) {
		((u8*)buf.data)[i] = '-';
		i++;
		exp = -exp;
	} else {
		((u8*)buf.data)[i] = '+';
		i++;
	}
	int d2 = (int)(exp % 10);
	exp /= 10;
	int d1 = (int)(exp % 10);
	int d0 = (int)(exp / 10);
	if (d0 > 0) {
		((u8*)buf.data)[i] = (rune)('0' + ((u8)(d0)));
		i++;
	}
	((u8*)buf.data)[i] = (rune)('0' + ((u8)(d1)));
	i++;
	((u8*)buf.data)[i] = (rune)('0' + ((u8)(d2)));
	i++;
	((u8*)buf.data)[i] = 0;
	return tos(((u8*)(&((u8*)buf.data)[0])), i);
}

VV_LOCAL_SYMBOL multi_return_strconv__Dec64_bool strconv__f64_to_decimal_exact_int(u64 i_mant, u64 exp) {
	strconv__Dec64 d = ((strconv__Dec64){.m = 0,.e = 0,});
	u64 e = (u64)(exp - _const_strconv__bias64);
	if (e > _const_strconv__mantbits64) {
		return (multi_return_strconv__Dec64_bool){.arg0=d, .arg1=false};
	}
	u64 shift = (u64)(_const_strconv__mantbits64 - e);
	u64 mant = (i_mant | ((u64)(0x0010000000000000U)));
	d.m = (mant >> shift);
	if (((d.m << shift)) != mant) {
		return (multi_return_strconv__Dec64_bool){.arg0=d, .arg1=false};
	}
	for (;;) {
		if (!(((u64)(d.m % 10U)) == 0U)) break;
		d.m /= 10U;
		d.e++;
	}
	return (multi_return_strconv__Dec64_bool){.arg0=d, .arg1=true};
}

VV_LOCAL_SYMBOL strconv__Dec64 strconv__f64_to_decimal(u64 mant, u64 exp) {
	int e2 = 0;
	u64 m2 = ((u64)(0U));
	if (exp == 0U) {
		e2 = (int)((int)((int_literal)(1 - _const_strconv__bias64) - ((int)(_const_strconv__mantbits64))) - 2);
		m2 = mant;
	} else {
		e2 = (int)((int)((int)(((int)(exp)) - _const_strconv__bias64) - ((int)(_const_strconv__mantbits64))) - 2);
		m2 = (((((u64)(1U)) << _const_strconv__mantbits64)) | mant);
	}
	bool even = ((m2 & 1U)) == 0U;
	bool accept_bounds = even;
	u64 mv = ((u64)((u64)(4 * m2)));
	u64 mm_shift = strconv__bool_to_u64(mant != 0U || exp <= 1U);
	u64 vr = ((u64)(0U));
	u64 vp = ((u64)(0U));
	u64 vm = ((u64)(0U));
	int e10 = 0;
	bool vm_is_trailing_zeros = false;
	bool vr_is_trailing_zeros = false;
	if (e2 >= 0) {
		u32 q = (u32)(strconv__log10_pow2(e2) - strconv__bool_to_u32(e2 > 3));
		e10 = ((int)(q));
		int k = (int)((int)(_const_strconv__pow5_inv_num_bits_64 + strconv__pow5_bits(((int)(q)))) - 1);
		int i = (int)((int)(-e2 + ((int)(q))) + k);
		strconv__Uint128 mul = *(((strconv__Uint128*)(&_const_strconv__pow5_inv_split_64_x[v_fixed_index((u32)(q * 2U), 584)])));
		vr = strconv__mul_shift_64((u64)(((u64)(4U)) * m2), mul, i);
		vp = strconv__mul_shift_64((u64)((u64)(((u64)(4U)) * m2) + ((u64)(2U))), mul, i);
		vm = strconv__mul_shift_64((u64)((u64)((u64)(((u64)(4U)) * m2) - ((u64)(1U))) - mm_shift), mul, i);
		if (q <= 21U) {
			if ((u64)(mv % 5U) == 0U) {
				vr_is_trailing_zeros = strconv__multiple_of_power_of_five_64(mv, q);
			} else if (accept_bounds) {
				vm_is_trailing_zeros = strconv__multiple_of_power_of_five_64((u64)((u64)(mv - 1U) - mm_shift), q);
			} else if (strconv__multiple_of_power_of_five_64((u64)(mv + 2U), q)) {
				vp--;
			}
		}
	} else {
		u32 q = (u32)(strconv__log10_pow5(-e2) - strconv__bool_to_u32(-e2 > 1));
		e10 = (int)(((int)(q)) + e2);
		int i = (int)(-e2 - ((int)(q)));
		int k = (int)(strconv__pow5_bits(i) - _const_strconv__pow5_num_bits_64);
		int j = (int)(((int)(q)) - k);
		strconv__Uint128 mul = *(((strconv__Uint128*)(&_const_strconv__pow5_split_64_x[v_fixed_index((int)(i * 2), 652)])));
		vr = strconv__mul_shift_64((u64)(((u64)(4U)) * m2), mul, j);
		vp = strconv__mul_shift_64((u64)((u64)(((u64)(4U)) * m2) + ((u64)(2U))), mul, j);
		vm = strconv__mul_shift_64((u64)((u64)((u64)(((u64)(4U)) * m2) - ((u64)(1U))) - mm_shift), mul, j);
		if (q <= 1U) {
			vr_is_trailing_zeros = true;
			if (accept_bounds) {
				vm_is_trailing_zeros = (mm_shift == 1U);
			} else {
				vp--;
			}
		} else if (q < 63U) {
			vr_is_trailing_zeros = strconv__multiple_of_power_of_two_64(mv, (u32)(q - 1U));
		}
	}
	int removed = 0;
	u8 last_removed_digit = ((u8)(0));
	u64 out = ((u64)(0U));
	if (vm_is_trailing_zeros || vr_is_trailing_zeros) {
		for (;;) {
			u64 vp_div_10 = (u64)(vp / 10U);
			u64 vm_div_10 = (u64)(vm / 10U);
			if (vp_div_10 <= vm_div_10) {
				break;
			}
			u64 vm_mod_10 = (u64)(vm % 10U);
			u64 vr_div_10 = (u64)(vr / 10U);
			u64 vr_mod_10 = (u64)(vr % 10U);
			vm_is_trailing_zeros = vm_is_trailing_zeros && vm_mod_10 == 0U;
			vr_is_trailing_zeros = vr_is_trailing_zeros && last_removed_digit == 0;
			last_removed_digit = ((u8)(vr_mod_10));
			vr = vr_div_10;
			vp = vp_div_10;
			vm = vm_div_10;
			removed++;
		}
		if (vm_is_trailing_zeros) {
			for (;;) {
				u64 vm_div_10 = (u64)(vm / 10U);
				u64 vm_mod_10 = (u64)(vm % 10U);
				if (vm_mod_10 != 0U) {
					break;
				}
				u64 vp_div_10 = (u64)(vp / 10U);
				u64 vr_div_10 = (u64)(vr / 10U);
				u64 vr_mod_10 = (u64)(vr % 10U);
				vr_is_trailing_zeros = vr_is_trailing_zeros && last_removed_digit == 0;
				last_removed_digit = ((u8)(vr_mod_10));
				vr = vr_div_10;
				vp = vp_div_10;
				vm = vm_div_10;
				removed++;
			}
		}
		if (vr_is_trailing_zeros && last_removed_digit == 5 && ((u64)(vr % 2U)) == 0U) {
			last_removed_digit = 4;
		}
		out = vr;
		if ((vr == vm && (!accept_bounds || !vm_is_trailing_zeros)) || last_removed_digit >= 5) {
			out++;
		}
	} else {
		bool round_up = false;
		for (;;) {
			if (!((u64)(vp / 100U) > (u64)(vm / 100U))) break;
			round_up = ((u64)(vr % 100U)) >= 50U;
			vr /= 100U;
			vp /= 100U;
			vm /= 100U;
			removed += 2;
		}
		for (;;) {
			if (!((u64)(vp / 10U) > (u64)(vm / 10U))) break;
			round_up = ((u64)(vr % 10U)) >= 5U;
			vr /= 10U;
			vp /= 10U;
			vm /= 10U;
			removed++;
		}
		out = (u64)(vr + strconv__bool_to_u64(vr == vm || round_up));
	}
	return ((strconv__Dec64){.m = out,.e = (int)(e10 + removed),});
}

string strconv__f64_to_str(f64 f, int n_digit) {
	strconv__Uf64 u1 = ((strconv__Uf64){0});
	u1.f = f;
	u64 u = u1.u;
	bool neg = ((u >> ((u32)(_const_strconv__mantbits64 + _const_strconv__expbits64)))) != 0U;
	u64 mant = (u & ((u64)(((((u64)(1U)) << _const_strconv__mantbits64)) - ((u64)(1U)))));
	u64 exp = (((u >> _const_strconv__mantbits64)) & ((u64)(((((u64)(1U)) << _const_strconv__expbits64)) - ((u64)(1U)))));
	if (exp == _const_strconv__maxexp64 || (exp == 0U && mant == 0U)) {
		return strconv__get_string_special(neg, exp == 0U, mant == 0U);
	}
	multi_return_strconv__Dec64_bool mr_9357 = strconv__f64_to_decimal_exact_int(mant, exp);
	strconv__Dec64 d = mr_9357.arg0;
	bool ok = mr_9357.arg1;
	if (!ok) {
		d = strconv__f64_to_decimal(mant, exp);
	}
	return strconv__Dec64_get_string_64(d, neg, n_digit, 0);
}

string strconv__f64_to_str_pad(f64 f, int n_digit) {
	strconv__Uf64 u1 = ((strconv__Uf64){0});
	u1.f = f;
	u64 u = u1.u;
	bool neg = ((u >> ((u32)(_const_strconv__mantbits64 + _const_strconv__expbits64)))) != 0U;
	u64 mant = (u & ((u64)(((((u64)(1U)) << _const_strconv__mantbits64)) - ((u64)(1U)))));
	u64 exp = (((u >> _const_strconv__mantbits64)) & ((u64)(((((u64)(1U)) << _const_strconv__expbits64)) - ((u64)(1U)))));
	if (exp == _const_strconv__maxexp64 || (exp == 0U && mant == 0U)) {
		return strconv__get_string_special(neg, exp == 0U, mant == 0U);
	}
	multi_return_strconv__Dec64_bool mr_10128 = strconv__f64_to_decimal_exact_int(mant, exp);
	strconv__Dec64 d = mr_10128.arg0;
	bool ok = mr_10128.arg1;
	if (!ok) {
		d = strconv__f64_to_decimal(mant, exp);
	}
	return strconv__Dec64_get_string_64(d, neg, n_digit, n_digit);
}

// Attr: [manualfree]
string strconv__format_str(string s, strconv__BF_param p) {
	bool strconv__format_str_defer_0 = false;
	strings__Builder res;
	if (p.len0 <= 0) {
		return string_clone(s);
	}
	int dif = (int)(p.len0 - utf8_str_visible_length(s));
	if (dif <= 0) {
		return string_clone(s);
	}
	res = strings__new_builder((int)(s.len + dif));
	strconv__format_str_defer_0 = true;
	if (p.align == strconv__Align_text__right) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(&res, p.pad_ch);
		}
	}
	strings__Builder_write_string(&res, s);
	if (p.align == strconv__Align_text__left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(&res, p.pad_ch);
		}
	}
	string _t3 = strings__Builder_str(&res);
		// Defer begin
		if (strconv__format_str_defer_0) {
			strings__Builder_free(&res);
		}
		// Defer end
	return _t3;
}

void strconv__format_str_sb(string s, strconv__BF_param p, strings__Builder* sb) {
	if (p.len0 <= 0) {
		strings__Builder_write_string(sb, s);
		return;
	}
	int dif = (int)(p.len0 - utf8_str_visible_length(s));
	if (dif <= 0) {
		strings__Builder_write_string(sb, s);
		return;
	}
	if (p.align == strconv__Align_text__right) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(sb, p.pad_ch);
		}
	}
	strings__Builder_write_string(sb, s);
	if (p.align == strconv__Align_text__left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(sb, p.pad_ch);
		}
	}
}

// Attr: [direct_array_access]
void strconv__format_dec_sb(u64 d, strconv__BF_param p, strings__Builder* res) {
	int n_char = strconv__dec_digits(d);
	int sign_len = (!p.positive || p.sign_flag ? (1) : (0));
	int number_len = (int)(sign_len + n_char);
	int dif = (int)(p.len0 - number_len);
	bool sign_written = false;
	if (p.align == strconv__Align_text__right) {
		if (p.pad_ch == '0') {
			if (p.positive) {
				if (p.sign_flag) {
					strings__Builder_write_u8(res, '+');
					sign_written = true;
				}
			} else {
				strings__Builder_write_u8(res, '-');
				sign_written = true;
			}
		}
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(res, p.pad_ch);
		}
	}
	if (!sign_written) {
		if (p.positive) {
			if (p.sign_flag) {
				strings__Builder_write_u8(res, '+');
			}
		} else {
			strings__Builder_write_u8(res, '-');
		}
	}
	Array_fixed_u8_32 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int i = 20;
	u64 n = d;
	u64 d_i = ((u64)(0U));
	if (n > 0U) {
		for (;;) {
			if (!(n > 0U)) break;
			u64 n1 = (u64)(n / 100U);
			d_i = (((u64)(n - ((u64)(n1 * 100U)))) << 1U);
			n = n1;
			{ // Unsafe block
				buf[i] = _const_strconv__digit_pairs.str[d_i];
			}
			i--;
			d_i++;
			{ // Unsafe block
				buf[i] = _const_strconv__digit_pairs.str[d_i];
			}
			i--;
		}
		i++;
		if (d_i < 20U) {
			i++;
		}
		strings__Builder_write_ptr(res, &buf[i], n_char);
	} else {
		strings__Builder_write_u8(res, '0');
	}
	if (p.align == strconv__Align_text__left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(res, p.pad_ch);
		}
	}
	return;
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string strconv__f64_to_str_lnd1(f64 f, int dec_digit) {
	{ // Unsafe block
		string s = strconv__f64_to_str((f64)(f + _const_strconv__dec_round[dec_digit]), 18);
		if (s.len > 2 && (s.str[ 0] == 'n' || s.str[ 1] == 'i')) {
			return s;
		}
		bool m_sgn_flag = false;
		int sgn = 1;
		Array_fixed_u8_26 b = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		int d_pos = 1;
		int i = 0;
		int i1 = 0;
		int exp = 0;
		int exp_sgn = 1;
		int dot_res_sp = -1;
		for (int _t2 = 0; _t2 < s.len; ++_t2) {
			u8 c = s.str[_t2];

			if (c == ('-')) {
				sgn = -1;
				i++;
			}
			else if (c == ('+')) {
				sgn = 1;
				i++;
			}
			else if ((c >= '0' && c <= '9')) {
				b[i1] = c;
				i1++;
				i++;
			}
			else if (c == ('.')) {
				if (sgn > 0) {
					d_pos = i;
				} else {
					d_pos = (int)(i - 1);
				}
				i++;
			}
			else if (c == ('e')) {
				i++;
				break;
			}
			else {
				string_free(&s);
				return _SLIT("[Float conversion error!!]");
			}
		}
		b[i1] = 0;
		if (s.str[ i] == '-') {
			exp_sgn = -1;
			i++;
		} else if (s.str[ i] == '+') {
			exp_sgn = 1;
			i++;
		}
		int c = i;
		for (;;) {
			if (!(c < s.len)) break;
			exp = (int)((int)(exp * 10) + ((int)((rune)(s.str[ c] - '0'))));
			c++;
		}
		Array_u8 res = __new_array_with_default((int)(exp + 32), 0, sizeof(u8), &(u8[]){0});
		int r_i = 0;
		string_free(&s);
		if (sgn == 1) {
			if (m_sgn_flag) {
				((u8*)res.data)[r_i] = '+';
				r_i++;
			}
		} else {
			((u8*)res.data)[r_i] = '-';
			r_i++;
		}
		i = 0;
		if (exp_sgn >= 0) {
			for (;;) {
				if (!(b[i] != 0)) break;
				((u8*)res.data)[r_i] = b[i];
				r_i++;
				i++;
				if (i >= d_pos && exp >= 0) {
					if (exp == 0) {
						dot_res_sp = r_i;
						((u8*)res.data)[r_i] = '.';
						r_i++;
					}
					exp--;
				}
			}
			for (;;) {
				if (!(exp >= 0)) break;
				((u8*)res.data)[r_i] = '0';
				r_i++;
				exp--;
			}
		} else {
			bool dot_p = true;
			for (;;) {
				if (!(exp > 0)) break;
				((u8*)res.data)[r_i] = '0';
				r_i++;
				exp--;
				if (dot_p) {
					dot_res_sp = r_i;
					((u8*)res.data)[r_i] = '.';
					r_i++;
					dot_p = false;
				}
			}
			for (;;) {
				if (!(b[i] != 0)) break;
				((u8*)res.data)[r_i] = b[i];
				r_i++;
				i++;
			}
		}
		if (dec_digit <= 0) {
			if (dot_res_sp < 0) {
				dot_res_sp = (int)(i + 1);
			}
			string tmp_res = string_clone(tos(res.data, dot_res_sp));
			array_free(&res);
			return tmp_res;
		}
		if (dot_res_sp >= 0) {
			r_i = (int)((int)(dot_res_sp + dec_digit) + 1);
			((u8*)res.data)[r_i] = 0;
			for (int c1 = 1; c1 < (int)(dec_digit + 1); ++c1) {
				if (((u8*)res.data)[(int)(r_i - c1)] == 0) {
					((u8*)res.data)[(int)(r_i - c1)] = '0';
				}
			}
			string tmp_res = string_clone(tos(res.data, r_i));
			array_free(&res);
			return tmp_res;
		} else {
			if (dec_digit > 0) {
				int c1 = 0;
				((u8*)res.data)[r_i] = '.';
				r_i++;
				for (;;) {
					if (!(c1 < dec_digit)) break;
					((u8*)res.data)[r_i] = '0';
					r_i++;
					c1++;
				}
				((u8*)res.data)[r_i] = 0;
			}
			string tmp_res = string_clone(tos(res.data, r_i));
			array_free(&res);
			return tmp_res;
		}
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string strconv__format_fl(f64 f, strconv__BF_param p) {
	{ // Unsafe block
		string fs = strconv__f64_to_str_lnd1((f >= ((f64)(0.0)) ? (f) : (-f)), p.len1);
		if (fs.str[ 0] == '[') {
			return fs;
		}
		if (p.rm_tail_zero) {
			string tmp = fs;
			fs = strconv__remove_tail_zeros(fs);
			string_free(&tmp);
		}
		Array_fixed_u8_32 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		Array_fixed_u8_32 out = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		int buf_i = 0;
		int out_i = 0;
		int sign_len_diff = 0;
		if (p.pad_ch == '0') {
			if (p.positive) {
				if (p.sign_flag) {
					out[out_i] = '+';
					out_i++;
					sign_len_diff = -1;
				}
			} else {
				out[out_i] = '-';
				out_i++;
				sign_len_diff = -1;
			}
		} else {
			if (p.positive) {
				if (p.sign_flag) {
					buf[buf_i] = '+';
					buf_i++;
				}
			} else {
				buf[buf_i] = '-';
				buf_i++;
			}
		}
		vmemcpy(&buf[buf_i], fs.str, fs.len);
		buf_i += fs.len;
		int dif = (int)((int)(p.len0 - buf_i) + sign_len_diff);
		if (p.align == strconv__Align_text__right) {
			for (int i1 = 0; i1 < dif; i1++) {
				out[out_i] = p.pad_ch;
				out_i++;
			}
		}
		vmemcpy(&out[out_i], &buf[0], buf_i);
		out_i += buf_i;
		if (p.align == strconv__Align_text__left) {
			for (int i1 = 0; i1 < dif; i1++) {
				out[out_i] = p.pad_ch;
				out_i++;
			}
		}
		out[out_i] = 0;
		string tmp = fs;
		fs = tos_clone(&out[0]);
		string_free(&tmp);
		return fs;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string strconv__format_es(f64 f, strconv__BF_param p) {
	{ // Unsafe block
		string fs = strconv__f64_to_str_pad((f > 0 ? (f) : (-f)), p.len1);
		if (p.rm_tail_zero) {
			string tmp = fs;
			fs = strconv__remove_tail_zeros(fs);
			string_free(&tmp);
		}
		Array_fixed_u8_32 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		Array_fixed_u8_32 out = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		int buf_i = 0;
		int out_i = 0;
		int sign_len_diff = 0;
		if (p.pad_ch == '0') {
			if (p.positive) {
				if (p.sign_flag) {
					out[out_i] = '+';
					out_i++;
					sign_len_diff = -1;
				}
			} else {
				out[out_i] = '-';
				out_i++;
				sign_len_diff = -1;
			}
		} else {
			if (p.positive) {
				if (p.sign_flag) {
					buf[buf_i] = '+';
					buf_i++;
				}
			} else {
				buf[buf_i] = '-';
				buf_i++;
			}
		}
		vmemcpy(&buf[buf_i], fs.str, fs.len);
		buf_i += fs.len;
		int dif = (int)((int)(p.len0 - buf_i) + sign_len_diff);
		if (p.align == strconv__Align_text__right) {
			for (int i1 = 0; i1 < dif; i1++) {
				out[out_i] = p.pad_ch;
				out_i++;
			}
		}
		vmemcpy(&out[out_i], &buf[0], buf_i);
		out_i += buf_i;
		if (p.align == strconv__Align_text__left) {
			for (int i1 = 0; i1 < dif; i1++) {
				out[out_i] = p.pad_ch;
				out_i++;
			}
		}
		out[out_i] = 0;
		string tmp = fs;
		fs = tos_clone(&out[0]);
		string_free(&tmp);
		return fs;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
string strconv__remove_tail_zeros(string s) {
	{ // Unsafe block
		u8* buf = malloc_noscan((int)(s.len + 1));
		int i_d = 0;
		int i_s = 0;
		for (;;) {
			if (!(i_s < s.len && !(s.str[ i_s] == '-' || s.str[ i_s] == '+') && (s.str[ i_s] > '9' || s.str[ i_s] < '0'))) break;
			buf[i_d] = s.str[ i_s];
			i_s++;
			i_d++;
		}
		if (i_s < s.len && (s.str[ i_s] == '-' || s.str[ i_s] == '+')) {
			buf[i_d] = s.str[ i_s];
			i_s++;
			i_d++;
		}
		for (;;) {
			if (!(i_s < s.len && s.str[ i_s] >= '0' && s.str[ i_s] <= '9')) break;
			buf[i_d] = s.str[ i_s];
			i_s++;
			i_d++;
		}
		if (i_s < s.len && s.str[ i_s] == '.') {
			int i_s1 = (int)(i_s + 1);
			int sum = 0;
			for (;;) {
				if (!(i_s1 < s.len && s.str[ i_s1] >= '0' && s.str[ i_s1] <= '9')) break;
				sum += (u8)(s.str[ i_s1] - ((u8)('0')));
				i_s1++;
			}
			if (sum > 0) {
				for (int c_i = i_s; c_i < i_s1; ++c_i) {
					buf[i_d] = s.str[ c_i];
					i_d++;
				}
			}
			i_s = i_s1;
		}
		if (i_s < s.len && s.str[ i_s] != '.') {
			for (;;) {
				buf[i_d] = s.str[ i_s];
				i_s++;
				i_d++;
				if (i_s >= s.len) {
					break;
				}
			}
		}
		buf[i_d] = 0;
		return tos(buf, i_d);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [inline]
inline string strconv__ftoa_64(f64 f) {
	return strconv__f64_to_str(f, 17);
}

// Attr: [inline]
inline string strconv__ftoa_long_64(f64 f) {
	return strconv__f64_to_str_l(f);
}

// Attr: [inline]
inline string strconv__ftoa_32(f32 f) {
	return strconv__f32_to_str(f, 8);
}

// Attr: [inline]
inline string strconv__ftoa_long_32(f32 f) {
	return strconv__f32_to_str_l(f);
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string strconv__format_int(i64 n, int radix) {
	{ // Unsafe block
		if (radix < 2 || radix > 36) {
			_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("invalid radix: "), /*100 &int*/0xfe07, {.d_i32 = radix}}, {_SLIT(" . It should be => 2 and <= 36"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
		if (n == 0) {
			return _SLIT("0");
		}
		i64 n_copy = n;
		bool have_minus = false;
		if (n < 0) {
			have_minus = true;
			n_copy = -n_copy;
		}
		string res = _SLIT("");
		for (;;) {
			if (!(n_copy != 0)) break;
			string tmp_0 = res;
			int bdx = ((int)((i64)(n_copy % radix)));
			string tmp_1 = u8_ascii_str(_const_strconv__base_digits.str[ bdx]);
			res = string__plus(tmp_1, res);
			string_free(&tmp_0);
			string_free(&tmp_1);
			n_copy /= radix;
		}
		if (have_minus) {
			string final_res = string__plus(_SLIT("-"), res);
			string_free(&res);
			return final_res;
		}
		return res;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string strconv__format_uint(u64 n, int radix) {
	{ // Unsafe block
		if (radix < 2 || radix > 36) {
			_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("invalid radix: "), /*100 &int*/0xfe07, {.d_i32 = radix}}, {_SLIT(" . It should be => 2 and <= 36"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
		if (n == 0U) {
			return _SLIT("0");
		}
		u64 n_copy = n;
		string res = _SLIT("");
		u64 uradix = ((u64)(radix));
		for (;;) {
			if (!(n_copy != 0U)) break;
			string tmp_0 = res;
			string tmp_1 = u8_ascii_str(_const_strconv__base_digits.str[ (u64)(n_copy % uradix)]);
			res = string__plus(tmp_1, res);
			string_free(&tmp_0);
			string_free(&tmp_1);
			n_copy /= uradix;
		}
		return res;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [manualfree]
string strconv__f32_to_str_l(f32 f) {
	string s = strconv__f32_to_str(f, 6);
	string res = strconv__fxx_to_str_l_parse(s);
	string_free(&s);
	return res;
}

// Attr: [manualfree]
string strconv__f32_to_str_l_with_dot(f32 f) {
	string s = strconv__f32_to_str(f, 6);
	string res = strconv__fxx_to_str_l_parse_with_dot(s);
	string_free(&s);
	return res;
}

// Attr: [manualfree]
string strconv__f64_to_str_l(f64 f) {
	string s = strconv__f64_to_str(f, 18);
	string res = strconv__fxx_to_str_l_parse(s);
	string_free(&s);
	return res;
}

// Attr: [manualfree]
string strconv__f64_to_str_l_with_dot(f64 f) {
	string s = strconv__f64_to_str(f, 18);
	string res = strconv__fxx_to_str_l_parse_with_dot(s);
	string_free(&s);
	return res;
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string strconv__fxx_to_str_l_parse(string s) {
	if (s.len > 2 && (s.str[ 0] == 'n' || s.str[ 1] == 'i')) {
		return string_clone(s);
	}
	bool m_sgn_flag = false;
	int sgn = 1;
	Array_fixed_u8_26 b = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int d_pos = 1;
	int i = 0;
	int i1 = 0;
	int exp = 0;
	int exp_sgn = 1;
	for (int _t2 = 0; _t2 < s.len; ++_t2) {
		u8 c = s.str[_t2];
		if (c == '-') {
			sgn = -1;
			i++;
		} else if (c == '+') {
			sgn = 1;
			i++;
		} else if (c >= '0' && c <= '9') {
			b[i1] = c;
			i1++;
			i++;
		} else if (c == '.') {
			if (sgn > 0) {
				d_pos = i;
			} else {
				d_pos = (int)(i - 1);
			}
			i++;
		} else if (c == 'e') {
			i++;
			break;
		} else {
			return _SLIT("Float conversion error!!");
		}
	}
	b[i1] = 0;
	if (s.str[ i] == '-') {
		exp_sgn = -1;
		i++;
	} else if (s.str[ i] == '+') {
		exp_sgn = 1;
		i++;
	}
	int c = i;
	for (;;) {
		if (!(c < s.len)) break;
		exp = (int)((int)(exp * 10) + ((int)((rune)(s.str[ c] - '0'))));
		c++;
	}
	Array_u8 res = __new_array_with_default((int)(exp + 32), 0, sizeof(u8), &(u8[]){0});
	int r_i = 0;
	if (sgn == 1) {
		if (m_sgn_flag) {
			((u8*)res.data)[r_i] = '+';
			r_i++;
		}
	} else {
		((u8*)res.data)[r_i] = '-';
		r_i++;
	}
	i = 0;
	if (exp_sgn >= 0) {
		for (;;) {
			if (!(b[i] != 0)) break;
			((u8*)res.data)[r_i] = b[i];
			r_i++;
			i++;
			if (i >= d_pos && exp >= 0) {
				if (exp == 0) {
					((u8*)res.data)[r_i] = '.';
					r_i++;
				}
				exp--;
			}
		}
		for (;;) {
			if (!(exp >= 0)) break;
			((u8*)res.data)[r_i] = '0';
			r_i++;
			exp--;
		}
	} else {
		bool dot_p = true;
		for (;;) {
			if (!(exp > 0)) break;
			((u8*)res.data)[r_i] = '0';
			r_i++;
			exp--;
			if (dot_p) {
				((u8*)res.data)[r_i] = '.';
				r_i++;
				dot_p = false;
			}
		}
		for (;;) {
			if (!(b[i] != 0)) break;
			((u8*)res.data)[r_i] = b[i];
			r_i++;
			i++;
		}
	}
	if (r_i > 1 && ((u8*)res.data)[(int)(r_i - 1)] == '.') {
		((u8*)res.data)[r_i] = '0';
		r_i++;
	} else if (!(Array_u8_contains(res, '.'))) {
		((u8*)res.data)[r_i] = '.';
		r_i++;
		((u8*)res.data)[r_i] = '0';
		r_i++;
	}
	((u8*)res.data)[r_i] = 0;
	return tos(res.data, r_i);
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string strconv__fxx_to_str_l_parse_with_dot(string s) {
	if (s.len > 2 && (s.str[ 0] == 'n' || s.str[ 1] == 'i')) {
		return string_clone(s);
	}
	bool m_sgn_flag = false;
	int sgn = 1;
	Array_fixed_u8_26 b = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int d_pos = 1;
	int i = 0;
	int i1 = 0;
	int exp = 0;
	int exp_sgn = 1;
	for (int _t2 = 0; _t2 < s.len; ++_t2) {
		u8 c = s.str[_t2];
		if (c == '-') {
			sgn = -1;
			i++;
		} else if (c == '+') {
			sgn = 1;
			i++;
		} else if (c >= '0' && c <= '9') {
			b[i1] = c;
			i1++;
			i++;
		} else if (c == '.') {
			if (sgn > 0) {
				d_pos = i;
			} else {
				d_pos = (int)(i - 1);
			}
			i++;
		} else if (c == 'e') {
			i++;
			break;
		} else {
			return _SLIT("Float conversion error!!");
		}
	}
	b[i1] = 0;
	if (s.str[ i] == '-') {
		exp_sgn = -1;
		i++;
	} else if (s.str[ i] == '+') {
		exp_sgn = 1;
		i++;
	}
	int c = i;
	for (;;) {
		if (!(c < s.len)) break;
		exp = (int)((int)(exp * 10) + ((int)((rune)(s.str[ c] - '0'))));
		c++;
	}
	Array_u8 res = __new_array_with_default((int)(exp + 32), 0, sizeof(u8), &(u8[]){0});
	int r_i = 0;
	if (sgn == 1) {
		if (m_sgn_flag) {
			((u8*)res.data)[r_i] = '+';
			r_i++;
		}
	} else {
		((u8*)res.data)[r_i] = '-';
		r_i++;
	}
	i = 0;
	if (exp_sgn >= 0) {
		for (;;) {
			if (!(b[i] != 0)) break;
			((u8*)res.data)[r_i] = b[i];
			r_i++;
			i++;
			if (i >= d_pos && exp >= 0) {
				if (exp == 0) {
					((u8*)res.data)[r_i] = '.';
					r_i++;
				}
				exp--;
			}
		}
		for (;;) {
			if (!(exp >= 0)) break;
			((u8*)res.data)[r_i] = '0';
			r_i++;
			exp--;
		}
	} else {
		bool dot_p = true;
		for (;;) {
			if (!(exp > 0)) break;
			((u8*)res.data)[r_i] = '0';
			r_i++;
			exp--;
			if (dot_p) {
				((u8*)res.data)[r_i] = '.';
				r_i++;
				dot_p = false;
			}
		}
		for (;;) {
			if (!(b[i] != 0)) break;
			((u8*)res.data)[r_i] = b[i];
			r_i++;
			i++;
		}
	}
	if (r_i > 1 && ((u8*)res.data)[(int)(r_i - 1)] == '.') {
		((u8*)res.data)[r_i] = '0';
		r_i++;
	} else if (!(Array_u8_contains(res, '.'))) {
		((u8*)res.data)[r_i] = '.';
		r_i++;
		((u8*)res.data)[r_i] = '0';
		r_i++;
	}
	((u8*)res.data)[r_i] = 0;
	return tos(res.data, r_i);
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL int strconv__bool_to_int(bool b) {
	if (b) {
		return 1;
	}
	return 0;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL u32 strconv__bool_to_u32(bool b) {
	if (b) {
		return ((u32)(1U));
	}
	return ((u32)(0U));
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL u64 strconv__bool_to_u64(bool b) {
	if (b) {
		return ((u64)(1U));
	}
	return ((u64)(0U));
}

VV_LOCAL_SYMBOL string strconv__get_string_special(bool neg, bool expZero, bool mantZero) {
	if (!mantZero) {
		return _SLIT("nan");
	}
	if (!expZero) {
		if (neg) {
			return _SLIT("-inf");
		} else {
			return _SLIT("+inf");
		}
	}
	if (neg) {
		return _SLIT("-0e+00");
	}
	return _SLIT("0e+00");
}

VV_LOCAL_SYMBOL u32 strconv__mul_shift_32(u32 m, u64 mul, int ishift) {
	multi_return_u64_u64 mr_750 = math__bits__mul_64(((u64)(m)), mul);
	u64 hi = mr_750.arg0;
	u64 lo = mr_750.arg1;
	u64 shifted_sum = (u64)(((lo >> ((u64)(ishift)))) + ((hi << ((u64)((int)(64 - ishift))))));
	;
	return ((u32)(shifted_sum));
}

VV_LOCAL_SYMBOL u32 strconv__mul_pow5_invdiv_pow2(u32 m, u32 q, int j) {
	return strconv__mul_shift_32(m, _const_strconv__pow5_inv_split_32[v_fixed_index(q, 31)], j);
}

VV_LOCAL_SYMBOL u32 strconv__mul_pow5_div_pow2(u32 m, u32 i, int j) {
	return strconv__mul_shift_32(m, _const_strconv__pow5_split_32[v_fixed_index(i, 47)], j);
}

VV_LOCAL_SYMBOL u32 strconv__pow5_factor_32(u32 i_v) {
	u32 v = i_v;
	for (u32 n = ((u32)(0U)); true; n++) {
		u32 q = (u32)(v / 5U);
		u32 r = (u32)(v % 5U);
		if (r != 0U) {
			return n;
		}
		v = q;
	}
	return v;
}

VV_LOCAL_SYMBOL bool strconv__multiple_of_power_of_five_32(u32 v, u32 p) {
	return strconv__pow5_factor_32(v) >= p;
}

VV_LOCAL_SYMBOL bool strconv__multiple_of_power_of_two_32(u32 v, u32 p) {
	return ((u32)(math__bits__trailing_zeros_32(v))) >= p;
}

VV_LOCAL_SYMBOL u32 strconv__log10_pow2(int e) {
	;
	;
	return (((u32)(((u32)(e)) * 78913U)) >> 18U);
}

VV_LOCAL_SYMBOL u32 strconv__log10_pow5(int e) {
	;
	;
	return (((u32)(((u32)(e)) * 732923U)) >> 20U);
}

VV_LOCAL_SYMBOL int strconv__pow5_bits(int e) {
	;
	;
	return ((int)((u32)(((((u32)(((u32)(e)) * 1217359U)) >> 19U)) + 1U)));
}

VV_LOCAL_SYMBOL u64 strconv__shift_right_128(strconv__Uint128 v, int shift) {
	;
	return (((v.hi << ((u64)((int)(64 - shift))))) | ((v.lo >> ((u32)(shift)))));
}

VV_LOCAL_SYMBOL u64 strconv__mul_shift_64(u64 m, strconv__Uint128 mul, int shift) {
	multi_return_u64_u64 mr_3069 = math__bits__mul_64(m, mul.hi);
	u64 hihi = mr_3069.arg0;
	u64 hilo = mr_3069.arg1;
	multi_return_u64_u64 mr_3104 = math__bits__mul_64(m, mul.lo);
	u64 lohi = mr_3104.arg0;
	strconv__Uint128 sum = ((strconv__Uint128){.lo = (u64)(lohi + hilo),.hi = hihi,});
	if (sum.lo < lohi) {
		sum.hi++;
	}
	return strconv__shift_right_128(sum, (int)(shift - 64));
}

VV_LOCAL_SYMBOL u32 strconv__pow5_factor_64(u64 v_i) {
	u64 v = v_i;
	for (u32 n = ((u32)(0U)); true; n++) {
		u64 q = (u64)(v / 5U);
		u64 r = (u64)(v % 5U);
		if (r != 0U) {
			return n;
		}
		v = q;
	}
	return ((u32)(0U));
}

VV_LOCAL_SYMBOL bool strconv__multiple_of_power_of_five_64(u64 v, u32 p) {
	return strconv__pow5_factor_64(v) >= p;
}

VV_LOCAL_SYMBOL bool strconv__multiple_of_power_of_two_64(u64 v, u32 p) {
	return ((u32)(math__bits__trailing_zeros_64(v))) >= p;
}

int strconv__dec_digits(u64 n) {
	if (n <= 9999999999U) {
		if (n <= 99999U) {
			if (n <= 99U) {
				if (n <= 9U) {
					return 1;
				} else {
					return 2;
				}
			} else {
				if (n <= 999U) {
					return 3;
				} else {
					if (n <= 9999U) {
						return 4;
					} else {
						return 5;
					}
				}
			}
		} else {
			if (n <= 9999999U) {
				if (n <= 999999U) {
					return 6;
				} else {
					return 7;
				}
			} else {
				if (n <= 99999999U) {
					return 8;
				} else {
					if (n <= 999999999U) {
						return 9;
					}
					return 10;
				}
			}
		}
	} else {
		if (n <= 999999999999999U) {
			if (n <= 999999999999U) {
				if (n <= 99999999999U) {
					return 11;
				} else {
					return 12;
				}
			} else {
				if (n <= 9999999999999U) {
					return 13;
				} else {
					if (n <= 99999999999999U) {
						return 14;
					} else {
						return 15;
					}
				}
			}
		} else {
			if (n <= 99999999999999999U) {
				if (n <= 9999999999999999U) {
					return 16;
				} else {
					return 17;
				}
			} else {
				if (n <= 999999999999999999U) {
					return 18;
				} else {
					if (n <= 9999999999999999999U) {
						return 19;
					}
					return 20;
				}
			}
		}
	}
	return 0;
}

// Attr: [unsafe]
void strconv__v_printf(string str, Array_voidptr pt) {
	print(strconv__v_sprintf(str, pt));
}

// Attr: [direct_array_access]
// Attr: [manualfree]
// Attr: [unsafe]
string strconv__v_sprintf(string str, Array_voidptr pt) {
	bool strconv__v_sprintf_defer_0 = false;
	strings__Builder res;
	res = strings__new_builder((int)(pt.len * 16));
	strconv__v_sprintf_defer_0 = true;
	int i = 0;
	int p_index = 0;
	bool sign = false;
	strconv__Align_text align = strconv__Align_text__right;
	int len0 = -1;
	int len1 = -1;
	int def_len1 = 6;
	u8 pad_ch = ((u8)(' '));
	rune ch1 = '0';
	rune ch2 = '0';
	strconv__Char_parse_state status = strconv__Char_parse_state__norm_char;
	for (;;) {
		if (!(i < str.len)) break;
		if (status == strconv__Char_parse_state__reset_params) {
			sign = false;
			align = strconv__Align_text__right;
			len0 = -1;
			len1 = -1;
			pad_ch = ' ';
			status = strconv__Char_parse_state__norm_char;
			ch1 = '0';
			ch2 = '0';
			continue;
		}
		u8 ch = str.str[ i];
		if (ch != '%' && status == strconv__Char_parse_state__norm_char) {
			strings__Builder_write_u8(&res, ch);
			i++;
			continue;
		}
		if (ch == '%' && status == strconv__Char_parse_state__field_char) {
			status = strconv__Char_parse_state__norm_char;
			strings__Builder_write_u8(&res, ch);
			i++;
			continue;
		}
		if (ch == '%' && status == strconv__Char_parse_state__norm_char) {
			status = strconv__Char_parse_state__field_char;
			i++;
			continue;
		}
		if (ch == 'c' && status == strconv__Char_parse_state__field_char) {
			strconv__v_sprintf_panic(p_index, pt.len);
			u8 d1 = *(((u8*)(((voidptr*)pt.data)[p_index])));
			strings__Builder_write_u8(&res, d1);
			status = strconv__Char_parse_state__reset_params;
			p_index++;
			i++;
			continue;
		}
		if (ch == 'p' && status == strconv__Char_parse_state__field_char) {
			strconv__v_sprintf_panic(p_index, pt.len);
			strings__Builder_write_string(&res, _SLIT("0x"));
			strings__Builder_write_string(&res, ptr_str(((voidptr*)pt.data)[p_index]));
			status = strconv__Char_parse_state__reset_params;
			p_index++;
			i++;
			continue;
		}
		if (status == strconv__Char_parse_state__field_char) {
			rune fc_ch1 = '0';
			rune fc_ch2 = '0';
			if (((int)(i + 1)) < str.len) {
				fc_ch1 = str.str[ (int)(i + 1)];
				if (((int)(i + 2)) < str.len) {
					fc_ch2 = str.str[ (int)(i + 2)];
				}
			}
			if (ch == '+') {
				sign = true;
				i++;
				continue;
			} else if (ch == '-') {
				align = strconv__Align_text__left;
				i++;
				continue;
			} else if (ch == '0' || ch == ' ') {
				if (align == strconv__Align_text__right) {
					pad_ch = ch;
				}
				i++;
				continue;
			} else if (ch == '\'') {
				i++;
				continue;
			} else if (ch == '.' && fc_ch1 >= '1' && fc_ch1 <= '9') {
				status = strconv__Char_parse_state__check_float;
				i++;
				continue;
			} else if (ch == '.' && fc_ch1 == '*' && fc_ch2 == 's') {
				strconv__v_sprintf_panic(p_index, pt.len);
				int len = *(((int*)(((voidptr*)pt.data)[p_index])));
				p_index++;
				strconv__v_sprintf_panic(p_index, pt.len);
				string s = *(((string*)(((voidptr*)pt.data)[p_index])));
				s = string_substr(s, 0, len);
				p_index++;
				strings__Builder_write_string(&res, s);
				status = strconv__Char_parse_state__reset_params;
				i += 3;
				continue;
			}
			status = strconv__Char_parse_state__len_set_start;
			continue;
		}
		if (status == strconv__Char_parse_state__len_set_start) {
			if (ch >= '1' && ch <= '9') {
				len0 = ((int)((rune)(ch - '0')));
				status = strconv__Char_parse_state__len_set_in;
				i++;
				continue;
			}
			if (ch == '.') {
				status = strconv__Char_parse_state__check_float;
				i++;
				continue;
			}
			status = strconv__Char_parse_state__check_type;
			continue;
		}
		if (status == strconv__Char_parse_state__len_set_in) {
			if (ch >= '0' && ch <= '9') {
				len0 *= 10;
				len0 += ((int)((rune)(ch - '0')));
				i++;
				continue;
			}
			if (ch == '.') {
				status = strconv__Char_parse_state__check_float;
				i++;
				continue;
			}
			status = strconv__Char_parse_state__check_type;
			continue;
		}
		if (status == strconv__Char_parse_state__check_float) {
			if (ch >= '0' && ch <= '9') {
				len1 = ((int)((rune)(ch - '0')));
				status = strconv__Char_parse_state__check_float_in;
				i++;
				continue;
			}
			status = strconv__Char_parse_state__check_type;
			continue;
		}
		if (status == strconv__Char_parse_state__check_float_in) {
			if (ch >= '0' && ch <= '9') {
				len1 *= 10;
				len1 += ((int)((rune)(ch - '0')));
				i++;
				continue;
			}
			status = strconv__Char_parse_state__check_type;
			continue;
		}
		if (status == strconv__Char_parse_state__check_type) {
			if (ch == 'l') {
				if (ch1 == '0') {
					ch1 = 'l';
					i++;
					continue;
				} else {
					ch2 = 'l';
					i++;
					continue;
				}
			} else if (ch == 'h') {
				if (ch1 == '0') {
					ch1 = 'h';
					i++;
					continue;
				} else {
					ch2 = 'h';
					i++;
					continue;
				}
			} else if (ch == 'd' || ch == 'i') {
				u64 d1 = ((u64)(0U));
				bool positive = true;

				if (ch1 == ('h')) {
					if (ch2 == 'h') {
						strconv__v_sprintf_panic(p_index, pt.len);
						i8 x = *(((i8*)(((voidptr*)pt.data)[p_index])));
						positive = (x >= 0 ? (true) : (false));
						d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
					} else {
						i16 x = *(((i16*)(((voidptr*)pt.data)[p_index])));
						positive = (x >= 0 ? (true) : (false));
						d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
					}
				}
				else if (ch1 == ('l')) {
					strconv__v_sprintf_panic(p_index, pt.len);
					i64 x = *(((i64*)(((voidptr*)pt.data)[p_index])));
					positive = (x >= 0 ? (true) : (false));
					d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
				}
				else {
					strconv__v_sprintf_panic(p_index, pt.len);
					int x = *(((int*)(((voidptr*)pt.data)[p_index])));
					positive = (x >= 0 ? (true) : (false));
					d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
				}
				string tmp = strconv__format_dec_old(d1, ((strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = positive,
					.sign_flag = sign,
					.align = align,
					.allign = strconv__Align_text__right,
					.rm_tail_zero = 0,
				}));
				strings__Builder_write_string(&res, tmp);
				string_free(&tmp);
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				ch1 = '0';
				ch2 = '0';
				continue;
			} else if (ch == 'u') {
				u64 d1 = ((u64)(0U));
				bool positive = true;
				strconv__v_sprintf_panic(p_index, pt.len);

				if (ch1 == ('h')) {
					if (ch2 == 'h') {
						d1 = ((u64)(*(((u8*)(((voidptr*)pt.data)[p_index])))));
					} else {
						d1 = ((u64)(*(((u16*)(((voidptr*)pt.data)[p_index])))));
					}
				}
				else if (ch1 == ('l')) {
					d1 = ((u64)(*(((u64*)(((voidptr*)pt.data)[p_index])))));
				}
				else {
					d1 = ((u64)(*(((u32*)(((voidptr*)pt.data)[p_index])))));
				}
				string tmp = strconv__format_dec_old(d1, ((strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = positive,
					.sign_flag = sign,
					.align = align,
					.allign = strconv__Align_text__right,
					.rm_tail_zero = 0,
				}));
				strings__Builder_write_string(&res, tmp);
				string_free(&tmp);
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				continue;
			} else if (ch == 'x' || ch == 'X') {
				strconv__v_sprintf_panic(p_index, pt.len);
				string s = _SLIT("");

				if (ch1 == ('h')) {
					if (ch2 == 'h') {
						i8 x = *(((i8*)(((voidptr*)pt.data)[p_index])));
						s = i8_hex(x);
					} else {
						i16 x = *(((i16*)(((voidptr*)pt.data)[p_index])));
						s = i16_hex(x);
					}
				}
				else if (ch1 == ('l')) {
					i64 x = *(((i64*)(((voidptr*)pt.data)[p_index])));
					s = i64_hex(x);
				}
				else {
					int x = *(((int*)(((voidptr*)pt.data)[p_index])));
					s = int_hex(x);
				}
				if (ch == 'X') {
					string tmp = s;
					s = string_to_upper(s);
					string_free(&tmp);
				}
				string tmp = strconv__format_str(s, ((strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = true,
					.sign_flag = false,
					.align = align,
					.allign = strconv__Align_text__right,
					.rm_tail_zero = 0,
				}));
				strings__Builder_write_string(&res, tmp);
				string_free(&tmp);
				string_free(&s);
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				continue;
			}
			if (ch == 'f' || ch == 'F') {
				#if !defined(CUSTOM_DEFINE_nofloat)
				{
					strconv__v_sprintf_panic(p_index, pt.len);
					f64 x = *(((f64*)(((voidptr*)pt.data)[p_index])));
					bool positive = x >= ((f64)(0.0));
					len1 = (len1 >= 0 ? (len1) : (def_len1));
					string s = strconv__format_fl_old(((f64)(x)), ((strconv__BF_param){
						.pad_ch = pad_ch,
						.len0 = len0,
						.len1 = len1,
						.positive = positive,
						.sign_flag = sign,
						.align = align,
						.allign = strconv__Align_text__right,
						.rm_tail_zero = 0,
					}));
					if (ch == 'F') {
						string tmp = string_to_upper(s);
						strings__Builder_write_string(&res, tmp);
						string_free(&tmp);
					} else {
						strings__Builder_write_string(&res, s);
					}
					string_free(&s);
				}
				#endif
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				continue;
			} else if (ch == 'e' || ch == 'E') {
				#if !defined(CUSTOM_DEFINE_nofloat)
				{
					strconv__v_sprintf_panic(p_index, pt.len);
					f64 x = *(((f64*)(((voidptr*)pt.data)[p_index])));
					bool positive = x >= ((f64)(0.0));
					len1 = (len1 >= 0 ? (len1) : (def_len1));
					string s = strconv__format_es_old(((f64)(x)), ((strconv__BF_param){
						.pad_ch = pad_ch,
						.len0 = len0,
						.len1 = len1,
						.positive = positive,
						.sign_flag = sign,
						.align = align,
						.allign = strconv__Align_text__right,
						.rm_tail_zero = 0,
					}));
					if (ch == 'E') {
						string tmp = string_to_upper(s);
						strings__Builder_write_string(&res, tmp);
						string_free(&tmp);
					} else {
						strings__Builder_write_string(&res, s);
					}
					string_free(&s);
				}
				#endif
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				continue;
			} else if (ch == 'g' || ch == 'G') {
				#if !defined(CUSTOM_DEFINE_nofloat)
				{
					strconv__v_sprintf_panic(p_index, pt.len);
					f64 x = *(((f64*)(((voidptr*)pt.data)[p_index])));
					bool positive = x >= ((f64)(0.0));
					string s = _SLIT("");
					f64 tx = strconv__fabs(x);
					if (tx < ((f64)(999999.0)) && tx >= ((f64)(0.00001))) {
						len1 = (len1 >= 0 ? ((int)(len1 + 1)) : (def_len1));
						string tmp = s;
						s = strconv__format_fl_old(x, ((strconv__BF_param){
							.pad_ch = pad_ch,
							.len0 = len0,
							.len1 = len1,
							.positive = positive,
							.sign_flag = sign,
							.align = align,
							.allign = strconv__Align_text__right,
							.rm_tail_zero = true,
						}));
						string_free(&tmp);
					} else {
						len1 = (len1 >= 0 ? ((int)(len1 + 1)) : (def_len1));
						string tmp = s;
						s = strconv__format_es_old(x, ((strconv__BF_param){
							.pad_ch = pad_ch,
							.len0 = len0,
							.len1 = len1,
							.positive = positive,
							.sign_flag = sign,
							.align = align,
							.allign = strconv__Align_text__right,
							.rm_tail_zero = true,
						}));
						string_free(&tmp);
					}
					if (ch == 'G') {
						string tmp = string_to_upper(s);
						strings__Builder_write_string(&res, tmp);
						string_free(&tmp);
					} else {
						strings__Builder_write_string(&res, s);
					}
					string_free(&s);
				}
				#endif
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				continue;
			} else if (ch == 's') {
				strconv__v_sprintf_panic(p_index, pt.len);
				string s1 = *(((string*)(((voidptr*)pt.data)[p_index])));
				pad_ch = ' ';
				string tmp = strconv__format_str(s1, ((strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = true,
					.sign_flag = false,
					.align = align,
					.allign = strconv__Align_text__right,
					.rm_tail_zero = 0,
				}));
				strings__Builder_write_string(&res, tmp);
				string_free(&tmp);
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				continue;
			}
		}
		status = strconv__Char_parse_state__reset_params;
		p_index++;
		i++;
	}
	if (p_index != pt.len) {
		_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, /*100 &int*/0xfe07, {.d_i32 = p_index}}, {_SLIT(" % conversion specifiers, but given "), /*100 &int*/0xfe07, {.d_i32 = pt.len}}, {_SLIT(" args"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	string _t4 = strings__Builder_str(&res);
		// Defer begin
		if (strconv__v_sprintf_defer_0) {
			strings__Builder_free(&res);
		}
		// Defer end
	return _t4;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL void strconv__v_sprintf_panic(int idx, int len) {
	if (idx >= len) {
		_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, /*100 &int*/0xfe07, {.d_i32 = (int)(idx + 1)}}, {_SLIT(" % conversion specifiers, but given only "), /*100 &int*/0xfe07, {.d_i32 = len}}, {_SLIT(" args"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
}

VV_LOCAL_SYMBOL f64 strconv__fabs(f64 x) {
	if (x < ((f64)(0.0))) {
		return -x;
	}
	return x;
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string strconv__format_fl_old(f64 f, strconv__BF_param p) {
	bool strconv__format_fl_old_defer_0 = false;
	strings__Builder res;
	{ // Unsafe block
		string s = _SLIT("");
		string fs = strconv__f64_to_str_lnd1((f >= ((f64)(0.0)) ? (f) : (-f)), p.len1);
		if (fs.str[ 0] == '[') {
			string_free(&s);
			return fs;
		}
		if (p.rm_tail_zero) {
			string tmp = fs;
			fs = strconv__remove_tail_zeros_old(fs);
			string_free(&tmp);
		}
		res = strings__new_builder((p.len0 > fs.len ? (p.len0) : (fs.len)));
		strconv__format_fl_old_defer_0 = true;
		int sign_len_diff = 0;
		if (p.pad_ch == '0') {
			if (p.positive) {
				if (p.sign_flag) {
					strings__Builder_write_u8(&res, '+');
					sign_len_diff = -1;
				}
			} else {
				strings__Builder_write_u8(&res, '-');
				sign_len_diff = -1;
			}
			string tmp = s;
			s = string_clone(fs);
			string_free(&tmp);
		} else {
			if (p.positive) {
				if (p.sign_flag) {
					string tmp = s;
					s = string__plus(_SLIT("+"), fs);
					string_free(&tmp);
				} else {
					string tmp = s;
					s = string_clone(fs);
					string_free(&tmp);
				}
			} else {
				string tmp = s;
				s = string__plus(_SLIT("-"), fs);
				string_free(&tmp);
			}
		}
		int dif = (int)((int)(p.len0 - s.len) + sign_len_diff);
		if (p.align == strconv__Align_text__right) {
			for (int i1 = 0; i1 < dif; i1++) {
				strings__Builder_write_u8(&res, p.pad_ch);
			}
		}
		strings__Builder_write_string(&res, s);
		if (p.align == strconv__Align_text__left) {
			for (int i1 = 0; i1 < dif; i1++) {
				strings__Builder_write_u8(&res, p.pad_ch);
			}
		}
		string_free(&s);
		string_free(&fs);
		string _t2 = strings__Builder_str(&res);
			// Defer begin
			if (strconv__format_fl_old_defer_0) {
				strings__Builder_free(&res);
			}
			// Defer end
		return _t2;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [manualfree]
VV_LOCAL_SYMBOL string strconv__format_es_old(f64 f, strconv__BF_param p) {
	bool strconv__format_es_old_defer_0 = false;
	strings__Builder res;
	string fs;
	string s;
	{ // Unsafe block
		s = _SLIT("");
		fs = strconv__f64_to_str_pad((f > 0 ? (f) : (-f)), p.len1);
		if (p.rm_tail_zero) {
			string tmp = fs;
			fs = strconv__remove_tail_zeros_old(fs);
			string_free(&tmp);
		}
		res = strings__new_builder((p.len0 > fs.len ? (p.len0) : (fs.len)));
		strconv__format_es_old_defer_0 = true;
		int sign_len_diff = 0;
		if (p.pad_ch == '0') {
			if (p.positive) {
				if (p.sign_flag) {
					strings__Builder_write_u8(&res, '+');
					sign_len_diff = -1;
				}
			} else {
				strings__Builder_write_u8(&res, '-');
				sign_len_diff = -1;
			}
			string tmp = s;
			s = string_clone(fs);
			string_free(&tmp);
		} else {
			if (p.positive) {
				if (p.sign_flag) {
					string tmp = s;
					s = string__plus(_SLIT("+"), fs);
					string_free(&tmp);
				} else {
					string tmp = s;
					s = string_clone(fs);
					string_free(&tmp);
				}
			} else {
				string tmp = s;
				s = string__plus(_SLIT("-"), fs);
				string_free(&tmp);
			}
		}
		int dif = (int)((int)(p.len0 - s.len) + sign_len_diff);
		if (p.align == strconv__Align_text__right) {
			for (int i1 = 0; i1 < dif; i1++) {
				strings__Builder_write_u8(&res, p.pad_ch);
			}
		}
		strings__Builder_write_string(&res, s);
		if (p.align == strconv__Align_text__left) {
			for (int i1 = 0; i1 < dif; i1++) {
				strings__Builder_write_u8(&res, p.pad_ch);
			}
		}
		string _t1 = strings__Builder_str(&res);
			// Defer begin
			if (strconv__format_es_old_defer_0) {
				strings__Builder_free(&res);
				string_free(&fs);
				string_free(&s);
			}
			// Defer end
		return _t1;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

VV_LOCAL_SYMBOL string strconv__remove_tail_zeros_old(string s) {
	int i = 0;
	int last_zero_start = -1;
	int dot_pos = -1;
	bool in_decimal = false;
	u8 prev_ch = ((u8)(0));
	for (;;) {
		if (!(i < s.len)) break;
		u8 ch = s.str[i];
		if (ch == '.') {
			in_decimal = true;
			dot_pos = i;
		} else if (in_decimal) {
			if (ch == '0' && prev_ch != '0') {
				last_zero_start = i;
			} else if (ch >= '1' && ch <= '9') {
				last_zero_start = -1;
			} else if (ch == 'e') {
				break;
			}
		}
		prev_ch = ch;
		i++;
	}
	string tmp = _SLIT("");
	if (last_zero_start > 0) {
		if (last_zero_start == (int)(dot_pos + 1)) {
			tmp = string__plus(string_substr(s, 0, dot_pos), string_substr(s, i, 2147483647));
		} else {
			tmp = string__plus(string_substr(s, 0, last_zero_start), string_substr(s, i, 2147483647));
		}
	} else {
		tmp = string_clone(s);
	}
	if (tmp.str[(int)(tmp.len - 1)] == '.') {
		return string_substr(tmp, 0, (int)(tmp.len - 1));
	}
	return tmp;
}

// Attr: [manualfree]
string strconv__format_dec_old(u64 d, strconv__BF_param p) {
	bool strconv__format_dec_old_defer_0 = false;
	strings__Builder res;
	string s;
	s = _SLIT("");
	res = strings__new_builder(20);
	strconv__format_dec_old_defer_0 = true;
	int sign_len_diff = 0;
	if (p.pad_ch == '0') {
		if (p.positive) {
			if (p.sign_flag) {
				strings__Builder_write_u8(&res, '+');
				sign_len_diff = -1;
			}
		} else {
			strings__Builder_write_u8(&res, '-');
			sign_len_diff = -1;
		}
		string tmp = s;
		s = u64_str(d);
		string_free(&tmp);
	} else {
		if (p.positive) {
			if (p.sign_flag) {
				string tmp = s;
				s = string__plus(_SLIT("+"), u64_str(d));
				string_free(&tmp);
			} else {
				string tmp = s;
				s = u64_str(d);
				string_free(&tmp);
			}
		} else {
			string tmp = s;
			s = string__plus(_SLIT("-"), u64_str(d));
			string_free(&tmp);
		}
	}
	int dif = (int)((int)(p.len0 - s.len) + sign_len_diff);
	if (p.align == strconv__Align_text__right) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(&res, p.pad_ch);
		}
	}
	strings__Builder_write_string(&res, s);
	if (p.align == strconv__Align_text__left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(&res, p.pad_ch);
		}
	}
	string _t1 = strings__Builder_str(&res);
		// Defer begin
		if (strconv__format_dec_old_defer_0) {
			strings__Builder_free(&res);
			string_free(&s);
		}
		// Defer end
	return _t1;
}

VV_LOCAL_SYMBOL array __new_array(int mylen, int cap, int elm_size) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = vcalloc((u64)(((u64)(cap_)) * ((u64)(elm_size)))),.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	return arr;
}

VV_LOCAL_SYMBOL array __new_array_with_default(int mylen, int cap, int elm_size, voidptr val) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = 0,.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	u64 total_size = (u64)(((u64)(cap_)) * ((u64)(elm_size)));
	if (cap_ > 0 && mylen == 0) {
		arr.data = _v_malloc(__at_least_one(total_size));
	} else {
		arr.data = vcalloc(total_size);
	}
	if (val != 0) {
		u8* eptr = ((u8*)(arr.data));
		{ // Unsafe block
			if (eptr != ((void*)0)) {
				if (arr.element_size == 1) {
					u8 byte_value = *(((u8*)(val)));
					for (int i = 0; i < arr.len; ++i) {
						eptr[i] = byte_value;
					}
				} else {
					for (int _t1 = 0; _t1 < arr.len; ++_t1) {
						vmemcpy(eptr, val, arr.element_size);
						eptr += arr.element_size;
					}
				}
			}
		}
	}
	return arr;
}

VV_LOCAL_SYMBOL array __new_array_with_multi_default(int mylen, int cap, int elm_size, voidptr val) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = 0,.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	u64 total_size = (u64)(((u64)(cap_)) * ((u64)(elm_size)));
	arr.data = vcalloc(__at_least_one(total_size));
	if (val != 0) {
		u8* eptr = ((u8*)(arr.data));
		{ // Unsafe block
			if (eptr != ((void*)0)) {
				for (int i = 0; i < arr.len; ++i) {
					vmemcpy(eptr, ((charptr)(val)) + (int)(i * arr.element_size), arr.element_size);
					eptr += arr.element_size;
				}
			}
		}
	}
	return arr;
}

VV_LOCAL_SYMBOL array __new_array_with_array_default(int mylen, int cap, int elm_size, array val, int depth) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = _v_malloc(__at_least_one((u64)(((u64)(cap_)) * ((u64)(elm_size))))),.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	u8* eptr = ((u8*)(arr.data));
	{ // Unsafe block
		if (eptr != ((void*)0)) {
			for (int _t1 = 0; _t1 < arr.len; ++_t1) {
				array val_clone = array_clone_to_depth(&val, depth);
				vmemcpy(eptr, &val_clone, arr.element_size);
				eptr += arr.element_size;
			}
		}
	}
	return arr;
}

VV_LOCAL_SYMBOL array __new_array_with_map_default(int mylen, int cap, int elm_size, map val) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = _v_malloc(__at_least_one((u64)(((u64)(cap_)) * ((u64)(elm_size))))),.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	u8* eptr = ((u8*)(arr.data));
	{ // Unsafe block
		if (eptr != ((void*)0)) {
			for (int _t1 = 0; _t1 < arr.len; ++_t1) {
				map val_clone = map_clone(&val);
				vmemcpy(eptr, &val_clone, arr.element_size);
				eptr += arr.element_size;
			}
		}
	}
	return arr;
}

VV_LOCAL_SYMBOL array new_array_from_c_array(int len, int cap, int elm_size, voidptr c_array) {
	int cap_ = (cap < len ? (len) : (cap));
	array arr = ((array){.data = vcalloc((u64)(((u64)(cap_)) * ((u64)(elm_size)))),.offset = 0,.len = len,.cap = cap_,.flags = 0,.element_size = elm_size,});
	vmemcpy(arr.data, c_array, (u64)(((u64)(len)) * ((u64)(elm_size))));
	return arr;
}

VV_LOCAL_SYMBOL array new_array_from_c_array_no_alloc(int len, int cap, int elm_size, voidptr c_array) {
	array arr = ((array){.data = c_array,.offset = 0,.len = len,.cap = cap,.flags = 0,.element_size = elm_size,});
	return arr;
}

VV_LOCAL_SYMBOL void array_ensure_cap(array* a, int required) {
	if (required <= a->cap) {
		return;
	}
	if (ArrayFlags_has(&a->flags, ArrayFlags__nogrow)) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("array.ensure_cap: array with the flag `.nogrow` cannot grow in size, array required new size: "), /*100 &int*/0xfe07, {.d_i32 = required}}, {_SLIT0, 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	int cap = (a->cap > 0 ? (a->cap) : (2));
	for (;;) {
		if (!(required > cap)) break;
		cap *= 2;
	}
	u64 new_size = (u64)(((u64)(cap)) * ((u64)(a->element_size)));
	u8* new_data = _v_malloc(__at_least_one(new_size));
	if (a->data != ((void*)0)) {
		vmemcpy(new_data, a->data, (u64)(((u64)(a->len)) * ((u64)(a->element_size))));
		if (ArrayFlags_has(&a->flags, ArrayFlags__noslices)) {
			_v_free(a->data);
		}
	}
	a->data = new_data;
	a->offset = 0;
	a->cap = cap;
}

array array_repeat(array a, int count) {
	return array_repeat_to_depth(a, count, 0);
}

// Attr: [direct_array_access]
// Attr: [unsafe]
array array_repeat_to_depth(array a, int count, int depth) {
	if (count < 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("array.repeat: count is negative: "), /*100 &int*/0xfe07, {.d_i32 = count}}, {_SLIT0, 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	u64 size = (u64)((u64)(((u64)(count)) * ((u64)(a.len))) * ((u64)(a.element_size)));
	if (size == 0U) {
		size = ((u64)(a.element_size));
	}
	array arr = ((array){.data = vcalloc(size),.offset = 0,.len = (int)(count * a.len),.cap = (int)(count * a.len),.flags = 0,.element_size = a.element_size,});
	if (a.len > 0) {
		u64 a_total_size = (u64)(((u64)(a.len)) * ((u64)(a.element_size)));
		u64 arr_step_size = (u64)(((u64)(a.len)) * ((u64)(arr.element_size)));
		u8* eptr = ((u8*)(arr.data));
		{ // Unsafe block
			if (eptr != ((void*)0)) {
				for (int _t1 = 0; _t1 < count; ++_t1) {
					if (depth > 0) {
						array ary_clone = array_clone_to_depth(&a, depth);
						vmemcpy(eptr, ((u8*)(ary_clone.data)), a_total_size);
					} else {
						vmemcpy(eptr, ((u8*)(a.data)), a_total_size);
					}
					eptr += arr_step_size;
				}
			}
		}
	}
	return arr;
}

void array_insert(array* a, int i, voidptr val) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i > a->len) {
			_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT("array.insert: index out of range (i == "), /*100 &int*/0xfe07, {.d_i32 = i}}, {_SLIT(", a.len == "), /*100 &int*/0xfe07, {.d_i32 = a->len}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	#endif
	if (a->len >= a->cap) {
		array_ensure_cap(a, (int)(a->len + 1));
	}
	{ // Unsafe block
		vmemmove(array_get_unsafe(/*rec*/*a, (int)(i + 1)), array_get_unsafe(/*rec*/*a, i), (u64)(((u64)(((int)(a->len - i)))) * ((u64)(a->element_size))));
		array_set_unsafe(a, i, val);
	}
	a->len++;
}

// Attr: [unsafe]
VV_LOCAL_SYMBOL void array_insert_many(array* a, int i, voidptr val, int size) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i > a->len) {
			_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT("array.insert_many: index out of range (i == "), /*100 &int*/0xfe07, {.d_i32 = i}}, {_SLIT(", a.len == "), /*100 &int*/0xfe07, {.d_i32 = a->len}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	#endif
	array_ensure_cap(a, (int)(a->len + size));
	int elem_size = a->element_size;
	{ // Unsafe block
		voidptr iptr = array_get_unsafe(/*rec*/*a, i);
		vmemmove(array_get_unsafe(/*rec*/*a, (int)(i + size)), iptr, (u64)(((u64)((int)(a->len - i))) * ((u64)(elem_size))));
		vmemcpy(iptr, val, (u64)(((u64)(size)) * ((u64)(elem_size))));
	}
	a->len += size;
}

void array_prepend(array* a, voidptr val) {
	array_insert(a, 0, val);
}

// Attr: [unsafe]
VV_LOCAL_SYMBOL void array_prepend_many(array* a, voidptr val, int size) {
	array_insert_many(a, 0, val, size);
}

void array_delete(array* a, int i) {
	array_delete_many(a, i, 1);
}

void array_delete_many(array* a, int i, int size) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || (int)(i + size) > a->len) {
			string endidx = (size > 1 ? ( str_intp(2, _MOV((StrIntpData[]){{_SLIT(".."), /*100 &int*/0xfe07, {.d_i32 = (int)(i + size)}}, {_SLIT0, 0, { .d_c = 0 }}}))) : (_SLIT("")));
			_v_panic( str_intp(4, _MOV((StrIntpData[]){{_SLIT("array.delete: index out of range (i == "), /*100 &int*/0xfe07, {.d_i32 = i}}, {_SLIT0, /*115 &string*/0xfe10, {.d_s = endidx}}, {_SLIT(", a.len == "), /*100 &int*/0xfe07, {.d_i32 = a->len}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	#endif
	if (ArrayFlags_all(&a->flags, (ArrayFlags__noshrink | ArrayFlags__noslices))) {
		vmemmove(((u8*)(a->data)) + (u64)(((u64)(i)) * ((u64)(a->element_size))), ((u8*)(a->data)) + (u64)(((u64)((int)(i + size))) * ((u64)(a->element_size))), (u64)(((u64)((int)((int)(a->len - i) - size))) * ((u64)(a->element_size))));
		a->len -= size;
		return;
	}
	voidptr old_data = a->data;
	int new_size = (int)(a->len - size);
	int new_cap = (new_size == 0 ? (1) : (new_size));
	a->data = vcalloc((u64)(((u64)(new_cap)) * ((u64)(a->element_size))));
	vmemcpy(a->data, old_data, (u64)(((u64)(i)) * ((u64)(a->element_size))));
	vmemcpy(((u8*)(a->data)) + (u64)(((u64)(i)) * ((u64)(a->element_size))), ((u8*)(old_data)) + (u64)(((u64)((int)(i + size))) * ((u64)(a->element_size))), (u64)(((u64)((int)((int)(a->len - i) - size))) * ((u64)(a->element_size))));
	if (ArrayFlags_has(&a->flags, ArrayFlags__noslices)) {
		_v_free(old_data);
	}
	a->len = new_size;
	a->cap = new_cap;
}

void array_clear(array* a) {
	a->len = 0;
}

// Attr: [unsafe]
void array_reset(array* a) {
	vmemset(a->data, 0, (int)(a->len * a->element_size));
}

void array_trim(array* a, int index) {
	if (index < a->len) {
		a->len = index;
	}
}

void array_drop(array* a, int num) {
	if (num <= 0) {
		return;
	}
	int n = (num <= a->len ? (num) : (a->len));
	u64 blen = (u64)(((u64)(n)) * ((u64)(a->element_size)));
	a->data = ((u8*)(a->data)) + blen;
	a->offset += ((int)(blen));
	a->len -= n;
	a->cap -= n;
}

// Attr: [inline]
// Attr: [unsafe]
inline VV_LOCAL_SYMBOL voidptr array_get_unsafe(array a, int i) {
	{ // Unsafe block
		return ((u8*)(a.data)) + (u64)(((u64)(i)) * ((u64)(a.element_size)));
	}
	return 0;
}

VV_LOCAL_SYMBOL voidptr array_get(array a, int i) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= a.len) {
			_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT("array.get: index out of range (i == "), /*100 &int*/0xfe07, {.d_i32 = i}}, {_SLIT(", a.len == "), /*100 &int*/0xfe07, {.d_i32 = a.len}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	#endif
	{ // Unsafe block
		return ((u8*)(a.data)) + (u64)(((u64)(i)) * ((u64)(a.element_size)));
	}
	return 0;
}

VV_LOCAL_SYMBOL voidptr array_get_with_check(array a, int i) {
	if (i < 0 || i >= a.len) {
		return 0;
	}
	{ // Unsafe block
		return ((u8*)(a.data)) + (u64)(((u64)(i)) * ((u64)(a.element_size)));
	}
	return 0;
}

voidptr array_first(array a) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (a.len == 0) {
			_v_panic(_SLIT("array.first: array is empty"));
			VUNREACHABLE();
		}
	}
	#endif
	return a.data;
}

voidptr array_last(array a) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (a.len == 0) {
			_v_panic(_SLIT("array.last: array is empty"));
			VUNREACHABLE();
		}
	}
	#endif
	{ // Unsafe block
		return ((u8*)(a.data)) + (u64)(((u64)((int)(a.len - 1))) * ((u64)(a.element_size)));
	}
	return 0;
}

voidptr array_pop(array* a) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (a->len == 0) {
			_v_panic(_SLIT("array.pop: array is empty"));
			VUNREACHABLE();
		}
	}
	#endif
	int new_len = (int)(a->len - 1);
	u8* last_elem = ((u8*)(a->data)) + (u64)(((u64)(new_len)) * ((u64)(a->element_size)));
	a->len = new_len;
	return last_elem;
}

void array_delete_last(array* a) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (a->len == 0) {
			_v_panic(_SLIT("array.pop: array is empty"));
			VUNREACHABLE();
		}
	}
	#endif
	a->len--;
}

VV_LOCAL_SYMBOL array array_slice(array a, int start, int _end) {
	int end = (_end == _const_max_int ? (a.len) : (_end));
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (start > end) {
			_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT("array.slice: invalid slice index ("), /*100 &int*/0xfe07, {.d_i32 = start}}, {_SLIT(" > "), /*100 &int*/0xfe07, {.d_i32 = end}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
		if (end > a.len) {
			_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT("array.slice: slice bounds out of range ("), /*100 &int*/0xfe07, {.d_i32 = end}}, {_SLIT(" >= "), /*100 &int*/0xfe07, {.d_i32 = a.len}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
		if (start < 0) {
			_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("array.slice: slice bounds out of range ("), /*100 &int*/0xfe07, {.d_i32 = start}}, {_SLIT(" < 0)"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	#endif
	u64 offset = (u64)(((u64)(start)) * ((u64)(a.element_size)));
	u8* data = ((u8*)(a.data)) + offset;
	int l = (int)(end - start);
	array res = ((array){.data = data,.offset = (int)(a.offset + ((int)(offset))),.len = l,.cap = l,.flags = 0,.element_size = a.element_size,});
	return res;
}

VV_LOCAL_SYMBOL array array_slice_ni(array a, int _start, int _end) {
	int end = (_end == _const_max_int ? (a.len) : (_end));
	int start = _start;
	if (start < 0) {
		start = (int)(a.len + start);
		if (start < 0) {
			start = 0;
		}
	}
	if (end < 0) {
		end = (int)(a.len + end);
		if (end < 0) {
			end = 0;
		}
	}
	if (end >= a.len) {
		end = a.len;
	}
	if (start >= a.len || start > end) {
		array res = ((array){.data = a.data,.offset = 0,.len = 0,.cap = 0,.flags = 0,.element_size = a.element_size,});
		return res;
	}
	u64 offset = (u64)(((u64)(start)) * ((u64)(a.element_size)));
	u8* data = ((u8*)(a.data)) + offset;
	int l = (int)(end - start);
	array res = ((array){.data = data,.offset = (int)(a.offset + ((int)(offset))),.len = l,.cap = l,.flags = 0,.element_size = a.element_size,});
	return res;
}

VV_LOCAL_SYMBOL array array_clone_static_to_depth(array a, int depth) {
	return array_clone_to_depth(&a, depth);
}

array array_clone(array* a) {
	return array_clone_to_depth(a, 0);
}

// Attr: [unsafe]
array array_clone_to_depth(array* a, int depth) {
	array arr = ((array){.data = vcalloc((u64)(((u64)(a->cap)) * ((u64)(a->element_size)))),.offset = 0,.len = a->len,.cap = a->cap,.flags = 0,.element_size = a->element_size,});
	if (depth > 0 && _us32_eq(sizeof(array),a->element_size) && a->len >= 0 && a->cap >= a->len) {
		for (int i = 0; i < a->len; ++i) {
			array ar = ((array){.data = 0,.offset = 0,.len = 0,.cap = 0,.flags = 0,.element_size = 0,});
			vmemcpy(&ar, array_get_unsafe(/*rec*/*a, i), ((int)(sizeof(array))));
			array ar_clone = array_clone_to_depth(&ar, (int)(depth - 1));
			array_set_unsafe(&arr, i, &ar_clone);
		}
		return arr;
	} else {
		if (a->data != 0) {
			vmemcpy(((u8*)(arr.data)), a->data, (u64)(((u64)(a->cap)) * ((u64)(a->element_size))));
		}
		return arr;
	}
	return (array){.data = 0,.offset = 0,.len = 0,.cap = 0,.element_size = 0,};
}

// Attr: [inline]
// Attr: [unsafe]
inline VV_LOCAL_SYMBOL void array_set_unsafe(array* a, int i, voidptr val) {
	vmemcpy(((u8*)(a->data)) + (u64)(((u64)(a->element_size)) * ((u64)(i))), val, a->element_size);
}

VV_LOCAL_SYMBOL void array_set(array* a, int i, voidptr val) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= a->len) {
			_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT("array.set: index out of range (i == "), /*100 &int*/0xfe07, {.d_i32 = i}}, {_SLIT(", a.len == "), /*100 &int*/0xfe07, {.d_i32 = a->len}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	#endif
	vmemcpy(((u8*)(a->data)) + (u64)(((u64)(a->element_size)) * ((u64)(i))), val, a->element_size);
}

VV_LOCAL_SYMBOL void array_push(array* a, voidptr val) {
	if (a->len >= a->cap) {
		array_ensure_cap(a, (int)(a->len + 1));
	}
	vmemcpy(((u8*)(a->data)) + (u64)(((u64)(a->element_size)) * ((u64)(a->len))), val, a->element_size);
	a->len++;
}

// Attr: [unsafe]
void array_push_many(array* a3, voidptr val, int size) {
	if (size <= 0 || val == ((void*)0)) {
		return;
	}
	array_ensure_cap(a3, (int)(a3->len + size));
	if (a3->data == val && a3->data != 0) {
		array copy = array_clone(a3);
		vmemcpy(((u8*)(a3->data)) + (u64)(((u64)(a3->element_size)) * ((u64)(a3->len))), copy.data, (u64)(((u64)(a3->element_size)) * ((u64)(size))));
	} else {
		if (a3->data != 0 && val != 0) {
			vmemcpy(((u8*)(a3->data)) + (u64)(((u64)(a3->element_size)) * ((u64)(a3->len))), val, (u64)(((u64)(a3->element_size)) * ((u64)(size))));
		}
	}
	a3->len += size;
}

void array_reverse_in_place(array* a) {
	if (a->len < 2 || a->element_size == 0) {
		return;
	}
	{ // Unsafe block
		u8* tmp_value = _v_malloc(a->element_size);
		for (int i = 0; i < (int)(a->len / 2); ++i) {
			vmemcpy(tmp_value, ((u8*)(a->data)) + (u64)(((u64)(i)) * ((u64)(a->element_size))), a->element_size);
			vmemcpy(((u8*)(a->data)) + (u64)(((u64)(i)) * ((u64)(a->element_size))), ((u8*)(a->data)) + (u64)(((u64)((int)((int)(a->len - 1) - i))) * ((u64)(a->element_size))), a->element_size);
			vmemcpy(((u8*)(a->data)) + (u64)(((u64)((int)((int)(a->len - 1) - i))) * ((u64)(a->element_size))), tmp_value, a->element_size);
		}
		_v_free(tmp_value);
	}
}

array array_reverse(array a) {
	if (a.len < 2) {
		return a;
	}
	array arr = ((array){.data = vcalloc((u64)(((u64)(a.cap)) * ((u64)(a.element_size)))),.offset = 0,.len = a.len,.cap = a.cap,.flags = 0,.element_size = a.element_size,});
	for (int i = 0; i < a.len; ++i) {
		array_set_unsafe(&arr, i, array_get_unsafe(a, (int)((int)(a.len - 1) - i)));
	}
	return arr;
}

// Attr: [unsafe]
void array_free(array* a) {
	if (ArrayFlags_has(&a->flags, ArrayFlags__nofree)) {
		return;
	}
	u8* mblock_ptr = ((u8*)((u64)(((u64)(a->data)) - ((u64)(a->offset)))));
	_v_free(mblock_ptr);
	{ // Unsafe block
		a->data = ((void*)0);
	}
}

array array_filter(array a, bool (*predicate)(voidptr ));

bool array_any(array a, bool (*predicate)(voidptr ));

bool array_all(array a, bool (*predicate)(voidptr ));

array array_map(array a, voidptr (*callback)(voidptr ));

void array_sort(array* a, int (*callback)(voidptr , voidptr ));

array array_sorted(array* a, int (*callback)(voidptr , voidptr ));

void array_sort_with_compare(array* a, int (*callback)(voidptr , voidptr )) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		vqsort(a->data, ((usize)(a->len)), ((usize)(a->element_size)), (voidptr)callback);
	}
	#endif
}

array array_sorted_with_compare(array* a, int (*callback)(voidptr , voidptr )) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		array r = array_clone(a);
		vqsort(r.data, ((usize)(r.len)), ((usize)(r.element_size)), (voidptr)callback);
		return r;
	}
	#endif
	return ((array){.data = 0,.offset = 0,.len = 0,.cap = 0,.flags = 0,.element_size = 0,});
}

bool array_contains(array a, voidptr value);

int array_index(array a, voidptr value);

// Attr: [direct_array_access]
// Attr: [unsafe]
void Array_string_free(Array_string* a) {
	for (int _t1 = 0; _t1 < a->len; ++_t1) {
		string* s = ((string*)a->data) + _t1;
		string_free(s);
	}
	array_free((((array*)(a))));
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string Array_string_str(Array_string a) {
	int sb_len = 4;
	if (a.len > 0) {
		sb_len += ((string*)a.data)[0].len;
		sb_len *= a.len;
	}
	sb_len += 2;
	strings__Builder sb = strings__new_builder(sb_len);
	strings__Builder_write_u8(&sb, '[');
	for (int i = 0; i < a.len; ++i) {
		string val = ((string*)a.data)[i];
		strings__Builder_write_u8(&sb, '\'');
		strings__Builder_write_string(&sb, val);
		strings__Builder_write_u8(&sb, '\'');
		if (i < (int)(a.len - 1)) {
			strings__Builder_write_string(&sb, _SLIT(", "));
		}
	}
	strings__Builder_write_u8(&sb, ']');
	string res = strings__Builder_str(&sb);
	strings__Builder_free(&sb);
	return res;
}

string Array_u8_hex(Array_u8 b) {
	u8* hex = malloc_noscan((u64)((u64)(((u64)(b.len)) * 2U) + 1U));
	int dst_i = 0;
	for (int _t1 = 0; _t1 < b.len; ++_t1) {
		u8 i = ((u8*)b.data)[_t1];
		u8 n0 = (i >> 4);
		{ // Unsafe block
			hex[dst_i] = (n0 < 10 ? ((rune)(n0 + '0')) : ((u8)(n0 + ((u8)(87)))));
			dst_i++;
		}
		u8 n1 = (i & 0xF);
		{ // Unsafe block
			hex[dst_i] = (n1 < 10 ? ((rune)(n1 + '0')) : ((u8)(n1 + ((u8)(87)))));
			dst_i++;
		}
	}
	{ // Unsafe block
		hex[dst_i] = 0;
		return tos(hex, dst_i);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

int copy(Array_u8* dst, Array_u8 src) {
	int min = (dst->len < src.len ? (dst->len) : (src.len));
	if (min > 0) {
		vmemmove(((u8*)(dst->data)), src.data, min);
	}
	return min;
}

void array_grow_cap(array* a, int amount) {
	array_ensure_cap(a, (int)(a->cap + amount));
}

// Attr: [unsafe]
void array_grow_len(array* a, int amount) {
	array_ensure_cap(a, (int)(a->len + amount));
	a->len += amount;
}

// Attr: [unsafe]
Array_voidptr array_pointers(array a) {
	Array_voidptr res = __new_array_with_default(0, 0, sizeof(voidptr), 0);
	for (int i = 0; i < a.len; ++i) {
		array_push((array*)&res, _MOV((voidptr[]){ array_get_unsafe(a, i) }));
	}
	return res;
}

// Attr: [unsafe]
Array_u8 voidptr_vbytes(voidptr data, int len) {
	array res = ((array){.data = data,.offset = 0,.len = len,.cap = len,.flags = 0,.element_size = 1,});
	return res;
}

// Attr: [unsafe]
Array_u8 u8_vbytes(u8* data, int len) {
	return voidptr_vbytes(((voidptr)(data)), len);
}

VV_LOCAL_SYMBOL array __new_array_noscan(int mylen, int cap, int elm_size) {
	return __new_array(mylen, cap, elm_size);
}

VV_LOCAL_SYMBOL array __new_array_with_default_noscan(int mylen, int cap, int elm_size, voidptr val) {
	return __new_array_with_default(mylen, cap, elm_size, val);
}

VV_LOCAL_SYMBOL array __new_array_with_multi_default_noscan(int mylen, int cap, int elm_size, voidptr val) {
	return __new_array_with_multi_default(mylen, cap, elm_size, val);
}

VV_LOCAL_SYMBOL array __new_array_with_array_default_noscan(int mylen, int cap, int elm_size, array val, int depth) {
	return __new_array_with_array_default(mylen, cap, elm_size, val, depth);
}

void print_backtrace(void) {
	#if !defined(CUSTOM_DEFINE_no_backtrace)
	{
		#if defined(_VFREESTANDING)
		{
		}
		#else
		{
			#if defined(_VNATIVE)
			{
			}
			#elif defined(__TINYC__)
			{
			}
			#else
			{
				#if defined(CUSTOM_DEFINE_use_libbacktrace)
				{
				}
				#else
				{
					print_backtrace_skipping_top_frames(2);
				}
				#endif
			}
			#endif
		}
		#endif
	}
	#endif
}

VV_LOCAL_SYMBOL bool print_backtrace_skipping_top_frames(int xskipframes) {
	#if defined(CUSTOM_DEFINE_no_backtrace)
	{
	}
	#else
	{
		int skipframes = (int)(xskipframes + 2);
		#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
		{
		}
		#elif defined(__linux__)
		{
		}
		#else
		{
			println( str_intp(2, _MOV((StrIntpData[]){{_SLIT("print_backtrace_skipping_top_frames is not implemented. skipframes: "), /*100 &int*/0xfe07, {.d_i32 = skipframes}}, {_SLIT0, 0, { .d_c = 0 }}})));
		}
		#endif
	}
	#endif
	return false;
}

VV_LOCAL_SYMBOL bool print_backtrace_skipping_top_frames_bsd(int skipframes) {
	#if defined(CUSTOM_DEFINE_no_backtrace)
	{
	}
	#else
	{
		return true;
	}
	#endif
	return 0;
}

VV_LOCAL_SYMBOL bool print_backtrace_skipping_top_frames_linux(int skipframes) {
	#if !defined(__GLIBC__)
	{
		eprintln(_SLIT("backtrace_symbols is missing => printing backtraces is not available."));
		eprintln(_SLIT("Some libc implementations like musl simply do not provide it."));
		return false;
	}
	#endif
	#if defined(_VNATIVE)
	{
		eprintln(_SLIT("native backend does not support backtraces yet."));
		return false;
	}
	#elif defined(CUSTOM_DEFINE_no_backtrace)
	{
	}
	#else
	{
	}
	#endif
	return true;
}

// TypeDecl
// Attr: [noreturn]
VNORETURN VV_LOCAL_SYMBOL void vhalt(void) {
	for (;;) {
	}
	while(1);
}

// Attr: [markused]
VV_LOCAL_SYMBOL void v_segmentation_fault_handler(int signal_number) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		fprintf(stderr, "signal %d: segmentation fault\n", signal_number);
	}
	#endif
	#if defined(CUSTOM_DEFINE_use_libbacktrace)
	{
	}
	#else
	{
		print_backtrace();
	}
	#endif
	_v_exit((int)(128 + signal_number));
	VUNREACHABLE();
}

// Attr: [noreturn]
VNORETURN void _v_exit(int code) {
	exit(code);
	VUNREACHABLE();
	while(1);
}

// Attr: [noreturn]
VNORETURN VV_LOCAL_SYMBOL void panic_debug(int line_no, string file, string mod, string fn_name, string s) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		eprintln(_SLIT("================ V panic ================"));
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("   module: "), /*115 &string*/0xfe10, {.d_s = mod}}, {_SLIT0, 0, { .d_c = 0 }}})));
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT(" function: "), /*115 &string*/0xfe10, {.d_s = fn_name}}, {_SLIT("()"), 0, { .d_c = 0 }}})));
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("  message: "), /*115 &string*/0xfe10, {.d_s = s}}, {_SLIT0, 0, { .d_c = 0 }}})));
		eprintln( str_intp(3, _MOV((StrIntpData[]){{_SLIT("     file: "), /*115 &string*/0xfe10, {.d_s = file}}, {_SLIT(":"), /*100 &int*/0xfe07, {.d_i32 = line_no}}, {_SLIT0, 0, { .d_c = 0 }}})));
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("   v hash: "), /*115 &string*/0xfe10, {.d_s = _SLIT("ac2dcc2")}}, {_SLIT0, 0, { .d_c = 0 }}})));
		eprintln(_SLIT("========================================="));
		#if defined(_VNATIVE)
		{
			exit(1);
			VUNREACHABLE();
		}
		#elif defined(CUSTOM_DEFINE_exit_after_panic_message)
		{
		}
		#elif defined(CUSTOM_DEFINE_no_backtrace)
		{
		}
		#else
		{
			#if defined(CUSTOM_DEFINE_use_libbacktrace)
			{
			}
			#else
			{
				print_backtrace_skipping_top_frames(1);
			}
			#endif
			exit(1);
			VUNREACHABLE();
		}
		#endif
	}
	#endif
	vhalt();
	VUNREACHABLE();
	while(1);
}

// Attr: [noreturn]
VNORETURN void panic_option_not_set(string s) {
	_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("option not set ("), /*115 &string*/0xfe10, {.d_s = s}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
	VUNREACHABLE();
	while(1);
}

// Attr: [noreturn]
VNORETURN void panic_result_not_set(string s) {
	_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("result not set ("), /*115 &string*/0xfe10, {.d_s = s}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
	VUNREACHABLE();
	while(1);
}

// Attr: [noreturn]
VNORETURN void _v_panic(string s) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		eprint(_SLIT("V panic: "));
		eprintln(s);
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("v hash: "), /*115 &string*/0xfe10, {.d_s = _SLIT("ac2dcc2")}}, {_SLIT0, 0, { .d_c = 0 }}})));
		#if defined(_VNATIVE)
		{
			exit(1);
			VUNREACHABLE();
		}
		#elif defined(CUSTOM_DEFINE_exit_after_panic_message)
		{
		}
		#elif defined(CUSTOM_DEFINE_no_backtrace)
		{
		}
		#else
		{
			#if defined(CUSTOM_DEFINE_use_libbacktrace)
			{
			}
			#else
			{
				print_backtrace_skipping_top_frames(1);
			}
			#endif
			exit(1);
			VUNREACHABLE();
		}
		#endif
	}
	#endif
	vhalt();
	VUNREACHABLE();
	while(1);
}

string c_error_number_str(int errnum) {
	string err_msg = _SLIT("");
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		#if !defined(__vinix__)
		{
			char* c_msg = strerror(errnum);
			err_msg = ((string){.str = ((u8*)(c_msg)), .len = strlen(c_msg), .is_lit = 1});
		}
		#endif
	}
	#endif
	return err_msg;
}

// Attr: [noreturn]
VNORETURN void panic_error_number(string basestr, int errnum) {
	_v_panic(string__plus(basestr, c_error_number_str(errnum)));
	VUNREACHABLE();
	while(1);
}

void eprintln(string s) {
	if (s.str == 0) {
		eprintln(_SLIT("eprintln(NIL)"));
		return;
	}
	#if defined(_VFREESTANDING)
	{
	}
	#elif defined(__TARGET_IOS__)
	{
	}
	#else
	{
		flush_stdout();
		flush_stderr();
		_writeln_to_fd(2, s);
		flush_stderr();
	}
	#endif
}

void eprint(string s) {
	if (s.str == 0) {
		eprint(_SLIT("eprint(NIL)"));
		return;
	}
	#if defined(_VFREESTANDING)
	{
	}
	#elif defined(__TARGET_IOS__)
	{
	}
	#else
	{
		flush_stdout();
		flush_stderr();
		_write_buf_to_fd(2, s.str, s.len);
		flush_stderr();
	}
	#endif
}

void flush_stdout(void) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		fflush(stdout);
	}
	#endif
}

void flush_stderr(void) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		fflush(stderr);
	}
	#endif
}

// Attr: [manualfree]
void print(string s) {
	#if defined(__ANDROID__) && !defined(__TERMUX__)
	{
	}
	#elif defined(__TARGET_IOS__)
	{
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
		_write_buf_to_fd(1, s.str, s.len);
	}
	#endif
}

// Attr: [manualfree]
void println(string s) {
	if (s.str == 0) {
		println(_SLIT("println(NIL)"));
		return;
	}
	#if defined(__ANDROID__) && !defined(__TERMUX__)
	{
	}
	#elif defined(__TARGET_IOS__)
	{
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
		_writeln_to_fd(1, s);
	}
	#endif
}

// Attr: [manualfree]
VV_LOCAL_SYMBOL void _writeln_to_fd(int fd, string s) {
	bool _writeln_to_fd_defer_0 = false;
	u8* buf;
	#if !defined(CUSTOM_DEFINE_builtin_writeln_should_write_at_once)
	{
		u8 lf = ((u8)('\n'));
		_write_buf_to_fd(fd, s.str, s.len);
		_write_buf_to_fd(fd, &lf, 1);
		return;
	}
	#endif
	{ // Unsafe block
		int buf_len = (int)(s.len + 1);
		buf = _v_malloc(buf_len);
		_writeln_to_fd_defer_0 = true;
		memcpy(buf, s.str, s.len);
		buf[s.len] = '\n';
		_write_buf_to_fd(fd, buf, buf_len);
	}
	// Defer begin
	if (_writeln_to_fd_defer_0) {
		_v_free(buf);
	}
	// Defer end
}

// Attr: [manualfree]
VV_LOCAL_SYMBOL void _write_buf_to_fd(int fd, u8* buf, int buf_len) {
	if (buf_len <= 0) {
		return;
	}
	u8* ptr = buf;
	isize remaining_bytes = ((isize)(buf_len));
	isize x = ((isize)(0));
	#if defined(_VFREESTANDING) || defined(__vinix__) || defined(CUSTOM_DEFINE_builtin_write_buf_to_fd_should_use_c_write)
	{
	}
	#else
	{
		voidptr stream = ((voidptr)(stdout));
		if (fd == 2) {
			stream = ((voidptr)(stderr));
		}
		{ // Unsafe block
			for (;;) {
				if (!(remaining_bytes > 0)) break;
				x = ((isize)(fwrite(ptr, 1, remaining_bytes, stream)));
				ptr += x;
				remaining_bytes -= x;
			}
		}
	}
	#endif
}

// Attr: [unsafe]
u8* _v_malloc(isize n) {
	if (n < 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("malloc("), /*100 &isize*/0xfe09, {.d_i64 = n}}, {_SLIT(" < 0)"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	u8* res = ((u8*)(0));
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
		res = malloc(n);
	}
	#endif
	if (res == 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("malloc("), /*100 &isize*/0xfe09, {.d_i64 = n}}, {_SLIT(") failed"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	return res;
}

// Attr: [unsafe]
u8* malloc_noscan(isize n) {
	if (n < 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("malloc_noscan("), /*100 &isize*/0xfe09, {.d_i64 = n}}, {_SLIT(" < 0)"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	u8* res = ((u8*)(0));
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
		res = malloc(n);
	}
	#endif
	if (res == 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("malloc_noscan("), /*100 &isize*/0xfe09, {.d_i64 = n}}, {_SLIT(") failed"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	return res;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL u64 __at_least_one(u64 how_many) {
	if (how_many == 0U) {
		return 1U;
	}
	return how_many;
}

// Attr: [unsafe]
u8* malloc_uncollectable(isize n) {
	if (n < 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("malloc_uncollectable("), /*100 &isize*/0xfe09, {.d_i64 = n}}, {_SLIT(" < 0)"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	u8* res = ((u8*)(0));
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
		res = malloc(n);
	}
	#endif
	if (res == 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("malloc_uncollectable("), /*100 &isize*/0xfe09, {.d_i64 = n}}, {_SLIT(") failed"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	return res;
}

// Attr: [unsafe]
u8* v_realloc(u8* b, isize n) {
	u8* new_ptr = ((u8*)(0));
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
	}
	#else
	{
		new_ptr = realloc(b, n);
	}
	#endif
	if (new_ptr == 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("realloc("), /*100 &isize*/0xfe09, {.d_i64 = n}}, {_SLIT(") failed"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	return new_ptr;
}

// Attr: [unsafe]
u8* realloc_data(u8* old_data, int old_size, int new_size) {
	u8* nptr = ((u8*)(0));
	#if defined(_VGCBOEHM)
	{
	}
	#else
	{
		nptr = realloc(old_data, new_size);
	}
	#endif
	if (nptr == 0) {
		_v_panic( str_intp(4, _MOV((StrIntpData[]){{_SLIT("realloc_data("), /*117 &u8*/0xfe11, {.d_p = (void*)(old_data)}}, {_SLIT(", "), /*100 &int*/0xfe07, {.d_i32 = old_size}}, {_SLIT(", "), /*100 &int*/0xfe07, {.d_i32 = new_size}}, {_SLIT(") failed"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	return nptr;
}

u8* vcalloc(isize n) {
	if (n < 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("calloc("), /*100 &isize*/0xfe09, {.d_i64 = n}}, {_SLIT(" < 0)"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	} else if (n == 0) {
		return ((u8*)(0));
	}
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
	}
	#else
	{
		return calloc(1, n);
	}
	#endif
	return 0;
}

u8* vcalloc_noscan(isize n) {
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
	}
	#else
	{
		return vcalloc(n);
	}
	#endif
	return 0;
}

// Attr: [unsafe]
void _v_free(voidptr ptr) {
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
	}
	#else
	{
		free(ptr);
	}
	#endif
}

// Attr: [unsafe]
voidptr memdup(voidptr src, isize sz) {
	if (sz == 0) {
		return vcalloc(1);
	}
	{ // Unsafe block
		u8* mem = _v_malloc(sz);
		return memcpy(mem, src, sz);
	}
	return 0;
}

// Attr: [unsafe]
voidptr memdup_noscan(voidptr src, isize sz) {
	if (sz == 0) {
		return vcalloc_noscan(1);
	}
	{ // Unsafe block
		u8* mem = malloc_noscan(sz);
		return memcpy(mem, src, sz);
	}
	return 0;
}

// Attr: [unsafe]
voidptr memdup_uncollectable(voidptr src, isize sz) {
	if (sz == 0) {
		return vcalloc(1);
	}
	{ // Unsafe block
		u8* mem = malloc_uncollectable(sz);
		return memcpy(mem, src, sz);
	}
	return 0;
}

GCHeapUsage gc_heap_usage(void) {
	#if defined(_VGCBOEHM)
	{
	}
	#else
	{
		return ((GCHeapUsage){.heap_size = 0,.free_bytes = 0,.total_bytes = 0,.unmapped_bytes = 0,.bytes_since_gc = 0,});
	}
	#endif
	return (GCHeapUsage){0};
}

usize gc_memory_use(void) {
	#if defined(_VGCBOEHM)
	{
	}
	#else
	{
		return 0;
	}
	#endif
	return 0;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL int v_fixed_index(int i, int len) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= len) {
			string s =  str_intp(3, _MOV((StrIntpData[]){{_SLIT("fixed array index out of range (index: "), /*100 &int*/0xfe07, {.d_i32 = i}}, {_SLIT(", len: "), /*100 &int*/0xfe07, {.d_i32 = len}}, {_SLIT(")"), 0, { .d_c = 0 }}}));
			_v_panic(s);
			VUNREACHABLE();
		}
	}
	#endif
	return i;
}

// Attr: [inline]
inline bool isnil(voidptr v) {
	return v == 0;
}

VV_LOCAL_SYMBOL voidptr __as_cast(voidptr obj, int obj_type, int expected_type) {
	if (obj_type != expected_type) {
		string obj_name = string_clone((*(VCastTypeIndexName*)array_get(as_cast_type_indexes, 0)).tname);
		string expected_name = string_clone((*(VCastTypeIndexName*)array_get(as_cast_type_indexes, 0)).tname);
		for (int _t1 = 0; _t1 < as_cast_type_indexes.len; ++_t1) {
			VCastTypeIndexName x = ((VCastTypeIndexName*)as_cast_type_indexes.data)[_t1];
			if (x.tindex == obj_type) {
				obj_name = string_clone(x.tname);
			}
			if (x.tindex == expected_type) {
				expected_name = string_clone(x.tname);
			}
		}
		_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT("as cast: cannot cast `"), /*115 &string*/0xfe10, {.d_s = obj_name}}, {_SLIT("` to `"), /*115 &string*/0xfe10, {.d_s = expected_name}}, {_SLIT("`"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	return obj;
}

// Attr: [manualfree]
// Attr: [unsafe]
void VAssertMetaInfo_free(VAssertMetaInfo* ami) {
	{ // Unsafe block
		string_free(&ami->fpath);
		string_free(&ami->fn_name);
		string_free(&ami->src);
		string_free(&ami->op);
		string_free(&ami->llabel);
		string_free(&ami->rlabel);
		string_free(&ami->lvalue);
		string_free(&ami->rvalue);
		string_free(&ami->message);
	}
}

VV_LOCAL_SYMBOL void __print_assert_failure(VAssertMetaInfo* i) {
	eprintln( str_intp(5, _MOV((StrIntpData[]){{_SLIT0, /*115 &string*/0xfe10, {.d_s = i->fpath}}, {_SLIT(":"), /*100 &int*/0xfe07, {.d_i32 = (int)(i->line_nr + 1)}}, {_SLIT(": FAIL: fn "), /*115 &string*/0xfe10, {.d_s = i->fn_name}}, {_SLIT(": assert "), /*115 &string*/0xfe10, {.d_s = i->src}}, {_SLIT0, 0, { .d_c = 0 }}})));
	if (i->op.len > 0 && !string__eq(i->op, _SLIT("call"))) {
		eprintln( str_intp(3, _MOV((StrIntpData[]){{_SLIT("   left value: "), /*115 &string*/0xfe10, {.d_s = i->llabel}}, {_SLIT(" = "), /*115 &string*/0xfe10, {.d_s = i->lvalue}}, {_SLIT0, 0, { .d_c = 0 }}})));
		if (string__eq(i->rlabel, i->rvalue)) {
			eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("  right value: "), /*115 &string*/0xfe10, {.d_s = i->rlabel}}, {_SLIT0, 0, { .d_c = 0 }}})));
		} else {
			eprintln( str_intp(3, _MOV((StrIntpData[]){{_SLIT("  right value: "), /*115 &string*/0xfe10, {.d_s = i->rlabel}}, {_SLIT(" = "), /*115 &string*/0xfe10, {.d_s = i->rvalue}}, {_SLIT0, 0, { .d_c = 0 }}})));
		}
	}
	if (i->has_msg) {
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("      message: "), /*115 &string*/0xfe10, {.d_s = i->message}}, {_SLIT0, 0, { .d_c = 0 }}})));
	}
}

VV_LOCAL_SYMBOL void builtin_init(void) {
}

VV_LOCAL_SYMBOL void break_if_debugger_attached(void) {
	{ // Unsafe block
		voidptr* ptr = ((voidptr*)(0));
		*ptr = ((void*)0);
	}
}

// Attr: [markused]
// Attr: [noreturn]
VNORETURN void panic_lasterr(string base) {
	_v_panic(string__plus(base, _SLIT(" unknown")));
	VUNREACHABLE();
	while(1);
}

void gc_check_leaks(void) {
}

VV_LOCAL_SYMBOL void print_libbacktrace(int frames_to_skip) {
}

// Attr: [noinline]
__NOINLINE VV_LOCAL_SYMBOL void eprint_libbacktrace(int frames_to_skip) {
}

// Attr: [trusted]
// Attr: [noreturn]
// Attr: [trusted]
// Attr: [trusted]
int proc_pidpath(int , voidptr , int );

// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// TypeDecl
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [inline]
// Attr: [unsafe]
inline int vstrlen(u8* s) {
	return strlen(((char*)(s)));
}

// Attr: [inline]
// Attr: [unsafe]
inline int vstrlen_char(char* s) {
	return strlen(s);
}

// Attr: [inline]
// Attr: [unsafe]
inline voidptr vmemcpy(voidptr dest, const voidptr const_src, isize n) {
	{ // Unsafe block
		return memcpy(dest, const_src, n);
	}
	return 0;
}

// Attr: [inline]
// Attr: [unsafe]
inline voidptr vmemmove(voidptr dest, const voidptr const_src, isize n) {
	{ // Unsafe block
		return memmove(dest, const_src, n);
	}
	return 0;
}

// Attr: [inline]
// Attr: [unsafe]
inline int vmemcmp(const voidptr const_s1, const voidptr const_s2, isize n) {
	{ // Unsafe block
		return memcmp(const_s1, const_s2, n);
	}
	return 0;
}

// Attr: [inline]
// Attr: [unsafe]
inline voidptr vmemset(voidptr s, int c, isize n) {
	{ // Unsafe block
		return memset(s, c, n);
	}
	return 0;
}

// TypeDecl
// Attr: [inline]
// Attr: [unsafe]
inline VV_LOCAL_SYMBOL void vqsort(voidptr base, usize nmemb, usize size, int (*sort_cb)(const voidptr const_a, const voidptr const_b)) {
	qsort(base, nmemb, size, ((voidptr)(sort_cb)));
}

void chan_close(chan ch) {
}

ChanState chan_try_pop(chan ch, voidptr obj) {
	return ChanState__success;
}

ChanState chan_try_push(chan ch, voidptr obj) {
	return ChanState__success;
}

int input_character(void) {
	int ch = 0;
	#if defined(_VFREESTANDING)
	{
	}
	#elif defined(__vinix__)
	{
	}
	#else
	{
		ch = getchar();
		if (ch == EOF) {
			return -1;
		}
	}
	#endif
	return ch;
}

int print_character(u8 ch) {
	#if defined(__ANDROID__) && !defined(__TERMUX__)
	{
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#elif defined(__vinix__)
	{
	}
	#else
	{
		int x = putchar(ch);
		if (x == EOF) {
			return -1;
		}
	}
	#endif
	return ch;
}

#if !defined(_VNATIVE)
#endif
// Attr: [inline]
inline string f64_str(f64 x) {
	{ // Unsafe block
		strconv__Float64u f = ((strconv__Float64u){.f = x,});
		if (f.u == _const_strconv__double_minus_zero) {
			return _SLIT("-0.0");
		}
		if (f.u == _const_strconv__double_plus_zero) {
			return _SLIT("0.0");
		}
	}
	f64 abs_x = f64_abs(x);
	if (abs_x >= ((f64)(0.0001)) && abs_x < ((f64)(1.0e6))) {
		return strconv__f64_to_str_l(x);
	} else {
		return strconv__ftoa_64(x);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [inline]
inline string f64_strg(f64 x) {
	if (x == 0) {
		return _SLIT("0.0");
	}
	f64 abs_x = f64_abs(x);
	if (abs_x >= ((f64)(0.0001)) && abs_x < ((f64)(1.0e6))) {
		return strconv__f64_to_str_l_with_dot(x);
	} else {
		return strconv__ftoa_64(x);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [inline]
inline string float_literal_str(float_literal d) {
	return f64_str(((f64)(d)));
}

// Attr: [inline]
inline string f64_strsci(f64 x, int digit_num) {
	int n_digit = digit_num;
	if (n_digit < 1) {
		n_digit = 1;
	} else if (n_digit > 17) {
		n_digit = 17;
	}
	return strconv__f64_to_str(x, n_digit);
}

// Attr: [inline]
inline string f64_strlong(f64 x) {
	return strconv__f64_to_str_l(x);
}

// Attr: [inline]
inline string f32_str(f32 x) {
	{ // Unsafe block
		strconv__Float32u f = ((strconv__Float32u){.f = x,});
		if (f.u == _const_strconv__single_minus_zero) {
			return _SLIT("-0.0");
		}
		if (f.u == _const_strconv__single_plus_zero) {
			return _SLIT("0.0");
		}
	}
	f32 abs_x = f32_abs(x);
	if (abs_x >= ((f32)(0.0001)) && abs_x < ((f32)(1.0e6))) {
		return strconv__f32_to_str_l(x);
	} else {
		return strconv__ftoa_32(x);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [inline]
inline string f32_strg(f32 x) {
	if (x == 0) {
		return _SLIT("0.0");
	}
	f32 abs_x = f32_abs(x);
	if (abs_x >= ((f32)(0.0001)) && abs_x < ((f32)(1.0e6))) {
		return strconv__f32_to_str_l_with_dot(x);
	} else {
		return strconv__ftoa_32(x);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [inline]
inline string f32_strsci(f32 x, int digit_num) {
	int n_digit = digit_num;
	if (n_digit < 1) {
		n_digit = 1;
	} else if (n_digit > 8) {
		n_digit = 8;
	}
	return strconv__f32_to_str(x, n_digit);
}

// Attr: [inline]
inline string f32_strlong(f32 x) {
	return strconv__f32_to_str_l(x);
}

// Attr: [inline]
inline f32 f32_abs(f32 a) {
	return (a < 0 ? (-a) : (a));
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL f64 f64_abs(f64 a) {
	return (a < 0 ? (-a) : (a));
}

// Attr: [inline]
inline f32 f32_max(f32 a, f32 b) {
	return (a > b ? (a) : (b));
}

// Attr: [inline]
inline f32 f32_min(f32 a, f32 b) {
	return (a < b ? (a) : (b));
}

// Attr: [inline]
inline f64 f64_max(f64 a, f64 b) {
	return (a > b ? (a) : (b));
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL f64 f64_min(f64 a, f64 b) {
	return (a < b ? (a) : (b));
}

// Attr: [inline]
inline bool f32_eq_epsilon(f32 a, f32 b) {
	f32 hi = f32_max(f32_abs(a), f32_abs(b));
	f32 delta = f32_abs((f32)(a - b));
	#if defined(_VNATIVE)
	{
		if (hi > ((f32)(1.0))) {
			return delta <= (f32)(hi * ((f32)(((float_literal)(4 * 1.19209290e-7)))));
		} else {
			return (f32)(((f32)(((float_literal)(1 / ((float_literal)(4 * 1.19209290e-7)))))) * delta) <= hi;
		}
	}
	#else
	{
		if (hi > ((f32)(1.0))) {
			return delta <= (f32)(hi * ((f32)(4 * ((f32)(FLT_EPSILON)))));
		} else {
			return (f32)(((f32)(1 / ((f32)(4 * ((f32)(FLT_EPSILON)))))) * delta) <= hi;
		}
	}
	#endif
	return 0;
}

// Attr: [inline]
inline bool f64_eq_epsilon(f64 a, f64 b) {
	f64 hi = f64_max(f64_abs(a), f64_abs(b));
	f64 delta = f64_abs((f64)(a - b));
	#if defined(_VNATIVE)
	{
		if (hi > ((f64)(1.0))) {
			return delta <= (f64)(hi * ((f64)(((float_literal)(4 * 2.2204460492503131e-16)))));
		} else {
			return (f64)(((f64)(((float_literal)(1 / ((float_literal)(4 * 2.2204460492503131e-16)))))) * delta) <= hi;
		}
	}
	#else
	{
		if (hi > ((f64)(1.0))) {
			return delta <= (f64)(hi * ((f64)(4 * ((f64)(DBL_EPSILON)))));
		} else {
			return (f64)(((f64)(1 / ((f64)(4 * ((f64)(DBL_EPSILON)))))) * delta) <= hi;
		}
	}
	#endif
	return 0;
}

VV_LOCAL_SYMBOL void float_test(void) {
}

// TypeDecl
string ptr_str(voidptr ptr) {
	string buf1 = u64_hex(((u64)(ptr)));
	return buf1;
}

string isize_str(isize x) {
	return i64_str(((i64)(x)));
}

string usize_str(usize x) {
	return u64_str(((u64)(x)));
}

string char_str(char* cptr) {
	return u64_hex(((u64)(cptr)));
}

// Attr: [direct_array_access]
// Attr: [inline]
inline VV_LOCAL_SYMBOL string int_str_l(int nn, int max) {
	{ // Unsafe block
		i64 n = ((i64)(nn));
		int d = 0;
		if (n == 0) {
			return _SLIT("0");
		}
		bool is_neg = false;
		if (n < 0) {
			n = -n;
			is_neg = true;
		}
		int index = max;
		u8* buf = malloc_noscan((int)(max + 1));
		buf[index] = 0;
		index--;
		for (;;) {
			if (!(n > 0)) break;
			int n1 = ((int)((i64)(n / 100)));
			d = ((int)((((u32)((int)(((int)(n)) - ((int)(n1 * 100))))) << 1U)));
			n = n1;
			buf[index] = _const_digit_pairs.str[d];
			index--;
			d++;
			buf[index] = _const_digit_pairs.str[d];
			index--;
		}
		index++;
		if (d < 20) {
			index++;
		}
		if (is_neg) {
			index--;
			buf[index] = '-';
		}
		int diff = (int)(max - index);
		vmemmove(buf, ((voidptr)(buf + index)), (int)(diff + 1));
		return tos(buf, diff);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

string i8_str(i8 n) {
	return int_str_l(((int)(n)), 5);
}

string i16_str(i16 n) {
	return int_str_l(((int)(n)), 7);
}

string u16_str(u16 n) {
	return int_str_l(((int)(n)), 7);
}

string i32_str(i32 n) {
	return int_str_l(((int)(n)), 12);
}

string int_hex_full(int nn) {
	return u64_to_hex(((u64)(nn)), 8);
}

string int_str(int n) {
	return int_str_l(n, 12);
}

// Attr: [direct_array_access]
// Attr: [inline]
inline string u32_str(u32 nn) {
	{ // Unsafe block
		u32 n = nn;
		u32 d = ((u32)(0U));
		if (n == 0U) {
			return _SLIT("0");
		}
		int max = 12;
		u8* buf = malloc_noscan((int)(max + 1));
		int index = max;
		buf[index] = 0;
		index--;
		for (;;) {
			if (!(n > 0U)) break;
			u32 n1 = (u32)(n / ((u32)(100U)));
			d = ((((u32)(n - ((u32)(n1 * ((u32)(100U)))))) << ((u32)(1U))));
			n = n1;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
			d++;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
		}
		index++;
		if (d < ((u32)(20U))) {
			index++;
		}
		int diff = (int)(max - index);
		vmemmove(buf, ((voidptr)(buf + index)), (int)(diff + 1));
		return tos(buf, diff);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [inline]
inline string int_literal_str(int_literal n) {
	return i64_str(((i64)(n)));
}

// Attr: [direct_array_access]
// Attr: [inline]
inline string i64_str(i64 nn) {
	{ // Unsafe block
		i64 n = nn;
		i64 d = ((i64)(0));
		if (n == 0) {
			return _SLIT("0");
		} else if (n == _const_min_i64) {
			return _SLIT("-9223372036854775808");
		}
		int max = 20;
		u8* buf = malloc_noscan((int)(max + 1));
		bool is_neg = false;
		if (n < 0) {
			n = -n;
			is_neg = true;
		}
		int index = max;
		buf[index] = 0;
		index--;
		for (;;) {
			if (!(n > 0)) break;
			i64 n1 = (i64)(n / ((i64)(100)));
			d = ((((u32)((i64)(n - ((i64)(n1 * ((i64)(100))))))) << ((i64)(1))));
			n = n1;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
			d++;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
		}
		index++;
		if (d < ((i64)(20))) {
			index++;
		}
		if (is_neg) {
			index--;
			buf[index] = '-';
		}
		int diff = (int)(max - index);
		vmemmove(buf, ((voidptr)(buf + index)), (int)(diff + 1));
		return tos(buf, diff);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
// Attr: [inline]
inline string u64_str(u64 nn) {
	{ // Unsafe block
		u64 n = nn;
		u64 d = ((u64)(0U));
		if (n == 0U) {
			return _SLIT("0");
		}
		int max = 20;
		u8* buf = malloc_noscan((int)(max + 1));
		int index = max;
		buf[index] = 0;
		index--;
		for (;;) {
			if (!(n > 0U)) break;
			u64 n1 = (u64)(n / 100U);
			d = ((((u64)(n - ((u64)(n1 * 100U)))) << 1U));
			n = n1;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
			d++;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
		}
		index++;
		if (d < 20U) {
			index++;
		}
		int diff = (int)(max - index);
		vmemmove(buf, ((voidptr)(buf + index)), (int)(diff + 1));
		return tos(buf, diff);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

string bool_str(bool b) {
	if (b) {
		return _SLIT("true");
	}
	return _SLIT("false");
}

// Attr: [direct_array_access]
// Attr: [inline]
inline VV_LOCAL_SYMBOL string u64_to_hex(u64 nn, u8 len) {
	u64 n = nn;
	Array_fixed_u8_17 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	buf[len] = 0;
	int i = 0;
	for (i = (u8)(len - 1); i >= 0; i--) {
		u8 d = ((u8)((n & 0xFU)));
		buf[i] = (d < 10 ? ((rune)(d + '0')) : ((u8)(d + 87)));
		n = (n >> 4U);
	}
	return tos(memdup(&buf[0], (u8)(len + 1)), len);
}

// Attr: [direct_array_access]
// Attr: [inline]
inline VV_LOCAL_SYMBOL string u64_to_hex_no_leading_zeros(u64 nn, u8 len) {
	u64 n = nn;
	Array_fixed_u8_17 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	buf[len] = 0;
	int i = 0;
	for (i = (u8)(len - 1); i >= 0; i--) {
		u8 d = ((u8)((n & 0xFU)));
		buf[i] = (d < 10 ? ((rune)(d + '0')) : ((u8)(d + 87)));
		n = (n >> 4U);
		if (n == 0U) {
			break;
		}
	}
	int res_len = (int)(len - i);
	return tos(memdup(&buf[i], (int)(res_len + 1)), res_len);
}

string u8_hex(u8 nn) {
	if (nn == 0) {
		return _SLIT("00");
	}
	return u64_to_hex(nn, 2);
}

string i8_hex(i8 nn) {
	if (nn == 0) {
		return _SLIT("00");
	}
	return u64_to_hex(((u64)(nn)), 2);
}

string u16_hex(u16 nn) {
	if (nn == 0U) {
		return _SLIT("0");
	}
	return u64_to_hex_no_leading_zeros(nn, 4);
}

string i16_hex(i16 nn) {
	return u16_hex(((u16)(nn)));
}

string u32_hex(u32 nn) {
	if (nn == 0U) {
		return _SLIT("0");
	}
	return u64_to_hex_no_leading_zeros(nn, 8);
}

string int_hex(int nn) {
	return u32_hex(((u32)(nn)));
}

string int_hex2(int n) {
	return string__plus(_SLIT("0x"), int_hex(n));
}

string u64_hex(u64 nn) {
	if (nn == 0U) {
		return _SLIT("0");
	}
	return u64_to_hex_no_leading_zeros(nn, 16);
}

string i64_hex(i64 nn) {
	return u64_hex(((u64)(nn)));
}

string int_literal_hex(int_literal nn) {
	return u64_hex(((u64)(nn)));
}

string voidptr_str(voidptr nn) {
	return string__plus(_SLIT("0x"), u64_hex(((u64)(nn))));
}

string byteptr_str(byteptr nn) {
	return string__plus(_SLIT("0x"), u64_hex(((u64)(nn))));
}

string charptr_str(charptr nn) {
	return string__plus(_SLIT("0x"), u64_hex(((u64)(nn))));
}

string u8_hex_full(u8 nn) {
	return u64_to_hex(((u64)(nn)), 2);
}

string i8_hex_full(i8 nn) {
	return u64_to_hex(((u64)(nn)), 2);
}

string u16_hex_full(u16 nn) {
	return u64_to_hex(((u64)(nn)), 4);
}

string i16_hex_full(i16 nn) {
	return u64_to_hex(((u64)(nn)), 4);
}

string u32_hex_full(u32 nn) {
	return u64_to_hex(((u64)(nn)), 8);
}

string i64_hex_full(i64 nn) {
	return u64_to_hex(((u64)(nn)), 16);
}

string voidptr_hex_full(voidptr nn) {
	return u64_to_hex(((u64)(nn)), 16);
}

string int_literal_hex_full(int_literal nn) {
	return u64_to_hex(((u64)(nn)), 16);
}

string u64_hex_full(u64 nn) {
	return u64_to_hex(nn, 16);
}

string u8_str(u8 b) {
	return int_str_l(((int)(b)), 7);
}

string u8_ascii_str(u8 b) {
	string str = ((string){.str = malloc_noscan(2), .len = 1});
	{ // Unsafe block
		str.str[0] = b;
		str.str[1] = 0;
	}
	return str;
}

// Attr: [manualfree]
string u8_str_escaped(u8 b) {
	string _t1 = (string){.str=(byteptr)"", .is_lit=1};
	
	if (b == (0)) {
		_t1 = _SLIT("`\\0`");
	}
	else if (b == (7)) {
		_t1 = _SLIT("`\\a`");
	}
	else if (b == (8)) {
		_t1 = _SLIT("`\\b`");
	}
	else if (b == (9)) {
		_t1 = _SLIT("`\\t`");
	}
	else if (b == (10)) {
		_t1 = _SLIT("`\\n`");
	}
	else if (b == (11)) {
		_t1 = _SLIT("`\\v`");
	}
	else if (b == (12)) {
		_t1 = _SLIT("`\\f`");
	}
	else if (b == (13)) {
		_t1 = _SLIT("`\\r`");
	}
	else if (b == (27)) {
		_t1 = _SLIT("`\\e`");
	}
	else if ((b >= 32 && b <= 126)) {
		_t1 = u8_ascii_str(b);
	}
	else {
		string xx = u8_hex(b);
		string yy = string__plus(_SLIT("0x"), xx);
		string_free(&xx);
		_t1 = yy;
	}string str = _t1;
	return str;
}

// Attr: [inline]
inline bool u8_is_capital(u8 c) {
	return c >= 'A' && c <= 'Z';
}

string Array_u8_bytestr(Array_u8 b) {
	{ // Unsafe block
		u8* buf = malloc_noscan((int)(b.len + 1));
		vmemcpy(buf, b.data, b.len);
		buf[b.len] = 0;
		return tos(buf, b.len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

_result_rune Array_u8_byterune(Array_u8 b) {
	_result_rune _t1 = Array_u8_utf8_to_utf32(b);
	if (_t1.is_error) {
		_result_rune _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	rune r =  (*(rune*)_t1.data);
	_result_rune _t3;
	_result_ok(&(rune[]) { ((rune)(r)) }, (_result*)(&_t3), sizeof(rune));
	return _t3;
}

string u8_repeat(u8 b, int count) {
	if (count < 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("byte.repeat: count is negative: "), /*100 &int*/0xfe07, {.d_i32 = count}}, {_SLIT0, 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	} else if (count == 0) {
		return _SLIT("");
	} else if (count == 1) {
		return u8_ascii_str(b);
	}
	u8* ret = malloc_noscan((int)(count + 1));
	for (int i = 0; i < count; ++i) {
		{ // Unsafe block
			ret[i] = b;
		}
	}
	int new_len = count;
	{ // Unsafe block
		ret[new_len] = 0;
	}
	return u8_vstring_with_len(ret, new_len);
}

VV_LOCAL_SYMBOL string _Atomic__int_str(int x) {
	return int_str(x);
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL bool fast_string_eq(string a, string b) {
	if (a.len != b.len) {
		return false;
	}
	{ // Unsafe block
		return memcmp(a.str, b.str, b.len) == 0;
	}
	return 0;
}

VV_LOCAL_SYMBOL u64 map_hash_string(voidptr pkey) {
	string key = *((string*)(pkey));
	return wyhash(key.str, ((u64)(key.len)), 0U, ((u64*)(_wyp)));
}

VV_LOCAL_SYMBOL u64 map_hash_int_1(voidptr pkey) {
	return wyhash64(*((u8*)(pkey)), 0U);
}

VV_LOCAL_SYMBOL u64 map_hash_int_2(voidptr pkey) {
	return wyhash64(*((u16*)(pkey)), 0U);
}

VV_LOCAL_SYMBOL u64 map_hash_int_4(voidptr pkey) {
	return wyhash64(*((u32*)(pkey)), 0U);
}

VV_LOCAL_SYMBOL u64 map_hash_int_8(voidptr pkey) {
	return wyhash64(*((u64*)(pkey)), 0U);
}

VV_LOCAL_SYMBOL void DenseArray_zeros_to_end(DenseArray* d) {
	u8* tmp_value = _v_malloc(d->value_bytes);
	u8* tmp_key = _v_malloc(d->key_bytes);
	int count = 0;
	for (int i = 0; i < d->len; ++i) {
		if (DenseArray_has_index(d, i)) {
			{ // Unsafe block
				if (count != i) {
					memcpy(tmp_key, DenseArray_key(d, count), d->key_bytes);
					memcpy(DenseArray_key(d, count), DenseArray_key(d, i), d->key_bytes);
					memcpy(DenseArray_key(d, i), tmp_key, d->key_bytes);
					memcpy(tmp_value, DenseArray_value(d, count), d->value_bytes);
					memcpy(DenseArray_value(d, count), DenseArray_value(d, i), d->value_bytes);
					memcpy(DenseArray_value(d, i), tmp_value, d->value_bytes);
				}
			}
			count++;
		}
	}
	{ // Unsafe block
		_v_free(tmp_value);
		_v_free(tmp_key);
		d->deletes = 0U;
		_v_free(d->all_deleted);
	}
	d->len = count;
	int old_cap = d->cap;
	d->cap = (count < 8 ? (8) : (count));
	{ // Unsafe block
		d->values = realloc_data(d->values, (int)(d->value_bytes * old_cap), (int)(d->value_bytes * d->cap));
		d->keys = realloc_data(d->keys, (int)(d->key_bytes * old_cap), (int)(d->key_bytes * d->cap));
	}
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL DenseArray new_dense_array(int key_bytes, int value_bytes) {
	int cap = 8;
	return ((DenseArray){
		.key_bytes = key_bytes,
		.value_bytes = value_bytes,
		.cap = cap,
		.len = 0,
		.deletes = 0U,
		.all_deleted = ((void*)0),
		.keys = _v_malloc(__at_least_one((u64)(((u64)(cap)) * ((u64)(key_bytes))))),
		.values = _v_malloc(__at_least_one((u64)(((u64)(cap)) * ((u64)(value_bytes))))),
	});
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL voidptr DenseArray_key(DenseArray* d, int i) {
	return ((voidptr)(d->keys + (int)(i * d->key_bytes)));
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL voidptr DenseArray_value(DenseArray* d, int i) {
	return ((voidptr)(d->values + (int)(i * d->value_bytes)));
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL bool DenseArray_has_index(DenseArray* d, int i) {
	return d->deletes == 0U || d->all_deleted[i] == 0;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL int DenseArray_expand(DenseArray* d) {
	int old_cap = d->cap;
	int old_key_size = (int)(d->key_bytes * old_cap);
	int old_value_size = (int)(d->value_bytes * old_cap);
	if (d->cap == d->len) {
		d->cap += (d->cap >> 3);
		{ // Unsafe block
			d->keys = realloc_data(d->keys, old_key_size, (int)(d->key_bytes * d->cap));
			d->values = realloc_data(d->values, old_value_size, (int)(d->value_bytes * d->cap));
			if (d->deletes != 0U) {
				d->all_deleted = realloc_data(d->all_deleted, old_cap, d->cap);
				vmemset(((voidptr)(d->all_deleted + d->len)), 0, (int)(d->cap - d->len));
			}
		}
	}
	int push_index = d->len;
	{ // Unsafe block
		if (d->deletes != 0U) {
			d->all_deleted[push_index] = 0;
		}
	}
	d->len++;
	return push_index;
}

// TypeDecl
// TypeDecl
// TypeDecl
// TypeDecl
VV_LOCAL_SYMBOL bool map_eq_string(voidptr a, voidptr b) {
	return fast_string_eq(*((string*)(a)), *((string*)(b)));
}

VV_LOCAL_SYMBOL bool map_eq_int_1(voidptr a, voidptr b) {
	return *((u8*)(a)) == *((u8*)(b));
}

VV_LOCAL_SYMBOL bool map_eq_int_2(voidptr a, voidptr b) {
	return *((u16*)(a)) == *((u16*)(b));
}

VV_LOCAL_SYMBOL bool map_eq_int_4(voidptr a, voidptr b) {
	return *((u32*)(a)) == *((u32*)(b));
}

VV_LOCAL_SYMBOL bool map_eq_int_8(voidptr a, voidptr b) {
	return *((u64*)(a)) == *((u64*)(b));
}

VV_LOCAL_SYMBOL void map_clone_string(voidptr dest, voidptr pkey) {
	{ // Unsafe block
		string s = *((string*)(pkey));
		*((string*)(dest)) = string_clone(s);
	}
}

VV_LOCAL_SYMBOL void map_clone_int_1(voidptr dest, voidptr pkey) {
	{ // Unsafe block
		*((u8*)(dest)) = *((u8*)(pkey));
	}
}

VV_LOCAL_SYMBOL void map_clone_int_2(voidptr dest, voidptr pkey) {
	{ // Unsafe block
		*((u16*)(dest)) = *((u16*)(pkey));
	}
}

VV_LOCAL_SYMBOL void map_clone_int_4(voidptr dest, voidptr pkey) {
	{ // Unsafe block
		*((u32*)(dest)) = *((u32*)(pkey));
	}
}

VV_LOCAL_SYMBOL void map_clone_int_8(voidptr dest, voidptr pkey) {
	{ // Unsafe block
		*((u64*)(dest)) = *((u64*)(pkey));
	}
}

VV_LOCAL_SYMBOL void map_free_string(voidptr pkey) {
	string_free(ADDR(string, (*((string*)(pkey)))));
}

VV_LOCAL_SYMBOL void map_free_nop(voidptr _d1) {
}

VV_LOCAL_SYMBOL map new_map(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr )) {
	int metasize = ((int)((u32)(sizeof(u32) * ((int_literal)(_const_init_capicity + _const_extra_metas_inc)))));
	bool has_string_keys = _us32_lt(sizeof(voidptr),key_bytes);
	return ((map){
		.key_bytes = key_bytes,
		.value_bytes = value_bytes,
		.even_index = _const_init_even_index,
		.cached_hashbits = _const_max_cached_hashbits,
		.shift = _const_init_log_capicity,
		.key_values = new_dense_array(key_bytes, value_bytes),
		.metas = ((u32*)(vcalloc_noscan(metasize))),
		.extra_metas = _const_extra_metas_inc,
		.has_string_keys = has_string_keys,
		.hash_fn = (voidptr)hash_fn,
		.key_eq_fn = (voidptr)key_eq_fn,
		.clone_fn = (voidptr)clone_fn,
		.free_fn = (voidptr)free_fn,
		.len = 0,
	});
}

VV_LOCAL_SYMBOL map new_map_init(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values) {
	map out = new_map(key_bytes, value_bytes, (voidptr)hash_fn, (voidptr)key_eq_fn, (voidptr)clone_fn, (voidptr)free_fn);
	u8* pkey = ((u8*)(keys));
	u8* pval = ((u8*)(values));
	for (int _t1 = 0; _t1 < n; ++_t1) {
		{ // Unsafe block
			map_set(&out, pkey, pval);
			pkey = pkey + key_bytes;
			pval = pval + value_bytes;
		}
	}
	return out;
}

map map_move(map* m) {
	map r = *m;
	vmemset(m, 0, ((int)(sizeof(map))));
	return r;
}

void map_clear(map* m) {
	m->len = 0;
	m->even_index = 0U;
	m->key_values.len = 0;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL multi_return_u32_u32 map_key_to_index(map* m, voidptr pkey) {
	u64 hash = m->hash_fn(pkey);
	u64 index = (hash & m->even_index);
	u64 meta = (((((hash >> m->shift)) & _const_hash_mask)) | _const_probe_inc);
	return (multi_return_u32_u32){.arg0=((u32)(index)), .arg1=((u32)(meta))};
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL multi_return_u32_u32 map_meta_less(map* m, u32 _index, u32 _metas) {
	u32 index = _index;
	u32 meta = _metas;
	for (;;) {
		if (!(meta < m->metas[index])) break;
		index += 2U;
		meta += _const_probe_inc;
	}
	return (multi_return_u32_u32){.arg0=index, .arg1=meta};
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL void map_meta_greater(map* m, u32 _index, u32 _metas, u32 kvi) {
	u32 meta = _metas;
	u32 index = _index;
	u32 kv_index = kvi;
	for (;;) {
		if (!(m->metas[index] != 0U)) break;
		if (meta > m->metas[index]) {
			{ // Unsafe block
				u32 tmp_meta = m->metas[index];
				m->metas[index] = meta;
				meta = tmp_meta;
				u32 tmp_index = m->metas[(u32)(index + 1U)];
				m->metas[(u32)(index + 1U)] = kv_index;
				kv_index = tmp_index;
			}
		}
		index += 2U;
		meta += _const_probe_inc;
	}
	{ // Unsafe block
		m->metas[index] = meta;
		m->metas[(u32)(index + 1U)] = kv_index;
	}
	u32 probe_count = (u32)(((meta >> _const_hashbits)) - 1U);
	map_ensure_extra_metas(m, probe_count);
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL void map_ensure_extra_metas(map* m, u32 probe_count) {
	if (((probe_count << 1U)) == m->extra_metas) {
		u32 size_of_u32 = sizeof(u32);
		u32 old_mem_size = ((u32)((u32)(m->even_index + 2U) + m->extra_metas));
		m->extra_metas += _const_extra_metas_inc;
		u32 mem_size = ((u32)((u32)(m->even_index + 2U) + m->extra_metas));
		{ // Unsafe block
			u8* x = realloc_data(((u8*)(m->metas)), ((int)((u32)(size_of_u32 * old_mem_size))), ((int)((u32)(size_of_u32 * mem_size))));
			m->metas = ((u32*)(x));
			vmemset(m->metas + mem_size - _const_extra_metas_inc, 0, ((int)((u32)(sizeof(u32) * _const_extra_metas_inc))));
		}
		if (probe_count == 252U) {
			_v_panic(_SLIT("Probe overflow"));
			VUNREACHABLE();
		}
	}
}

VV_LOCAL_SYMBOL void map_set(map* m, voidptr key, voidptr value) {
	f32 load_factor = (f32)(((f32)((((u32)(m->len)) << 1U))) / ((f32)(m->even_index)));
	if (load_factor > ((f32)(_const_max_load_factor))) {
		map_expand(m);
	}
	multi_return_u32_u32 mr_11360 = map_key_to_index(m, key);
	u32 index = mr_11360.arg0;
	u32 meta = mr_11360.arg1;
	multi_return_u32_u32 mr_11396 = map_meta_less(m, index, meta);
	index = mr_11396.arg0;
	meta = mr_11396.arg1;
	for (;;) {
		if (!(meta == m->metas[index])) break;
		int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
		voidptr pkey = DenseArray_key(&m->key_values, kv_index);
		if (m->key_eq_fn(key, pkey)) {
			{ // Unsafe block
				voidptr pval = DenseArray_value(&m->key_values, kv_index);
				vmemcpy(pval, value, m->value_bytes);
			}
			return;
		}
		index += 2U;
		meta += _const_probe_inc;
	}
	int kv_index = DenseArray_expand(&m->key_values);
	{ // Unsafe block
		voidptr pkey = DenseArray_key(&m->key_values, kv_index);
		voidptr pvalue = DenseArray_value(&m->key_values, kv_index);
		m->clone_fn(pkey, key);
		vmemcpy(((u8*)(pvalue)), value, m->value_bytes);
	}
	map_meta_greater(m, index, meta, ((u32)(kv_index)));
	m->len++;
}

VV_LOCAL_SYMBOL void map_expand(map* m) {
	u32 old_cap = m->even_index;
	m->even_index = (u32)(((((u32)(m->even_index + 2U)) << 1U)) - 2U);
	if (m->cached_hashbits == 0) {
		m->shift += _const_max_cached_hashbits;
		m->cached_hashbits = _const_max_cached_hashbits;
		map_rehash(m);
	} else {
		map_cached_rehash(m, old_cap);
		m->cached_hashbits--;
	}
}

VV_LOCAL_SYMBOL void map_rehash(map* m) {
	u32 meta_bytes = (u32)(sizeof(u32) * ((u32)((u32)(m->even_index + 2U) + m->extra_metas)));
	map_reserve(m, meta_bytes);
}

void map_reserve(map* m, u32 meta_bytes) {
	{ // Unsafe block
		u8* x = v_realloc(((u8*)(m->metas)), ((int)(meta_bytes)));
		m->metas = ((u32*)(x));
		vmemset(m->metas, 0, ((int)(meta_bytes)));
	}
	for (int i = 0; i < m->key_values.len; i++) {
		if (!DenseArray_has_index(&m->key_values, i)) {
			continue;
		}
		voidptr pkey = DenseArray_key(&m->key_values, i);
		multi_return_u32_u32 mr_13170 = map_key_to_index(m, pkey);
		u32 index = mr_13170.arg0;
		u32 meta = mr_13170.arg1;
		multi_return_u32_u32 mr_13208 = map_meta_less(m, index, meta);
		index = mr_13208.arg0;
		meta = mr_13208.arg1;
		map_meta_greater(m, index, meta, ((u32)(i)));
	}
}

VV_LOCAL_SYMBOL void map_cached_rehash(map* m, u32 old_cap) {
	u32* old_metas = m->metas;
	int metasize = ((int)((u32)(sizeof(u32) * ((u32)((u32)(m->even_index + 2U) + m->extra_metas)))));
	m->metas = ((u32*)(vcalloc(metasize)));
	u32 old_extra_metas = m->extra_metas;
	for (u32 i = ((u32)(0U)); i <= (u32)(old_cap + old_extra_metas); i += 2U) {
		if (old_metas[i] == 0U) {
			continue;
		}
		u32 old_meta = old_metas[i];
		u32 old_probe_count = (((u32)(((old_meta >> _const_hashbits)) - 1U)) << 1U);
		u32 old_index = (((u32)(i - old_probe_count)) & ((m->even_index >> 1U)));
		u32 index = (((old_index | ((old_meta << m->shift)))) & m->even_index);
		u32 meta = (((old_meta & _const_hash_mask)) | _const_probe_inc);
		multi_return_u32_u32 mr_14007 = map_meta_less(m, index, meta);
		index = mr_14007.arg0;
		meta = mr_14007.arg1;
		u32 kv_index = old_metas[(u32)(i + 1U)];
		map_meta_greater(m, index, meta, kv_index);
	}
	_v_free(old_metas);
}

VV_LOCAL_SYMBOL voidptr map_get_and_set(map* m, voidptr key, voidptr zero) {
	for (;;) {
		multi_return_u32_u32 mr_14455 = map_key_to_index(m, key);
		u32 index = mr_14455.arg0;
		u32 meta = mr_14455.arg1;
		for (;;) {
			if (meta == m->metas[index]) {
				int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
				voidptr pkey = DenseArray_key(&m->key_values, kv_index);
				if (m->key_eq_fn(key, pkey)) {
					voidptr pval = DenseArray_value(&m->key_values, kv_index);
					return ((u8*)(pval));
				}
			}
			index += 2U;
			meta += _const_probe_inc;
			if (meta > m->metas[index]) {
				break;
			}
		}
		map_set(m, key, zero);
	}
	return ((void*)0);
}

VV_LOCAL_SYMBOL voidptr map_get(map* m, voidptr key, voidptr zero) {
	multi_return_u32_u32 mr_15182 = map_key_to_index(m, key);
	u32 index = mr_15182.arg0;
	u32 meta = mr_15182.arg1;
	for (;;) {
		if (meta == m->metas[index]) {
			int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
			voidptr pkey = DenseArray_key(&m->key_values, kv_index);
			if (m->key_eq_fn(key, pkey)) {
				voidptr pval = DenseArray_value(&m->key_values, kv_index);
				return ((u8*)(pval));
			}
		}
		index += 2U;
		meta += _const_probe_inc;
		if (meta > m->metas[index]) {
			break;
		}
	}
	return zero;
}

VV_LOCAL_SYMBOL voidptr map_get_check(map* m, voidptr key) {
	multi_return_u32_u32 mr_15847 = map_key_to_index(m, key);
	u32 index = mr_15847.arg0;
	u32 meta = mr_15847.arg1;
	for (;;) {
		if (meta == m->metas[index]) {
			int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
			voidptr pkey = DenseArray_key(&m->key_values, kv_index);
			if (m->key_eq_fn(key, pkey)) {
				voidptr pval = DenseArray_value(&m->key_values, kv_index);
				return ((u8*)(pval));
			}
		}
		index += 2U;
		meta += _const_probe_inc;
		if (meta > m->metas[index]) {
			break;
		}
	}
	return 0;
}

VV_LOCAL_SYMBOL bool map_exists(map* m, voidptr key) {
	multi_return_u32_u32 mr_16357 = map_key_to_index(m, key);
	u32 index = mr_16357.arg0;
	u32 meta = mr_16357.arg1;
	for (;;) {
		if (meta == m->metas[index]) {
			int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
			voidptr pkey = DenseArray_key(&m->key_values, kv_index);
			if (m->key_eq_fn(key, pkey)) {
				return true;
			}
		}
		index += 2U;
		meta += _const_probe_inc;
		if (meta > m->metas[index]) {
			break;
		}
	}
	return false;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL void DenseArray_delete(DenseArray* d, int i) {
	if (d->deletes == 0U) {
		d->all_deleted = vcalloc(d->cap);
	}
	d->deletes++;
	{ // Unsafe block
		d->all_deleted[i] = 1;
	}
}

// Attr: [unsafe]
void map_delete(map* m, voidptr key) {
	multi_return_u32_u32 mr_16995 = map_key_to_index(m, key);
	u32 index = mr_16995.arg0;
	u32 meta = mr_16995.arg1;
	multi_return_u32_u32 mr_17031 = map_meta_less(m, index, meta);
	index = mr_17031.arg0;
	meta = mr_17031.arg1;
	for (;;) {
		if (!(meta == m->metas[index])) break;
		int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
		voidptr pkey = DenseArray_key(&m->key_values, kv_index);
		if (m->key_eq_fn(key, pkey)) {
			for (;;) {
				if (!(((m->metas[(u32)(index + 2U)] >> _const_hashbits)) > 1U)) break;
				{ // Unsafe block
					m->metas[index] = (u32)(m->metas[(u32)(index + 2U)] - _const_probe_inc);
					m->metas[(u32)(index + 1U)] = m->metas[(u32)(index + 3U)];
				}
				index += 2U;
			}
			m->len--;
			DenseArray_delete(&m->key_values, kv_index);
			{ // Unsafe block
				m->metas[index] = 0U;
				m->free_fn(pkey);
				vmemset(pkey, 0, m->key_bytes);
			}
			if (m->key_values.len <= 32) {
				return;
			}
			if (_us32_ge(m->key_values.deletes,((m->key_values.len >> 1)))) {
				DenseArray_zeros_to_end(&m->key_values);
				map_rehash(m);
			}
			return;
		}
		index += 2U;
		meta += _const_probe_inc;
	}
}

array map_keys(map* m) {
	array keys = __new_array(m->len, 0, m->key_bytes);
	u8* item = ((u8*)(keys.data));
	if (m->key_values.deletes == 0U) {
		for (int i = 0; i < m->key_values.len; i++) {
			{ // Unsafe block
				voidptr pkey = DenseArray_key(&m->key_values, i);
				m->clone_fn(item, pkey);
				item = item + m->key_bytes;
			}
		}
		return keys;
	}
	for (int i = 0; i < m->key_values.len; i++) {
		if (!DenseArray_has_index(&m->key_values, i)) {
			continue;
		}
		{ // Unsafe block
			voidptr pkey = DenseArray_key(&m->key_values, i);
			m->clone_fn(item, pkey);
			item = item + m->key_bytes;
		}
	}
	return keys;
}

array map_values(map* m) {
	array values = __new_array(m->len, 0, m->value_bytes);
	u8* item = ((u8*)(values.data));
	if (m->key_values.deletes == 0U) {
		vmemcpy(item, m->key_values.values, (int)(m->value_bytes * m->key_values.len));
		return values;
	}
	for (int i = 0; i < m->key_values.len; i++) {
		if (!DenseArray_has_index(&m->key_values, i)) {
			continue;
		}
		{ // Unsafe block
			voidptr pvalue = DenseArray_value(&m->key_values, i);
			vmemcpy(item, pvalue, m->value_bytes);
			item = item + m->value_bytes;
		}
	}
	return values;
}

// Attr: [unsafe]
VV_LOCAL_SYMBOL DenseArray DenseArray_clone(DenseArray* d) {
	DenseArray res = ((DenseArray){
		.key_bytes = d->key_bytes,
		.value_bytes = d->value_bytes,
		.cap = d->cap,
		.len = d->len,
		.deletes = d->deletes,
		.all_deleted = ((void*)0),
		.keys = ((void*)0),
		.values = ((void*)0),
	});
	{ // Unsafe block
		if (d->deletes != 0U) {
			res.all_deleted = memdup(d->all_deleted, d->cap);
		}
		res.keys = memdup(d->keys, (int)(d->cap * d->key_bytes));
		res.values = memdup(d->values, (int)(d->cap * d->value_bytes));
	}
	return res;
}

// Attr: [unsafe]
map map_clone(map* m) {
	int metasize = ((int)((u32)(sizeof(u32) * ((u32)((u32)(m->even_index + 2U) + m->extra_metas)))));
	map res = ((map){
		.key_bytes = m->key_bytes,
		.value_bytes = m->value_bytes,
		.even_index = m->even_index,
		.cached_hashbits = m->cached_hashbits,
		.shift = m->shift,
		.key_values = DenseArray_clone(&m->key_values),
		.metas = ((u32*)(malloc_noscan(metasize))),
		.extra_metas = m->extra_metas,
		.has_string_keys = m->has_string_keys,
		.hash_fn = (voidptr)m->hash_fn,
		.key_eq_fn = (voidptr)m->key_eq_fn,
		.clone_fn = (voidptr)m->clone_fn,
		.free_fn = (voidptr)m->free_fn,
		.len = m->len,
	});
	vmemcpy(res.metas, m->metas, metasize);
	if (!m->has_string_keys) {
		return res;
	}
	for (int i = 0; i < m->key_values.len; ++i) {
		if (!DenseArray_has_index(&m->key_values, i)) {
			continue;
		}
		m->clone_fn(DenseArray_key(&res.key_values, i), DenseArray_key(&m->key_values, i));
	}
	return res;
}

// Attr: [unsafe]
void map_free(map* m) {
	_v_free(m->metas);
	{ // Unsafe block
		m->metas = ((void*)0);
	}
	if (m->key_values.deletes == 0U) {
		for (int i = 0; i < m->key_values.len; i++) {
			{ // Unsafe block
				voidptr pkey = DenseArray_key(&m->key_values, i);
				m->free_fn(pkey);
				vmemset(pkey, 0, m->key_bytes);
			}
		}
	} else {
		for (int i = 0; i < m->key_values.len; i++) {
			if (!DenseArray_has_index(&m->key_values, i)) {
				continue;
			}
			{ // Unsafe block
				voidptr pkey = DenseArray_key(&m->key_values, i);
				m->free_fn(pkey);
				vmemset(pkey, 0, m->key_bytes);
			}
		}
	}
	{ // Unsafe block
		if (m->key_values.all_deleted != ((void*)0)) {
			_v_free(m->key_values.all_deleted);
			m->key_values.all_deleted = ((void*)0);
		}
		if (m->key_values.keys != ((void*)0)) {
			_v_free(m->key_values.keys);
			m->key_values.keys = ((void*)0);
		}
		if (m->key_values.values != ((void*)0)) {
			_v_free(m->key_values.values);
			m->key_values.values = ((void*)0);
		}
		m->hash_fn = (voidptr)((void*)0);
		m->key_eq_fn = (voidptr)((void*)0);
		m->clone_fn = (voidptr)((void*)0);
		m->free_fn = (voidptr)((void*)0);
	}
}

// Attr: [unsafe]
void IError_free(IError* ie) {
	{ // Unsafe block
		IError* cie = ((IError*)(ie));
		_v_free(cie->_object);
	}
}

// Attr: [markused]
VV_LOCAL_SYMBOL void _option_none(voidptr data, _option* option, int size) {
	{ // Unsafe block
		*option = ((_option){.state = 2,.err = _const_none__,});
		vmemcpy(((u8*)(&option->err)) + sizeof(IError), data, size);
	}
}

// Attr: [markused]
VV_LOCAL_SYMBOL void _option_ok(voidptr data, _option* option, int size) {
	{ // Unsafe block
		*option = ((_option){.state = 0,.err = _const_none__,});
		vmemcpy(((u8*)(&option->err)) + sizeof(IError), data, size);
	}
}

VV_LOCAL_SYMBOL string None___str(None__ _d1) {
	return _SLIT("none");
}

string none_str(none _d2) {
	return _SLIT("none");
}

// Attr: [markused]
VV_LOCAL_SYMBOL void _result_ok(voidptr data, _result* res, int size) {
	{ // Unsafe block
		*res = ((_result){.is_error = 0,.err = _const_none__,});
		vmemcpy(((u8*)(&res->err)) + sizeof(IError), data, size);
	}
}

string IError_str(IError err) {
	return ((err._typ == _IError_None___index)? (_SLIT("none")) : (err._typ == _IError_Error_index)? (Error_msg(/*rec*/*(err._Error))) : (err._typ == _IError_MessageError_index)? (MessageError_msg(/*rec*/*(err._MessageError))) : ( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, /*115 &string*/0xfe10, {.d_s = charptr_vstring_literal( /* IError */ v_typeof_interface_IError( (err)._typ ))}}, {_SLIT(": "), /*115 &string*/0xfe10, {.d_s = IError_name_table[err._typ]._method_msg(err._object)}}, {_SLIT0, 0, { .d_c = 0 }}}))));
}

string Error_msg(Error err) {
	return _SLIT("");
}

int Error_code(Error err) {
	return 0;
}

string MessageError_msg(MessageError err) {
	if (err.code > 0) {
		return  str_intp(3, _MOV((StrIntpData[]){{_SLIT0, /*115 &string*/0xfe10, {.d_s = err.msg}}, {_SLIT("; code: "), /*100 &int*/0xfe07, {.d_i32 = err.code}}, {_SLIT0, 0, { .d_c = 0 }}}));
	}
	return err.msg;
}

int MessageError_code(MessageError err) {
	return err.code;
}

// Attr: [unsafe]
void MessageError_free(MessageError* err) {
	string_free(&err->msg);
}

// Attr: [inline]
inline IError _v_error(string message) {
	;
	return /*&IError*/I_MessageError_to_Interface_IError(((MessageError*)memdup(&(MessageError){.msg = message,.code = 0,}, sizeof(MessageError))));
}

// Attr: [inline]
inline IError error_with_code(string message, int code) {
	;
	return /*&IError*/I_MessageError_to_Interface_IError(((MessageError*)memdup(&(MessageError){.msg = message,.code = code,}, sizeof(MessageError))));
}

string rune_str(rune c) {
	return utf32_to_str(((u32)(c)));
}

// Attr: [manualfree]
string Array_rune_string(Array_rune ra) {
	strings__Builder sb = strings__new_builder(ra.len);
	strings__Builder_write_runes(&sb, ra);
	string res = strings__Builder_str(&sb);
	strings__Builder_free(&sb);
	return res;
}

string rune_repeat(rune c, int count) {
	if (count < 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("rune.repeat: count is negative: "), /*100 &int*/0xfe07, {.d_i32 = count}}, {_SLIT0, 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	} else if (count == 0) {
		return _SLIT("");
	} else if (count == 1) {
		return rune_str(c);
	}
	Array_fixed_u8_5 buffer = {0, 0, 0, 0, 0};
	string res = utf32_to_str_no_malloc(((u32)(c)), &buffer[0]);
	return string_repeat(res, count);
}

// Attr: [manualfree]
Array_u8 rune_bytes(rune c) {
	Array_u8 res = __new_array_with_default(0, 5, sizeof(u8), 0);
	res.len = utf32_decode_to_buffer(((u32)(c)), ((u8*)(res.data)));
	return res;
}

int rune_length_in_bytes(rune c) {
	u32 code = ((u32)(c));
	if (code <= 0x7FU) {
		return 1;
	} else if (code <= 0x7FFU) {
		return 2;
	} else if (0xD800 <= code && code <= 0xDFFFU) {
		return -1;
	} else if (code <= 0xFFFFU) {
		return 3;
	} else if (code <= 0x10FFFFU) {
		return 4;
	}
	return -1;
}

VV_LOCAL_SYMBOL SortedMap new_sorted_map(int n, int value_bytes) {
	return ((SortedMap){.value_bytes = value_bytes,.root = new_node(),.len = 0,});
}

VV_LOCAL_SYMBOL SortedMap new_sorted_map_init(int n, int value_bytes, string* keys, voidptr values) {
	SortedMap out = new_sorted_map(n, value_bytes);
	for (int i = 0; i < n; ++i) {
		SortedMap_set(&out, keys[i], ((u8*)(values)) + (int)(i * value_bytes));
	}
	return out;
}

VV_LOCAL_SYMBOL mapnode* new_node(void) {
	return ((mapnode*)memdup(&(mapnode){.children = ((void*)0),.len = 0,.keys = {(string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}},.values = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},}, sizeof(mapnode)));
}

VV_LOCAL_SYMBOL void SortedMap_set(SortedMap* m, string key, voidptr value) {
	mapnode* node = m->root;
	int child_index = 0;
	mapnode* parent = ((mapnode*)(((void*)0)));
	for (;;) {
		if (node->len == _const_max_len) {
			if (parent == ((void*)0)) {
				parent = new_node();
				m->root = parent;
			}
			mapnode_split_child(parent, child_index, node);
			if (string__eq(key, parent->keys[v_fixed_index(child_index, 11)])) {
				vmemcpy(parent->values[v_fixed_index(child_index, 11)], value, m->value_bytes);
				return;
			}
			if (string__lt(key, parent->keys[v_fixed_index(child_index, 11)])) {
				node = ((mapnode*)(parent->children[child_index]));
			} else {
				node = ((mapnode*)(parent->children[(int)(child_index + 1)]));
			}
		}
		int i = 0;
		for (;;) {
			if (!(i < node->len && string__lt(node->keys[v_fixed_index(i, 11)], key))) break;
			i++;
		}
		if (i != node->len && string__eq(key, node->keys[v_fixed_index(i, 11)])) {
			vmemcpy(node->values[v_fixed_index(i, 11)], value, m->value_bytes);
			return;
		}
		if (node->children == ((void*)0)) {
			int j = (int)(node->len - 1);
			for (;;) {
				if (!(j >= 0 && string__lt(key, node->keys[v_fixed_index(j, 11)]))) break;
				node->keys[v_fixed_index((int)(j + 1), 11)] = node->keys[v_fixed_index(j, 11)];
				node->values[v_fixed_index((int)(j + 1), 11)] = node->values[v_fixed_index(j, 11)];
				j--;
			}
			node->keys[v_fixed_index((int)(j + 1), 11)] = key;
			{ // Unsafe block
				node->values[v_fixed_index((int)(j + 1), 11)] = _v_malloc(m->value_bytes);
				vmemcpy(node->values[v_fixed_index((int)(j + 1), 11)], value, m->value_bytes);
			}
			node->len++;
			m->len++;
			return;
		}
		parent = node;
		child_index = i;
		node = ((mapnode*)(node->children[child_index]));
	}
}

VV_LOCAL_SYMBOL void mapnode_split_child(mapnode* n, int child_index, mapnode* y) {
	mapnode* z = new_node();
	z->len = _const_mid_index;
	y->len = _const_mid_index;
	for (int j = (int_literal)(_const_mid_index - 1); j >= 0; j--) {
		z->keys[v_fixed_index(j, 11)] = y->keys[v_fixed_index((int)(j + _const_degree), 11)];
		z->values[v_fixed_index(j, 11)] = y->values[v_fixed_index((int)(j + _const_degree), 11)];
	}
	if (y->children != ((void*)0)) {
		z->children = ((voidptr*)(_v_malloc(((int)(_const_children_bytes)))));
		for (int jj = (int_literal)(_const_degree - 1); jj >= 0; jj--) {
			{ // Unsafe block
				z->children[jj] = y->children[(int)(jj + _const_degree)];
			}
		}
	}
	{ // Unsafe block
		if (n->children == ((void*)0)) {
			n->children = ((voidptr*)(_v_malloc(((int)(_const_children_bytes)))));
		}
		n->children[(int)(n->len + 1)] = n->children[n->len];
	}
	for (int j = n->len; j > child_index; j--) {
		n->keys[v_fixed_index(j, 11)] = n->keys[v_fixed_index((int)(j - 1), 11)];
		n->values[v_fixed_index(j, 11)] = n->values[v_fixed_index((int)(j - 1), 11)];
		{ // Unsafe block
			n->children[j] = n->children[(int)(j - 1)];
		}
	}
	n->keys[v_fixed_index(child_index, 11)] = y->keys[v_fixed_index(_const_mid_index, 11)];
	n->values[v_fixed_index(child_index, 11)] = y->values[v_fixed_index(_const_mid_index, 11)];
	{ // Unsafe block
		n->children[child_index] = ((voidptr)(y));
		n->children[(int)(child_index + 1)] = ((voidptr)(z));
	}
	n->len++;
}

VV_LOCAL_SYMBOL bool SortedMap_get(SortedMap m, string key, voidptr out) {
	mapnode* node = m.root;
	for (;;) {
		int i = (int)(node->len - 1);
		for (;;) {
			if (!(i >= 0 && string__lt(key, node->keys[v_fixed_index(i, 11)]))) break;
			i--;
		}
		if (i != -1 && string__eq(key, node->keys[v_fixed_index(i, 11)])) {
			vmemcpy(out, node->values[v_fixed_index(i, 11)], m.value_bytes);
			return true;
		}
		if (node->children == ((void*)0)) {
			break;
		}
		node = ((mapnode*)(node->children[(int)(i + 1)]));
	}
	return false;
}

VV_LOCAL_SYMBOL bool SortedMap_exists(SortedMap m, string key) {
	if (m.root == ((void*)0)) {
		return false;
	}
	mapnode* node = m.root;
	for (;;) {
		int i = (int)(node->len - 1);
		for (;;) {
			if (!(i >= 0 && string__lt(key, node->keys[v_fixed_index(i, 11)]))) break;
			i--;
		}
		if (i != -1 && string__eq(key, node->keys[v_fixed_index(i, 11)])) {
			return true;
		}
		if (node->children == ((void*)0)) {
			break;
		}
		node = ((mapnode*)(node->children[(int)(i + 1)]));
	}
	return false;
}

VV_LOCAL_SYMBOL int mapnode_find_key(mapnode* n, string k) {
	int idx = 0;
	for (;;) {
		if (!(idx < n->len && string__lt(n->keys[v_fixed_index(idx, 11)], k))) break;
		idx++;
	}
	return idx;
}

VV_LOCAL_SYMBOL bool mapnode_remove_key(mapnode* n, string k) {
	int idx = mapnode_find_key(n, k);
	if (idx < n->len && string__eq(n->keys[v_fixed_index(idx, 11)], k)) {
		if (n->children == ((void*)0)) {
			mapnode_remove_from_leaf(n, idx);
		} else {
			mapnode_remove_from_non_leaf(n, idx);
		}
		return true;
	} else {
		if (n->children == ((void*)0)) {
			return false;
		}
		bool flag = (idx == n->len ? (true) : (false));
		if (((mapnode*)(n->children[idx]))->len < _const_degree) {
			mapnode_fill(n, idx);
		}
		mapnode* node = ((mapnode*)(((void*)0)));
		if (flag && idx > n->len) {
			node = ((mapnode*)(n->children[(int)(idx - 1)]));
		} else {
			node = ((mapnode*)(n->children[idx]));
		}
		return mapnode_remove_key(node, k);
	}
	return 0;
}

VV_LOCAL_SYMBOL void mapnode_remove_from_leaf(mapnode* n, int idx) {
	for (int i = (int)(idx + 1); i < n->len; i++) {
		n->keys[v_fixed_index((int)(i - 1), 11)] = n->keys[v_fixed_index(i, 11)];
		n->values[v_fixed_index((int)(i - 1), 11)] = n->values[v_fixed_index(i, 11)];
	}
	n->len--;
}

VV_LOCAL_SYMBOL void mapnode_remove_from_non_leaf(mapnode* n, int idx) {
	string k = n->keys[v_fixed_index(idx, 11)];
	if (((mapnode*)(n->children[idx]))->len >= _const_degree) {
		mapnode* current = ((mapnode*)(n->children[idx]));
		for (;;) {
			if (!(current->children != ((void*)0))) break;
			current = ((mapnode*)(current->children[current->len]));
		}
		string predecessor = current->keys[v_fixed_index((int)(current->len - 1), 11)];
		n->keys[v_fixed_index(idx, 11)] = predecessor;
		n->values[v_fixed_index(idx, 11)] = current->values[v_fixed_index((int)(current->len - 1), 11)];
		mapnode* node = ((mapnode*)(n->children[idx]));
		mapnode_remove_key(node, predecessor);
	} else if (((mapnode*)(n->children[(int)(idx + 1)]))->len >= _const_degree) {
		mapnode* current = ((mapnode*)(n->children[(int)(idx + 1)]));
		for (;;) {
			if (!(current->children != ((void*)0))) break;
			current = ((mapnode*)(current->children[0]));
		}
		string successor = current->keys[0];
		n->keys[v_fixed_index(idx, 11)] = successor;
		n->values[v_fixed_index(idx, 11)] = current->values[0];
		mapnode* node = ((mapnode*)(n->children[(int)(idx + 1)]));
		mapnode_remove_key(node, successor);
	} else {
		mapnode_merge(n, idx);
		mapnode* node = ((mapnode*)(n->children[idx]));
		mapnode_remove_key(node, k);
	}
}

VV_LOCAL_SYMBOL void mapnode_fill(mapnode* n, int idx) {
	if (idx != 0 && ((mapnode*)(n->children[(int)(idx - 1)]))->len >= _const_degree) {
		mapnode_borrow_from_prev(n, idx);
	} else if (idx != n->len && ((mapnode*)(n->children[(int)(idx + 1)]))->len >= _const_degree) {
		mapnode_borrow_from_next(n, idx);
	} else if (idx != n->len) {
		mapnode_merge(n, idx);
	} else {
		mapnode_merge(n, (int)(idx - 1));
	}
}

VV_LOCAL_SYMBOL void mapnode_borrow_from_prev(mapnode* n, int idx) {
	mapnode* child = ((mapnode*)(n->children[idx]));
	mapnode* sibling = ((mapnode*)(n->children[(int)(idx - 1)]));
	for (int i = (int)(child->len - 1); i >= 0; i--) {
		child->keys[v_fixed_index((int)(i + 1), 11)] = child->keys[v_fixed_index(i, 11)];
		child->values[v_fixed_index((int)(i + 1), 11)] = child->values[v_fixed_index(i, 11)];
	}
	if (child->children != ((void*)0)) {
		for (int i = child->len; i >= 0; i--) {
			{ // Unsafe block
				child->children[(int)(i + 1)] = child->children[i];
			}
		}
	}
	child->keys[0] = n->keys[v_fixed_index((int)(idx - 1), 11)];
	child->values[0] = n->values[v_fixed_index((int)(idx - 1), 11)];
	if (child->children != ((void*)0)) {
		{ // Unsafe block
			child->children[0] = sibling->children[sibling->len];
		}
	}
	n->keys[v_fixed_index((int)(idx - 1), 11)] = sibling->keys[v_fixed_index((int)(sibling->len - 1), 11)];
	n->values[v_fixed_index((int)(idx - 1), 11)] = sibling->values[v_fixed_index((int)(sibling->len - 1), 11)];
	child->len++;
	sibling->len--;
}

VV_LOCAL_SYMBOL void mapnode_borrow_from_next(mapnode* n, int idx) {
	mapnode* child = ((mapnode*)(n->children[idx]));
	mapnode* sibling = ((mapnode*)(n->children[(int)(idx + 1)]));
	child->keys[v_fixed_index(child->len, 11)] = n->keys[v_fixed_index(idx, 11)];
	child->values[v_fixed_index(child->len, 11)] = n->values[v_fixed_index(idx, 11)];
	if (child->children != ((void*)0)) {
		{ // Unsafe block
			child->children[(int)(child->len + 1)] = sibling->children[0];
		}
	}
	n->keys[v_fixed_index(idx, 11)] = sibling->keys[0];
	n->values[v_fixed_index(idx, 11)] = sibling->values[0];
	for (int i = 1; i < sibling->len; i++) {
		sibling->keys[v_fixed_index((int)(i - 1), 11)] = sibling->keys[v_fixed_index(i, 11)];
		sibling->values[v_fixed_index((int)(i - 1), 11)] = sibling->values[v_fixed_index(i, 11)];
	}
	if (sibling->children != ((void*)0)) {
		for (int i = 1; i <= sibling->len; i++) {
			{ // Unsafe block
				sibling->children[(int)(i - 1)] = sibling->children[i];
			}
		}
	}
	child->len++;
	sibling->len--;
}

VV_LOCAL_SYMBOL void mapnode_merge(mapnode* n, int idx) {
	mapnode* child = ((mapnode*)(n->children[idx]));
	mapnode* sibling = ((mapnode*)(n->children[(int)(idx + 1)]));
	child->keys[v_fixed_index(_const_mid_index, 11)] = n->keys[v_fixed_index(idx, 11)];
	child->values[v_fixed_index(_const_mid_index, 11)] = n->values[v_fixed_index(idx, 11)];
	for (int i = 0; i < sibling->len; ++i) {
		child->keys[v_fixed_index((int_literal)(i + _const_degree), 11)] = sibling->keys[v_fixed_index(i, 11)];
		child->values[v_fixed_index((int_literal)(i + _const_degree), 11)] = sibling->values[v_fixed_index(i, 11)];
	}
	if (child->children != ((void*)0)) {
		for (int i = 0; i <= sibling->len; i++) {
			{ // Unsafe block
				child->children[(int)(i + _const_degree)] = sibling->children[i];
			}
		}
	}
	for (int i = (int)(idx + 1); i < n->len; i++) {
		n->keys[v_fixed_index((int)(i - 1), 11)] = n->keys[v_fixed_index(i, 11)];
		n->values[v_fixed_index((int)(i - 1), 11)] = n->values[v_fixed_index(i, 11)];
	}
	for (int i = (int)(idx + 2); i <= n->len; i++) {
		{ // Unsafe block
			n->children[(int)(i - 1)] = n->children[i];
		}
	}
	child->len += (int)(sibling->len + 1);
	n->len--;
}

void SortedMap_delete(SortedMap* m, string key) {
	if (m->root->len == 0) {
		return;
	}
	bool removed = mapnode_remove_key(m->root, key);
	if (removed) {
		m->len--;
	}
	if (m->root->len == 0) {
		if (m->root->children == ((void*)0)) {
			return;
		} else {
			m->root = ((mapnode*)(m->root->children[0]));
		}
	}
}

VV_LOCAL_SYMBOL int mapnode_subkeys(mapnode* n, Array_string* keys, int at) {
	int position = at;
	if (n->children != ((void*)0)) {
		for (int i = 0; i < n->len; ++i) {
			mapnode* child = ((mapnode*)(n->children[i]));
			position += mapnode_subkeys(child, keys, position);
			array_set(keys, position, &(string[]) { n->keys[v_fixed_index(i, 11)] });
			position++;
		}
		mapnode* child = ((mapnode*)(n->children[n->len]));
		position += mapnode_subkeys(child, keys, position);
	} else {
		for (int i = 0; i < n->len; ++i) {
			array_set(keys, (int)(position + i), &(string[]) { n->keys[v_fixed_index(i, 11)] });
		}
		position += n->len;
	}
	return (int)(position - at);
}

Array_string SortedMap_keys(SortedMap* m) {
	Array_string keys = __new_array_with_default(m->len, 0, sizeof(string), &(string[]){_SLIT("")});
	if (m->root == ((void*)0) || m->root->len == 0) {
		return keys;
	}
	mapnode_subkeys(m->root, &/*arr*/keys, 0);
	return keys;
}

VV_LOCAL_SYMBOL void mapnode_free(mapnode* n) {
	println(_SLIT("TODO"));
}

void SortedMap_free(SortedMap* m) {
	if (m->root == ((void*)0)) {
		return;
	}
	mapnode_free(m->root);
}

void SortedMap_print(SortedMap m) {
	println(_SLIT("TODO"));
}

// Attr: [direct_array_access]
Array_rune string_runes(string s) {
	Array_rune runes = __new_array_with_default(0, s.len, sizeof(rune), 0);
	for (int i = 0; i < s.len; i++) {
		int char_len = utf8_char_len(s.str[i]);
		if (char_len > 1) {
			int end = ((int)(s.len - 1) >= (int)(i + char_len) ? ((int)(i + char_len)) : (s.len));
			string r = string_substr(s, i, end);
			array_push((array*)&runes, _MOV((rune[]){ string_utf32_code(r) }));
			i += (int)(char_len - 1);
		} else {
			array_push((array*)&runes, _MOV((rune[]){ s.str[i] }));
		}
	}
	return runes;
}

// Attr: [unsafe]
string cstring_to_vstring(char* s) {
	return string_clone(tos2(((u8*)(s))));
}

// Attr: [unsafe]
string tos_clone(u8* s) {
	return string_clone(tos2(s));
}

// Attr: [unsafe]
string tos(u8* s, int len) {
	if (s == 0) {
		_v_panic(_SLIT("tos(): nil string"));
		VUNREACHABLE();
	}
	return ((string){.str = s, .len = len});
}

// Attr: [unsafe]
string tos2(u8* s) {
	if (s == 0) {
		_v_panic(_SLIT("tos2: nil string"));
		VUNREACHABLE();
	}
	return ((string){.str = s, .len = vstrlen(s)});
}

// Attr: [unsafe]
string tos3(char* s) {
	if (s == 0) {
		_v_panic(_SLIT("tos3: nil string"));
		VUNREACHABLE();
	}
	return ((string){.str = ((u8*)(s)), .len = vstrlen_char(s)});
}

// Attr: [unsafe]
string tos4(u8* s) {
	if (s == 0) {
		return _SLIT("");
	}
	return ((string){.str = s, .len = vstrlen(s)});
}

// Attr: [unsafe]
string tos5(char* s) {
	if (s == 0) {
		return _SLIT("");
	}
	return ((string){.str = ((u8*)(s)), .len = vstrlen_char(s)});
}

// Attr: [unsafe]
string u8_vstring(u8* bp) {
	return ((string){.str = bp, .len = vstrlen(bp)});
}

// Attr: [unsafe]
string u8_vstring_with_len(u8* bp, int len) {
	return ((string){.str = bp, .len = len, .is_lit = 0});
}

// Attr: [unsafe]
string char_vstring(char* cp) {
	return ((string){.str = ((u8*)(cp)), .len = vstrlen_char(cp), .is_lit = 0});
}

// Attr: [unsafe]
string char_vstring_with_len(char* cp, int len) {
	return ((string){.str = ((u8*)(cp)), .len = len, .is_lit = 0});
}

// Attr: [unsafe]
string u8_vstring_literal(u8* bp) {
	return ((string){.str = bp, .len = vstrlen(bp), .is_lit = 1});
}

// Attr: [unsafe]
string u8_vstring_literal_with_len(u8* bp, int len) {
	return ((string){.str = bp, .len = len, .is_lit = 1});
}

// Attr: [unsafe]
string char_vstring_literal(char* cp) {
	return ((string){.str = ((u8*)(cp)), .len = vstrlen_char(cp), .is_lit = 1});
}

// Attr: [unsafe]
string char_vstring_literal_with_len(char* cp, int len) {
	return ((string){.str = ((u8*)(cp)), .len = len, .is_lit = 1});
}

int string_len_utf8(string s) {
	int l = 0;
	int i = 0;
	for (;;) {
		if (!(i < s.len)) break;
		l++;
		i += (int_literal)(((((0xe5000000 >> ((((s.str[i] >> 3)) & 0x1e)))) & 3)) + 1);
	}
	return l;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL string string_clone_static(string a) {
	return string_clone(a);
}

string string_clone(string a) {
	if (a.len == 0) {
		return _SLIT("");
	}
	string b = ((string){.str = malloc_noscan((int)(a.len + 1)), .len = a.len});
	{ // Unsafe block
		vmemcpy(b.str, a.str, a.len);
		b.str[a.len] = 0;
	}
	return b;
}

string string_replace_once(string s, string rep, string with) {
	int idx = string_index_(s, rep);
	if (idx == -1) {
		return string_clone(s);
	}
	return string__plus(string__plus(string_substr(s, 0, idx), with), string_substr(s, (int)(idx + rep.len), s.len));
}

// Attr: [direct_array_access]
string string_replace(string s, string rep, string with) {
	bool string_replace_defer_0 = false;
	Array_int idxs;
	if (s.len == 0 || rep.len == 0 || rep.len > s.len) {
		return string_clone(s);
	}
	if (!string_contains(s, rep)) {
		return string_clone(s);
	}
	idxs = __new_array_with_default(0, (int)(s.len / rep.len), sizeof(int), 0);
	string_replace_defer_0 = true;
	int idx = 0;
	for (;;) {
		idx = string_index_after(s, rep, idx);
		if (idx == -1) {
			break;
		}
		array_push((array*)&idxs, _MOV((int[]){ idx }));
		idx += rep.len;
	}
	if (idxs.len == 0) {
		string _t4 = string_clone(s);
			// Defer begin
			if (string_replace_defer_0) {
				array_free(&idxs);
			}
			// Defer end
		return _t4;
	}
	int new_len = (int)(s.len + (int)(idxs.len * ((int)(with.len - rep.len))));
	u8* b = malloc_noscan((int)(new_len + 1));
	int b_i = 0;
	int s_idx = 0;
	for (int _t5 = 0; _t5 < idxs.len; ++_t5) {
		int rep_pos = ((int*)idxs.data)[_t5];
		for (int i = s_idx; i < rep_pos; ++i) {
			{ // Unsafe block
				b[b_i] = s.str[ i];
			}
			b_i++;
		}
		s_idx = (int)(rep_pos + rep.len);
		for (int i = 0; i < with.len; ++i) {
			{ // Unsafe block
				b[b_i] = with.str[ i];
			}
			b_i++;
		}
	}
	if (s_idx < s.len) {
		for (int i = s_idx; i < s.len; ++i) {
			{ // Unsafe block
				b[b_i] = s.str[ i];
			}
			b_i++;
		}
	}
	{ // Unsafe block
		b[new_len] = 0;
		string _t6 = tos(b, new_len);
			// Defer begin
			if (string_replace_defer_0) {
				array_free(&idxs);
			}
			// Defer end
		return _t6;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
string string_replace_each(string s, Array_string vals) {
	if (s.len == 0 || vals.len == 0) {
		return string_clone(s);
	}
	if ((int)(vals.len % 2) != 0) {
		eprintln(_SLIT("string.replace_each(): odd number of strings"));
		return string_clone(s);
	}
	int new_len = s.len;
	Array_RepIndex idxs = __new_array_with_default(0, 6, sizeof(RepIndex), 0);
	int idx = 0;
	string s_ = string_clone(s);
	for (int rep_i = 0; rep_i < vals.len; rep_i += 2) {
		string rep = ((string*)vals.data)[rep_i];
		string with = ((string*)vals.data)[(int)(rep_i + 1)];
		for (;;) {
			idx = string_index_after(s_, rep, idx);
			if (idx == -1) {
				break;
			}
			for (int i = 0; i < rep.len; ++i) {
				{ // Unsafe block
					s_.str[(int)(idx + i)] = 127;
				}
			}
			array_push((array*)&idxs, _MOV((RepIndex[]){ ((RepIndex){.idx = idx,.val_idx = rep_i,}) }));
			idx += rep.len;
			new_len += (int)(with.len - rep.len);
		}
	}
	if (idxs.len == 0) {
		return string_clone(s);
	}
	qsort(idxs.data, idxs.len, idxs.element_size, (int (*)(const void *, const void *))&compare_17357643468967463433_RepIndex_by_idx);
	u8* b = malloc_noscan((int)(new_len + 1));
	int idx_pos = 0;
	RepIndex cur_idx = ((RepIndex*)idxs.data)[idx_pos];
	int b_i = 0;
	for (int i = 0; i < s.len; i++) {
		if (i == cur_idx.idx) {
			string rep = ((string*)vals.data)[cur_idx.val_idx];
			string with = ((string*)vals.data)[(int)(cur_idx.val_idx + 1)];
			for (int j = 0; j < with.len; ++j) {
				{ // Unsafe block
					b[b_i] = with.str[ j];
				}
				b_i++;
			}
			i += (int)(rep.len - 1);
			idx_pos++;
			if (idx_pos < idxs.len) {
				cur_idx = ((RepIndex*)idxs.data)[idx_pos];
			}
		} else {
			{ // Unsafe block
				b[b_i] = s.str[i];
			}
			b_i++;
		}
	}
	{ // Unsafe block
		b[new_len] = 0;
		return tos(b, new_len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
string string_replace_char(string s, u8 rep, u8 with, int repeat) {
	bool string_replace_char_defer_0 = false;
	Array_int idxs;
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (repeat <= 0) {
			_v_panic(_SLIT("string.replace_char(): tab length too short"));
			VUNREACHABLE();
		}
	}
	#endif
	if (s.len == 0) {
		return string_clone(s);
	}
	idxs = __new_array_with_default(0, s.len, sizeof(int), 0);
	string_replace_char_defer_0 = true;
	for (int i = 0; i < s.len; ++i) {
		u8 ch = s.str[i];
		if (ch == rep) {
			array_push((array*)&idxs, _MOV((int[]){ i }));
		}
	}
	if (idxs.len == 0) {
		string _t4 = string_clone(s);
			// Defer begin
			if (string_replace_char_defer_0) {
				array_free(&idxs);
			}
			// Defer end
		return _t4;
	}
	int new_len = (int)(s.len + (int)(idxs.len * ((int)(repeat - 1))));
	u8* b = malloc_noscan((int)(new_len + 1));
	int b_i = 0;
	int s_idx = 0;
	for (int _t5 = 0; _t5 < idxs.len; ++_t5) {
		int rep_pos = ((int*)idxs.data)[_t5];
		for (int i = s_idx; i < rep_pos; ++i) {
			{ // Unsafe block
				b[b_i] = s.str[ i];
			}
			b_i++;
		}
		s_idx = (int)(rep_pos + 1);
		for (int _t6 = 0; _t6 < repeat; ++_t6) {
			{ // Unsafe block
				b[b_i] = with;
			}
			b_i++;
		}
	}
	if (s_idx < s.len) {
		for (int i = s_idx; i < s.len; ++i) {
			{ // Unsafe block
				b[b_i] = s.str[ i];
			}
			b_i++;
		}
	}
	{ // Unsafe block
		b[new_len] = 0;
		string _t7 = tos(b, new_len);
			// Defer begin
			if (string_replace_char_defer_0) {
				array_free(&idxs);
			}
			// Defer end
		return _t7;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [inline]
inline string string_normalize_tabs(string s, int tab_len) {
	return string_replace_char(s, '\t', ' ', tab_len);
}

// Attr: [inline]
inline bool string_bool(string s) {
	return string__eq(s, _SLIT("true")) || string__eq(s, _SLIT("t"));
}

// Attr: [inline]
inline int string_int(string s) {
	_result_i64 _t2 = strconv__common_parse_int(s, 0, 32, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(i64*) _t2.data = 0;
	}
	
 	return ((int)( (*(i64*)_t2.data)));
}

// Attr: [inline]
inline i64 string_i64(string s) {
	_result_i64 _t2 = strconv__common_parse_int(s, 0, 64, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(i64*) _t2.data = 0;
	}
	
 	return  (*(i64*)_t2.data);
}

// Attr: [inline]
inline i8 string_i8(string s) {
	_result_i64 _t2 = strconv__common_parse_int(s, 0, 8, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(i64*) _t2.data = 0;
	}
	
 	return ((i8)( (*(i64*)_t2.data)));
}

// Attr: [inline]
inline i16 string_i16(string s) {
	_result_i64 _t2 = strconv__common_parse_int(s, 0, 16, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(i64*) _t2.data = 0;
	}
	
 	return ((i16)( (*(i64*)_t2.data)));
}

// Attr: [inline]
inline f32 string_f32(string s) {
	_result_f64 _t2 = strconv__atof64(s);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(f64*) _t2.data = 0;
	}
	
 	return ((f32)( (*(f64*)_t2.data)));
}

// Attr: [inline]
inline f64 string_f64(string s) {
	_result_f64 _t2 = strconv__atof64(s);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(f64*) _t2.data = 0;
	}
	
 	return  (*(f64*)_t2.data);
}

// Attr: [inline]
inline u8 string_u8(string s) {
	_result_u64 _t2 = strconv__common_parse_uint(s, 0, 8, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(u64*) _t2.data = 0U;
	}
	
 	return ((u8)( (*(u64*)_t2.data)));
}

// Attr: [inline]
inline u16 string_u16(string s) {
	_result_u64 _t2 = strconv__common_parse_uint(s, 0, 16, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(u64*) _t2.data = 0U;
	}
	
 	return ((u16)( (*(u64*)_t2.data)));
}

// Attr: [inline]
inline u32 string_u32(string s) {
	_result_u64 _t2 = strconv__common_parse_uint(s, 0, 32, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(u64*) _t2.data = 0U;
	}
	
 	return ((u32)( (*(u64*)_t2.data)));
}

// Attr: [inline]
inline u64 string_u64(string s) {
	_result_u64 _t2 = strconv__common_parse_uint(s, 0, 64, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(u64*) _t2.data = 0U;
	}
	
 	return  (*(u64*)_t2.data);
}

// Attr: [inline]
inline _result_u64 string_parse_uint(string s, int _base, int _bit_size) {
	_result_u64 _t1 = strconv__parse_uint(s, _base, _bit_size);
	return _t1;
}

// Attr: [inline]
inline _result_i64 string_parse_int(string s, int _base, int _bit_size) {
	_result_i64 _t1 = strconv__parse_int(s, _base, _bit_size);
	return _t1;
}

// Attr: [direct_array_access]
VV_LOCAL_SYMBOL bool string__eq(string s, string a) {
	if (s.str == 0) {
		_v_panic(_SLIT("string.eq(): nil string"));
		VUNREACHABLE();
	}
	if (s.len != a.len) {
		return false;
	}
	if (s.len > 0) {
		int last_idx = (int)(s.len - 1);
		if (s.str[ last_idx] != a.str[ last_idx]) {
			return false;
		}
	}
	{ // Unsafe block
		return vmemcmp(s.str, a.str, a.len) == 0;
	}
	return 0;
}

// Attr: [direct_array_access]
int string_compare(string s, string a) {
	int min_len = (s.len < a.len ? (s.len) : (a.len));
	for (int i = 0; i < min_len; ++i) {
		if (s.str[ i] < a.str[ i]) {
			return -1;
		}
		if (s.str[ i] > a.str[ i]) {
			return 1;
		}
	}
	if (s.len < a.len) {
		return -1;
	}
	if (s.len > a.len) {
		return 1;
	}
	return 0;
}

// Attr: [direct_array_access]
VV_LOCAL_SYMBOL bool string__lt(string s, string a) {
	for (int i = 0; i < s.len; ++i) {
		if (i >= a.len || s.str[ i] > a.str[ i]) {
			return false;
		} else if (s.str[ i] < a.str[ i]) {
			return true;
		}
	}
	if (s.len < a.len) {
		return true;
	}
	return false;
}

// Attr: [direct_array_access]
VV_LOCAL_SYMBOL string string__plus(string s, string a) {
	int new_len = (int)(a.len + s.len);
	string res = ((string){.str = malloc_noscan((int)(new_len + 1)), .len = new_len});
	{ // Unsafe block
		vmemcpy(res.str, s.str, s.len);
		vmemcpy(res.str + s.len, a.str, a.len);
	}
	{ // Unsafe block
		res.str[new_len] = 0;
	}
	return res;
}

// Attr: [direct_array_access]
Array_string string_split_any(string s, string delim) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	int i = 0;
	if (s.len > 0) {
		if (delim.len <= 0) {
			return string_split(s, _SLIT(""));
		}
		for (int index = 0; index < s.len; ++index) {
			u8 ch = s.str[index];
			for (int _t2 = 0; _t2 < delim.len; ++_t2) {
				u8 delim_ch = delim.str[_t2];
				if (ch == delim_ch) {
					array_push((array*)&res, _MOV((string[]){ string_substr(s, i, index) }));
					i = (int)(index + 1);
					break;
				}
			}
		}
		if (i < s.len) {
			array_push((array*)&res, _MOV((string[]){ string_substr(s, i, 2147483647) }));
		}
	}
	return res;
}

// Attr: [direct_array_access]
Array_string string_rsplit_any(string s, string delim) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	int i = (int)(s.len - 1);
	if (s.len > 0) {
		if (delim.len <= 0) {
			return string_rsplit(s, _SLIT(""));
		}
		int rbound = s.len;
		for (;;) {
			if (!(i >= 0)) break;
			for (int _t2 = 0; _t2 < delim.len; ++_t2) {
				u8 delim_ch = delim.str[_t2];
				if (s.str[ i] == delim_ch) {
					array_push((array*)&res, _MOV((string[]){ string_substr(s, (int)(i + 1), rbound) }));
					rbound = i;
					break;
				}
			}
			i--;
		}
		if (rbound > 0) {
			array_push((array*)&res, _MOV((string[]){ string_substr(s, 0, rbound) }));
		}
	}
	return res;
}

// Attr: [inline]
inline Array_string string_split(string s, string delim) {
	return string_split_nth(s, delim, 0);
}

// Attr: [inline]
inline Array_string string_rsplit(string s, string delim) {
	return string_rsplit_nth(s, delim, 0);
}

_option_multi_return_string_string string_split_once(string s, string delim) {
	Array_string result = string_split_nth(s, delim, 2);
	if (result.len != 2) {
		_option_multi_return_string_string _t1 = (_option_multi_return_string_string){ .state=2, .err=_const_none__, .data={EMPTY_STRUCT_INITIALIZATION} };
		return _t1;
	}
	_option_multi_return_string_string _t2;
	_option_ok(&(multi_return_string_string[]) { (multi_return_string_string){.arg0=(*(string*)array_get(result, 0)), .arg1=(*(string*)array_get(result, 1))} }, (_option*)(&_t2), sizeof(multi_return_string_string));
	return _t2;
}

_option_multi_return_string_string string_rsplit_once(string s, string delim) {
	Array_string result = string_rsplit_nth(s, delim, 2);
	if (result.len != 2) {
		_option_multi_return_string_string _t1 = (_option_multi_return_string_string){ .state=2, .err=_const_none__, .data={EMPTY_STRUCT_INITIALIZATION} };
		return _t1;
	}
	_option_multi_return_string_string _t2;
	_option_ok(&(multi_return_string_string[]) { (multi_return_string_string){.arg0=(*(string*)array_get(result, 1)), .arg1=(*(string*)array_get(result, 0))} }, (_option*)(&_t2), sizeof(multi_return_string_string));
	return _t2;
}

// Attr: [direct_array_access]
Array_string string_split_nth(string s, string delim, int nth) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	int i = 0;
	switch (delim.len) {
		case 0: {
				i = 1;
				for (int _t1 = 0; _t1 < s.len; ++_t1) {
					u8 ch = s.str[_t1];
					if (nth > 0 && i >= nth) {
						array_push((array*)&res, _MOV((string[]){ string_substr(s, (int)(i - 1), 2147483647) }));
						break;
					}
					array_push((array*)&res, _MOV((string[]){ u8_ascii_str(ch) }));
					i++;
				}
				return res;
		}
		case 1: {
				int start = 0;
				u8 delim_byte = delim.str[ 0];
				for (;;) {
					if (!(i < s.len)) break;
					if (s.str[ i] == delim_byte) {
						bool was_last = nth > 0 && res.len == (int)(nth - 1);
						if (was_last) {
							break;
						}
						string val = string_substr(s, start, i);
						array_push((array*)&res, _MOV((string[]){ val }));
						start = (int)(i + delim.len);
						i = start;
					} else {
						i++;
					}
				}
				if (nth < 1 || res.len < nth) {
					array_push((array*)&res, _MOV((string[]){ string_substr(s, start, 2147483647) }));
				}
				return res;
		}
		default: {
				int start = 0;
				for (;;) {
					if (!(i <= s.len)) break;
					bool is_delim = (int)(i + delim.len) <= s.len && string__eq(string_substr(s, i, (int)(i + delim.len)), delim);
					if (is_delim) {
						bool was_last = nth > 0 && res.len == (int)(nth - 1);
						if (was_last) {
							break;
						}
						string val = string_substr(s, start, i);
						array_push((array*)&res, _MOV((string[]){ val }));
						start = (int)(i + delim.len);
						i = start;
					} else {
						i++;
					}
				}
				if (nth < 1 || res.len < nth) {
					array_push((array*)&res, _MOV((string[]){ string_substr(s, start, 2147483647) }));
				}
				return res;
		}
	}
	
	return __new_array(0, 0, sizeof(string));
}

// Attr: [direct_array_access]
Array_string string_rsplit_nth(string s, string delim, int nth) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	int i = (int)(s.len - 1);
	switch (delim.len) {
		case 0: {
				for (;;) {
					if (!(i >= 0)) break;
					if (nth > 0 && res.len == (int)(nth - 1)) {
						array_push((array*)&res, _MOV((string[]){ string_substr(s, 0, (int)(i + 1)) }));
						break;
					}
					array_push((array*)&res, _MOV((string[]){ u8_ascii_str(s.str[ i]) }));
					i--;
				}
				return res;
		}
		case 1: {
				int rbound = s.len;
				u8 delim_byte = delim.str[ 0];
				for (;;) {
					if (!(i >= 0)) break;
					if (s.str[ i] == delim_byte) {
						if (nth > 0 && res.len == (int)(nth - 1)) {
							break;
						}
						array_push((array*)&res, _MOV((string[]){ string_substr(s, (int)(i + 1), rbound) }));
						rbound = i;
						i--;
					} else {
						i--;
					}
				}
				if (nth < 1 || res.len < nth) {
					array_push((array*)&res, _MOV((string[]){ string_substr(s, 0, rbound) }));
				}
				return res;
		}
		default: {
				int rbound = s.len;
				for (;;) {
					if (!(i >= 0)) break;
					bool is_delim = (int)(i - delim.len) >= 0 && string__eq(string_substr(s, (int)(i - delim.len), i), delim);
					if (is_delim) {
						if (nth > 0 && res.len == (int)(nth - 1)) {
							break;
						}
						array_push((array*)&res, _MOV((string[]){ string_substr(s, i, rbound) }));
						rbound = (int)(i - delim.len);
						i -= delim.len;
					} else {
						i--;
					}
				}
				if (nth < 1 || res.len < nth) {
					array_push((array*)&res, _MOV((string[]){ string_substr(s, 0, rbound) }));
				}
				return res;
		}
	}
	
	return __new_array(0, 0, sizeof(string));
}

// Attr: [direct_array_access]
Array_string string_split_into_lines(string s) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	if (s.len == 0) {
		return res;
	}
	rune cr = '\r';
	rune lf = '\n';
	int line_start = 0;
	for (int i = 0; i < s.len; i++) {
		if (line_start <= i) {
			if (s.str[ i] == lf) {
				array_push((array*)&res, _MOV((string[]){ (line_start == i ? (_SLIT("")) : (string_substr(s, line_start, i))) }));
				line_start = (int)(i + 1);
			} else if (s.str[ i] == cr) {
				array_push((array*)&res, _MOV((string[]){ (line_start == i ? (_SLIT("")) : (string_substr(s, line_start, i))) }));
				if (((int)(i + 1)) < s.len && s.str[ (int)(i + 1)] == lf) {
					line_start = (int)(i + 2);
				} else {
					line_start = (int)(i + 1);
				}
			}
		}
	}
	if (line_start < s.len) {
		array_push((array*)&res, _MOV((string[]){ string_substr(s, line_start, 2147483647) }));
	}
	return res;
}

// Attr: [direct_array_access]
string string_substr(string s, int start, int _end) {
	int end = (_end == _const_max_int ? (s.len) : (_end));
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (start > end || start > s.len || end > s.len || start < 0 || end < 0) {
			_v_panic( str_intp(4, _MOV((StrIntpData[]){{_SLIT("substr("), /*100 &int*/0xfe07, {.d_i32 = start}}, {_SLIT(", "), /*100 &int*/0xfe07, {.d_i32 = end}}, {_SLIT(") out of bounds (len="), /*100 &int*/0xfe07, {.d_i32 = s.len}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	#endif
	int len = (int)(end - start);
	if (len == s.len) {
		return string_clone(s);
	}
	string res = ((string){.str = malloc_noscan((int)(len + 1)), .len = len});
	{ // Unsafe block
		vmemcpy(res.str, s.str + start, len);
		res.str[len] = 0;
	}
	return res;
}

// Attr: [direct_array_access]
string string_substr_unsafe(string s, int start, int _end) {
	int end = (_end == 2147483647 ? (s.len) : (_end));
	int len = (int)(end - start);
	if (len == s.len) {
		return s;
	}
	return ((string){.str = s.str + start, .len = len});
}

// Attr: [direct_array_access]
_result_string string_substr_with_check(string s, int start, int _end) {
	int end = (_end == _const_max_int ? (s.len) : (_end));
	if (start > end || start > s.len || end > s.len || start < 0 || end < 0) {
		return (_result_string){ .is_error=true, .err=_v_error( str_intp(4, _MOV((StrIntpData[]){{_SLIT("substr("), /*100 &int*/0xfe07, {.d_i32 = start}}, {_SLIT(", "), /*100 &int*/0xfe07, {.d_i32 = end}}, {_SLIT(") out of bounds (len="), /*100 &int*/0xfe07, {.d_i32 = s.len}}, {_SLIT(")"), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int len = (int)(end - start);
	if (len == s.len) {
		_result_string _t2;
		_result_ok(&(string[]) { string_clone(s) }, (_result*)(&_t2), sizeof(string));
		return _t2;
	}
	string res = ((string){.str = malloc_noscan((int)(len + 1)), .len = len});
	{ // Unsafe block
		vmemcpy(res.str, s.str + start, len);
		res.str[len] = 0;
	}
	_result_string _t3;
	_result_ok(&(string[]) { res }, (_result*)(&_t3), sizeof(string));
	return _t3;
}

// Attr: [direct_array_access]
string string_substr_ni(string s, int _start, int _end) {
	int start = _start;
	int end = (_end == _const_max_int ? (s.len) : (_end));
	if (start < 0) {
		start = (int)(s.len + start);
		if (start < 0) {
			start = 0;
		}
	}
	if (end < 0) {
		end = (int)(s.len + end);
		if (end < 0) {
			end = 0;
		}
	}
	if (end >= s.len) {
		end = s.len;
	}
	if (start > s.len || end < start) {
		return _SLIT("");
	}
	int len = (int)(end - start);
	string res = ((string){.str = malloc_noscan((int)(len + 1)), .len = len});
	{ // Unsafe block
		vmemcpy(res.str, s.str + start, len);
		res.str[len] = 0;
	}
	return res;
}

// Attr: [direct_array_access]
VV_LOCAL_SYMBOL int string_index_(string s, string p) {
	if (p.len > s.len || p.len == 0) {
		return -1;
	}
	if (p.len > 2) {
		return string_index_kmp(s, p);
	}
	int i = 0;
	for (;;) {
		if (!(i < s.len)) break;
		int j = 0;
		for (;;) {
			if (!(j < p.len && s.str[(int)(i + j)] == p.str[j])) break;
			j++;
		}
		if (j == p.len) {
			return i;
		}
		i++;
	}
	return -1;
}

_option_int string_index(string s, string p) {
	int idx = string_index_(s, p);
	if (idx == -1) {
		return (_option_int){ .state=2, .err=_const_none__, .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_option_int _t2;
	_option_ok(&(int[]) { idx }, (_option*)(&_t2), sizeof(int));
	return _t2;
}

_option_int string_index_last(string s, string needle) {
	int idx = string_index_last_(s, needle);
	if (idx == -1) {
		return (_option_int){ .state=2, .err=_const_none__, .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_option_int _t2;
	_option_ok(&(int[]) { idx }, (_option*)(&_t2), sizeof(int));
	return _t2;
}

// Attr: [deprecated]
// Attr: [deprecated_after]
// Attr: [inline]
inline _option_int string_last_index(string s, string needle) {
	_option_int _t1 = string_index_last(s, needle);
	return _t1;
}

// Attr: [direct_array_access]
// Attr: [manualfree]
VV_LOCAL_SYMBOL int string_index_kmp(string s, string p) {
	bool string_index_kmp_defer_0 = false;
	Array_int prefix;
	if (p.len > s.len) {
		return -1;
	}
	prefix = __new_array_with_default(p.len, 0, sizeof(int), 0);
	string_index_kmp_defer_0 = true;
	int j = 0;
	for (int i = 1; i < p.len; i++) {
		for (;;) {
			if (!(p.str[j] != p.str[i] && j > 0)) break;
			j = ((int*)prefix.data)[(int)(j - 1)];
		}
		if (p.str[j] == p.str[i]) {
			j++;
		}
		((int*)prefix.data)[i] = j;
	}
	j = 0;
	for (int i = 0; i < s.len; ++i) {
		for (;;) {
			if (!(p.str[j] != s.str[i] && j > 0)) break;
			j = ((int*)prefix.data)[(int)(j - 1)];
		}
		if (p.str[j] == s.str[i]) {
			j++;
		}
		if (j == p.len) {
			int _t2 = (int)((int)(i - p.len) + 1);
				// Defer begin
				if (string_index_kmp_defer_0) {
					array_free(&prefix);
				}
				// Defer end
			return _t2;
		}
	}
	int _t3 = -1;
		// Defer begin
		if (string_index_kmp_defer_0) {
			array_free(&prefix);
		}
		// Defer end
	return _t3;
}

int string_index_any(string s, string chars) {
	for (int i = 0; i < s.len; ++i) {
		u8 ss = s.str[i];
		for (int _t1 = 0; _t1 < chars.len; ++_t1) {
			u8 c = chars.str[_t1];
			if (c == ss) {
				return i;
			}
		}
	}
	return -1;
}

// Attr: [direct_array_access]
VV_LOCAL_SYMBOL int string_index_last_(string s, string p) {
	if (p.len > s.len || p.len == 0) {
		return -1;
	}
	int i = (int)(s.len - p.len);
	for (;;) {
		if (!(i >= 0)) break;
		int j = 0;
		for (;;) {
			if (!(j < p.len && s.str[(int)(i + j)] == p.str[j])) break;
			j++;
		}
		if (j == p.len) {
			return i;
		}
		i--;
	}
	return -1;
}

// Attr: [direct_array_access]
int string_index_after(string s, string p, int start) {
	if (p.len > s.len) {
		return -1;
	}
	int strt = start;
	if (start < 0) {
		strt = 0;
	}
	if (start >= s.len) {
		return -1;
	}
	int i = strt;
	for (;;) {
		if (!(i < s.len)) break;
		int j = 0;
		int ii = i;
		for (;;) {
			if (!(j < p.len && s.str[ii] == p.str[j])) break;
			j++;
			ii++;
		}
		if (j == p.len) {
			return i;
		}
		i++;
	}
	return -1;
}

// Attr: [direct_array_access]
int string_index_u8(string s, u8 c) {
	for (int i = 0; i < s.len; ++i) {
		u8 b = s.str[i];
		if (b == c) {
			return i;
		}
	}
	return -1;
}

// Attr: [direct_array_access]
int string_index_u8_last(string s, u8 c) {
	for (int i = (int)(s.len - 1); i >= 0; i--) {
		if (s.str[i] == c) {
			return i;
		}
	}
	return -1;
}

// Attr: [deprecated]
// Attr: [deprecated_after]
// Attr: [inline]
inline int string_last_index_u8(string s, u8 c) {
	return string_index_u8_last(s, c);
}

// Attr: [direct_array_access]
int string_count(string s, string substr) {
	if (s.len == 0 || substr.len == 0) {
		return 0;
	}
	if (substr.len > s.len) {
		return 0;
	}
	int n = 0;
	if (substr.len == 1) {
		u8 target = substr.str[ 0];
		for (int _t3 = 0; _t3 < s.len; ++_t3) {
			u8 letter = s.str[_t3];
			if (letter == target) {
				n++;
			}
		}
		return n;
	}
	int i = 0;
	for (;;) {
		i = string_index_after(s, substr, i);
		if (i == -1) {
			return n;
		}
		i += substr.len;
		n++;
	}
	return 0;
}

bool string_contains_u8(string s, u8 x) {
	for (int _t1 = 0; _t1 < s.len; ++_t1) {
		u8 c = s.str[_t1];
		if (x == c) {
			return true;
		}
	}
	return false;
}

bool string_contains(string s, string substr) {
	if (substr.len == 0) {
		return true;
	}
	if (substr.len == 1) {
		return string_contains_u8(s, substr.str[0]);
	}
	return string_index_(s, substr) != -1;
}

bool string_contains_any(string s, string chars) {
	for (int _t1 = 0; _t1 < chars.len; ++_t1) {
		u8 c = chars.str[_t1];
		if (string_contains_u8(s, c)) {
			return true;
		}
	}
	return false;
}

bool string_contains_only(string s, string chars) {
	if (chars.len == 0) {
		return false;
	}
	for (int _t2 = 0; _t2 < s.len; ++_t2) {
		u8 ch = s.str[_t2];
		int res = 0;
		for (int i = 0; i < chars.len && res == 0; i++) {
			res += (int[]){(ch == chars.str[i])?1:0}[0];
		}
		if (res == 0) {
			return false;
		}
	}
	return true;
}

bool string_contains_any_substr(string s, Array_string substrs) {
	if (substrs.len == 0) {
		return true;
	}
	for (int _t2 = 0; _t2 < substrs.len; ++_t2) {
		string sub = ((string*)substrs.data)[_t2];
		if (string_contains(s, sub)) {
			return true;
		}
	}
	return false;
}

// Attr: [direct_array_access]
bool string_starts_with(string s, string p) {
	if (p.len > s.len) {
		return false;
	}
	for (int i = 0; i < p.len; ++i) {
		if (s.str[i] != p.str[i]) {
			return false;
		}
	}
	return true;
}

// Attr: [direct_array_access]
bool string_ends_with(string s, string p) {
	if (p.len > s.len) {
		return false;
	}
	for (int i = 0; i < p.len; ++i) {
		if (p.str[i] != s.str[(int)((int)(s.len - p.len) + i)]) {
			return false;
		}
	}
	return true;
}

// Attr: [direct_array_access]
string string_to_lower(string s) {
	{ // Unsafe block
		u8* b = malloc_noscan((int)(s.len + 1));
		for (int i = 0; i < s.len; ++i) {
			if (s.str[i] >= 'A' && s.str[i] <= 'Z') {
				b[i] = (u8)(s.str[i] + 32);
			} else {
				b[i] = s.str[i];
			}
		}
		b[s.len] = 0;
		return tos(b, s.len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
bool string_is_lower(string s) {
	for (int i = 0; i < s.len; ++i) {
		if (s.str[ i] >= 'A' && s.str[ i] <= 'Z') {
			return false;
		}
	}
	return true;
}

// Attr: [direct_array_access]
string string_to_upper(string s) {
	{ // Unsafe block
		u8* b = malloc_noscan((int)(s.len + 1));
		for (int i = 0; i < s.len; ++i) {
			if (s.str[i] >= 'a' && s.str[i] <= 'z') {
				b[i] = (u8)(s.str[i] - 32);
			} else {
				b[i] = s.str[i];
			}
		}
		b[s.len] = 0;
		return tos(b, s.len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
bool string_is_upper(string s) {
	for (int i = 0; i < s.len; ++i) {
		if (s.str[ i] >= 'a' && s.str[ i] <= 'z') {
			return false;
		}
	}
	return true;
}

// Attr: [direct_array_access]
string string_capitalize(string s) {
	if (s.len == 0) {
		return _SLIT("");
	}
	u8 s0 = s.str[ 0];
	string letter = u8_ascii_str(s0);
	string uletter = string_to_upper(letter);
	if (s.len == 1) {
		return uletter;
	}
	string srest = string_substr(s, 1, 2147483647);
	string res = string__plus(uletter, srest);
	return res;
}

// Attr: [direct_array_access]
string string_uncapitalize(string s) {
	if (s.len == 0) {
		return _SLIT("");
	}
	u8 s0 = s.str[ 0];
	string letter = u8_ascii_str(s0);
	string uletter = string_to_lower(letter);
	if (s.len == 1) {
		return uletter;
	}
	string srest = string_substr(s, 1, 2147483647);
	string res = string__plus(uletter, srest);
	return res;
}

// Attr: [direct_array_access]
bool string_is_capital(string s) {
	if (s.len == 0 || !(s.str[ 0] >= 'A' && s.str[ 0] <= 'Z')) {
		return false;
	}
	for (int i = 1; i < s.len; ++i) {
		if (s.str[ i] >= 'A' && s.str[ i] <= 'Z') {
			return false;
		}
	}
	return true;
}

// Attr: [direct_array_access]
bool string_starts_with_capital(string s) {
	if (s.len == 0 || !(s.str[ 0] >= 'A' && s.str[ 0] <= 'Z')) {
		return false;
	}
	return true;
}

string string_title(string s) {
	Array_string words = string_split(s, _SLIT(" "));
	Array_string tit = __new_array_with_default(0, 0, sizeof(string), 0);
	for (int _t1 = 0; _t1 < words.len; ++_t1) {
		string word = ((string*)words.data)[_t1];
		array_push((array*)&tit, _MOV((string[]){ string_capitalize(word) }));
	}
	string title = Array_string_join(tit, _SLIT(" "));
	return title;
}

bool string_is_title(string s) {
	Array_string words = string_split(s, _SLIT(" "));
	for (int _t1 = 0; _t1 < words.len; ++_t1) {
		string word = ((string*)words.data)[_t1];
		if (!string_is_capital(word)) {
			return false;
		}
	}
	return true;
}

string string_find_between(string s, string start, string end) {
	int start_pos = string_index_(s, start);
	if (start_pos == -1) {
		return _SLIT("");
	}
	string val = string_substr(s, (int)(start_pos + start.len), 2147483647);
	int end_pos = string_index_(val, end);
	if (end_pos == -1) {
		return val;
	}
	return string_substr(val, 0, end_pos);
}

// Attr: [inline]
inline string string_trim_space(string s) {
	return string_trim(s, _SLIT(" \n\t\v\f\r"));
}

string string_trim(string s, string cutset) {
	if (s.len < 1 || cutset.len < 1) {
		return string_clone(s);
	}
	multi_return_int_int mr_41487 = string_trim_indexes(s, cutset);
	int left = mr_41487.arg0;
	int right = mr_41487.arg1;
	return string_substr(s, left, right);
}

// Attr: [direct_array_access]
multi_return_int_int string_trim_indexes(string s, string cutset) {
	int pos_left = 0;
	int pos_right = (int)(s.len - 1);
	bool cs_match = true;
	for (;;) {
		if (!(pos_left <= s.len && pos_right >= -1 && cs_match)) break;
		cs_match = false;
		for (int _t1 = 0; _t1 < cutset.len; ++_t1) {
			u8 cs = cutset.str[_t1];
			if (s.str[ pos_left] == cs) {
				pos_left++;
				cs_match = true;
				break;
			}
		}
		for (int _t2 = 0; _t2 < cutset.len; ++_t2) {
			u8 cs = cutset.str[_t2];
			if (s.str[ pos_right] == cs) {
				pos_right--;
				cs_match = true;
				break;
			}
		}
		if (pos_left > pos_right) {
			return (multi_return_int_int){.arg0=0, .arg1=0};
		}
	}
	return (multi_return_int_int){.arg0=pos_left, .arg1=(int)(pos_right + 1)};
}

// Attr: [direct_array_access]
string string_trim_left(string s, string cutset) {
	if (s.len < 1 || cutset.len < 1) {
		return string_clone(s);
	}
	int pos = 0;
	for (;;) {
		if (!(pos < s.len)) break;
		bool found = false;
		for (int _t2 = 0; _t2 < cutset.len; ++_t2) {
			u8 cs = cutset.str[_t2];
			if (s.str[ pos] == cs) {
				found = true;
				break;
			}
		}
		if (!found) {
			break;
		}
		pos++;
	}
	return string_substr(s, pos, 2147483647);
}

// Attr: [direct_array_access]
string string_trim_right(string s, string cutset) {
	if (s.len < 1 || cutset.len < 1) {
		return string_clone(s);
	}
	int pos = (int)(s.len - 1);
	for (;;) {
		if (!(pos >= 0)) break;
		bool found = false;
		for (int _t2 = 0; _t2 < cutset.len; ++_t2) {
			u8 cs = cutset.str[_t2];
			if (s.str[ pos] == cs) {
				found = true;
			}
		}
		if (!found) {
			break;
		}
		pos--;
	}
	if (pos < 0) {
		return _SLIT("");
	}
	return string_substr(s, 0, (int)(pos + 1));
}

string string_trim_string_left(string s, string str) {
	if (string_starts_with(s, str)) {
		return string_substr(s, str.len, 2147483647);
	}
	return string_clone(s);
}

string string_trim_string_right(string s, string str) {
	if (string_ends_with(s, str)) {
		return string_substr(s, 0, (int)(s.len - str.len));
	}
	return string_clone(s);
}

int compare_strings(string* a, string* b) {
	if (string__lt(*a, *b)) {
		return -1;
	}
	if (string__lt(*b, *a)) {
		return 1;
	}
	return 0;
}

VV_LOCAL_SYMBOL int compare_strings_by_len(string* a, string* b) {
	if (a->len < b->len) {
		return -1;
	}
	if (a->len > b->len) {
		return 1;
	}
	return 0;
}

VV_LOCAL_SYMBOL int compare_lower_strings(string* a, string* b) {
	string aa = string_to_lower(/*rec*/*a);
	string bb = string_to_lower(/*rec*/*b);
	return compare_strings(&aa, &bb);
}

// Attr: [inline]
inline void Array_string_sort_ignore_case(Array_string* s) {
	array_sort_with_compare(s, (voidptr)compare_lower_strings);
}

// Attr: [inline]
inline void Array_string_sort_by_len(Array_string* s) {
	array_sort_with_compare(s, (voidptr)compare_strings_by_len);
}

// Attr: [inline]
inline string string_str(string s) {
	return string_clone(s);
}

VV_LOCAL_SYMBOL u8 string_at(string s, int idx) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (idx < 0 || idx >= s.len) {
			_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT("string index out of range: "), /*100 &int*/0xfe07, {.d_i32 = idx}}, {_SLIT(" / "), /*100 &int*/0xfe07, {.d_i32 = s.len}}, {_SLIT0, 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	#endif
	return s.str[idx];
}

VV_LOCAL_SYMBOL _option_u8 string_at_with_check(string s, int idx) {
	if (idx < 0 || idx >= s.len) {
		return (_option_u8){ .state=2, .err=_const_none__, .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	{ // Unsafe block
		_option_u8 _t2;
		_option_ok(&(u8[]) { s.str[idx] }, (_option*)(&_t2), sizeof(u8));
		return _t2;
	}
	return (_option_u8){0};
}

// Attr: [inline]
inline bool u8_is_space(u8 c) {
	return c == 32 || (c > 8 && c < 14) || c == 0x85 || c == 0xa0;
}

// Attr: [inline]
inline bool u8_is_digit(u8 c) {
	return c >= '0' && c <= '9';
}

// Attr: [inline]
inline bool u8_is_hex_digit(u8 c) {
	return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

// Attr: [inline]
inline bool u8_is_oct_digit(u8 c) {
	return c >= '0' && c <= '7';
}

// Attr: [inline]
inline bool u8_is_bin_digit(u8 c) {
	return c == '0' || c == '1';
}

// Attr: [inline]
inline bool u8_is_letter(u8 c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

// Attr: [inline]
inline bool u8_is_alnum(u8 c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

// Attr: [manualfree]
// Attr: [unsafe]
void string_free(string* s) {
	if (s->is_lit == -98761234) {
		u8* double_free_msg = ((u8*)("double string.free() detected\n"));
		int double_free_msg_len = vstrlen(double_free_msg);
		#if defined(_VFREESTANDING)
		{
		}
		#else
		{
			_write_buf_to_fd(1, double_free_msg, double_free_msg_len);
		}
		#endif
		return;
	}
	if (s->is_lit == 1 || s->str == 0) {
		return;
	}
	{ // Unsafe block
		_v_free(s->str);
		s->str = ((void*)0);
	}
	s->is_lit = -98761234;
}

string string_before(string s, string sub) {
	int pos = string_index_(s, sub);
	if (pos == -1) {
		return string_clone(s);
	}
	return string_substr(s, 0, pos);
}

string string_all_before(string s, string sub) {
	int pos = string_index_(s, sub);
	if (pos == -1) {
		return string_clone(s);
	}
	return string_substr(s, 0, pos);
}

string string_all_before_last(string s, string sub) {
	int pos = string_index_last_(s, sub);
	if (pos == -1) {
		return string_clone(s);
	}
	return string_substr(s, 0, pos);
}

string string_all_after(string s, string sub) {
	int pos = string_index_(s, sub);
	if (pos == -1) {
		return string_clone(s);
	}
	return string_substr(s, (int)(pos + sub.len), 2147483647);
}

string string_all_after_last(string s, string sub) {
	int pos = string_index_last_(s, sub);
	if (pos == -1) {
		return string_clone(s);
	}
	return string_substr(s, (int)(pos + sub.len), 2147483647);
}

string string_all_after_first(string s, string sub) {
	int pos = string_index_(s, sub);
	if (pos == -1) {
		return string_clone(s);
	}
	return string_substr(s, (int)(pos + sub.len), 2147483647);
}

// Attr: [inline]
inline string string_after(string s, string sub) {
	return string_all_after_last(s, sub);
}

string string_after_char(string s, u8 sub) {
	int pos = -1;
	for (int i = 0; i < s.len; ++i) {
		u8 c = s.str[i];
		if (c == sub) {
			pos = i;
			break;
		}
	}
	if (pos == -1) {
		return string_clone(s);
	}
	return string_substr(s, (int)(pos + 1), 2147483647);
}

string Array_string_join(Array_string a, string sep) {
	if (a.len == 0) {
		return _SLIT("");
	}
	int len = 0;
	for (int _t2 = 0; _t2 < a.len; ++_t2) {
		string val = ((string*)a.data)[_t2];
		len += (int)(val.len + sep.len);
	}
	len -= sep.len;
	string res = ((string){.str = malloc_noscan((int)(len + 1)), .len = len});
	int idx = 0;
	for (int i = 0; i < a.len; ++i) {
		string val = ((string*)a.data)[i];
		{ // Unsafe block
			vmemcpy(((voidptr)(res.str + idx)), val.str, val.len);
			idx += val.len;
		}
		if (i != (int)(a.len - 1)) {
			{ // Unsafe block
				vmemcpy(((voidptr)(res.str + idx)), sep.str, sep.len);
				idx += sep.len;
			}
		}
	}
	{ // Unsafe block
		res.str[res.len] = 0;
	}
	return res;
}

// Attr: [inline]
inline string Array_string_join_lines(Array_string s) {
	return Array_string_join(s, _SLIT("\n"));
}

// Attr: [direct_array_access]
string string_reverse(string s) {
	if (s.len == 0 || s.len == 1) {
		return string_clone(s);
	}
	string res = ((string){.str = malloc_noscan((int)(s.len + 1)), .len = s.len});
	for (int i = (int)(s.len - 1); i >= 0; i--) {
		{ // Unsafe block
			res.str[(int)((int)(s.len - i) - 1)] = s.str[ i];
		}
	}
	{ // Unsafe block
		res.str[res.len] = 0;
	}
	return res;
}

string string_limit(string s, int max) {
	Array_rune u = string_runes(s);
	if (u.len <= max) {
		return string_clone(s);
	}
	return Array_rune_string(array_slice(u, 0, max));
}

int string_hash(string s) {
	u32 h = ((u32)(0U));
	if (h == 0U && s.len > 0) {
		for (int _t1 = 0; _t1 < s.len; ++_t1) {
			u8 c = s.str[_t1];
			h = (u32)((u32)(h * 31U) + ((u32)(c)));
		}
	}
	return ((int)(h));
}

Array_u8 string_bytes(string s) {
	if (s.len == 0) {
		return __new_array_with_default(0, 0, sizeof(u8), 0);
	}
	Array_u8 buf = __new_array_with_default(s.len, 0, sizeof(u8), 0);
	vmemcpy(buf.data, s.str, s.len);
	return buf;
}

// Attr: [direct_array_access]
string string_repeat(string s, int count) {
	if (count < 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("string.repeat: count is negative: "), /*100 &int*/0xfe07, {.d_i32 = count}}, {_SLIT0, 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	} else if (count == 0) {
		return _SLIT("");
	} else if (count == 1) {
		return string_clone(s);
	}
	u8* ret = malloc_noscan((int)((int)(s.len * count) + 1));
	for (int i = 0; i < count; ++i) {
		vmemcpy(ret + (int)(i * s.len), s.str, s.len);
	}
	int new_len = (int)(s.len * count);
	{ // Unsafe block
		ret[new_len] = 0;
	}
	return u8_vstring_with_len(ret, new_len);
}

Array_string string_fields(string s) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	int word_start = 0;
	int word_len = 0;
	bool is_in_word = false;
	bool is_space = false;
	for (int i = 0; i < s.len; ++i) {
		u8 c = s.str[i];
		is_space = (c == 32 || c == 9 || c == 10);
		if (!is_space) {
			word_len++;
		}
		if (!is_in_word && !is_space) {
			word_start = i;
			is_in_word = true;
			continue;
		}
		if (is_space && is_in_word) {
			array_push((array*)&res, _MOV((string[]){ string_substr(s, word_start, (int)(word_start + word_len)) }));
			is_in_word = false;
			word_len = 0;
			word_start = 0;
			continue;
		}
	}
	if (is_in_word && word_len > 0) {
		array_push((array*)&res, _MOV((string[]){ string_substr(s, word_start, s.len) }));
	}
	return res;
}

// Attr: [inline]
inline string string_strip_margin(string s) {
	return string_strip_margin_custom(s, '|');
}

// Attr: [direct_array_access]
string string_strip_margin_custom(string s, u8 del) {
	u8 sep = del;
	if (u8_is_space(sep)) {
		println(_SLIT("Warning: `strip_margin` cannot use white-space as a delimiter"));
		println(_SLIT("    Defaulting to `|`"));
		sep = '|';
	}
	u8* ret = malloc_noscan((int)(s.len + 1));
	int count = 0;
	for (int i = 0; i < s.len; i++) {
		if (s.str[ i] == 10 || s.str[ i] == 13) {
			{ // Unsafe block
				ret[count] = s.str[ i];
			}
			count++;
			if (s.str[ i] == 13 && i < (int)(s.len - 1) && s.str[ (int)(i + 1)] == 10) {
				{ // Unsafe block
					ret[count] = s.str[ (int)(i + 1)];
				}
				count++;
				i++;
			}
			for (;;) {
				if (!(s.str[ i] != sep)) break;
				i++;
				if (i >= s.len) {
					break;
				}
			}
		} else {
			{ // Unsafe block
				ret[count] = s.str[ i];
			}
			count++;
		}
	}
	{ // Unsafe block
		ret[count] = 0;
		return u8_vstring_with_len(ret, count);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

string string_trim_indent(string s) {
	Array_string lines = string_split_into_lines(s);
	Array_string _t3 = {0};
	Array_string _t3_orig = lines;
	int _t3_len = _t3_orig.len;
	_t3 = __new_array(0, _t3_len, sizeof(string));

	for (int _t4 = 0; _t4 < _t3_len; ++_t4) {
		string it = ((string*) _t3_orig.data)[_t4];
		if (!string_is_blank(it)) {
			array_push((array*)&_t3, &it);
		}
	}
	Array_int _t1 = {0};
	Array_string _t1_orig =_t3;
	int _t1_len = _t1_orig.len;
	_t1 = __new_array(0, _t1_len, sizeof(int));

	for (int _t5 = 0; _t5 < _t1_len; ++_t5) {
		string it = ((string*) _t1_orig.data)[_t5];
		int _t2 = string_indent_width(it);
		array_push((array*)&_t1, &_t2);
	}
	Array_int lines_indents =_t1;
	int min_common_indent = ((int)(_const_max_int));
	for (int _t6 = 0; _t6 < lines_indents.len; ++_t6) {
		int line_indent = ((int*)lines_indents.data)[_t6];
		if (line_indent < min_common_indent) {
			min_common_indent = line_indent;
		}
	}
	if (lines.len > 0 && string_is_blank((*(string*)array_first(lines)))) {
		lines = array_slice(lines, 1, 2147483647);
	}
	if (lines.len > 0 && string_is_blank((*(string*)array_last(lines)))) {
		lines = array_slice(lines, 0, (int)(lines.len - 1));
	}
	Array_string trimmed_lines = __new_array_with_default(0, lines.len, sizeof(string), 0);
	for (int _t7 = 0; _t7 < lines.len; ++_t7) {
		string line = ((string*)lines.data)[_t7];
		if (string_is_blank(line)) {
			array_push((array*)&trimmed_lines, _MOV((string[]){ line }));
			continue;
		}
		array_push((array*)&trimmed_lines, _MOV((string[]){ string_substr(line, min_common_indent, 2147483647) }));
	}
	return Array_string_join(trimmed_lines, _SLIT("\n"));
}

int string_indent_width(string s) {
	for (int i = 0; i < s.len; ++i) {
		u8 c = s.str[i];
		if (!u8_is_space(c)) {
			return i;
		}
	}
	return 0;
}

bool string_is_blank(string s) {
	if (s.len == 0) {
		return true;
	}
	for (int _t2 = 0; _t2 < s.len; ++_t2) {
		u8 c = s.str[_t2];
		if (!u8_is_space(c)) {
			return false;
		}
	}
	return true;
}

// Attr: [direct_array_access]
bool string_match_glob(string name, string pattern) {
	int px = 0;
	int nx = 0;
	int next_px = 0;
	int next_nx = 0;
	int plen = pattern.len;
	int nlen = name.len;
	for (;;) {
		if (!(px < plen || nx < nlen)) break;
		if (px < plen) {
			u8 c = pattern.str[ px];

			if (c == ('?')) {
				if (nx < nlen) {
					px++;
					nx++;
					continue;
				}
			}
			else if (c == ('*')) {
				next_px = px;
				next_nx = (int)(nx + 1);
				px++;
				continue;
			}
			else if (c == ('[')) {
				if (nx < nlen) {
					u8 wanted_c = name.str[ nx];
					int bstart = px;
					bool is_inverted = false;
					bool inner_match = false;
					int inner_idx = (int)(bstart + 1);
					int inner_c = 0;
					if (inner_idx < plen) {
						inner_c = pattern.str[ inner_idx];
						if (inner_c == '^') {
							is_inverted = true;
							inner_idx++;
						}
					}
					for (; inner_idx < plen; inner_idx++) {
						inner_c = pattern.str[ inner_idx];
						if (inner_c == ']') {
							break;
						}
						if (inner_c == wanted_c) {
							inner_match = true;
							for (;;) {
								if (!(px < plen && pattern.str[ px] != ']')) break;
								px++;
							}
							break;
						}
					}
					if (is_inverted) {
						if (inner_match) {
							return false;
						} else {
							px = inner_idx;
						}
					}
				}
				px++;
				nx++;
				continue;
			}
			else {
				if (nx < nlen && name.str[ nx] == c) {
					px++;
					nx++;
					continue;
				}
			}
		}
		if (0 < next_nx && next_nx <= nlen) {
			px = next_px;
			nx = next_nx;
			continue;
		}
		return false;
	}
	return true;
}

// Attr: [inline]
inline bool string_is_ascii(string s) {
	bool _t2 = false;
	Array_u8 _t2_orig = string_bytes(s);
	int _t2_len = _t2_orig.len;
	for (int _t3 = 0; _t3 < _t2_len; ++_t3) {
		u8 it = ((u8*) _t2_orig.data)[_t3];
		if (it < ((u8)(' ')) || it > ((u8)('~'))) {
			_t2 = true;
			break;
		}
	}
	return !_t2;
}

// Attr: [unsafe]
Array_u8 byteptr_vbytes(byteptr data, int len) {
	return voidptr_vbytes(((voidptr)(data)), len);
}

// Attr: [unsafe]
string byteptr_vstring(byteptr bp) {
	return ((string){.str = bp, .len = vstrlen(bp)});
}

// Attr: [unsafe]
string byteptr_vstring_with_len(byteptr bp, int len) {
	return ((string){.str = bp, .len = len, .is_lit = 0});
}

// Attr: [unsafe]
string charptr_vstring(charptr cp) {
	return ((string){.str = ((byteptr)(cp)), .len = vstrlen_char(cp), .is_lit = 0});
}

// Attr: [unsafe]
string charptr_vstring_with_len(charptr cp, int len) {
	return ((string){.str = ((byteptr)(cp)), .len = len, .is_lit = 0});
}

// Attr: [unsafe]
string byteptr_vstring_literal(byteptr bp) {
	return ((string){.str = bp, .len = vstrlen(bp), .is_lit = 1});
}

// Attr: [unsafe]
string byteptr_vstring_literal_with_len(byteptr bp, int len) {
	return ((string){.str = bp, .len = len, .is_lit = 1});
}

// Attr: [unsafe]
string charptr_vstring_literal(charptr cp) {
	return ((string){.str = ((byteptr)(cp)), .len = vstrlen_char(cp), .is_lit = 1});
}

// Attr: [unsafe]
string charptr_vstring_literal_with_len(charptr cp, int len) {
	return ((string){.str = ((byteptr)(cp)), .len = len, .is_lit = 1});
}

string StrIntpType_str(StrIntpType x) {
	string _t2 = (string){.str=(byteptr)"", .is_lit=1};
	switch (x) {
		case StrIntpType__si_no_str: {
				_t2 = _SLIT("no_str");
				break;
		}
		case StrIntpType__si_c: {
				_t2 = _SLIT("c");
				break;
		}
		case StrIntpType__si_u8: {
				_t2 = _SLIT("u8");
				break;
		}
		case StrIntpType__si_i8: {
				_t2 = _SLIT("i8");
				break;
		}
		case StrIntpType__si_u16: {
				_t2 = _SLIT("u16");
				break;
		}
		case StrIntpType__si_i16: {
				_t2 = _SLIT("i16");
				break;
		}
		case StrIntpType__si_u32: {
				_t2 = _SLIT("u32");
				break;
		}
		case StrIntpType__si_i32: {
				_t2 = _SLIT("i32");
				break;
		}
		case StrIntpType__si_u64: {
				_t2 = _SLIT("u64");
				break;
		}
		case StrIntpType__si_i64: {
				_t2 = _SLIT("i64");
				break;
		}
		case StrIntpType__si_f32: {
				_t2 = _SLIT("f32");
				break;
		}
		case StrIntpType__si_f64: {
				_t2 = _SLIT("f64");
				break;
		}
		case StrIntpType__si_g32: {
				_t2 = _SLIT("f32");
				break;
		}
		case StrIntpType__si_g64: {
				_t2 = _SLIT("f64");
				break;
		}
		case StrIntpType__si_e32: {
				_t2 = _SLIT("f32");
				break;
		}
		case StrIntpType__si_e64: {
				_t2 = _SLIT("f64");
				break;
		}
		case StrIntpType__si_s: {
				_t2 = _SLIT("s");
				break;
		}
		case StrIntpType__si_p: {
				_t2 = _SLIT("p");
				break;
		}
		case StrIntpType__si_r: {
				_t2 = _SLIT("r");
				break;
		}
		case StrIntpType__si_vp: {
				_t2 = _SLIT("vp");
				break;
		}
	}
	return _t2;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL f32 fabs32(f32 x) {
	return (x < 0 ? (-x) : (x));
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL f64 fabs64(f64 x) {
	return (x < 0 ? (-x) : (x));
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL u64 abs64(i64 x) {
	return (x < 0 ? (((u64)(-x))) : (((u64)(x))));
}

u64 get_str_intp_u64_format(StrIntpType fmt_type, int in_width, int in_precision, bool in_tail_zeros, bool in_sign, u8 in_pad_ch, int in_base, bool in_upper_case) {
	u64 width = (in_width != 0 ? (abs64(in_width)) : (((u64)(0U))));
	u64 align = (in_width > 0 ? (((u64)(32U))) : (((u64)(0U))));
	u64 upper_case = (in_upper_case ? (((u64)(128U))) : (((u64)(0U))));
	u64 sign = (in_sign ? (((u64)(256U))) : (((u64)(0U))));
	u64 precision = (in_precision != 987698 ? (((((u64)((in_precision & 0x7F))) << 9U))) : ((((u64)(0x7FU)) << 9U)));
	u32 tail_zeros = (in_tail_zeros ? ((((u32)(1U)) << 16U)) : (((u32)(0U))));
	u64 base = ((u64)((((u32)((in_base & 0xf))) << 27U)));
	u64 res = ((u64)(((((((((((((u64)(fmt_type)) & 0x1FU)) | align) | upper_case) | sign) | precision) | tail_zeros) | ((((u64)((width & 0x3FFU))) << 17U))) | base) | ((((u64)(in_pad_ch)) << 31U)))));
	return res;
}

u32 get_str_intp_u32_format(StrIntpType fmt_type, int in_width, int in_precision, bool in_tail_zeros, bool in_sign, u8 in_pad_ch, int in_base, bool in_upper_case) {
	u64 width = (in_width != 0 ? (abs64(in_width)) : (((u32)(0U))));
	u32 align = (in_width > 0 ? (((u32)(32U))) : (((u32)(0U))));
	u32 upper_case = (in_upper_case ? (((u32)(128U))) : (((u32)(0U))));
	u32 sign = (in_sign ? (((u32)(256U))) : (((u32)(0U))));
	u32 precision = (in_precision != 987698 ? (((((u32)((in_precision & 0x7F))) << 9U))) : ((((u32)(0x7FU)) << 9U)));
	u32 tail_zeros = (in_tail_zeros ? ((((u32)(1U)) << 16U)) : (((u32)(0U))));
	u32 base = ((u32)((((u32)((in_base & 0xf))) << 27U)));
	u32 res = ((u32)(((((((((((((u32)(fmt_type)) & 0x1FU)) | align) | upper_case) | sign) | precision) | tail_zeros) | ((((u32)((width & 0x3FFU))) << 17U))) | base) | ((((u32)((in_pad_ch & 1))) << 31U)))));
	return res;
}

// Attr: [manualfree]
VV_LOCAL_SYMBOL void StrIntpData_process_str_intp_data(StrIntpData* data, strings__Builder* sb) {
	u32 x = data->fmt;
	StrIntpType typ = ((StrIntpType)((x & 0x1FU)));
	int align = ((int)((((x >> 5U)) & 0x01U)));
	bool upper_case = ((((x >> 7U)) & 0x01U)) > 0U;
	int sign = ((int)((((x >> 8U)) & 0x01U)));
	int precision = ((int)((((x >> 9U)) & 0x7FU)));
	bool tail_zeros = ((((x >> 16U)) & 0x01U)) > 0U;
	int width = ((int)(((i16)((((x >> 17U)) & 0x3FFU)))));
	int base = (((int)((x >> 27U))) & 0xF);
	u8 fmt_pad_ch = ((u8)((((x >> 31U)) & 0xFFU)));
	if (typ == StrIntpType__si_no_str) {
		return;
	}
	if (base > 0) {
		base += 2;
	}
	u8 pad_ch = ((u8)(' '));
	if (fmt_pad_ch > 0) {
		pad_ch = '0';
	}
	int len0_set = (width > 0 ? (width) : (-1));
	int len1_set = (precision == 0x7F ? (-1) : (precision));
	bool sign_set = sign == 1;
	strconv__BF_param bf = ((strconv__BF_param){
		.pad_ch = pad_ch,
		.len0 = len0_set,
		.len1 = len1_set,
		.positive = true,
		.sign_flag = sign_set,
		.align = strconv__Align_text__left,
		.allign = strconv__Align_text__right,
		.rm_tail_zero = tail_zeros,
	});
	if (fmt_pad_ch == 0) {
		switch (align) {
			case 0: {
					bf.align = strconv__Align_text__left;
					break;
			}
			case 1: {
					bf.align = strconv__Align_text__right;
					break;
			}
			default: {
					bf.align = strconv__Align_text__left;
					break;
			}
		}
		
	} else {
		bf.align = strconv__Align_text__right;
	}
	{ // Unsafe block
		if (typ == StrIntpType__si_s) {
			string s = _SLIT("");
			if (upper_case) {
				s = string_to_upper(data->d.d_s);
			} else {
				s = string_clone(data->d.d_s);
			}
			if (width == 0) {
				strings__Builder_write_string(sb, s);
			} else {
				strconv__format_str_sb(s, bf, sb);
			}
			string_free(&s);
			return;
		}
		if (typ == StrIntpType__si_r) {
			if (width > 0) {
				string s = _SLIT("");
				if (upper_case) {
					s = string_to_upper(data->d.d_s);
				} else {
					s = string_clone(data->d.d_s);
				}
				for (int _t1 = 1; _t1 < ((int)(1 + ((width > 0 ? (width) : (0))))); ++_t1) {
					strings__Builder_write_string(sb, s);
				}
				string_free(&s);
			}
			return;
		}
		if (typ == StrIntpType__si_i8 || typ == StrIntpType__si_i16 || typ == StrIntpType__si_i32 || typ == StrIntpType__si_i64) {
			i64 d = data->d.d_i64;
			if (typ == StrIntpType__si_i8) {
				d = ((i64)(data->d.d_i8));
			} else if (typ == StrIntpType__si_i16) {
				d = ((i64)(data->d.d_i16));
			} else if (typ == StrIntpType__si_i32) {
				d = ((i64)(data->d.d_i32));
			}
			if (base == 0) {
				if (width == 0) {
					string d_str = i64_str(d);
					strings__Builder_write_string(sb, d_str);
					string_free(&d_str);
					return;
				}
				if (d < 0) {
					bf.positive = false;
				}
				strconv__format_dec_sb(abs64(d), bf, sb);
			} else {
				if (base == 3) {
					base = 2;
				}
				i64 absd = d;
				bool write_minus = false;
				if (d < 0 && pad_ch != ' ') {
					absd = -d;
					write_minus = true;
				}
				string hx = strconv__format_int(absd, base);
				if (upper_case) {
					string tmp = hx;
					hx = string_to_upper(hx);
					string_free(&tmp);
				}
				if (write_minus) {
					strings__Builder_write_u8(sb, '-');
					bf.len0--;
				}
				if (width == 0) {
					strings__Builder_write_string(sb, hx);
				} else {
					strconv__format_str_sb(hx, bf, sb);
				}
				string_free(&hx);
			}
			return;
		}
		if (typ == StrIntpType__si_u8 || typ == StrIntpType__si_u16 || typ == StrIntpType__si_u32 || typ == StrIntpType__si_u64) {
			u64 d = data->d.d_u64;
			if (typ == StrIntpType__si_u8) {
				d = ((u64)(data->d.d_u8));
			} else if (typ == StrIntpType__si_u16) {
				d = ((u64)(data->d.d_u16));
			} else if (typ == StrIntpType__si_u32) {
				d = ((u64)(data->d.d_u32));
			}
			if (base == 0) {
				if (width == 0) {
					string d_str = u64_str(d);
					strings__Builder_write_string(sb, d_str);
					string_free(&d_str);
					return;
				}
				strconv__format_dec_sb(d, bf, sb);
			} else {
				if (base == 3) {
					base = 2;
				}
				string hx = strconv__format_uint(d, base);
				if (upper_case) {
					string tmp = hx;
					hx = string_to_upper(hx);
					string_free(&tmp);
				}
				if (width == 0) {
					strings__Builder_write_string(sb, hx);
				} else {
					strconv__format_str_sb(hx, bf, sb);
				}
				string_free(&hx);
			}
			return;
		}
		if (typ == StrIntpType__si_p) {
			u64 d = data->d.d_u64;
			base = 16;
			if (base == 0) {
				if (width == 0) {
					string d_str = u64_str(d);
					strings__Builder_write_string(sb, d_str);
					string_free(&d_str);
					return;
				}
				strconv__format_dec_sb(d, bf, sb);
			} else {
				string hx = strconv__format_uint(d, base);
				if (upper_case) {
					string tmp = hx;
					hx = string_to_upper(hx);
					string_free(&tmp);
				}
				if (width == 0) {
					strings__Builder_write_string(sb, hx);
				} else {
					strconv__format_str_sb(hx, bf, sb);
				}
				string_free(&hx);
			}
			return;
		}
		bool use_default_str = false;
		if (width == 0 && precision == 0x7F) {
			bf.len1 = 3;
			use_default_str = true;
		}
		if (bf.len1 < 0) {
			bf.len1 = 3;
		}
		switch (typ) {
			case StrIntpType__si_f32: {
					#if !defined(CUSTOM_DEFINE_nofloat)
					{
						if (use_default_str) {
							string f = f32_str(data->d.d_f32);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						} else {
							if (data->d.d_f32 < 0) {
								bf.positive = false;
							}
							string f = strconv__format_fl(data->d.d_f32, bf);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						}
					}
					#endif
					break;
			}
			case StrIntpType__si_f64: {
					#if !defined(CUSTOM_DEFINE_nofloat)
					{
						if (use_default_str) {
							string f = f64_str(data->d.d_f64);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						} else {
							if (data->d.d_f64 < 0) {
								bf.positive = false;
							}
							strconv__Float64u f_union = ((strconv__Float64u){.f = data->d.d_f64,});
							if (f_union.u == _const_strconv__double_minus_zero) {
								bf.positive = false;
							}
							string f = strconv__format_fl(data->d.d_f64, bf);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						}
					}
					#endif
					break;
			}
			case StrIntpType__si_g32: {
					if (use_default_str) {
						#if !defined(CUSTOM_DEFINE_nofloat)
						{
							string f = f32_strg(data->d.d_f32);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						}
						#endif
					} else {
						if (data->d.d_f32 == _const_strconv__single_plus_zero) {
							string tmp_str = _SLIT("0");
							strconv__format_str_sb(tmp_str, bf, sb);
							string_free(&tmp_str);
							return;
						}
						if (data->d.d_f32 == _const_strconv__single_minus_zero) {
							string tmp_str = _SLIT("-0");
							strconv__format_str_sb(tmp_str, bf, sb);
							string_free(&tmp_str);
							return;
						}
						if (data->d.d_f32 == _const_strconv__single_plus_infinity) {
							string tmp_str = _SLIT("+inf");
							if (upper_case) {
								tmp_str = _SLIT("+INF");
							}
							strconv__format_str_sb(tmp_str, bf, sb);
							string_free(&tmp_str);
						}
						if (data->d.d_f32 == _const_strconv__single_minus_infinity) {
							string tmp_str = _SLIT("-inf");
							if (upper_case) {
								tmp_str = _SLIT("-INF");
							}
							strconv__format_str_sb(tmp_str, bf, sb);
							string_free(&tmp_str);
						}
						if (data->d.d_f32 < 0) {
							bf.positive = false;
						}
						f32 d = fabs32(data->d.d_f32);
						if (d < ((f32)(999999.0)) && d >= ((f32)(0.00001))) {
							string f = strconv__format_fl(data->d.d_f32, bf);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
							return;
						}
						string f = strconv__format_es(data->d.d_f32, bf);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					}
					break;
			}
			case StrIntpType__si_g64: {
					if (use_default_str) {
						#if !defined(CUSTOM_DEFINE_nofloat)
						{
							string f = f64_strg(data->d.d_f64);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						}
						#endif
					} else {
						if (data->d.d_f64 == _const_strconv__double_plus_zero) {
							string tmp_str = _SLIT("0");
							strconv__format_str_sb(tmp_str, bf, sb);
							string_free(&tmp_str);
							return;
						}
						if (data->d.d_f64 == _const_strconv__double_minus_zero) {
							string tmp_str = _SLIT("-0");
							strconv__format_str_sb(tmp_str, bf, sb);
							string_free(&tmp_str);
							return;
						}
						if (data->d.d_f64 == _const_strconv__double_plus_infinity) {
							string tmp_str = _SLIT("+inf");
							if (upper_case) {
								tmp_str = _SLIT("+INF");
							}
							strconv__format_str_sb(tmp_str, bf, sb);
							string_free(&tmp_str);
						}
						if (data->d.d_f64 == _const_strconv__double_minus_infinity) {
							string tmp_str = _SLIT("-inf");
							if (upper_case) {
								tmp_str = _SLIT("-INF");
							}
							strconv__format_str_sb(tmp_str, bf, sb);
							string_free(&tmp_str);
						}
						if (data->d.d_f64 < 0) {
							bf.positive = false;
						}
						f64 d = fabs64(data->d.d_f64);
						if (d < ((f64)(999999.0)) && d >= ((f64)(0.00001))) {
							string f = strconv__format_fl(data->d.d_f64, bf);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
							return;
						}
						string f = strconv__format_es(data->d.d_f64, bf);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					}
					break;
			}
			case StrIntpType__si_e32: {
					#if !defined(CUSTOM_DEFINE_nofloat)
					{
						bf.len1 = 6;
						if (use_default_str) {
							string f = f32_str(data->d.d_f32);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						} else {
							if (data->d.d_f32 < 0) {
								bf.positive = false;
							}
							string f = strconv__format_es(data->d.d_f32, bf);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						}
					}
					#endif
					break;
			}
			case StrIntpType__si_e64: {
					#if !defined(CUSTOM_DEFINE_nofloat)
					{
						bf.len1 = 6;
						if (use_default_str) {
							string f = f64_str(data->d.d_f64);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						} else {
							if (data->d.d_f64 < 0) {
								bf.positive = false;
							}
							string f = strconv__format_es(data->d.d_f64, bf);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						}
					}
					#endif
					break;
			}
			case StrIntpType__si_c: {
					string ss = utf32_to_str(data->d.d_c);
					strings__Builder_write_string(sb, ss);
					string_free(&ss);
					break;
			}
			case StrIntpType__si_vp: {
					string ss = u64_hex(((u64)(data->d.d_vp)));
					strings__Builder_write_string(sb, ss);
					string_free(&ss);
					break;
			}
			case StrIntpType__si_no_str:
			case StrIntpType__si_u8:
			case StrIntpType__si_i8:
			case StrIntpType__si_u16:
			case StrIntpType__si_i16:
			case StrIntpType__si_u32:
			case StrIntpType__si_i32:
			case StrIntpType__si_u64:
			case StrIntpType__si_i64:
			case StrIntpType__si_s:
			case StrIntpType__si_p:
			case StrIntpType__si_r:
			default: {
					strings__Builder_write_string(sb, _SLIT("***ERROR!***"));
					break;
			}
		}
		
	}
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string str_intp(int data_len, StrIntpData* input_base) {
	strings__Builder res = strings__new_builder(256);
	for (int i = 0; i < data_len; i++) {
		StrIntpData* data = &input_base[i];
		if (data->str.len != 0) {
			strings__Builder_write_string(&res, data->str);
		}
		if (data->fmt != 0U) {
			StrIntpData_process_str_intp_data(data, (voidptr)&/*qq*/res);
		}
	}
	string ret = strings__Builder_str(&res);
	strings__Builder_free(&res);
	return ret;
}

// Attr: [inline]
inline string str_intp_sq(string in_str) {
	return  str_intp(3, _MOV((StrIntpData[]){{_SLIT("str_intp(2, _MOV((StrIntpData[]){{_SLIT(\"\'\"), "), /*115 &string*/0xfe10, {.d_s = _const_si_s_code}}, {_SLIT(", {.d_s = "), /*115 &string*/0xfe10, {.d_s = in_str}}, {_SLIT("}},{_SLIT(\"\'\"), 0, {.d_c = 0 }}}))"), 0, { .d_c = 0 }}}));
}

// Attr: [inline]
inline string str_intp_rune(string in_str) {
	return  str_intp(3, _MOV((StrIntpData[]){{_SLIT("str_intp(2, _MOV((StrIntpData[]){{_SLIT(\"`\"), "), /*115 &string*/0xfe10, {.d_s = _const_si_s_code}}, {_SLIT(", {.d_s = "), /*115 &string*/0xfe10, {.d_s = in_str}}, {_SLIT("}},{_SLIT(\"`\"), 0, {.d_c = 0 }}}))"), 0, { .d_c = 0 }}}));
}

// Attr: [inline]
inline string str_intp_g32(string in_str) {
	return  str_intp(3, _MOV((StrIntpData[]){{_SLIT("str_intp(1, _MOV((StrIntpData[]){{_SLIT0, "), /*115 &string*/0xfe10, {.d_s = _const_si_g32_code}}, {_SLIT(", {.d_f32 = "), /*115 &string*/0xfe10, {.d_s = in_str}}, {_SLIT(" }}}))"), 0, { .d_c = 0 }}}));
}

// Attr: [inline]
inline string str_intp_g64(string in_str) {
	return  str_intp(3, _MOV((StrIntpData[]){{_SLIT("str_intp(1, _MOV((StrIntpData[]){{_SLIT0, "), /*115 &string*/0xfe10, {.d_s = _const_si_g64_code}}, {_SLIT(", {.d_f64 = "), /*115 &string*/0xfe10, {.d_s = in_str}}, {_SLIT(" }}}))"), 0, { .d_c = 0 }}}));
}

// Attr: [manualfree]
string str_intp_sub(string base_str, string in_str) {
	_option_int _t1 = string_index(base_str, _SLIT("%%"));
	if (_t1.state != 0) {
		IError err = _t1.err;
		eprintln(_SLIT("No string interpolation %% parameters"));
		_v_exit(1);
		VUNREACHABLE();
	;
	}
	
 	int index =  (*(int*)_t1.data);
	{ // Unsafe block
		string st_str = string_substr(base_str, 0, index);
		if ((int)(index + 2) < base_str.len) {
			string en_str = string_substr(base_str, (int)(index + 2), 2147483647);
			string res_str =  str_intp(5, _MOV((StrIntpData[]){{_SLIT("str_intp(2, _MOV((StrIntpData[]){{_SLIT(\""), /*115 &string*/0xfe10, {.d_s = st_str}}, {_SLIT("\"), "), /*115 &string*/0xfe10, {.d_s = _const_si_s_code}}, {_SLIT(", {.d_s = "), /*115 &string*/0xfe10, {.d_s = in_str}}, {_SLIT(" }},{_SLIT(\""), /*115 &string*/0xfe10, {.d_s = en_str}}, {_SLIT("\"), 0, {.d_c = 0}}}))"), 0, { .d_c = 0 }}}));
			string_free(&st_str);
			string_free(&en_str);
			return res_str;
		}
		string res2_str =  str_intp(4, _MOV((StrIntpData[]){{_SLIT("str_intp(1, _MOV((StrIntpData[]){{_SLIT(\""), /*115 &string*/0xfe10, {.d_s = st_str}}, {_SLIT("\"), "), /*115 &string*/0xfe10, {.d_s = _const_si_s_code}}, {_SLIT(", {.d_s = "), /*115 &string*/0xfe10, {.d_s = in_str}}, {_SLIT(" }}}))"), 0, { .d_c = 0 }}}));
		string_free(&st_str);
		return res2_str;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

u16* string_to_wide(string _str) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		Array_rune srunes = string_runes(_str);
		{ // Unsafe block
			u16* result = ((u16*)(vcalloc_noscan((int)(((int)(srunes.len + 1)) * 2))));
			for (int i = 0; i < srunes.len; ++i) {
				rune r = ((rune*)srunes.data)[i];
				result[i] = ((u16)(r));
			}
			result[srunes.len] = 0U;
			return result;
		}
	}
	#endif
	return 0;
}

// Attr: [manualfree]
// Attr: [unsafe]
string string_from_wide(u16* _wstr) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int i = 0;
		for (;;) {
			if (!(_wstr[i] != 0U)) break;
			i++;
		}
		return string_from_wide2(_wstr, i);
	}
	#endif
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [manualfree]
// Attr: [unsafe]
string string_from_wide2(u16* _wstr, int len) {
	bool string_from_wide2_defer_0 = false;
	strings__Builder sb;
	#if defined(_WIN32)
	{
	}
	#else
	{
		sb = strings__new_builder(len);
		string_from_wide2_defer_0 = true;
		for (int i = 0; i < len; i++) {
			rune u = ((rune)(_wstr[i]));
			strings__Builder_write_rune(&sb, u);
		}
		string res = strings__Builder_str(&sb);
		string _t2 = res;
			// Defer begin
			if (string_from_wide2_defer_0) {
				#if defined(_WIN32)
		#else
					strings__Builder_free(&sb);
				
				#endif
			}
			// Defer end
		return _t2;
	}
	#endif
	return (string){.str=(byteptr)"", .is_lit=1};
}

int utf8_char_len(u8 b) {
	return (int_literal)(((((0xe5000000 >> ((((b >> 3)) & 0x1e)))) & 3)) + 1);
}

string utf32_to_str(u32 code) {
	{ // Unsafe block
		u8* buffer = malloc_noscan(5);
		string res = utf32_to_str_no_malloc(code, buffer);
		if (res.len == 0) {
			_v_free(buffer);
		}
		return res;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [manualfree]
// Attr: [unsafe]
string utf32_to_str_no_malloc(u32 code, u8* buf) {
	{ // Unsafe block
		int len = utf32_decode_to_buffer(code, buf);
		if (len == 0) {
			return _SLIT("");
		}
		buf[len] = 0;
		return tos(buf, len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [manualfree]
// Attr: [unsafe]
int utf32_decode_to_buffer(u32 code, u8* buf) {
	{ // Unsafe block
		int icode = ((int)(code));
		u8* buffer = ((u8*)(buf));
		if (icode <= 127) {
			buffer[0] = ((u8)(icode));
			return 1;
		} else if (icode <= 2047) {
			buffer[0] = (192 | ((u8)((icode >> 6))));
			buffer[1] = (128 | ((u8)((icode & 63))));
			return 2;
		} else if (icode <= 65535) {
			buffer[0] = (224 | ((u8)((icode >> 12))));
			buffer[1] = (128 | ((((u8)((icode >> 6))) & 63)));
			buffer[2] = (128 | ((u8)((icode & 63))));
			return 3;
		} else if (icode <= 1114111) {
			buffer[0] = (240 | ((u8)((icode >> 18))));
			buffer[1] = (128 | ((((u8)((icode >> 12))) & 63)));
			buffer[2] = (128 | ((((u8)((icode >> 6))) & 63)));
			buffer[3] = (128 | ((u8)((icode & 63))));
			return 4;
		}
	}
	return 0;
}

int string_utf32_code(string _rune) {
	_result_rune _t2 = Array_u8_utf8_to_utf32(string_bytes(_rune));
	if (_t2.is_error) {
		IError err = _t2.err;
		*(rune*) _t2.data = ((rune)(0));
	}
	
 	return ((int)( (*(rune*)_t2.data)));
}

_result_rune Array_u8_utf8_to_utf32(Array_u8 _bytes) {
	if (_bytes.len == 0) {
		_result_rune _t1;
		_result_ok(&(rune[]) { 0 }, (_result*)(&_t1), sizeof(rune));
		return _t1;
	}
	if (_bytes.len == 1) {
		_result_rune _t2;
		_result_ok(&(rune[]) { ((rune)((*(u8*)array_get(_bytes, 0)))) }, (_result*)(&_t2), sizeof(rune));
		return _t2;
	}
	if (_bytes.len > 4) {
		return (_result_rune){ .is_error=true, .err=_v_error(_SLIT("attempted to decode too many bytes, utf-8 is limited to four bytes maximum")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	u8 b = ((u8)(((int)((*(u8*)array_get(_bytes, 0))))));
	b = (b << _bytes.len);
	rune res = ((rune)(b));
	int shift = (int)(6 - _bytes.len);
	for (int i = 1; i < _bytes.len; i++) {
		rune c = ((rune)((*(u8*)array_get(_bytes, i))));
		res = (((rune)(res)) << shift);
		res |= (c & 63);
		shift = 6;
	}
	_result_rune _t4;
	_result_ok(&(rune[]) { res }, (_result*)(&_t4), sizeof(rune));
	return _t4;
}

int utf8_str_visible_length(string s) {
	int l = 0;
	int ul = 1;
	for (int i = 0; i < s.len; i += ul) {
		u8 c = s.str[i];
		ul = (int_literal)(((((0xe5000000 >> ((((s.str[i] >> 3)) & 0x1e)))) & 3)) + 1);
		if ((int)(i + ul) > s.len) {
			return l;
		}
		l++;
		if (ul == 1) {
			continue;
		}

		if (ul == (2)) {
			u64 r = ((u64)((((((u16)(c)) << 8U)) | s.str[(int)(i + 1)])));
			if (r >= 0xcc80U && r < 0xcdb0U) {
				l--;
			}
		}
		else if (ul == (3)) {
			u64 r = ((u64)((((((u32)(c)) << 16U)) | (((((u32)(s.str[(int)(i + 1)])) << 8U)) | s.str[(int)(i + 2)]))));
			if ((r >= 0xe1aab0U && r <= 0xe1ac7fU) || (r >= 0xe1b780U && r <= 0xe1b87fU) || (r >= 0xe28390U && r <= 0xe2847fU) || (r >= 0xefb8a0U && r <= 0xefb8afU)) {
				l--;
			} else if ((r >= 0xe18480U && r <= 0xe1859fU) || (r >= 0xe2ba80U && r <= 0xe2bf95U) || (r >= 0xe38080U && r <= 0xe4b77fU) || (r >= 0xe4b880U && r <= 0xea807fU) || (r >= 0xeaa5a0U && r <= 0xeaa79fU) || (r >= 0xeab080U && r <= 0xed9eafU) || (r >= 0xefa480U && r <= 0xefac7fU) || (r >= 0xefb8b8U && r <= 0xefb9afU)) {
				l++;
			}
		}
		else if (ul == (4)) {
			u64 r = ((u64)((((((u32)(c)) << 24U)) | ((((((u32)(s.str[(int)(i + 1)])) << 16U)) | ((((u32)(s.str[(int)(i + 2)])) << 8U))) | s.str[(int)(i + 3)]))));
			if ((r >= 0x0f9f8880U && r <= 0xf09f8a8fU) || (r >= 0xf09f8c80U && r <= 0xf09f9c90U) || (r >= 0xf09fa490U && r <= 0xf09fa7afU) || (r >= 0xf0a08080U && r <= 0xf180807fU)) {
				l++;
			}
		}
		else {
		}
	}
	return l;
}

// Attr: [inline]
inline bool ArrayFlags_is_empty(ArrayFlags* e) {
	return ((int)(*e)) == 0;
}

// Attr: [inline]
inline bool ArrayFlags_has(ArrayFlags* e, ArrayFlags flag) {
	return ((((int)(*e)) & (((int)(flag))))) != 0;
}

// Attr: [inline]
inline bool ArrayFlags_all(ArrayFlags* e, ArrayFlags flag) {
	return ((((int)(*e)) & (((int)(flag))))) == ((int)(flag));
}

// Attr: [inline]
inline void ArrayFlags_set(ArrayFlags* e, ArrayFlags flag) {
	{ // Unsafe block
		*e = ((ArrayFlags)((((int)(*e)) | (((int)(flag))))));
	}
}

// Attr: [inline]
inline void ArrayFlags_set_all(ArrayFlags* e) {
	{ // Unsafe block
		*e = ((ArrayFlags)(0b1111));
	}
}

// Attr: [inline]
inline void ArrayFlags_clear(ArrayFlags* e, ArrayFlags flag) {
	{ // Unsafe block
		*e = ((ArrayFlags)((((int)(*e)) & ~(((int)(flag))))));
	}
}

// Attr: [inline]
inline void ArrayFlags_clear_all(ArrayFlags* e) {
	{ // Unsafe block
		*e = ((ArrayFlags)(0));
	}
}

// Attr: [inline]
inline void ArrayFlags_toggle(ArrayFlags* e, ArrayFlags flag) {
	{ // Unsafe block
		*e = ((ArrayFlags)((((int)(*e)) ^ (((int)(flag))))));
	}
}

strings__textscanner__TextScanner strings__textscanner__new(string input) {
	strings__textscanner__TextScanner _t1 = ((strings__textscanner__TextScanner){.input = input,.ilen = input.len,.pos = 0,});
	return _t1;
}

// Attr: [unsafe]
void strings__textscanner__TextScanner_free(strings__textscanner__TextScanner* ss) {
	string_free(&ss->input);
}

// Attr: [inline]
inline int strings__textscanner__TextScanner_remaining(strings__textscanner__TextScanner* ss) {
	int _t1 = (int)(ss->ilen - ss->pos);
	return _t1;
}

// Attr: [direct_array_access]
// Attr: [inline]
inline int strings__textscanner__TextScanner_next(strings__textscanner__TextScanner* ss) {
	if (ss->pos < ss->ilen) {
		int opos = ss->pos;
		ss->pos++;
		int _t1 = ss->input.str[ opos];
		return _t1;
	}
	int _t2 = -1;
	return _t2;
}

// Attr: [inline]
inline void strings__textscanner__TextScanner_skip(strings__textscanner__TextScanner* ss) {
	if ((int)(ss->pos + 1) < ss->ilen) {
		ss->pos++;
	}
}

// Attr: [inline]
inline void strings__textscanner__TextScanner_skip_n(strings__textscanner__TextScanner* ss, int n) {
	ss->pos += n;
	if (ss->pos > ss->ilen) {
		ss->pos = ss->ilen;
	}
}

// Attr: [direct_array_access]
// Attr: [inline]
inline int strings__textscanner__TextScanner_peek(strings__textscanner__TextScanner* ss) {
	if (ss->pos < ss->ilen) {
		int _t1 = ss->input.str[ ss->pos];
		return _t1;
	}
	int _t2 = -1;
	return _t2;
}

// Attr: [direct_array_access]
// Attr: [inline]
inline int strings__textscanner__TextScanner_peek_n(strings__textscanner__TextScanner* ss, int n) {
	if ((int)(ss->pos + n) < ss->ilen) {
		int _t1 = ss->input.str[ (int)(ss->pos + n)];
		return _t1;
	}
	int _t2 = -1;
	return _t2;
}

// Attr: [inline]
inline void strings__textscanner__TextScanner_back(strings__textscanner__TextScanner* ss) {
	if (ss->pos > 0) {
		ss->pos--;
	}
}

void strings__textscanner__TextScanner_back_n(strings__textscanner__TextScanner* ss, int n) {
	ss->pos -= n;
	if (ss->pos < 0) {
		ss->pos = 0;
	}
	if (ss->pos > ss->ilen) {
		ss->pos = ss->ilen;
	}
}

// Attr: [direct_array_access]
// Attr: [inline]
inline int strings__textscanner__TextScanner_peek_back(strings__textscanner__TextScanner* ss) {
	int _t1 = strings__textscanner__TextScanner_peek_back_n(ss, 1);
	return _t1;
}

// Attr: [direct_array_access]
// Attr: [inline]
inline int strings__textscanner__TextScanner_peek_back_n(strings__textscanner__TextScanner* ss, int n) {
	int offset = (int)(n + 1);
	if (ss->pos >= offset) {
		int _t1 = ss->input.str[ (int)(ss->pos - offset)];
		return _t1;
	}
	int _t2 = -1;
	return _t2;
}

// Attr: [direct_array_access]
// Attr: [inline]
inline int strings__textscanner__TextScanner_current(strings__textscanner__TextScanner* ss) {
	if (ss->pos > 0) {
		int _t1 = ss->input.str[ (int)(ss->pos - 1)];
		return _t1;
	}
	int _t2 = -1;
	return _t2;
}

void strings__textscanner__TextScanner_reset(strings__textscanner__TextScanner* ss) {
	ss->pos = 0;
}

void strings__textscanner__TextScanner_goto_end(strings__textscanner__TextScanner* ss) {
	ss->pos = ss->ilen;
}

// TypeDecl
// TypeDecl
// TypeDecl
term__termios__TcFlag term__termios__flag(int value) {
	term__termios__TcFlag _t1 = ((value));
	return _t1;
}

term__termios__TcFlag term__termios__invert(term__termios__TcFlag value) {
	term__termios__TcFlag _t1 = ((~((int)(value))));
	return _t1;
}

int term__termios__tcgetattr(int fd, term__termios__Termios* t) {
	int _t1 = 0;
	return _t1;
	eprintln(_SLIT("term.termios: tcgetattr,tcsetattr,ioctl,set_state are not implemented for the platform"));
	eprintln( str_intp(3, _MOV((StrIntpData[]){{_SLIT("tcgetattr, fd: "), /*100 &int*/0xfe07, {.d_i32 = fd}}, {_SLIT(", t: "), /*115 &term.termios.Termios*/0xfe10, {.d_s = term__termios__Termios_str(*t)}}, {_SLIT0, 0, { .d_c = 0 }}})));
	int _t2 = 0;
	return _t2;
}

int term__termios__tcsetattr(int fd, int optional_actions, term__termios__Termios* t) {
	eprintln( str_intp(4, _MOV((StrIntpData[]){{_SLIT("tcsetattr, fd: "), /*100 &int*/0xfe07, {.d_i32 = fd}}, {_SLIT(", optional_actions: "), /*100 &int*/0xfe07, {.d_i32 = optional_actions}}, {_SLIT(", t: "), /*115 &term.termios.Termios*/0xfe10, {.d_s = term__termios__Termios_str(*t)}}, {_SLIT0, 0, { .d_c = 0 }}})));
	int _t1 = 0;
	return _t1;
}

int term__termios__ioctl(int fd, u64 request, voidptr arg) {
	eprintln( str_intp(4, _MOV((StrIntpData[]){{_SLIT("ioctl, fd: "), /*100 &int*/0xfe07, {.d_i32 = fd}}, {_SLIT(", request: "), /*117 &u64*/0xfe08, {.d_u64 = request}}, {_SLIT(", arg: "), /*112 &voidptr*/0xfe11, {.d_p = (void*)(arg)}}, {_SLIT0, 0, { .d_c = 0 }}})));
	int _t1 = 0;
	return _t1;
}

int term__termios__set_state(int fd, term__termios__Termios new_state) {
	eprintln( str_intp(3, _MOV((StrIntpData[]){{_SLIT("set_state, fd: "), /*100 &int*/0xfe07, {.d_i32 = fd}}, {_SLIT(" | new_state: "), /*115 &term.termios.Termios*/0xfe10, {.d_s = term__termios__Termios_str(new_state)}}, {_SLIT0, 0, { .d_c = 0 }}})));
	int _t1 = 0;
	return _t1;
}

void term__termios__Termios_disable_echo(term__termios__Termios* t) {
	t->c_lflag &= term__termios__invert(8);
}

Array_string os__args_after(string cut_word) {
	if (_const_os__args.len == 0) {
		Array_string _t1 = __new_array_with_default(0, 0, sizeof(string), 0);
		return _t1;
	}
	Array_string cargs = __new_array_with_default(0, 0, sizeof(string), 0);
	if (!(Array_string_contains(_const_os__args, cut_word))) {
		cargs = array_clone_to_depth(&_const_os__args, 0);
	} else {
		bool found = false;
		array_push((array*)&cargs, _MOV((string[]){ string_clone((*(string*)array_get(_const_os__args, 0))) }));
		Array_string _t3 = array_slice(_const_os__args, 1, 2147483647);
		for (int _t4 = 0; _t4 < _t3.len; ++_t4) {
			string a = ((string*)_t3.data)[_t4];
			if (string__eq(a, cut_word)) {
				found = true;
				continue;
			}
			if (!found) {
				continue;
			}
			array_push((array*)&cargs, _MOV((string[]){ string_clone(a) }));
		}
	}
	return cargs;
}

Array_string os__args_before(string cut_word) {
	if (_const_os__args.len == 0) {
		Array_string _t1 = __new_array_with_default(0, 0, sizeof(string), 0);
		return _t1;
	}
	Array_string cargs = __new_array_with_default(0, 0, sizeof(string), 0);
	if (!(Array_string_contains(_const_os__args, cut_word))) {
		cargs = array_clone_to_depth(&_const_os__args, 0);
	} else {
		array_push((array*)&cargs, _MOV((string[]){ string_clone((*(string*)array_get(_const_os__args, 0))) }));
		Array_string _t3 = array_slice(_const_os__args, 1, 2147483647);
		for (int _t4 = 0; _t4 < _t3.len; ++_t4) {
			string a = ((string*)_t3.data)[_t4];
			if (string__eq(a, cut_word)) {
				break;
			}
			array_push((array*)&cargs, _MOV((string[]){ string_clone(a) }));
		}
	}
	return cargs;
}

string os__getenv(string key) {
	_option_string _t2 = os__getenv_opt(key);
	if (_t2.state != 0) {
		IError err = _t2.err;
		*(string*) _t2.data = _SLIT("");
	}
	
 	string _t1 =  (*(string*)_t2.data);
	return _t1;
}

// Attr: [manualfree]
_option_string os__getenv_opt(string key) {
	{ // Unsafe block
		#if defined(_WIN32)
		{
		}
		#else
		{
			char* s = getenv(((char*)(key.str)));
			if (s == ((void*)0)) {
				return (_option_string){ .state=2, .err=_const_none__, .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			_option_string _t3;
			_option_ok(&(string[]) { cstring_to_vstring(s) }, (_option*)(&_t3), sizeof(string));
			return _t3;
		}
		#endif
	}
	return (_option_string){0};
}

int os__setenv(string name, string value, bool overwrite) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		{ // Unsafe block
			int _t2 = setenv(((char*)(name.str)), ((char*)(value.str)), overwrite);
			return _t2;
		}
	}
	#endif
	return 0;
}

int os__unsetenv(string name) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int _t2 = unsetenv(((char*)(name.str)));
		return _t2;
	}
	#endif
	return 0;
}

Map_string_string os__environ(void) {
	Map_string_string res = new_map(sizeof(string), sizeof(string), &map_hash_string, &map_eq_string, &map_clone_string, &map_free_string)
	;
	#if defined(_WIN32)
	{
	}
	#else
	{
		char** start = ((char**)(environ));
		int i = 0;
		for (;;) {
			char* x = start[i];
			if (x == 0) {
				break;
			}
			string eline = cstring_to_vstring(x);
			int eq_index = string_index_u8(eline, '=');
			if (eq_index > 0) {
				map_set(&res, &(string[]){string_substr(eline, 0, eq_index)}, &(string[]) { string_substr(eline, (int)(eq_index + 1), 2147483647) });
			}
			i++;
		}
	}
	#endif
	return res;
}

#if !defined(_WIN32)
#endif
int os__fd_close(int fd) {
	if (fd == -1) {
		int _t1 = 0;
		return _t1;
	}
	int _t2 = close(fd);
	return _t2;
}

void os__fd_write(int fd, string s) {
	if (fd == -1) {
		return;
	}
	u8* sp = s.str;
	int remaining = s.len;
	for (;;) {
		if (!(remaining > 0)) break;
		int written = write(fd, sp, remaining);
		if (written < 0) {
			return;
		}
		remaining = (int)(remaining - written);
		sp = ((voidptr)(sp + written));
	}
}

Array_string os__fd_slurp(int fd) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	if (fd == -1) {
		return res;
	}
	for (;;) {
		multi_return_string_int mr_886 = os__fd_read(fd, 4096);
		string s = mr_886.arg0;
		int b = mr_886.arg1;
		if (b <= 0) {
			break;
		}
		array_push((array*)&res, _MOV((string[]){ string_clone(s) }));
	}
	return res;
}

multi_return_string_int os__fd_read(int fd, int maxbytes) {
	if (fd == -1) {
		return (multi_return_string_int){.arg0=_SLIT(""), .arg1=0};
	}
	{ // Unsafe block
		u8* buf = malloc_noscan((int)(maxbytes + 1));
		int nbytes = read(fd, buf, maxbytes);
		if (nbytes < 0) {
			_v_free(buf);
			return (multi_return_string_int){.arg0=_SLIT(""), .arg1=nbytes};
		}
		buf[nbytes] = 0;
		return (multi_return_string_int){.arg0=tos(buf, nbytes), .arg1=nbytes};
	}
	return (multi_return_string_int){0};
}

bool os__fd_is_pending(int fd) {
	fd_set read_set = ((fd_set){EMPTY_STRUCT_INITIALIZATION});
	FD_ZERO(&read_set);
	FD_SET(fd, &read_set);
	struct timeval ts = ((struct timeval){.tv_sec = 0U,.tv_usec = 0U,});
	int res = select((int)(fd + 1), &read_set, NULL, NULL, &ts);
	if (res > 0) {
		if (FD_ISSET(fd, &read_set) != 0) {
			bool _t1 = true;
			return _t1;
		}
	}
	bool _t2 = false;
	return _t2;
}

VV_LOCAL_SYMBOL string os__NotExpected_msg(os__NotExpected err) {
	string _t1 = err.cause;
	return _t1;
}

VV_LOCAL_SYMBOL int os__NotExpected_code(os__NotExpected err) {
	int _t1 = err.code;
	return _t1;
}

VV_LOCAL_SYMBOL string os__fix_windows_path(string path) {
	string p = path;
	return p;
}

_result_os__File os__open_file(string path, string mode, Array_int options) {
	int flags = 0;
	bool seek_to_end = false;
	for (int _t1 = 0; _t1 < mode.len; ++_t1) {
		u8 m = mode.str[_t1];

		if (m == ('w')) {
			flags |= ((_const_os__o_create | _const_os__o_trunc) | _const_os__o_wronly);
		}
		else if (m == ('a')) {
			flags |= ((_const_os__o_create | _const_os__o_append) | _const_os__o_wronly);
			seek_to_end = true;
		}
		else if (m == ('r')) {
			flags |= _const_os__o_rdonly;
		}
		else if (m == ('b')) {
			flags |= _const_os__o_binary;
		}
		else if (m == ('s')) {
			flags |= _const_os__o_sync;
		}
		else if (m == ('n')) {
			flags |= _const_os__o_nonblock;
		}
		else if (m == ('c')) {
			flags |= _const_os__o_noctty;
		}
		else if (m == ('+')) {
			flags &= ~_const_os__o_wronly;
			flags |= _const_os__o_rdwr;
		}
		else {
		}
	}
	if (string__eq(mode, _SLIT("r+"))) {
		flags = _const_os__o_rdwr;
	}
	int permission = 0666;
	if (options.len > 0) {
		permission = (*(int*)array_get(options, 0));
	}
	string p = os__fix_windows_path(path);
	int _t2;
	#if defined(_WIN32)
	#else
		_t2 = open(((char*)(p.str)), flags, permission);
		;
	#endif
	int fd = _t2;
	if (fd == -1) {
		return (_result_os__File){ .is_error=true, .err=_v_error(os__posix_get_error_msg(errno)), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	FILE* cfile = fdopen(fd, ((char*)(mode.str)));
	if (isnil(cfile)) {
		return (_result_os__File){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("Failed to open or create file \""), /*115 &string*/0xfe10, {.d_s = path}}, {_SLIT("\""), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (seek_to_end) {
		#if defined(_WIN32)
		{
		}
		#else
		{
			fseeko(cfile, 0U, SEEK_END);
		}
		#endif
	}
	_result_os__File _t6;
	_result_ok(&(os__File[]) { ((os__File){.cfile = cfile,.fd = fd,.is_opened = true,}) }, (_result*)(&_t6), sizeof(os__File));
	return _t6;
}

_result_os__File os__open(string path) {
	_result_FILE_ptr _t1 = os__vfopen(path, _SLIT("rb"));
	if (_t1.is_error) {
		_result_os__File _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	FILE* cfile =  (*(FILE**)_t1.data);
	int fd = os__fileno(cfile);
	_result_os__File _t3;
	_result_ok(&(os__File[]) { ((os__File){.cfile = cfile,.fd = fd,.is_opened = true,}) }, (_result*)(&_t3), sizeof(os__File));
	return _t3;
}

_result_os__File os__create(string path) {
	_result_FILE_ptr _t1 = os__vfopen(path, _SLIT("wb"));
	if (_t1.is_error) {
		_result_os__File _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	FILE* cfile =  (*(FILE**)_t1.data);
	int fd = os__fileno(cfile);
	_result_os__File _t3;
	_result_ok(&(os__File[]) { ((os__File){.cfile = cfile,.fd = fd,.is_opened = true,}) }, (_result*)(&_t3), sizeof(os__File));
	return _t3;
}

os__File os__stdin(void) {
	os__File _t1 = ((os__File){.cfile = stdin,.fd = 0,.is_opened = true,});
	return _t1;
}

os__File os__stdout(void) {
	os__File _t1 = ((os__File){.cfile = stdout,.fd = 1,.is_opened = true,});
	return _t1;
}

os__File os__stderr(void) {
	os__File _t1 = ((os__File){.cfile = stderr,.fd = 2,.is_opened = true,});
	return _t1;
}

bool os__File_eof(os__File* f) {
	FILE* cfile = ((FILE*)(f->cfile));
	bool _t1 = feof(cfile) != 0;
	return _t1;
}

_result_void os__File_reopen(os__File* f, string path, string mode) {
	string p = os__fix_windows_path(path);
	FILE* cfile = ((FILE*)(((void*)0)));
	#if defined(_WIN32)
	{
	}
	#else
	{
		cfile = freopen(((char*)(p.str)), ((char*)(mode.str)), f->cfile);
	}
	#endif
	if (isnil(cfile)) {
		return (_result_void){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("Failed to reopen file \""), /*115 &string*/0xfe10, {.d_s = path}}, {_SLIT("\""), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	f->cfile = cfile;
	return (_result_void){0};
}

_result_int os__File_read(os__File* f, Array_u8* buf) {
	if (buf->len == 0) {
		return (_result_int){ .is_error=true, .err=I_os__Eof_to_Interface_IError(((os__Eof*)memdup(&(os__Eof){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(os__Eof)))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int nbytes = ((int)(fread(buf->data, 1, buf->len, ((FILE*)(f->cfile)))));
	if (nbytes <= 0) {
		if (feof(((FILE*)(f->cfile))) != 0) {
			return (_result_int){ .is_error=true, .err=I_os__Eof_to_Interface_IError(((os__Eof*)memdup(&(os__Eof){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(os__Eof)))), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		if (ferror(((FILE*)(f->cfile))) != 0) {
			return (_result_int){ .is_error=true, .err=I_os__NotExpected_to_Interface_IError(((os__NotExpected*)memdup(&(os__NotExpected){.cause = _SLIT("unexpected error from fread"),.code = -1,}, sizeof(os__NotExpected)))), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	}
	_result_int _t4;
	_result_ok(&(int[]) { nbytes }, (_result*)(&_t4), sizeof(int));
	return _t4;
}

_result_int os__File_write(os__File* f, Array_u8 buf) {
	if (!f->is_opened) {
		return (_result_int){ .is_error=true, .err=os__error_file_not_opened(), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int written = ((int)(fwrite(buf.data, 1, buf.len, f->cfile)));
	if (written == 0 && buf.len != 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_SLIT("0 bytes written")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_int _t3;
	_result_ok(&(int[]) { written }, (_result*)(&_t3), sizeof(int));
	return _t3;
}

_result_int os__File_writeln(os__File* f, string s) {
	if (!f->is_opened) {
		return (_result_int){ .is_error=true, .err=os__error_file_not_opened(), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int written = ((int)(fwrite(s.str, 1, s.len, f->cfile)));
	if (written == 0 && s.len != 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_SLIT("0 bytes written")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int x = fputs("\n", f->cfile);
	if (x < 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_SLIT("could not add newline")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_int _t4;
	_result_ok(&(int[]) { (int)(written + 1) }, (_result*)(&_t4), sizeof(int));
	return _t4;
}

_result_int os__File_write_string(os__File* f, string s) {
		_result_void _t1 = os__File_write_full_buffer(f, s.str, ((usize)(s.len)));
	if (_t1.is_error) {
		_result_int _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 ;
	_result_int _t3;
	_result_ok(&(int[]) { s.len }, (_result*)(&_t3), sizeof(int));
	return _t3;
}

_result_int os__File_write_to(os__File* f, u64 pos, Array_u8 buf) {
	if (!f->is_opened) {
		return (_result_int){ .is_error=true, .err=os__error_file_not_opened(), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	#if defined(TARGET_IS_64BIT)
	{
		#if defined(_WIN32)
		{
		}
		#else
		{
			fseeko(f->cfile, pos, SEEK_SET);
			int res = ((int)(fwrite(buf.data, 1, buf.len, f->cfile)));
			if (res == 0 && buf.len != 0) {
				return (_result_int){ .is_error=true, .err=_v_error(_SLIT("0 bytes written")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			fseeko(f->cfile, 0U, SEEK_END);
			_result_int _t5;
			_result_ok(&(int[]) { res }, (_result*)(&_t5), sizeof(int));
			return _t5;
		}
		#endif
	}
	#endif
	#if defined(TARGET_IS_32BIT)
	{
		fseek(f->cfile, pos, SEEK_SET);
		int res = ((int)(fwrite(buf.data, 1, buf.len, f->cfile)));
		if (res == 0 && buf.len != 0) {
			return (_result_int){ .is_error=true, .err=_v_error(_SLIT("0 bytes written")), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		fseek(f->cfile, 0, SEEK_END);
		_result_int _t8;
		_result_ok(&(int[]) { res }, (_result*)(&_t8), sizeof(int));
		return _t8;
	}
	#endif
	return (_result_int){ .is_error=true, .err=_v_error(_SLIT("Could not write to file")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

// Attr: [unsafe]
int os__File_write_ptr(os__File* f, voidptr data, int size) {
	int _t1 = ((int)(fwrite(data, 1, size, f->cfile)));
	return _t1;
}

// Attr: [unsafe]
_result_void os__File_write_full_buffer(os__File* f, voidptr buffer, usize buffer_len) {
	if (buffer_len <= ((usize)(0))) {
		return (_result_void){0};
	}
	if (!f->is_opened) {
		return (_result_void){ .is_error=true, .err=os__error_file_not_opened(), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	u8* ptr = ((u8*)(buffer));
	i64 remaining_bytes = ((i64)(buffer_len));
	for (;;) {
		if (!(remaining_bytes > 0)) break;
		{ // Unsafe block
			i64 x = ((i64)(fwrite(ptr, 1, remaining_bytes, f->cfile)));
			ptr += x;
			remaining_bytes -= x;
			if (x <= 0) {
				return (_result_void){ .is_error=true, .err=_v_error(_SLIT("C.fwrite returned 0")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
	}
	return (_result_void){0};
}

// Attr: [unsafe]
int os__File_write_ptr_at(os__File* f, voidptr data, int size, u64 pos) {
	#if defined(TARGET_IS_64BIT)
	{
		#if defined(_WIN32)
		{
		}
		#else
		{
			fseeko(f->cfile, pos, SEEK_SET);
			int res = ((int)(fwrite(data, 1, size, f->cfile)));
			fseeko(f->cfile, 0U, SEEK_END);
			return res;
		}
		#endif
	}
	#endif
	#if defined(TARGET_IS_32BIT)
	{
		fseek(f->cfile, pos, SEEK_SET);
		int res = ((int)(fwrite(data, 1, size, f->cfile)));
		fseek(f->cfile, 0, SEEK_END);
		return res;
	}
	#endif
	int _t6 = 0;
	return _t6;
}

VV_LOCAL_SYMBOL _result_int os__fread(voidptr ptr, int item_size, int items, FILE* stream) {
	int nbytes = ((int)(fread(ptr, item_size, items, stream)));
	if (nbytes <= 0) {
		if (feof(stream) != 0) {
			return (_result_int){ .is_error=true, .err=I_os__Eof_to_Interface_IError(((os__Eof*)memdup(&(os__Eof){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(os__Eof)))), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		if (ferror(stream) != 0) {
			return (_result_int){ .is_error=true, .err=_v_error(_SLIT("file read error")), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	}
	_result_int _t3;
	_result_ok(&(int[]) { nbytes }, (_result*)(&_t3), sizeof(int));
	return _t3;
}

Array_u8 os__File_read_bytes(os__File* f, int size) {
	Array_u8 _t1 = os__File_read_bytes_at(f, size, 0U);
	return _t1;
}

Array_u8 os__File_read_bytes_at(os__File* f, int size, u64 pos) {
	Array_u8 arr = __new_array_with_default(size, 0, sizeof(u8), 0);
	_result_int _t1 = os__File_read_bytes_into(f, pos, &/*arr*/arr);
	if (_t1.is_error) {
		IError err = _t1.err;
		Array_u8 _t2 = __new_array_with_default(0, 0, sizeof(u8), 0);
		return _t2;
	}
	
 	int nreadbytes =  (*(int*)_t1.data);
	Array_u8 _t3 = array_slice(arr, 0, nreadbytes);
	return _t3;
}

_result_int os__File_read_bytes_into_newline(os__File* f, Array_u8* buf) {
	if (buf->len == 0) {
		return (_result_int){ .is_error=true, .err=_v_error(string__plus(_SLIT("read_bytes_into_newline"), _SLIT(": `buf.len` == 0"))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int newline = 10;
	int c = 0;
	int buf_ptr = 0;
	int nbytes = 0;
	FILE* stream = ((FILE*)(f->cfile));
	for (;;) {
		if (!((buf_ptr < buf->len))) break;
		c = getc(stream);

		if (c == (EOF)) {
			if (feof(stream) != 0) {
				_result_int _t2;
				_result_ok(&(int[]) { nbytes }, (_result*)(&_t2), sizeof(int));
				return _t2;
			}
			if (ferror(stream) != 0) {
				return (_result_int){ .is_error=true, .err=_v_error(_SLIT("file read error")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		else if (c == (newline)) {
			array_set(buf, buf_ptr, &(u8[]) { ((u8)(c)) });
			nbytes++;
			_result_int _t4;
			_result_ok(&(int[]) { nbytes }, (_result*)(&_t4), sizeof(int));
			return _t4;
		}
		else {
			array_set(buf, buf_ptr, &(u8[]) { ((u8)(c)) });
			buf_ptr++;
			nbytes++;
		}
	}
	_result_int _t5;
	_result_ok(&(int[]) { nbytes }, (_result*)(&_t5), sizeof(int));
	return _t5;
}

_result_int os__File_read_bytes_into(os__File* f, u64 pos, Array_u8* buf) {
	if (buf->len == 0) {
		return (_result_int){ .is_error=true, .err=_v_error(string__plus(_SLIT("read_bytes_into"), _SLIT(": `buf.len` == 0"))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	#if defined(TARGET_IS_64BIT)
	{
		#if defined(_WIN32)
		{
		}
		#else
		{
			fseeko(f->cfile, pos, SEEK_SET);
			_result_int _t4 = os__fread(buf->data, 1, buf->len, f->cfile);
			if (_t4.is_error) {
				_result_int _t5;
				memcpy(&_t5, &_t4, sizeof(_result));
				return _t5;
			}
			
 			int nbytes =  (*(int*)_t4.data);
			_result_int _t6;
			_result_ok(&(int[]) { nbytes }, (_result*)(&_t6), sizeof(int));
			return _t6;
		}
		#endif
	}
	#endif
	#if defined(TARGET_IS_32BIT)
	{
		fseek(f->cfile, pos, SEEK_SET);
		_result_int _t8 = os__fread(buf->data, 1, buf->len, f->cfile);
		if (_t8.is_error) {
			_result_int _t9;
			memcpy(&_t9, &_t8, sizeof(_result));
			return _t9;
		}
		
 		int nbytes =  (*(int*)_t8.data);
		_result_int _t10;
		_result_ok(&(int[]) { nbytes }, (_result*)(&_t10), sizeof(int));
		return _t10;
	}
	#endif
	return (_result_int){ .is_error=true, .err=_v_error(_SLIT("Could not read file")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_int os__File_read_from(os__File* f, u64 pos, Array_u8* buf) {
	if (buf->len == 0) {
		_result_int _t1;
		_result_ok(&(int[]) { 0 }, (_result*)(&_t1), sizeof(int));
		return _t1;
	}
	#if defined(TARGET_IS_64BIT)
	{
		#if defined(_WIN32)
		{
		}
		#else
		{
			fseeko(f->cfile, pos, SEEK_SET);
		}
		#endif
		_result_int _t4 = os__fread(buf->data, 1, buf->len, f->cfile);
		if (_t4.is_error) {
			_result_int _t5;
			memcpy(&_t5, &_t4, sizeof(_result));
			return _t5;
		}
		
 		int nbytes =  (*(int*)_t4.data);
		_result_int _t6;
		_result_ok(&(int[]) { nbytes }, (_result*)(&_t6), sizeof(int));
		return _t6;
	}
	#endif
	#if defined(TARGET_IS_32BIT)
	{
		fseek(f->cfile, pos, SEEK_SET);
		_result_int _t8 = os__fread(buf->data, 1, buf->len, f->cfile);
		if (_t8.is_error) {
			_result_int _t9;
			memcpy(&_t9, &_t8, sizeof(_result));
			return _t9;
		}
		
 		int nbytes =  (*(int*)_t8.data);
		_result_int _t10;
		_result_ok(&(int[]) { nbytes }, (_result*)(&_t10), sizeof(int));
		return _t10;
	}
	#endif
	return (_result_int){ .is_error=true, .err=_v_error(_SLIT("Could not read file")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_int os__File_read_into_ptr(os__File* f, u8* ptr, int max_size) {
	_result_int _t1 = os__fread(ptr, 1, max_size, f->cfile);
	return _t1;
}

void os__File_flush(os__File* f) {
	if (!f->is_opened) {
		return;
	}
	fflush(f->cfile);
}

string os__FileNotOpenedError_msg(os__FileNotOpenedError err) {
	string _t1 = _SLIT("os: file not opened");
	return _t1;
}

string os__SizeOfTypeIs0Error_msg(os__SizeOfTypeIs0Error err) {
	string _t1 = _SLIT("os: size of type is 0");
	return _t1;
}

VV_LOCAL_SYMBOL IError os__error_file_not_opened(void) {
	IError _t1 = /*&IError*/I_os__FileNotOpenedError_to_Interface_IError(((os__FileNotOpenedError*)memdup(&(os__FileNotOpenedError){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(os__FileNotOpenedError))));
	return _t1;
}

VV_LOCAL_SYMBOL IError os__error_size_of_type_0(void) {
	IError _t1 = /*&IError*/I_os__SizeOfTypeIs0Error_to_Interface_IError(((os__SizeOfTypeIs0Error*)memdup(&(os__SizeOfTypeIs0Error){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(os__SizeOfTypeIs0Error))));
	return _t1;
}

_result_void os__File_seek(os__File* f, i64 pos, os__SeekMode mode) {
	if (!f->is_opened) {
		return (_result_void){ .is_error=true, .err=os__error_file_not_opened(), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int whence = ((int)(mode));
	int res = 0;
	#if defined(TARGET_IS_64BIT)
	{
		#if defined(_WIN32)
		{
		}
		#else
		{
			res = fseeko(f->cfile, pos, whence);
		}
		#endif
	}
	#endif
	#if defined(TARGET_IS_32BIT)
	{
		res = fseek(f->cfile, pos, whence);
	}
	#endif
	if (res == -1) {
		return (_result_void){ .is_error=true, .err=_v_error(os__posix_get_error_msg(errno)), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

_result_i64 os__File_tell(os__File* f) {
	if (!f->is_opened) {
		return (_result_i64){ .is_error=true, .err=os__error_file_not_opened(), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	isize pos = ((isize)(0));
	#if defined(_WIN32)
	{
	}
	#else
	{
		pos = ftell(f->cfile);
	}
	#endif
	if (pos == -1) {
		return (_result_i64){ .is_error=true, .err=_v_error(os__posix_get_error_msg(errno)), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_i64 _t4;
	_result_ok(&(i64[]) { pos }, (_result*)(&_t4), sizeof(i64));
	return _t4;
}

bool os__is_abs_path(string path) {
	if (path.len == 0) {
		bool _t1 = false;
		return _t1;
	}
	bool _t2 = string_at(path, 0) == _const_os__fslash;
	return _t2;
}

string os__abs_path(string path) {
	string wd = os__getwd();
	if (path.len == 0) {
		return wd;
	}
	string npath = os__norm_path(path);
	if (string__eq(npath, _const_os__dot_str)) {
		return wd;
	}
	if (!os__is_abs_path(npath)) {
		strings__Builder sb = strings__new_builder(npath.len);
		strings__Builder_write_string(&sb, wd);
		strings__Builder_write_string(&sb, _const_os__path_separator);
		strings__Builder_write_string(&sb, npath);
		string _t3 = os__norm_path(strings__Builder_str(&sb));
		return _t3;
	}
	return npath;
}

// Attr: [direct_array_access]
string os__norm_path(string path) {
	if (path.len == 0) {
		return _const_os__dot_str;
	}
	bool rooted = os__is_abs_path(path);
	int volume_len = os__win_volume_len(path);
	string volume = string_substr(path, 0, volume_len);
	if (volume_len != 0 && string_contains(volume, _const_os__fslash_str)) {
		volume = string_replace(volume, _const_os__fslash_str, _const_os__path_separator);
	}
	string cpath = os__clean_path(string_substr(path, volume_len, 2147483647));
	if (cpath.len == 0 && volume_len == 0) {
		return _const_os__dot_str;
	}
	Array_string spath = string_split(cpath, _const_os__path_separator);
	if (!(Array_string_contains(spath, _const_os__dot_dot))) {
		string _t3 = (volume_len != 0 ? (string__plus(volume, cpath)) : (cpath));
		return _t3;
	}
	int spath_len = spath.len;
	strings__Builder sb = strings__new_builder(cpath.len);
	if (rooted) {
		strings__Builder_write_string(&sb, _const_os__path_separator);
	}
	Array_string new_path = __new_array_with_default(0, spath_len, sizeof(string), 0);
	int backlink_count = 0;
	for (int i = (int)(spath_len - 1); i >= 0; i--) {
		string part = ((string*)spath.data)[i];
		if (string__eq(part, _const_os__empty_str)) {
			continue;
		}
		if (string__eq(part, _const_os__dot_dot)) {
			backlink_count++;
			continue;
		}
		if (backlink_count != 0) {
			backlink_count--;
			continue;
		}
		array_prepend(&new_path, &(string[]){part});
	}
	if (backlink_count != 0 && !rooted) {
		for (int i = 0; i < backlink_count; ++i) {
			strings__Builder_write_string(&sb, _const_os__dot_dot);
			if (new_path.len == 0 && i == (int)(backlink_count - 1)) {
				break;
			}
			strings__Builder_write_string(&sb, _const_os__path_separator);
		}
	}
	strings__Builder_write_string(&sb, Array_string_join(new_path, _const_os__path_separator));
	string res = strings__Builder_str(&sb);
	if (res.len == 0) {
		if (volume_len != 0) {
			return volume;
		}
		if (!rooted) {
			return _const_os__dot_str;
		}
		return _const_os__path_separator;
	}
	if (volume_len != 0) {
		string _t7 = string__plus(volume, res);
		return _t7;
	}
	return res;
}

_result_string os__existing_path(string path) {
	IError err = _v_error(_SLIT("path does not exist"));
	if (path.len == 0) {
		return (_result_string){ .is_error=true, .err=err, .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (os__exists(path)) {
		_result_string _t2;
		_result_ok(&(string[]) { path }, (_result*)(&_t2), sizeof(string));
		return _t2;
	}
	int volume_len = 0;
	if (volume_len > 0 && os__is_slash(string_at(path, (int)(volume_len - 1)))) {
		volume_len++;
	}
	strings__textscanner__TextScanner sc = strings__textscanner__new(string_substr(path, volume_len, 2147483647));
	string recent_path = string_substr(path, 0, volume_len);
	for (;;) {
		if (!(strings__textscanner__TextScanner_next(&sc) != -1)) break;
		u8 curr = ((u8)(strings__textscanner__TextScanner_current(&sc)));
		int peek = strings__textscanner__TextScanner_peek(&sc);
		int back = strings__textscanner__TextScanner_peek_back(&sc);
		if (os__is_curr_dir_ref(back, curr, peek)) {
			continue;
		}
		int range = (int)((int)(sc.ilen - strings__textscanner__TextScanner_remaining(&sc)) + volume_len);
		if (os__is_slash(curr) && !os__is_slash(((u8)(peek)))) {
			recent_path = string_substr(path, 0, range);
			continue;
		}
		if (!os__is_slash(curr) && (peek == -1 || os__is_slash(((u8)(peek))))) {
			string curr_path = string_substr(path, 0, range);
			if (os__exists(curr_path)) {
				recent_path = curr_path;
				continue;
			}
			if (recent_path.len == 0) {
				break;
			}
			_result_string _t3;
			_result_ok(&(string[]) { recent_path }, (_result*)(&_t3), sizeof(string));
			return _t3;
		}
	}
	return (_result_string){ .is_error=true, .err=err, .data={EMPTY_STRUCT_INITIALIZATION} };
}

VV_LOCAL_SYMBOL string os__clean_path(string path) {
	if (path.len == 0) {
		return _const_os__empty_str;
	}
	strings__Builder sb = strings__new_builder(path.len);
	strings__textscanner__TextScanner sc = strings__textscanner__new(path);
	for (;;) {
		if (!(strings__textscanner__TextScanner_next(&sc) != -1)) break;
		u8 curr = ((u8)(strings__textscanner__TextScanner_current(&sc)));
		int back = strings__textscanner__TextScanner_peek_back(&sc);
		int peek = strings__textscanner__TextScanner_peek(&sc);
		if (back != -1 && os__is_slash(((u8)(back))) && os__is_slash(curr)) {
			continue;
		}
		if (os__is_curr_dir_ref(back, curr, peek)) {
			if (peek != -1 && os__is_slash(((u8)(peek)))) {
				strings__textscanner__TextScanner_skip_n(&sc, 1);
			}
			continue;
		}
		strings__Builder_write_u8(&sb, ((u8)(strings__textscanner__TextScanner_current(&sc))));
	}
	string res = strings__Builder_str(&sb);
	if (res.len > 1 && os__is_slash(string_at(res, (int)(res.len - 1)))) {
		string _t2 = string_substr(res, 0, (int)(res.len - 1));
		return _t2;
	}
	return res;
}

string os__to_slash(string path) {
	if (string__eq(_const_os__path_separator, _SLIT("/"))) {
		return path;
	}
	string _t2 = string_replace(path, _const_os__path_separator, _SLIT("/"));
	return _t2;
}

string os__from_slash(string path) {
	if (string__eq(_const_os__path_separator, _SLIT("/"))) {
		return path;
	}
	string _t2 = string_replace(path, _SLIT("/"), _const_os__path_separator);
	return _t2;
}

VV_LOCAL_SYMBOL int os__win_volume_len(string path) {
	#if !defined(_WIN32)
	{
		int _t2 = 0;
		return _t2;
	}
	#endif
	int plen = path.len;
	if (plen < 2) {
		int _t3 = 0;
		return _t3;
	}
	if (os__has_drive_letter(path)) {
		int _t4 = 2;
		return _t4;
	}
	if (plen >= 5 && os__starts_w_slash_slash(path) && !os__is_slash(string_at(path, 2))) {
		for (int i = 3; i < plen; i++) {
			if (os__is_slash(string_at(path, i))) {
				if ((int)(i + 1) >= plen || os__is_slash(string_at(path, (int)(i + 1)))) {
					break;
				}
				i++;
				for (; i < plen; i++) {
					if (os__is_slash(string_at(path, i))) {
						return i;
					}
				}
				return i;
			}
		}
	}
	int _t7 = 0;
	return _t7;
}

VV_LOCAL_SYMBOL bool os__is_slash(u8 b) {
	bool _t1 = b == _const_os__fslash;
	return _t1;
}

VV_LOCAL_SYMBOL bool os__is_unc_path(string path) {
	bool _t1 = os__win_volume_len(path) >= 5 && os__starts_w_slash_slash(path);
	return _t1;
}

VV_LOCAL_SYMBOL bool os__has_drive_letter(string path) {
	bool _t1 = path.len >= 2 && u8_is_letter(string_at(path, 0)) && string_at(path, 1) == ':';
	return _t1;
}

VV_LOCAL_SYMBOL bool os__starts_w_slash_slash(string path) {
	bool _t1 = path.len >= 2 && os__is_slash(string_at(path, 0)) && os__is_slash(string_at(path, 1));
	return _t1;
}

VV_LOCAL_SYMBOL bool os__is_drive_rooted(string path) {
	bool _t1 = path.len >= 3 && os__has_drive_letter(path) && os__is_slash(string_at(path, 2));
	return _t1;
}

VV_LOCAL_SYMBOL bool os__is_normal_path(string path) {
	int plen = path.len;
	if (plen == 0) {
		bool _t1 = false;
		return _t1;
	}
	bool _t2 = (plen == 1 && os__is_slash(string_at(path, 0))) || (plen >= 2 && os__is_slash(string_at(path, 0)) && !os__is_slash(string_at(path, 1)));
	return _t2;
}

VV_LOCAL_SYMBOL bool os__is_curr_dir_ref(int byte_one, int byte_two, int byte_three) {
	if (((u8)(byte_two)) != _const_os__dot) {
		bool _t1 = false;
		return _t1;
	}
	bool _t2 = (byte_one < 0 || os__is_slash(((u8)(byte_one)))) && (byte_three < 0 || os__is_slash(((u8)(byte_three))));
	return _t2;
}

u32 os__FilePermission_bitmask(os__FilePermission p) {
	u32 mask = ((u32)(0U));
	if (p.read) {
		mask |= 4U;
	}
	if (p.write) {
		mask |= 2U;
	}
	if (p.execute) {
		mask |= 1U;
	}
	return mask;
}

u32 os__FileMode_bitmask(os__FileMode m) {
	u32 _t1 = (((os__FilePermission_bitmask(m.owner) << 6U) | (os__FilePermission_bitmask(m.group) << 3U)) | os__FilePermission_bitmask(m.others));
	return _t1;
}

os__FileInfo os__inode(string path) {
	struct stat attr;
	#if defined(_WIN32)
	{
	}
	#else
	{
		lstat(((char*)(path.str)), &attr);
		os__FileType typ = os__FileType__unknown;
		if ((attr.st_mode & ((u32)(S_IFMT))) == ((u32)(S_IFREG))) {
			typ = os__FileType__regular;
		} else if ((attr.st_mode & ((u32)(S_IFMT))) == ((u32)(S_IFDIR))) {
			typ = os__FileType__directory;
		} else if ((attr.st_mode & ((u32)(S_IFMT))) == ((u32)(S_IFCHR))) {
			typ = os__FileType__character_device;
		} else if ((attr.st_mode & ((u32)(S_IFMT))) == ((u32)(S_IFBLK))) {
			typ = os__FileType__block_device;
		} else if ((attr.st_mode & ((u32)(S_IFMT))) == ((u32)(S_IFIFO))) {
			typ = os__FileType__fifo;
		} else if ((attr.st_mode & ((u32)(S_IFMT))) == ((u32)(S_IFLNK))) {
			typ = os__FileType__symbolic_link;
		} else if ((attr.st_mode & ((u32)(S_IFMT))) == ((u32)(S_IFSOCK))) {
			typ = os__FileType__socket;
		}
		os__FileInfo _t2 = ((os__FileInfo){
			.FileMode = ((os__FileMode){.typ = typ,.owner = ((os__FilePermission){.read = ((attr.st_mode & ((u32)(S_IRUSR)))) != 0U,.write = ((attr.st_mode & ((u32)(S_IWUSR)))) != 0U,.execute = ((attr.st_mode & ((u32)(S_IXUSR)))) != 0U,}),.group = ((os__FilePermission){.read = ((attr.st_mode & ((u32)(S_IRGRP)))) != 0U,.write = ((attr.st_mode & ((u32)(S_IWGRP)))) != 0U,.execute = ((attr.st_mode & ((u32)(S_IXGRP)))) != 0U,}),.others = ((os__FilePermission){.read = ((attr.st_mode & ((u32)(S_IROTH)))) != 0U,.write = ((attr.st_mode & ((u32)(S_IWOTH)))) != 0U,.execute = ((attr.st_mode & ((u32)(S_IXOTH)))) != 0U,}),}),
			.size = attr.st_size,
			.mtime = attr.st_mtime,
		});
		return _t2;
	}
	#endif
	return (os__FileInfo){.FileMode = (os__FileMode){.owner = (os__FilePermission){.read = 0,.write = 0,.execute = 0,},.group = (os__FilePermission){.read = 0,.write = 0,.execute = 0,},.others = (os__FilePermission){.read = 0,.write = 0,.execute = 0,},},.size = 0,.mtime = 0,};
}

// Attr: [manualfree]
_result_Array_u8 os__read_bytes(string path) {
	bool os__read_bytes_defer_0 = false;
	FILE* fp;
	_result_FILE_ptr _t1 = os__vfopen(path, _SLIT("rb"));
	if (_t1.is_error) {
		_result_Array_u8 _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	fp =  (*(FILE**)_t1.data);
	os__read_bytes_defer_0 = true;
	_result_int _t3 = os__find_cfile_size(fp);
	if (_t3.is_error) {
		// Defer begin
		if (os__read_bytes_defer_0) {
			fclose(fp);
		}
		// Defer end
		_result_Array_u8 _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 	int fsize =  (*(int*)_t3.data);
	if (fsize == 0) {
		_result_strings__Builder _t5 = os__slurp_file_in_builder(fp);
		if (_t5.is_error) {
			// Defer begin
			if (os__read_bytes_defer_0) {
				fclose(fp);
			}
			// Defer end
			_result_Array_u8 _t6;
			memcpy(&_t6, &_t5, sizeof(_result));
			return _t6;
		}
		
 		strings__Builder sb =  (*(strings__Builder*)_t5.data);
		_result_Array_u8 _t7;
		_result_ok(&(Array_u8[]) { strings__Builder_reuse_as_plain_u8_array(&sb) }, (_result*)(&_t7), sizeof(Array_u8));
			// Defer begin
			if (os__read_bytes_defer_0) {
				fclose(fp);
			}
			// Defer end
		return _t7;
	}
	Array_u8 res = __new_array_with_default(fsize, 0, sizeof(u8), 0);
	int nr_read_elements = ((int)(fread(res.data, 1, fsize, fp)));
	if (nr_read_elements == 0 && fsize > 0) {
		_result_Array_u8 _t8 = (_result_Array_u8){ .is_error=true, .err=_v_error(_SLIT("fread failed")), .data={EMPTY_STRUCT_INITIALIZATION} };
			// Defer begin
			if (os__read_bytes_defer_0) {
				fclose(fp);
			}
			// Defer end
		return _t8;
	}
	array_trim(&res, nr_read_elements);
	_result_Array_u8 _t9;
	_result_ok(&(Array_u8[]) { res }, (_result*)(&_t9), sizeof(Array_u8));
		// Defer begin
		if (os__read_bytes_defer_0) {
			fclose(fp);
		}
		// Defer end
	return _t9;
}

VV_LOCAL_SYMBOL _result_int os__find_cfile_size(FILE* fp) {
	int cseek = fseek(fp, 0, SEEK_END);
	isize raw_fsize = ftell(fp);
	if (raw_fsize != 0 && cseek != 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_SLIT("fseek failed")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (cseek != 0 && raw_fsize < 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_SLIT("ftell failed")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int len = ((int)(raw_fsize));
	if (((i64)(len)) < raw_fsize) {
		return (_result_int){ .is_error=true, .err=_v_error( str_intp(3, _MOV((StrIntpData[]){{_SLIT("int("), /*100 &isize*/0xfe09, {.d_i64 = raw_fsize}}, {_SLIT(") cast results in "), /*100 &int*/0xfe07, {.d_i32 = len}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	rewind(fp);
	_result_int _t4;
	_result_ok(&(int[]) { len }, (_result*)(&_t4), sizeof(int));
	return _t4;
}

// Attr: [manualfree]
VV_LOCAL_SYMBOL _result_strings__Builder os__slurp_file_in_builder(FILE* fp) {
	Array_fixed_u8_4096 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	strings__Builder sb = strings__new_builder(_const_os__buf_size);
	for (;;) {
		_result_int _t1 = os__fread(&buf[0], 1, _const_os__buf_size, fp);
		if (_t1.is_error) {
			IError err = _t1.err;
			if ((err)._typ == _IError_os__Eof_index) {
				break;
			}
			strings__Builder_free(&sb);
			return (_result_strings__Builder){ .is_error=true, .err=err, .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		
 		int read_bytes =  (*(int*)_t1.data);
		strings__Builder_write_ptr(&sb, &buf[0], read_bytes);
	}
	_result_strings__Builder _t3;
	_result_ok(&(strings__Builder[]) { sb }, (_result*)(&_t3), sizeof(strings__Builder));
	return _t3;
}

// Attr: [manualfree]
_result_string os__read_file(string path) {
	bool os__read_file_defer_0 = false;
	FILE* fp;
	string mode = _SLIT("rb");
	_result_FILE_ptr _t1 = os__vfopen(path, mode);
	if (_t1.is_error) {
		_result_string _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	fp =  (*(FILE**)_t1.data);
	os__read_file_defer_0 = true;
	_result_int _t3 = os__find_cfile_size(fp);
	if (_t3.is_error) {
		// Defer begin
		if (os__read_file_defer_0) {
			fclose(fp);
		}
		// Defer end
		_result_string _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 	int allocate =  (*(int*)_t3.data);
	if (allocate == 0) {
		_result_strings__Builder _t5 = os__slurp_file_in_builder(fp);
		if (_t5.is_error) {
			// Defer begin
			if (os__read_file_defer_0) {
				fclose(fp);
			}
			// Defer end
			_result_string _t6;
			memcpy(&_t6, &_t5, sizeof(_result));
			return _t6;
		}
		
 		strings__Builder sb =  (*(strings__Builder*)_t5.data);
		string res = strings__Builder_str(&sb);
		strings__Builder_free(&sb);
		_result_string _t7;
		_result_ok(&(string[]) { res }, (_result*)(&_t7), sizeof(string));
			// Defer begin
			if (os__read_file_defer_0) {
				fclose(fp);
			}
			// Defer end
		return _t7;
	}
	{ // Unsafe block
		u8* str = malloc_noscan((int)(allocate + 1));
		int nelements = ((int)(fread(str, 1, allocate, fp)));
		int is_eof = ((int)(feof(fp)));
		int is_error = ((int)(ferror(fp)));
		if (is_eof == 0 && is_error != 0) {
			_v_free(str);
			_result_string _t8 = (_result_string){ .is_error=true, .err=_v_error(_SLIT("fread failed")), .data={EMPTY_STRUCT_INITIALIZATION} };
				// Defer begin
				if (os__read_file_defer_0) {
					fclose(fp);
				}
				// Defer end
			return _t8;
		}
		str[nelements] = 0;
		if (nelements == 0) {
			_result_string _t9;
			_result_ok(&(string[]) { u8_vstring(str) }, (_result*)(&_t9), sizeof(string));
				// Defer begin
				if (os__read_file_defer_0) {
					fclose(fp);
				}
				// Defer end
			return _t9;
		}
		_result_string _t10;
		_result_ok(&(string[]) { u8_vstring_with_len(str, nelements) }, (_result*)(&_t10), sizeof(string));
			// Defer begin
			if (os__read_file_defer_0) {
				fclose(fp);
			}
			// Defer end
		return _t10;
	}
	return (_result_string){0};
}

_result_void os__truncate(string path, u64 len) {
	bool os__truncate_defer_0 = false;
	int fp;
	int _t1;
	#if defined(_WIN32)
	#else
		_t1 = open(((char*)(path.str)), (_const_os__o_wronly | _const_os__o_trunc), 0);
		;
	#endif
	fp = _t1;
	if (fp < 0) {
		return (_result_void){ .is_error=true, .err=error_with_code(os__posix_get_error_msg(errno), errno), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	os__truncate_defer_0 = true;
	#if defined(_WIN32)
	{
	}
	#else
	{
		if (ftruncate(fp, len) != 0) {
			_result_void _t4 = (_result_void){ .is_error=true, .err=error_with_code(os__posix_get_error_msg(errno), errno), .data={EMPTY_STRUCT_INITIALIZATION} };
				// Defer begin
				if (os__truncate_defer_0) {
					close(fp);
				}
				// Defer end
			return _t4;
		}
	}
	#endif
		// Defer begin
		if (os__truncate_defer_0) {
			close(fp);
		}
		// Defer end
	return (_result_void){0};
}

VV_LOCAL_SYMBOL void os__eprintln_unknown_file_size(void) {
	eprintln(string__plus(_SLIT("os.file_size() Cannot determine file-size: "), os__posix_get_error_msg(errno)));
}

u64 os__file_size(string path) {
	struct stat s;
	{ // Unsafe block
		#if defined(TARGET_IS_64BIT)
		{
			#if defined(_WIN32)
			{
			}
			#else
			{
				if (stat(((char*)(path.str)), &s) != 0) {
					os__eprintln_unknown_file_size();
					u64 _t3 = 0U;
					return _t3;
				}
				u64 _t4 = ((u64)(s.st_size));
				return _t4;
			}
			#endif
		}
		#endif
		#if defined(TARGET_IS_32BIT)
		{
			#if defined(_WIN32)
			{
			}
			#else
			{
				if (stat(((char*)(path.str)), &s) != 0) {
					os__eprintln_unknown_file_size();
					u64 _t7 = 0U;
					return _t7;
				}
				u64 _t8 = ((u64)(s.st_size));
				return _t8;
			}
			#endif
		}
		#endif
	}
	u64 _t9 = 0U;
	return _t9;
}

_result_void os__rename_dir(string src, string dst) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int ret = rename(((char*)(src.str)), ((char*)(dst.str)));
		if (ret != 0) {
			return (_result_void){ .is_error=true, .err=error_with_code( str_intp(3, _MOV((StrIntpData[]){{_SLIT("failed to rename "), /*115 &string*/0xfe10, {.d_s = src}}, {_SLIT(" to "), /*115 &string*/0xfe10, {.d_s = dst}}, {_SLIT0, 0, { .d_c = 0 }}})), ret), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	}
	#endif
	return (_result_void){0};
}

_result_void os__rename(string src, string dst) {
	string rdst = dst;
	if (os__is_dir(rdst)) {
		rdst = os__join_path_single(string_trim_right(rdst, _const_os__path_separator), os__file_name(string_trim_right(src, _const_os__path_separator)));
	}
	#if defined(_WIN32)
	{
	}
	#else
	{
		int ret = rename(((char*)(src.str)), ((char*)(rdst.str)));
		if (ret != 0) {
			return (_result_void){ .is_error=true, .err=error_with_code( str_intp(3, _MOV((StrIntpData[]){{_SLIT("failed to rename "), /*115 &string*/0xfe10, {.d_s = src}}, {_SLIT(" to "), /*115 &string*/0xfe10, {.d_s = dst}}, {_SLIT0, 0, { .d_c = 0 }}})), ret), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	}
	#endif
	return (_result_void){0};
}

_result_void os__cp(string src, string dst) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int fp_from = open(((char*)(src.str)), O_RDONLY, 0);
		if (fp_from < 0) {
			return (_result_void){ .is_error=true, .err=error_with_code( str_intp(2, _MOV((StrIntpData[]){{_SLIT("cp: failed to open "), /*115 &string*/0xfe10, {.d_s = src}}, {_SLIT0, 0, { .d_c = 0 }}})), ((int)(fp_from))), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		int fp_to = open(((char*)(dst.str)), ((O_WRONLY | O_CREAT) | O_TRUNC), (S_IWUSR | S_IRUSR));
		if (fp_to < 0) {
			close(fp_from);
			return (_result_void){ .is_error=true, .err=error_with_code( str_intp(3, _MOV((StrIntpData[]){{_SLIT("cp (permission): failed to write to "), /*115 &string*/0xfe10, {.d_s = dst}}, {_SLIT(" (fp_to: "), /*100 &int*/0xfe07, {.d_i32 = fp_to}}, {_SLIT(")"), 0, { .d_c = 0 }}})), ((int)(fp_to))), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		Array_fixed_u8_1024 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		int count = 0;
		for (;;) {
			count = read(fp_from, &buf[0], sizeof(Array_fixed_u8_1024));
			if (count == 0) {
				break;
			}
			if (write(fp_to, &buf[0], count) < 0) {
				close(fp_to);
				close(fp_from);
				return (_result_void){ .is_error=true, .err=error_with_code( str_intp(2, _MOV((StrIntpData[]){{_SLIT("cp: failed to write to "), /*115 &string*/0xfe10, {.d_s = dst}}, {_SLIT0, 0, { .d_c = 0 }}})), ((int)(-1))), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		struct stat from_attr;
		stat(((char*)(src.str)), &from_attr);
		if (chmod(((char*)(dst.str)), from_attr.st_mode) < 0) {
			close(fp_to);
			close(fp_from);
			return (_result_void){ .is_error=true, .err=error_with_code( str_intp(2, _MOV((StrIntpData[]){{_SLIT("failed to set permissions for "), /*115 &string*/0xfe10, {.d_s = dst}}, {_SLIT0, 0, { .d_c = 0 }}})), ((int)(-1))), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		close(fp_to);
		close(fp_from);
	}
	#endif
	return (_result_void){0};
}

_result_FILE_ptr os__vfopen(string path, string mode) {
	if (path.len == 0) {
		return (_result_FILE_ptr){ .is_error=true, .err=_v_error(_SLIT("vfopen called with \"\"")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	voidptr fp = ((void*)0);
	#if defined(_WIN32)
	{
	}
	#else
	{
		fp = fopen(((char*)(path.str)), ((char*)(mode.str)));
	}
	#endif
	if (isnil(fp)) {
		return (_result_FILE_ptr){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("failed to open file \""), /*115 &string*/0xfe10, {.d_s = path}}, {_SLIT("\""), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	} else {
		_result_FILE_ptr _t4;
		_result_ok(&(FILE*[]) { fp }, (_result*)(&_t4), sizeof(FILE*));
		return _t4;
	}
	return (_result_FILE_ptr){0};
}

int os__fileno(voidptr cfile) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		FILE* cfile_casted = ((FILE*)(((void*)0)));
		cfile_casted = cfile;
		int _t2 = fileno(cfile_casted);
		return _t2;
	}
	#endif
	return 0;
}

VV_LOCAL_SYMBOL voidptr os__vpopen(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		u8* cpath = path.str;
		voidptr _t2 = popen(((char*)(cpath)), "r");
		return _t2;
	}
	#endif
	return 0;
}

VV_LOCAL_SYMBOL multi_return_int_bool os__posix_wait4_to_exit_status(int waitret) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int ret = 0;
		bool is_signaled = true;
		if (WIFEXITED(waitret)) {
			ret = WEXITSTATUS(waitret);
			is_signaled = false;
		} else if (WIFSIGNALED(waitret)) {
			ret = WTERMSIG(waitret);
			is_signaled = true;
		}
		return (multi_return_int_bool){.arg0=ret, .arg1=is_signaled};
	}
	#endif
	return (multi_return_int_bool){0};
}

string os__posix_get_error_msg(int code) {
	char* ptr_text = strerror(code);
	if (ptr_text == 0) {
		string _t1 = _SLIT("");
		return _t1;
	}
	string _t2 = tos3(ptr_text);
	return _t2;
}

VV_LOCAL_SYMBOL int os__vpclose(voidptr f) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		multi_return_int_bool mr_10420 = os__posix_wait4_to_exit_status(pclose(f));
		int ret = mr_10420.arg0;
		return ret;
	}
	#endif
	return 0;
}

int os__system(string cmd) {
	int ret = 0;
	#if defined(_WIN32)
	{
	}
	#else
	{
		#if defined(__TARGET_IOS__)
		{
		}
		#else
		{
			{ // Unsafe block
				ret = system(((char*)(cmd.str)));
			}
		}
		#endif
	}
	#endif
	if (ret == -1) {
		os__print_c_errno();
	}
	#if !defined(_WIN32)
	{
		multi_return_int_bool mr_11463 = os__posix_wait4_to_exit_status(ret);
		int pret = mr_11463.arg0;
		bool is_signaled = mr_11463.arg1;
		ret = pret;
		if (is_signaled) {
			eprintln(string__plus(string__plus( str_intp(2, _MOV((StrIntpData[]){{_SLIT("Terminated by signal "), /*100 &int*/0x4fe27, {.d_i32 = pret}}, {_SLIT(" ("), 0, { .d_c = 0 }}})), os__sigint_to_signal_name(pret)), _SLIT(")")));
			ret = (int)(pret + 128);
		}
	}
	#endif
	return ret;
}

bool os__exists(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		bool _t2 = access(((char*)(path.str)), _const_os__f_ok) != -1;
		return _t2;
	}
	#endif
	return 0;
}

bool os__is_executable(string path) {
	bool _t1 = access(((char*)(path.str)), _const_os__x_ok) != -1;
	return _t1;
}

// Attr: [manualfree]
bool os__is_writable(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		bool _t2 = access(((char*)(path.str)), _const_os__w_ok) != -1;
		return _t2;
	}
	#endif
	return 0;
}

// Attr: [manualfree]
bool os__is_readable(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		bool _t2 = access(((char*)(path.str)), _const_os__r_ok) != -1;
		return _t2;
	}
	#endif
	return 0;
}

_result_void os__rm(string path) {
	int rc = 0;
	#if defined(_WIN32)
	{
	}
	#else
	{
		rc = remove(((char*)(path.str)));
	}
	#endif
	if (rc == -1) {
		return (_result_void){ .is_error=true, .err=_v_error(string__plus( str_intp(2, _MOV((StrIntpData[]){{_SLIT("Failed to remove \""), /*115 &string*/0xfe10, {.d_s = path}}, {_SLIT("\": "), 0, { .d_c = 0 }}})), os__posix_get_error_msg(errno))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

_result_void os__rmdir(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int rc = rmdir(((char*)(path.str)));
		if (rc == -1) {
			return (_result_void){ .is_error=true, .err=_v_error(os__posix_get_error_msg(errno)), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	}
	#endif
	return (_result_void){0};
}

VV_LOCAL_SYMBOL void os__print_c_errno(void) {
	int e = errno;
	string se = tos_clone(((u8*)(strerror(e))));
	eprintln( str_intp(3, _MOV((StrIntpData[]){{_SLIT("errno="), /*100 &int*/0xfe07, {.d_i32 = e}}, {_SLIT(" err="), /*115 &string*/0xfe10, {.d_s = se}}, {_SLIT0, 0, { .d_c = 0 }}})));
}

string os__get_raw_line(void) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		usize max = ((usize)(0));
		char* buf = ((char*)(0));
		int nr_chars = getline(&buf, &max, stdin);
		string str = tos(((u8*)(buf)), (nr_chars < 0 ? (0) : (nr_chars)));
		string ret = string_clone(str);
		{ // Unsafe block
			if (nr_chars > 0 && buf != 0) {
				free(buf);
			}
		}
		return ret;
	}
	#endif
	return (string){.str=(byteptr)"", .is_lit=1};
}

Array_u8 os__get_raw_stdin(void) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		usize max = ((usize)(0));
		char* buf = ((char*)(0));
		int nr_chars = getline(&buf, &max, stdin);
		Array_u8 _t2 = ((array){.data = ((voidptr)(buf)),.offset = 0,.len = (nr_chars < 0 ? (0) : (nr_chars)),.cap = ((int)(max)),.flags = 0,.element_size = 1,});
		return _t2;
	}
	#endif
	return __new_array(0, 0, sizeof(u8));
}

// Attr: [manualfree]
string os__executable(void) {
	Array_fixed_u8_4096 result = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	string _t1 = os__executable_fallback();
	return _t1;
}

bool os__is_dir(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		struct stat statbuf;
		if (stat(((char*)(path.str)), &statbuf) != 0) {
			bool _t2 = false;
			return _t2;
		}
		int val = (((int)(statbuf.st_mode)) & _const_os__s_ifmt);
		bool _t3 = val == _const_os__s_ifdir;
		return _t3;
	}
	#endif
	return 0;
}

bool os__is_link(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		struct stat statbuf;
		if (lstat(((char*)(path.str)), &statbuf) != 0) {
			bool _t2 = false;
			return _t2;
		}
		bool _t3 = (((int)(statbuf.st_mode)) & _const_os__s_ifmt) == _const_os__s_iflnk;
		return _t3;
	}
	#endif
	return 0;
}

VV_LOCAL_SYMBOL os__PathKind os__kind_of_existing_path(string path) {
	os__PathKind res = ((os__PathKind){.is_file = 0,.is_dir = 0,.is_link = 0,});
	#if defined(_WIN32)
	{
	}
	#else
	{
		struct stat statbuf;
		int res_stat = lstat(((char*)(path.str)), &statbuf);
		if (res_stat == 0) {
			int kind = ((((int)(statbuf.st_mode)) & _const_os__s_ifmt));
			if (kind == _const_os__s_ifreg) {
				res.is_file = true;
			}
			if (kind == _const_os__s_ifdir) {
				res.is_dir = true;
			}
			if (kind == _const_os__s_iflnk) {
				res.is_link = true;
			}
		}
	}
	#endif
	return res;
}

_result_void os__chdir(string path) {
	int _t1;
	#if defined(_WIN32)
	#else
		_t1 = chdir(((char*)(path.str)));
		;
	#endif
	int ret = _t1;
	if (ret == -1) {
		return (_result_void){ .is_error=true, .err=error_with_code(os__posix_get_error_msg(errno), errno), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

// Attr: [manualfree]
string os__getwd(void) {
	{ // Unsafe block
		Array_fixed_u8_4096 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		#if defined(_WIN32)
		{
		}
		#else
		{
			if (getcwd(((char*)(&buf[0])), _const_os__max_path_len) == 0) {
				string _t2 = _SLIT("");
				return _t2;
			}
			string res = tos_clone(&buf[0]);
			return res;
		}
		#endif
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [manualfree]
string os__real_path(string fpath) {
	Array_fixed_u8_4096 fullpath = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	string res = _SLIT("");
	#if defined(_WIN32)
	{
	}
	#else
	{
		char* ret = ((char*)(realpath(((char*)(fpath.str)), ((char*)(&fullpath[0])))));
		if (ret == 0) {
			string_free(&res);
			string _t2 = string_clone(fpath);
			return _t2;
		}
		string_free(&res);
		res = tos_clone(&fullpath[0]);
	}
	#endif
	os__normalize_drive_letter(res);
	return res;
}

// Attr: [direct_array_access]
// Attr: [manualfree]
// Attr: [unsafe]
VV_LOCAL_SYMBOL void os__normalize_drive_letter(string path) {
	#if !defined(_WIN32)
	{
		return;
	}
	#endif
	if (path.len > 2 && path.str[ 0] >= 'a' && path.str[ 0] <= 'z' && path.str[ 1] == ':' && path.str[ 2] == _const_os__path_separator.str[ 0]) {
		{ // Unsafe block
			u8* x = &path.str[0];
			*x = (u8)(*x - 32);
		}
	}
}

int os__fork(void) {
	int pid = -1;
	#if !defined(_WIN32)
	{
		pid = fork();
	}
	#endif
	return pid;
}

int os__wait(void) {
	int pid = -1;
	#if !defined(_WIN32)
	{
	}
	#endif
	return pid;
}

i64 os__file_last_mod_unix(string path) {
	struct stat attr;
	stat(((char*)(path.str)), &attr);
	i64 _t1 = ((i64)(attr.st_mtime));
	return _t1;
}

void os__flush(void) {
	fflush(stdout);
}

_result_void os__chmod(string path, int mode) {
	if (chmod(((char*)(path.str)), mode) != 0) {
		return (_result_void){ .is_error=true, .err=error_with_code(string__plus(_SLIT("chmod failed: "), os__posix_get_error_msg(errno)), errno), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

_result_void os__chown(string path, int owner, int group) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		if (chown(((char*)(path.str)), owner, group) != 0) {
			return (_result_void){ .is_error=true, .err=error_with_code(os__posix_get_error_msg(errno), errno), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	}
	#endif
	return (_result_void){0};
}

_result_os__File os__open_append(string path) {
	os__File file = ((os__File){.cfile = 0,.fd = 0,.is_opened = 0,});
	#if defined(_WIN32)
	{
	}
	#else
	{
		u8* cpath = path.str;
		file = ((os__File){.cfile = fopen(((char*)(cpath)), "ab"),.fd = 0,.is_opened = 0,});
	}
	#endif
	if (isnil(file.cfile)) {
		return (_result_os__File){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("failed to create(append) file \""), /*115 &string*/0xfe10, {.d_s = path}}, {_SLIT("\""), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	file.is_opened = true;
	_result_os__File _t3;
	_result_ok(&(os__File[]) { file }, (_result*)(&_t3), sizeof(os__File));
	return _t3;
}

_result_void os__execvp(string cmdpath, Array_string cmdargs) {
	Array_char_ptr cargs = __new_array_with_default(0, 0, sizeof(char*), 0);
	array_push((array*)&cargs, _MOV((char*[]){ ((char*)(cmdpath.str)) }));
	for (int i = 0; i < cmdargs.len; ++i) {
		array_push((array*)&cargs, _MOV((char*[]){ ((char*)((*(string*)array_get(cmdargs, i)).str)) }));
	}
	array_push((array*)&cargs, _MOV((char*[]){ ((char*)(0)) }));
	int res = ((int)(0));
	#if defined(_WIN32)
	{
	}
	#else
	{
		res = execvp(((char*)(cmdpath.str)), cargs.data);
	}
	#endif
	if (res == -1) {
		return (_result_void){ .is_error=true, .err=error_with_code(os__posix_get_error_msg(errno), errno), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_v_exit(res);
	VUNREACHABLE();
	return (_result_void){0};
}

_result_void os__execve(string cmdpath, Array_string cmdargs, Array_string envs) {
	Array_char_ptr cargv = __new_array_with_default(0, 0, sizeof(char*), 0);
	Array_char_ptr cenvs = __new_array_with_default(0, 0, sizeof(char*), 0);
	array_push((array*)&cargv, _MOV((char*[]){ ((char*)(cmdpath.str)) }));
	for (int i = 0; i < cmdargs.len; ++i) {
		array_push((array*)&cargv, _MOV((char*[]){ ((char*)((*(string*)array_get(cmdargs, i)).str)) }));
	}
	for (int i = 0; i < envs.len; ++i) {
		array_push((array*)&cenvs, _MOV((char*[]){ ((char*)((*(string*)array_get(envs, i)).str)) }));
	}
	array_push((array*)&cargv, _MOV((char*[]){ ((char*)(0)) }));
	array_push((array*)&cenvs, _MOV((char*[]){ ((char*)(0)) }));
	int res = ((int)(0));
	#if defined(_WIN32)
	{
	}
	#else
	{
		res = execve(((char*)(cmdpath.str)), cargv.data, cenvs.data);
	}
	#endif
	if (res == -1) {
		return (_result_void){ .is_error=true, .err=error_with_code(os__posix_get_error_msg(errno), errno), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

int os__is_atty(int fd) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int _t2 = isatty(fd);
		return _t2;
	}
	#endif
	return 0;
}

_result_void os__write_file_array(string path, array buffer) {
	_result_os__File _t1 = os__create(path);
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	os__File f =  (*(os__File*)_t1.data);
		_result_void _t3 = os__File_write_full_buffer(&f, buffer.data, ((usize)((int)(buffer.len * buffer.element_size))));
	if (_t3.is_error) {
		_result_void _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 ;
	os__File_close(&f);
	return (_result_void){0};
}

_result_Array_string os__glob(Array_string patterns) {
	Array_string matches = __new_array_with_default(0, 0, sizeof(string), 0);
	for (int _t1 = 0; _t1 < patterns.len; ++_t1) {
		string pattern = ((string*)patterns.data)[_t1];
		_result_void _t2 = os__native_glob_pattern(pattern, &/*arr*/matches);
		if (_t2.is_error) {
			_result_Array_string _t3;
			memcpy(&_t3, &_t2, sizeof(_result));
			return _t3;
		}
		
 ;
	}
	qsort(matches.data, matches.len, matches.element_size, (int (*)(const void *, const void *))&compare_11425276908114543126_string);
	_result_Array_string _t4;
	_result_ok(&(Array_string[]) { matches }, (_result*)(&_t4), sizeof(Array_string));
	return _t4;
}

IError os__last_error(void) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int code = errno;
		string msg = os__posix_get_error_msg(code);
		IError _t2 = error_with_code(msg, code);
		return _t2;
	}
	#endif
	return (IError){0};
}

// Attr: [unsafe]
void os__Result_free(os__Result* result) {
	string_free(&result->output);
}

VV_LOCAL_SYMBOL string os__executable_fallback(void) {
	if (_const_os__args.len == 0) {
		string _t1 = _SLIT("");
		return _t1;
	}
	string exepath = (*(string*)array_get(_const_os__args, 0));
	if (!os__is_abs_path(exepath)) {
		string other_separator = (string__eq(_const_os__path_separator, _SLIT("/")) ? (_SLIT("\\")) : (_SLIT("/")));
		string rexepath = string_replace(exepath, other_separator, _const_os__path_separator);
		if (string_contains(rexepath, _const_os__path_separator)) {
			exepath = os__join_path_single(_const_os__wd_at_startup, exepath);
		} else {
			_result_string _t2 = os__find_abs_path_of_executable(exepath);
			if (_t2.is_error) {
				IError err = _t2.err;
				*(string*) _t2.data = _SLIT("");
			}
			
 			string foundpath =  (*(string*)_t2.data);
			if (foundpath.len > 0) {
				exepath = foundpath;
			}
		}
	}
	exepath = os__real_path(exepath);
	return exepath;
}

_result_void os__cp_all(string src, string dst, bool overwrite) {
	string source_path = os__real_path(src);
	string dest_path = os__real_path(dst);
	if (!os__exists(source_path)) {
		return (_result_void){ .is_error=true, .err=_v_error(_SLIT("Source path doesn't exist")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (!os__is_dir(source_path)) {
		string fname = os__file_name(source_path);
		string adjusted_path = (os__is_dir(dest_path) ? (os__join_path_single(dest_path, fname)) : (dest_path));
		if (os__exists(adjusted_path)) {
			if (overwrite) {
				_result_void _t2 = os__rm(adjusted_path);
				if (_t2.is_error) {
					_result_void _t3;
					memcpy(&_t3, &_t2, sizeof(_result));
					return _t3;
				}
				
 ;
			} else {
				return (_result_void){ .is_error=true, .err=_v_error(_SLIT("Destination file path already exist")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		_result_void _t5 = os__cp(source_path, adjusted_path);
		if (_t5.is_error) {
			_result_void _t6;
			memcpy(&_t6, &_t5, sizeof(_result));
			return _t6;
		}
		
 ;
		return (_result_void){0};
	}
	if (!os__exists(dest_path)) {
		_result_void _t7 = os__mkdir(dest_path, ((os__MkdirParams){.mode = 0777,}));
		if (_t7.is_error) {
			_result_void _t8;
			memcpy(&_t8, &_t7, sizeof(_result));
			return _t8;
		}
		
 ;
	}
	if (!os__is_dir(dest_path)) {
		return (_result_void){ .is_error=true, .err=_v_error(_SLIT("Destination path is not a valid directory")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_Array_string _t10 = os__ls(source_path);
	if (_t10.is_error) {
		_result_void _t11;
		memcpy(&_t11, &_t10, sizeof(_result));
		return _t11;
	}
	
 	Array_string files =  (*(Array_string*)_t10.data);
	for (int _t12 = 0; _t12 < files.len; ++_t12) {
		string file = ((string*)files.data)[_t12];
		string sp = os__join_path_single(source_path, file);
		string dp = os__join_path_single(dest_path, file);
		if (os__is_dir(sp)) {
			if (!os__exists(dp)) {
				_result_void _t13 = os__mkdir(dp, ((os__MkdirParams){.mode = 0777,}));
				if (_t13.is_error) {
					_result_void _t14;
					memcpy(&_t14, &_t13, sizeof(_result));
					return _t14;
				}
				
 ;
			}
		}
		_result_void _t15 = os__cp_all(sp, dp, overwrite);
		if (_t15.is_error) {
			IError err = _t15.err;
			_result_void _t16 = os__rmdir(dp);
			if (_t16.is_error) {
				IError err = _t16.err;
				return (_result_void){ .is_error=true, .err=err, .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 ;
			return (_result_void){ .is_error=true, .err=err, .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		
 ;
	}
	return (_result_void){0};
}

_result_void os__mv_by_cp(string source, string target, os__MvParams opts) {
	_result_void _t1 = os__cp_all(source, target, opts.overwrite);
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 ;
	if (os__is_dir(source)) {
		_result_void _t3 = os__rmdir_all(source);
		if (_t3.is_error) {
			_result_void _t4;
			memcpy(&_t4, &_t3, sizeof(_result));
			return _t4;
		}
		
 ;
		return (_result_void){0};
	}
	_result_void _t5 = os__rm(source);
	if (_t5.is_error) {
		_result_void _t6;
		memcpy(&_t6, &_t5, sizeof(_result));
		return _t6;
	}
	
 ;
	return (_result_void){0};
}

_result_void os__mv(string source, string target, os__MvParams opts) {
	if (!opts.overwrite && os__exists(target)) {
		return (_result_void){ .is_error=true, .err=_v_error(_SLIT("target path already exist")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_void _t2 = os__rename(source, target);
	if (_t2.is_error) {
		IError err = _t2.err;
		_result_void _t3 = os__mv_by_cp(source, target, opts);
		if (_t3.is_error) {
			_result_void _t4;
			memcpy(&_t4, &_t3, sizeof(_result));
			return _t4;
		}
		
 ;
	;
	}
	
 ;
	return (_result_void){0};
}

// Attr: [manualfree]
_result_Array_string os__read_lines(string path) {
	_result_string _t1 = os__read_file(path);
	if (_t1.is_error) {
		_result_Array_string _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	string buf =  (*(string*)_t1.data);
	Array_string res = string_split_into_lines(buf);
	string_free(&buf);
	_result_Array_string _t3;
	_result_ok(&(Array_string[]) { res }, (_result*)(&_t3), sizeof(Array_string));
	return _t3;
}

string os__sigint_to_signal_name(int si) {
	switch (si) {
		case 1: {
				string _t1 = _SLIT("SIGHUP");
				return _t1;
		}
		case 2: {
				string _t2 = _SLIT("SIGINT");
				return _t2;
		}
		case 3: {
				string _t3 = _SLIT("SIGQUIT");
				return _t3;
		}
		case 4: {
				string _t4 = _SLIT("SIGILL");
				return _t4;
		}
		case 6: {
				string _t5 = _SLIT("SIGABRT");
				return _t5;
		}
		case 8: {
				string _t6 = _SLIT("SIGFPE");
				return _t6;
		}
		case 9: {
				string _t7 = _SLIT("SIGKILL");
				return _t7;
		}
		case 11: {
				string _t8 = _SLIT("SIGSEGV");
				return _t8;
		}
		case 13: {
				string _t9 = _SLIT("SIGPIPE");
				return _t9;
		}
		case 14: {
				string _t10 = _SLIT("SIGALRM");
				return _t10;
		}
		case 15: {
				string _t11 = _SLIT("SIGTERM");
				return _t11;
		}
		default: {
				break;
		}
	}
	
	string _t12 = _SLIT("unknown");
	return _t12;
}

_result_void os__rmdir_all(string path) {
	string ret_err = _SLIT("");
	_result_Array_string _t1 = os__ls(path);
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	Array_string items =  (*(Array_string*)_t1.data);
	for (int _t3 = 0; _t3 < items.len; ++_t3) {
		string item = ((string*)items.data)[_t3];
		string fullpath = os__join_path_single(path, item);
		if (os__is_dir(fullpath) && !os__is_link(fullpath)) {
			_result_void _t4 = os__rmdir_all(fullpath);
			if (_t4.is_error) {
				IError err = _t4.err;
				ret_err = IError_name_table[err._typ]._method_msg(err._object);
			}
			
 ;
		} else {
			_result_void _t5 = os__rm(fullpath);
			if (_t5.is_error) {
				IError err = _t5.err;
				ret_err = IError_name_table[err._typ]._method_msg(err._object);
			}
			
 ;
		}
	}
	_result_void _t6 = os__rmdir(path);
	if (_t6.is_error) {
		IError err = _t6.err;
		ret_err = IError_name_table[err._typ]._method_msg(err._object);
	}
	
 ;
	if (ret_err.len > 0) {
		return (_result_void){ .is_error=true, .err=_v_error(ret_err), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

// Attr: [manualfree]
bool os__is_dir_empty(string path) {
	_result_Array_string _t1 = os__ls(path);
	if (_t1.is_error) {
		IError err = _t1.err;
		bool _t2 = true;
		return _t2;
	}
	
 	Array_string items =  (*(Array_string*)_t1.data);
	bool res = items.len == 0;
	array_free(&items);
	return res;
}

string os__file_ext(string opath) {
	if (opath.len < 3) {
		string _t1 = _SLIT("");
		return _t1;
	}
	string path = os__file_name(opath);
	int pos = string_index_u8_last(path, '.');
	if (pos == -1) {
		string _t2 = _SLIT("");
		return _t2;
	}
	if ((int)(pos + 1) >= path.len || pos == 0) {
		string _t3 = _SLIT("");
		return _t3;
	}
	string _t4 = string_substr(path, pos, 2147483647);
	return _t4;
}

string os__dir(string opath) {
	if ((opath).len == 0) {
		string _t1 = _SLIT(".");
		return _t1;
	}
	string other_separator = (string__eq(_const_os__path_separator, _SLIT("/")) ? (_SLIT("\\")) : (_SLIT("/")));
	string path = string_replace(opath, other_separator, _const_os__path_separator);
	_option_int _t2 = string_index_last(path, _const_os__path_separator);
	if (_t2.state != 0) {
		IError err = _t2.err;
		string _t3 = _SLIT(".");
		return _t3;
	}
	
 	int pos =  (*(int*)_t2.data);
	if (pos == 0 && string__eq(_const_os__path_separator, _SLIT("/"))) {
		string _t4 = _SLIT("/");
		return _t4;
	}
	string _t5 = string_substr(path, 0, pos);
	return _t5;
}

string os__base(string opath) {
	if ((opath).len == 0) {
		string _t1 = _SLIT(".");
		return _t1;
	}
	string other_separator = (string__eq(_const_os__path_separator, _SLIT("/")) ? (_SLIT("\\")) : (_SLIT("/")));
	string path = string_replace(opath, other_separator, _const_os__path_separator);
	if (string__eq(path, _const_os__path_separator)) {
		return _const_os__path_separator;
	}
	if (string_ends_with(path, _const_os__path_separator)) {
		string path2 = string_substr(path, 0, (int)(path.len - 1));
		_option_int _t3 = string_index_last(path2, _const_os__path_separator);
		if (_t3.state != 0) {
			IError err = _t3.err;
			string _t4 = string_clone(path2);
			return _t4;
		}
		
 		int pos =  (*(int*)_t3.data);
		string _t5 = string_substr(path2, (int)(pos + 1), 2147483647);
		return _t5;
	}
	_option_int _t6 = string_index_last(path, _const_os__path_separator);
	if (_t6.state != 0) {
		IError err = _t6.err;
		string _t7 = string_clone(path);
		return _t7;
	}
	
 	int pos =  (*(int*)_t6.data);
	string _t8 = string_substr(path, (int)(pos + 1), 2147483647);
	return _t8;
}

string os__file_name(string opath) {
	string other_separator = (string__eq(_const_os__path_separator, _SLIT("/")) ? (_SLIT("\\")) : (_SLIT("/")));
	string path = string_replace(opath, other_separator, _const_os__path_separator);
	string _t1 = string_all_after_last(path, _const_os__path_separator);
	return _t1;
}

_option_string os__input_opt(string prompt) {
	print(prompt);
	os__flush();
	string res = os__get_raw_line();
	if (res.len > 0) {
		_option_string _t1;
		_option_ok(&(string[]) { string_trim_right(res, _SLIT("\r\n")) }, (_option*)(&_t1), sizeof(string));
		return _t1;
	}
	return (_option_string){ .state=2, .err=_const_none__, .data={EMPTY_STRUCT_INITIALIZATION} };
}

string os__input(string prompt) {
	_option_string _t1 = os__input_opt(prompt);
	if (_t1.state != 0) {
		IError err = _t1.err;
		string _t2 = _SLIT("<EOF>");
		return _t2;
	}
	
 	string res =  (*(string*)_t1.data);
	return res;
}

string os__get_line(void) {
	string str = os__get_raw_line();
	string _t1 = string_trim_right(str, _SLIT("\n"));
	return _t1;
}

Array_string os__get_lines(void) {
	string line = _SLIT("");
	Array_string inputstr = __new_array_with_default(0, 0, sizeof(string), 0);
	for (;;) {
		line = os__get_line();
		if (line.len <= 0) {
			break;
		}
		line = string_trim_space(line);
		array_push((array*)&inputstr, _MOV((string[]){ string_clone(line) }));
	}
	return inputstr;
}

string os__get_lines_joined(void) {
	string line = _SLIT("");
	string inputstr = _SLIT("");
	for (;;) {
		line = os__get_line();
		if (line.len <= 0) {
			break;
		}
		line = string_trim_space(line);
		inputstr = string__plus(inputstr, line);
	}
	return inputstr;
}

string os__get_raw_lines_joined(void) {
	string line = _SLIT("");
	Array_string lines = __new_array_with_default(0, 0, sizeof(string), 0);
	for (;;) {
		line = os__get_raw_line();
		if (line.len <= 0) {
			break;
		}
		array_push((array*)&lines, _MOV((string[]){ string_clone(line) }));
	}
	string res = Array_string_join(lines, _SLIT(""));
	return res;
}

string os__user_os(void) {
	if ((os__getenv(_SLIT("TERMUX_VERSION"))).len != 0) {
		string _t1 = _SLIT("termux");
		return _t1;
	}
	string _t2 = _SLIT("unknown");
	return _t2;
}

_result_Array_string os__user_names(void) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		_result_Array_string _t2 = os__read_lines(_SLIT("/etc/passwd"));
		if (_t2.is_error) {
			_result_Array_string _t3;
			memcpy(&_t3, &_t2, sizeof(_result));
			return _t3;
		}
		
 		Array_string lines =  (*(Array_string*)_t2.data);
		Array_string users = __new_array_with_default(0, lines.len, sizeof(string), 0);
		for (int _t4 = 0; _t4 < lines.len; ++_t4) {
			string line = ((string*)lines.data)[_t4];
			_option_int _t5 = string_index(line, _SLIT(":"));
			if (_t5.state != 0) {
				IError err = _t5.err;
				*(int*) _t5.data = line.len;
			}
			
 			int end_name =  (*(int*)_t5.data);
			array_push((array*)&users, _MOV((string[]){ string_clone(string_substr(line, 0, end_name)) }));
		}
		_result_Array_string _t7;
		_result_ok(&(Array_string[]) { users }, (_result*)(&_t7), sizeof(Array_string));
		return _t7;
	}
	#endif
	return (_result_Array_string){0};
}

string os__home_dir(void) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		string _t2 = os__getenv(_SLIT("HOME"));
		return _t2;
	}
	#endif
	return (string){.str=(byteptr)"", .is_lit=1};
}

string os__expand_tilde_to_home(string path) {
	if (string__eq(path, _SLIT("~"))) {
		string _t1 = string_trim_right(os__home_dir(), _const_os__path_separator);
		return _t1;
	}
	if (string_starts_with(path, string__plus(_SLIT("~"), _const_os__path_separator))) {
		string _t2 = string_replace_once(path, string__plus(_SLIT("~"), _const_os__path_separator), string__plus(string_trim_right(os__home_dir(), _const_os__path_separator), _const_os__path_separator));
		return _t2;
	}
	return path;
}

_result_void os__write_file(string path, string text) {
	_result_os__File _t1 = os__create(path);
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	os__File f =  (*(os__File*)_t1.data);
		_result_void _t3 = os__File_write_full_buffer(&f, text.str, ((usize)(text.len)));
	if (_t3.is_error) {
		_result_void _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 ;
	os__File_close(&f);
	return (_result_void){0};
}

string os__ExecutableNotFoundError_msg(os__ExecutableNotFoundError err) {
	string _t1 = _SLIT("os: failed to find executable");
	return _t1;
}

VV_LOCAL_SYMBOL IError os__error_failed_to_find_executable(void) {
	IError _t1 = /*&IError*/I_os__ExecutableNotFoundError_to_Interface_IError(((os__ExecutableNotFoundError*)memdup(&(os__ExecutableNotFoundError){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(os__ExecutableNotFoundError))));
	return _t1;
}

_result_string os__find_abs_path_of_executable(string exepath) {
	if ((exepath).len == 0) {
		return (_result_string){ .is_error=true, .err=_v_error(_SLIT("expected non empty `exepath`")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	for (int _t2 = 0; _t2 < _const_os__executable_suffixes.len; ++_t2) {
		string suffix = ((string*)_const_os__executable_suffixes.data)[_t2];
		string fexepath = string__plus(exepath, suffix);
		if (os__is_abs_path(fexepath)) {
			_result_string _t3;
			_result_ok(&(string[]) { os__real_path(fexepath) }, (_result*)(&_t3), sizeof(string));
			return _t3;
		}
		string res = _SLIT("");
		string path = os__getenv(_SLIT("PATH"));
		Array_string paths = string_split(path, _const_os__path_delimiter);
		for (int _t4 = 0; _t4 < paths.len; ++_t4) {
			string p = ((string*)paths.data)[_t4];
			string found_abs_path = os__join_path_single(p, fexepath);
			if (os__exists(found_abs_path) && os__is_executable(found_abs_path)) {
				res = found_abs_path;
				break;
			}
		}
		if (res.len > 0) {
			_result_string _t5;
			_result_ok(&(string[]) { os__real_path(res) }, (_result*)(&_t5), sizeof(string));
			return _t5;
		}
	}
	return (_result_string){ .is_error=true, .err=os__error_failed_to_find_executable(), .data={EMPTY_STRUCT_INITIALIZATION} };
}

bool os__exists_in_system_path(string prog) {
	_result_string _t1 = os__find_abs_path_of_executable(prog);
	if (_t1.is_error) {
		IError err = _t1.err;
		bool _t2 = false;
		return _t2;
	}
	
  (*(string*)_t1.data);
	bool _t3 = true;
	return _t3;
}

bool os__is_file(string path) {
	bool _t1 = os__exists(path) && !os__is_dir(path);
	return _t1;
}

// Attr: [manualfree]
string os__join_path(string base, Array_string dirs) {
	bool os__join_path_defer_0 = false;
	strings__Builder sb;
	bool os__join_path_defer_1 = false;
	string sbase;
	sb = strings__new_builder((int)(base.len + (int)(dirs.len * 50)));
	os__join_path_defer_0 = true;
	sbase = string_trim_right(base, _SLIT("\\/"));
	os__join_path_defer_1 = true;
	strings__Builder_write_string(&sb, sbase);
	for (int _t1 = 0; _t1 < dirs.len; ++_t1) {
		string d = ((string*)dirs.data)[_t1];
		if ((d).len != 0) {
			strings__Builder_write_string(&sb, _const_os__path_separator);
			strings__Builder_write_string(&sb, d);
		}
	}
	string res = strings__Builder_str(&sb);
	if ((sbase).len == 0) {
		res = string_trim_left(res, _const_os__path_separator);
	}
	if (string_contains(res, _SLIT("/./"))) {
		res = string_replace(res, _SLIT("/./"), _SLIT("/"));
	}
	string _t2 = res;
		// Defer begin
		if (os__join_path_defer_1) {
			string_free(&sbase);
		}
		// Defer end
		// Defer begin
		if (os__join_path_defer_0) {
			strings__Builder_free(&sb);
		}
		// Defer end
	return _t2;
}

// Attr: [manualfree]
string os__join_path_single(string base, string elem) {
	bool os__join_path_single_defer_0 = false;
	strings__Builder sb;
	bool os__join_path_single_defer_1 = false;
	string sbase;
	sb = strings__new_builder((int)((int)(base.len + elem.len) + 1));
	os__join_path_single_defer_0 = true;
	sbase = string_trim_right(base, _SLIT("\\/"));
	os__join_path_single_defer_1 = true;
	if ((base).len != 0) {
		strings__Builder_write_string(&sb, sbase);
		strings__Builder_write_string(&sb, _const_os__path_separator);
	}
	strings__Builder_write_string(&sb, elem);
	string _t1 = strings__Builder_str(&sb);
		// Defer begin
		if (os__join_path_single_defer_1) {
			string_free(&sbase);
		}
		// Defer end
		// Defer begin
		if (os__join_path_single_defer_0) {
			strings__Builder_free(&sb);
		}
		// Defer end
	return _t1;
}

Array_string os__walk_ext(string path, string ext) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	os__impl_walk_ext(path, ext, &/*arr*/res);
	return res;
}

VV_LOCAL_SYMBOL void os__impl_walk_ext(string path, string ext, Array_string* out) {
	if (!os__is_dir(path)) {
		return;
	}
	_result_Array_string _t1 = os__ls(path);
	if (_t1.is_error) {
		IError err = _t1.err;
		return;
	}
	
 	Array_string files =  (*(Array_string*)_t1.data);
	string separator = (string_ends_with(path, _const_os__path_separator) ? (_SLIT("")) : (_const_os__path_separator));
	for (int _t2 = 0; _t2 < files.len; ++_t2) {
		string file = ((string*)files.data)[_t2];
		if (string_starts_with(file, _SLIT("."))) {
			continue;
		}
		string p = string__plus(string__plus(path, separator), file);
		if (os__is_dir(p) && !os__is_link(p)) {
			os__impl_walk_ext(p, ext, out);
		} else if (string_ends_with(file, ext)) {
			array_push((array*)out, _MOV((string[]){ string_clone(p) }));
		}
	}
}

void os__walk(string path, void (*f)(string )) {
	if (path.len == 0) {
		return;
	}
	if (!os__is_dir(path)) {
		return;
	}
	Array_string remaining = __new_array_with_default(0, 1000, sizeof(string), 0);
	string clean_path = string_trim_right(path, _const_os__path_separator);
	#if defined(_WIN32)
	{
	}
	#else
	{
		array_push((array*)&remaining, _MOV((string[]){ string_clone(clean_path) }));
	}
	#endif
	for (;;) {
		if (!(remaining.len > 0)) break;
		string cpath = (*(string*)array_pop(&remaining));
		os__PathKind pkind = os__kind_of_existing_path(cpath);
		if (pkind.is_link || !pkind.is_dir) {
			f(cpath);
			continue;
		}
		_result_Array_string _t3 = os__ls(cpath);
		if (_t3.is_error) {
			IError err = _t3.err;
			continue;
		}
		
 		Array_string files =  (*(Array_string*)_t3.data);
		for (int idx = (int)(files.len - 1); idx >= 0; idx--) {
			array_push((array*)&remaining, _MOV((string[]){ string_clone(string__plus(string__plus(cpath, _const_os__path_separator), (*(string*)array_get(files, idx)))) }));
		}
	}
}

// TypeDecl
void os__walk_with_context(string path, voidptr context, void (*fcb)(voidptr , string )) {
	if (path.len == 0) {
		return;
	}
	if (!os__is_dir(path)) {
		return;
	}
	Array_string remaining = __new_array_with_default(0, 1000, sizeof(string), 0);
	string clean_path = string_trim_right(path, _const_os__path_separator);
	#if defined(_WIN32)
	{
	}
	#else
	{
		array_push((array*)&remaining, _MOV((string[]){ string_clone(clean_path) }));
	}
	#endif
	int loops = 0;
	for (;;) {
		if (!(remaining.len > 0)) break;
		loops++;
		string cpath = (*(string*)array_pop(&remaining));
		if (loops > 1) {
			fcb(context, cpath);
		}
		os__PathKind pkind = os__kind_of_existing_path(cpath);
		if (pkind.is_link || !pkind.is_dir) {
			continue;
		}
		_result_Array_string _t3 = os__ls(cpath);
		if (_t3.is_error) {
			IError err = _t3.err;
			continue;
		}
		
 		Array_string files =  (*(Array_string*)_t3.data);
		for (int idx = (int)(files.len - 1); idx >= 0; idx--) {
			array_push((array*)&remaining, _MOV((string[]){ string_clone(string__plus(string__plus(cpath, _const_os__path_separator), (*(string*)array_get(files, idx)))) }));
		}
	}
}

void os__log(string s) {
	println(string__plus(_SLIT("os.log: "), s));
}

_result_void os__mkdir_all(string opath, os__MkdirParams params) {
	if (os__exists(opath)) {
		if (os__is_dir(opath)) {
			return (_result_void){0};
		}
		return (_result_void){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("path `"), /*115 &string*/0xfe10, {.d_s = opath}}, {_SLIT("` already exists, and is not a folder"), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	string other_separator = (string__eq(_const_os__path_separator, _SLIT("/")) ? (_SLIT("\\")) : (_SLIT("/")));
	string path = string_replace(opath, other_separator, _const_os__path_separator);
	string p = (string_starts_with(path, _const_os__path_separator) ? (_const_os__path_separator) : (_SLIT("")));
	Array_string path_parts = string_split(string_trim_left(path, _const_os__path_separator), _const_os__path_separator);
	for (int _t2 = 0; _t2 < path_parts.len; ++_t2) {
		string subdir = ((string*)path_parts.data)[_t2];
		p = string__plus(p, string__plus(subdir, _const_os__path_separator));
		if (os__exists(p) && os__is_dir(p)) {
			continue;
		}
		_result_void _t3 = os__mkdir(p, params);
		if (_t3.is_error) {
			IError err = _t3.err;
			return (_result_void){ .is_error=true, .err=_v_error( str_intp(3, _MOV((StrIntpData[]){{_SLIT("folder: "), /*115 &string*/0xfe10, {.d_s = p}}, {_SLIT(", error: "), /*115 &IError*/0xfe10, {.d_s = IError_str(err)}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		
 ;
	}
	return (_result_void){0};
}

string os__cache_dir(void) {
	string xdg_cache_home = os__getenv(_SLIT("XDG_CACHE_HOME"));
	if ((xdg_cache_home).len != 0) {
		if (!os__is_dir(xdg_cache_home) && !os__is_link(xdg_cache_home)) {
			_result_void _t1 = os__mkdir_all(xdg_cache_home, ((os__MkdirParams){.mode = 0700U,}));
			if (_t1.is_error) {
				IError err = _t1.err;
				_v_panic(IError_str(err));
				VUNREACHABLE();
			;
			}
			
 ;
		}
		return xdg_cache_home;
	}
	string cdir = os__join_path_single(os__home_dir(), _SLIT(".cache"));
	if (!os__is_dir(cdir) && !os__is_link(cdir)) {
		_result_void _t3 = os__mkdir(cdir, ((os__MkdirParams){.mode = 0777,}));
		if (_t3.is_error) {
			IError err = _t3.err;
			_v_panic(IError_str(err));
			VUNREACHABLE();
		;
		}
		
 ;
	}
	return cdir;
}

string os__temp_dir(void) {
	string path = os__getenv(_SLIT("TMPDIR"));
	if ((path).len == 0) {
		path = _SLIT("/tmp");
	}
	return path;
}

string os__vtmp_dir(void) {
	string vtmp = os__getenv(_SLIT("VTMP"));
	if (vtmp.len > 0) {
		return vtmp;
	}
	int uid = os__getuid();
	vtmp = os__join_path_single(os__temp_dir(),  str_intp(2, _MOV((StrIntpData[]){{_SLIT("v_"), /*100 &int*/0xfe07, {.d_i32 = uid}}, {_SLIT0, 0, { .d_c = 0 }}})));
	if (!os__exists(vtmp) || !os__is_dir(vtmp)) {
		_result_void _t2 = os__mkdir_all(vtmp, ((os__MkdirParams){.mode = 0700U,}));
		if (_t2.is_error) {
			IError err = _t2.err;
			_v_panic(IError_str(err));
			VUNREACHABLE();
		;
		}
		
 ;
	}
	os__setenv(_SLIT("VTMP"), vtmp, true);
	return vtmp;
}

VV_LOCAL_SYMBOL string os__default_vmodules_path(void) {
	string hdir = os__home_dir();
	string res = os__join_path_single(hdir, _SLIT(".vmodules"));
	return res;
}

string os__vmodules_dir(void) {
	Array_string paths = os__vmodules_paths();
	if (paths.len > 0) {
		string _t1 = (*(string*)array_get(paths, 0));
		return _t1;
	}
	string _t2 = os__default_vmodules_path();
	return _t2;
}

Array_string os__vmodules_paths(void) {
	bool os__vmodules_paths_defer_0 = false;
	bool os__vmodules_paths_defer_1 = false;
	string path = os__getenv(_SLIT("VMODULES"));
	if ((path).len == 0) {
		path = os__default_vmodules_path();
	}
	os__vmodules_paths_defer_0 = true;
	Array_string splitted = string_split(path, _const_os__path_delimiter);
	os__vmodules_paths_defer_1 = true;
	Array_string list = __new_array_with_default(0, splitted.len, sizeof(string), 0);
	for (int i = 0; i < splitted.len; ++i) {
		string si = (*(string*)array_get(splitted, i));
		string trimmed = string_trim_right(si, _const_os__path_separator);
		array_push((array*)&list, _MOV((string[]){ string_clone(trimmed) }));
	}
	Array_string _t2 = list;
		// Defer begin
		if (os__vmodules_paths_defer_1) {
		}
		// Defer end
		// Defer begin
		if (os__vmodules_paths_defer_0) {
		}
		// Defer end
	return _t2;
}

// Attr: [manualfree]
string os__resource_abs_path(string path) {
	string exe = os__executable();
	string dexe = os__dir(exe);
	string base_path = os__real_path(dexe);
	string vresource = os__getenv(_SLIT("V_RESOURCE_PATH"));
	if (vresource.len != 0) {
		string_free(&base_path);
		base_path = vresource;
	}
	string fp = os__join_path_single(base_path, path);
	string res = os__real_path(fp);
	{ // Unsafe block
		string_free(&fp);
		string_free(&vresource);
		string_free(&base_path);
		string_free(&dexe);
		string_free(&exe);
	}
	return res;
}

os__Result os__execute_or_panic(string cmd) {
	os__Result res = os__execute(cmd);
	if (res.exit_code != 0) {
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("failed    cmd: "), /*115 &string*/0xfe10, {.d_s = cmd}}, {_SLIT0, 0, { .d_c = 0 }}})));
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("failed   code: "), /*100 &int*/0xfe07, {.d_i32 = res.exit_code}}, {_SLIT0, 0, { .d_c = 0 }}})));
		_v_panic(res.output);
		VUNREACHABLE();
	}
	return res;
}

os__Result os__execute_or_exit(string cmd) {
	os__Result res = os__execute(cmd);
	if (res.exit_code != 0) {
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("failed    cmd: "), /*115 &string*/0xfe10, {.d_s = cmd}}, {_SLIT0, 0, { .d_c = 0 }}})));
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("failed   code: "), /*100 &int*/0xfe07, {.d_i32 = res.exit_code}}, {_SLIT0, 0, { .d_c = 0 }}})));
		eprintln(res.output);
		_v_exit(1);
		VUNREACHABLE();
	}
	return res;
}

_result_os__Result os__execute_opt(string cmd) {
	os__Result res = os__execute(cmd);
	if (res.exit_code != 0) {
		return (_result_os__Result){ .is_error=true, .err=_v_error(res.output), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_os__Result _t2;
	_result_ok(&(os__Result[]) { res }, (_result*)(&_t2), sizeof(os__Result));
	return _t2;
}

string os__quoted_path(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		string _t2 =  str_intp(2, _MOV((StrIntpData[]){{_SLIT("'"), /*115 &string*/0xfe10, {.d_s = path}}, {_SLIT("'"), 0, { .d_c = 0 }}}));
		return _t2;
	}
	#endif
	return (string){.str=(byteptr)"", .is_lit=1};
}

_result_string os__config_dir(void) {
	#if defined(_WIN32)
	{
	}
	#elif defined(__APPLE__) || defined(__DARWIN__) || defined(__TARGET_IOS__)
	{
	}
	#else
	{
		string xdg_home = os__getenv(_SLIT("XDG_CONFIG_HOME"));
		if ((xdg_home).len != 0) {
			_result_string _t2;
			_result_ok(&(string[]) { xdg_home }, (_result*)(&_t2), sizeof(string));
			return _t2;
		}
		string home = os__home_dir();
		if ((home).len != 0) {
			_result_string _t3;
			_result_ok(&(string[]) { string__plus(home, _SLIT("/.config")) }, (_result*)(&_t3), sizeof(string));
			return _t3;
		}
	}
	#endif
	return (_result_string){ .is_error=true, .err=_v_error(_SLIT("Cannot find config directory")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

VV_LOCAL_SYMBOL Array_string os__glob_match(string dir, string pattern, string next_pattern, Array_string* matches) {
	Array_string subdirs = __new_array_with_default(0, 0, sizeof(string), 0);
	if (os__is_file(dir)) {
		return subdirs;
	}
	_result_Array_string _t2 = os__ls(dir);
	if (_t2.is_error) {
		IError err = _t2.err;
		return subdirs;
	}
	
 	Array_string files =  (*(Array_string*)_t2.data);
	os__GlobMatch mode = os__GlobMatch__exact;
	string pat = pattern;
	if (string__eq(pat, _SLIT("*"))) {
		mode = os__GlobMatch__any;
		if (!string__eq(next_pattern, pattern) && (next_pattern).len != 0) {
			for (int _t4 = 0; _t4 < files.len; ++_t4) {
				string file = ((string*)files.data)[_t4];
				if (os__is_dir( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, /*115 &string*/0xfe10, {.d_s = dir}}, {_SLIT("/"), /*115 &string*/0xfe10, {.d_s = file}}, {_SLIT0, 0, { .d_c = 0 }}})))) {
					array_push((array*)&subdirs, _MOV((string[]){ string_clone( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, /*115 &string*/0xfe10, {.d_s = dir}}, {_SLIT("/"), /*115 &string*/0xfe10, {.d_s = file}}, {_SLIT0, 0, { .d_c = 0 }}}))) }));
				}
			}
			return subdirs;
		}
	}
	if (string__eq(pat, _SLIT("**"))) {
		files = os__walk_ext(dir, _SLIT(""));
		pat = next_pattern;
	}
	if (string_starts_with(pat, _SLIT("*"))) {
		mode = os__GlobMatch__ends_with;
		pat = string_substr(pat, 1, 2147483647);
	}
	if (string_ends_with(pat, _SLIT("*"))) {
		mode = (mode == os__GlobMatch__ends_with ? (os__GlobMatch__contains) : (os__GlobMatch__starts_with));
		pat = string_substr(pat, 0, (int)(pat.len - 1));
	}
	if (string_contains(pat, _SLIT("*"))) {
		mode = os__GlobMatch__start_and_ends_with;
	}
	for (int _t7 = 0; _t7 < files.len; ++_t7) {
		string file = ((string*)files.data)[_t7];
		string fpath = file;
		string _t8; /* if prepend */
		if (string_contains(file, _const_os__path_separator)) {
			Array_string pathwalk = string_split(file, _const_os__path_separator);
			_t8 = (*(string*)array_get(pathwalk, (int)(pathwalk.len - 1)));
		} else {
			fpath = (string__eq(dir, _SLIT(".")) ? (file) : ( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, /*115 &string*/0xfe10, {.d_s = dir}}, {_SLIT("/"), /*115 &string*/0xfe10, {.d_s = file}}, {_SLIT0, 0, { .d_c = 0 }}}))));
			_t8 = file;
		}
		string f =  _t8;
		if ((string__eq(f, _SLIT(".")) || string__eq(f, _SLIT(".."))) || (f).len == 0) {
			continue;
		}
		bool _t9 = 0;
		
		if (mode == (os__GlobMatch__any)) {
			_t9 = true;
		}
		else if (mode == (os__GlobMatch__exact)) {
			_t9 = string__eq(f, pat);
		}
		else if (mode == (os__GlobMatch__starts_with)) {
			_t9 = string_starts_with(f, pat);
		}
		else if (mode == (os__GlobMatch__ends_with)) {
			_t9 = string_ends_with(f, pat);
		}
		else if (mode == (os__GlobMatch__start_and_ends_with)) {
			Array_string p = string_split(pat, _SLIT("*"));
			_t9 = string_starts_with(f, (*(string*)array_get(p, 0))) && string_ends_with(f, (*(string*)array_get(p, 1)));
		}
		else if (mode == (os__GlobMatch__contains)) {
			_t9 = string_contains(f, pat);
		}bool hit = _t9;
		if (hit) {
			if (os__is_dir(fpath)) {
				array_push((array*)&subdirs, _MOV((string[]){ string_clone(fpath) }));
				if (string__eq(next_pattern, pattern) && (next_pattern).len != 0) {
					array_push((array*)matches, _MOV((string[]){ string_clone( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, /*115 &string*/0xfe10, {.d_s = fpath}}, {_SLIT0, /*115 &string*/0xfe10, {.d_s = _const_os__path_separator}}, {_SLIT0, 0, { .d_c = 0 }}}))) }));
				}
			} else {
				array_push((array*)matches, _MOV((string[]){ string_clone(fpath) }));
			}
		}
	}
	return subdirs;
}

VV_LOCAL_SYMBOL _result_void os__native_glob_pattern(string pattern, Array_string* matches) {
	Array_string steps = string_split(pattern, _const_os__path_separator);
	string cwd = (string_starts_with(pattern, _const_os__path_separator) ? (_const_os__path_separator) : (_SLIT(".")));
	Array_string subdirs = new_array_from_c_array(1, 1, sizeof(string), _MOV((string[1]){string_clone(cwd)}));
	for (int i = 0; i < steps.len; i++) {
		string step = (*(string*)array_get(steps, i));
		string step2 = ((int)(i + 1) == steps.len ? (step) : ((*(string*)array_get(steps, (int)(i + 1)))));
		if ((step).len == 0) {
			continue;
		}
		if (os__is_dir( str_intp(4, _MOV((StrIntpData[]){{_SLIT0, /*115 &string*/0xfe10, {.d_s = cwd}}, {_SLIT0, /*115 &string*/0xfe10, {.d_s = _const_os__path_separator}}, {_SLIT0, /*115 &string*/0xfe10, {.d_s = step}}, {_SLIT0, 0, { .d_c = 0 }}})))) {
			string dd = (string__eq(cwd, _SLIT("/")) ? (step) : ((string__eq(cwd, _SLIT(".")) || (cwd).len == 0 ? (step) : ((string__eq(step, _SLIT(".")) || string__eq(step, _SLIT("/")) ? (cwd) : ( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, /*115 &string*/0xfe10, {.d_s = cwd}}, {_SLIT("/"), /*115 &string*/0xfe10, {.d_s = step}}, {_SLIT0, 0, { .d_c = 0 }}}))))))));
			if ((int)(i + 1) != steps.len) {
				if (!(Array_string_contains(subdirs, dd))) {
					array_push((array*)&subdirs, _MOV((string[]){ string_clone(dd) }));
				}
			}
		}
		Array_string subs = __new_array_with_default(0, 0, sizeof(string), 0);
		for (int _t2 = 0; _t2 < subdirs.len; ++_t2) {
			string sd = ((string*)subdirs.data)[_t2];
			string d = (string__eq(cwd, _SLIT("/")) ? (sd) : ((string__eq(cwd, _SLIT(".")) || (cwd).len == 0 ? (sd) : ((string__eq(sd, _SLIT(".")) || string__eq(sd, _SLIT("/")) ? (cwd) : ( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, /*115 &string*/0xfe10, {.d_s = cwd}}, {_SLIT("/"), /*115 &string*/0xfe10, {.d_s = sd}}, {_SLIT0, 0, { .d_c = 0 }}}))))))));
			_PUSH_MANY(&subs, (os__glob_match(string_replace(d, _SLIT("//"), _SLIT("/")), step, step2, matches)), _t3, Array_string);
		}
		subdirs = array_clone_to_depth(&subs, 0);
	}
	return (_result_void){0};
}

_result_void os__utime(string path, int actime, int modtime) {
	struct utimbuf u = ((struct utimbuf){.actime = actime,.modtime = modtime,});
	if (utime(((char*)(path.str)), ((voidptr)(&u))) != 0) {
		return (_result_void){ .is_error=true, .err=error_with_code(os__posix_get_error_msg(errno), errno), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

os__Uname os__uname(void) {
	os__Uname u = ((os__Uname){.sysname = (string){.str=(byteptr)"", .is_lit=1},.nodename = (string){.str=(byteptr)"", .is_lit=1},.release = (string){.str=(byteptr)"", .is_lit=1},.version = (string){.str=(byteptr)"", .is_lit=1},.machine = (string){.str=(byteptr)"", .is_lit=1},});
	u32 utsize = sizeof(struct utsname);
	{ // Unsafe block
		u8* x = malloc_noscan(((int)(utsize)));
		struct utsname* d = ((struct utsname*)(x));
		if (uname(d) == 0) {
			u.sysname = cstring_to_vstring(d->sysname);
			u.nodename = cstring_to_vstring(d->nodename);
			u.release = cstring_to_vstring(d->release);
			u.version = cstring_to_vstring(d->version);
			u.machine = cstring_to_vstring(d->machine);
		}
		_v_free(d);
	}
	return u;
}

_result_string os__hostname(void) {
	string hstnme = _SLIT("");
	int size = 256;
	char* buf = ((char*)(malloc_noscan(size)));
	if (gethostname(buf, size) == 0) {
		hstnme = cstring_to_vstring(buf);
		_v_free(buf);
		_result_string _t1;
		_result_ok(&(string[]) { hstnme }, (_result*)(&_t1), sizeof(string));
		return _t1;
	}
	return (_result_string){ .is_error=true, .err=_v_error(os__posix_get_error_msg(errno)), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_string os__loginname(void) {
	char* x = getlogin();
	if (!isnil(x)) {
		_result_string _t1;
		_result_ok(&(string[]) { cstring_to_vstring(x) }, (_result*)(&_t1), sizeof(string));
		return _t1;
	}
	return (_result_string){ .is_error=true, .err=_v_error(os__posix_get_error_msg(errno)), .data={EMPTY_STRUCT_INITIALIZATION} };
}

VV_LOCAL_SYMBOL Array_string os__init_os_args(int argc, u8** argv) {
	Array_string args_ = __new_array_with_default(argc, 0, sizeof(string), &(string[]){_SLIT("")});
	for (int i = 0; i < argc; ++i) {
		array_set(&args_, i, &(string[]) { tos_clone(argv[i]) });
	}
	return args_;
}

_result_Array_string os__ls(string path) {
	if (path.len == 0) {
		return (_result_Array_string){ .is_error=true, .err=_v_error(_SLIT("ls() expects a folder, not an empty string")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	Array_string res = __new_array_with_default(0, 50, sizeof(string), 0);
	DIR* dir = opendir(((char*)(path.str)));
	if (isnil(dir)) {
		return (_result_Array_string){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("ls() couldnt open dir \""), /*115 &string*/0xfe10, {.d_s = path}}, {_SLIT("\""), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	struct dirent* ent = ((struct dirent*)(((void*)0)));
	for (;;) {
		ent = readdir(dir);
		if (isnil(ent)) {
			break;
		}
		{ // Unsafe block
			u8* bptr = ((u8*)(&ent->d_name[0]));
			if (bptr[0] == 0 || (bptr[0] == '.' && bptr[1] == 0) || (bptr[0] == '.' && bptr[1] == '.' && bptr[2] == 0)) {
				continue;
			}
			array_push((array*)&res, _MOV((string[]){ string_clone(tos_clone(bptr)) }));
		}
	}
	closedir(dir);
	_result_Array_string _t4;
	_result_ok(&(Array_string[]) { res }, (_result*)(&_t4), sizeof(Array_string));
	return _t4;
}

_result_void os__mkdir(string path, os__MkdirParams params) {
	if (string__eq(path, _SLIT("."))) {
		return (_result_void){0};
	}
	string apath = os__real_path(path);
	int r = mkdir(((char*)(apath.str)), params.mode);
	if (r == -1) {
		return (_result_void){ .is_error=true, .err=_v_error(os__posix_get_error_msg(errno)), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

// Attr: [manualfree]
os__Result os__execute(string cmd) {
	bool os__execute_defer_0 = false;
	string pcmd;
	bool os__execute_defer_1 = false;
	strings__Builder res;
	pcmd = (string_contains(cmd, _SLIT("2>")) ? (string_clone(cmd)) : ( str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*115 &string*/0xfe10, {.d_s = cmd}}, {_SLIT(" 2>&1"), 0, { .d_c = 0 }}}))));
	os__execute_defer_0 = true;
	voidptr f = os__vpopen(pcmd);
	if (isnil(f)) {
		os__Result _t1 = ((os__Result){.exit_code = -1,.output =  str_intp(2, _MOV((StrIntpData[]){{_SLIT("exec(\""), /*115 &string*/0xfe10, {.d_s = cmd}}, {_SLIT("\") failed"), 0, { .d_c = 0 }}})),});
			// Defer begin
			if (os__execute_defer_0) {
				string_free(&pcmd);
			}
			// Defer end
		return _t1;
	}
	int fd = os__fileno(f);
	res = strings__new_builder(1024);
	os__execute_defer_1 = true;
	Array_fixed_u8_4096 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	{ // Unsafe block
		u8* pbuf = &buf[0];
		for (;;) {
			int len = read(fd, pbuf, 4096);
			if (len == 0) {
				break;
			}
			strings__Builder_write_ptr(&res, pbuf, len);
		}
	}
	string soutput = strings__Builder_str(&res);
	int exit_code = os__vpclose(f);
	os__Result _t2 = ((os__Result){.exit_code = exit_code,.output = soutput,});
		// Defer begin
		if (os__execute_defer_1) {
			strings__Builder_free(&res);
		}
		// Defer end
		// Defer begin
		if (os__execute_defer_0) {
			string_free(&pcmd);
		}
		// Defer end
	return _t2;
}

// Attr: [unsafe]
os__Result os__raw_execute(string cmd) {
	os__Result _t1 = os__execute(cmd);
	return _t1;
}

// Attr: [manualfree]
_result_void os__Command_start(os__Command* c) {
	bool os__Command_start_defer_0 = false;
	string pcmd;
	pcmd = string__plus(c->path, _SLIT(" 2>&1"));
	os__Command_start_defer_0 = true;
	c->f = os__vpopen(pcmd);
	if (isnil(c->f)) {
		_result_void _t1 = (_result_void){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("exec(\""), /*115 &string*/0xfe10, {.d_s = c->path}}, {_SLIT("\") failed"), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
			// Defer begin
			if (os__Command_start_defer_0) {
				string_free(&pcmd);
			}
			// Defer end
		return _t1;
	}
		// Defer begin
		if (os__Command_start_defer_0) {
			string_free(&pcmd);
		}
		// Defer end
	return (_result_void){0};
}

// Attr: [manualfree]
string os__Command_read_line(os__Command* c) {
	bool os__Command_read_line_defer_0 = false;
	strings__Builder res;
	Array_fixed_u8_4096 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	res = strings__new_builder(1024);
	os__Command_read_line_defer_0 = true;
	{ // Unsafe block
		u8* bufbp = &buf[0];
		for (;;) {
			if (!(fgets(((char*)(bufbp)), 4096, c->f) != 0)) break;
			int len = vstrlen(bufbp);
			for (int i = 0; i < len; ++i) {
				if (bufbp[i] == '\n') {
					strings__Builder_write_ptr(&res, bufbp, i);
					string final = strings__Builder_str(&res);
					string _t1 = final;
						// Defer begin
						if (os__Command_read_line_defer_0) {
							strings__Builder_free(&res);
						}
						// Defer end
					return _t1;
				}
			}
			strings__Builder_write_ptr(&res, bufbp, len);
		}
	}
	c->eof = true;
	string final = strings__Builder_str(&res);
	string _t2 = final;
		// Defer begin
		if (os__Command_read_line_defer_0) {
			strings__Builder_free(&res);
		}
		// Defer end
	return _t2;
}

_result_void os__Command_close(os__Command* c) {
	c->exit_code = os__vpclose(c->f);
	if (c->exit_code == 127) {
		return (_result_void){ .is_error=true, .err=error_with_code(_SLIT("error"), 127), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

_result_void os__symlink(string origin, string target) {
	int res = symlink(((char*)(origin.str)), ((char*)(target.str)));
	if (res == 0) {
		return (_result_void){0};
	}
	return (_result_void){ .is_error=true, .err=_v_error(os__posix_get_error_msg(errno)), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_void os__link(string origin, string target) {
	int res = link(((char*)(origin.str)), ((char*)(target.str)));
	if (res == 0) {
		return (_result_void){0};
	}
	return (_result_void){ .is_error=true, .err=_v_error(os__posix_get_error_msg(errno)), .data={EMPTY_STRUCT_INITIALIZATION} };
}

string os__get_error_msg(int code) {
	string _t1 = os__posix_get_error_msg(code);
	return _t1;
}

void os__File_close(os__File* f) {
	if (!f->is_opened) {
		return;
	}
	f->is_opened = false;
	fflush(f->cfile);
	fclose(f->cfile);
}

// Attr: [manualfree]
_result_void os__ensure_folder_is_writable(string folder) {
	bool os__ensure_folder_is_writable_defer_0 = false;
	string tmp_perm_check;
	if (!os__exists(folder)) {
		return (_result_void){ .is_error=true, .err=error_with_code( str_intp(2, _MOV((StrIntpData[]){{_SLIT("`"), /*115 &string*/0xfe10, {.d_s = folder}}, {_SLIT("` does not exist"), 0, { .d_c = 0 }}})), 1), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (!os__is_dir(folder)) {
		return (_result_void){ .is_error=true, .err=error_with_code( str_intp(2, _MOV((StrIntpData[]){{_SLIT("`"), /*115 &string*/0xfe10, {.d_s = folder}}, {_SLIT("` is not a folder"), 0, { .d_c = 0 }}})), 2), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	tmp_perm_check = os__join_path_single(folder, _SLIT("XXXXXX"));
	os__ensure_folder_is_writable_defer_0 = true;
	{ // Unsafe block
		int x = mkstemp(((char*)(tmp_perm_check.str)));
		if (-1 == x) {
			_result_void _t3 = (_result_void){ .is_error=true, .err=error_with_code( str_intp(2, _MOV((StrIntpData[]){{_SLIT("folder `"), /*115 &string*/0xfe10, {.d_s = folder}}, {_SLIT("` is not writable"), 0, { .d_c = 0 }}})), 3), .data={EMPTY_STRUCT_INITIALIZATION} };
				// Defer begin
				if (os__ensure_folder_is_writable_defer_0) {
					string_free(&tmp_perm_check);
				}
				// Defer end
			return _t3;
		}
		close(x);
	}
	_result_void _t4 = os__rm(tmp_perm_check);
	if (_t4.is_error) {
		// Defer begin
		if (os__ensure_folder_is_writable_defer_0) {
			string_free(&tmp_perm_check);
		}
		// Defer end
		_result_void _t5;
		memcpy(&_t5, &_t4, sizeof(_result));
		return _t5;
	}
	
 ;
		// Defer begin
		if (os__ensure_folder_is_writable_defer_0) {
			string_free(&tmp_perm_check);
		}
		// Defer end
	return (_result_void){0};
}

// Attr: [inline]
inline int os__getpid(void) {
	int _t1 = getpid();
	return _t1;
}

// Attr: [inline]
inline int os__getppid(void) {
	int _t1 = getppid();
	return _t1;
}

// Attr: [inline]
inline int os__getuid(void) {
	int _t1 = getuid();
	return _t1;
}

// Attr: [inline]
inline int os__geteuid(void) {
	int _t1 = geteuid();
	return _t1;
}

// Attr: [inline]
inline int os__getgid(void) {
	int _t1 = getgid();
	return _t1;
}

// Attr: [inline]
inline int os__getegid(void) {
	int _t1 = getegid();
	return _t1;
}

void os__posix_set_permission_bit(string path_s, u32 mode, bool enable) {
	struct stat s;
	u32 new_mode = ((u32)(0U));
	char* path = ((char*)(path_s.str));
	{ // Unsafe block
		stat(path, &s);
		new_mode = s.st_mode;
	}

	if (enable == (true)) {
		new_mode |= mode;
	}
	else if (enable == (false)) {
		new_mode &= ((u32)(07777 - mode));
	}
	chmod(path, ((int)(new_mode)));
}

VV_LOCAL_SYMBOL _result_string os__get_long_path(string path) {
	_result_string _t1;
	_result_ok(&(string[]) { path }, (_result*)(&_t1), sizeof(string));
	return _t1;
}

int os__page_size(void) {
	int _t1 = ((int)(sysconf(_SC_PAGESIZE)));
	return _t1;
}

_result_string os__input_password(string prompt) {
	if (os__is_atty(1) <= 0 || string__eq(os__getenv(_SLIT("TERM")), _SLIT("dumb"))) {
		return (_result_string){ .is_error=true, .err=_v_error(_SLIT("Could not obtain password discretely.")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	term__termios__Termios old_state = ((term__termios__Termios){.c_iflag = 0,.c_oflag = 0,.c_cflag = 0,.c_lflag = 0,.c_line = 0,.c_cc = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},.c_ispeed = 0,.c_ospeed = 0,});
	if (term__termios__tcgetattr(0, (voidptr)&/*qq*/old_state) != 0) {
		return (_result_string){ .is_error=true, .err=os__last_error(), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	term__termios__Termios new_state = old_state;
	term__termios__Termios_disable_echo(&new_state);
	term__termios__set_state(0, new_state);
	_option_string _t3 = os__input_opt(prompt);
	if (_t3.state != 0) {
		IError err = _t3.err;
		return (_result_string){ .is_error=true, .err=_v_error(_SLIT("Failed to read password")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	string password =  (*(string*)_t3.data);
	term__termios__set_state(0, old_state);
	println(_SLIT(""));
	_result_string _t5;
	_result_ok(&(string[]) { password }, (_result*)(&_t5), sizeof(string));
	return _t5;
}

void os__Process_signal_kill(os__Process* p) {
	if (!(p->status == os__ProcessState__running || p->status == os__ProcessState__stopped)) {
		return;
	}
	os__Process__signal_kill(p);
	p->status = os__ProcessState__aborted;
	return;
}

void os__Process_signal_pgkill(os__Process* p) {
	if (!(p->status == os__ProcessState__running || p->status == os__ProcessState__stopped)) {
		return;
	}
	os__Process__signal_pgkill(p);
	return;
}

void os__Process_signal_stop(os__Process* p) {
	if (p->status != os__ProcessState__running) {
		return;
	}
	os__Process__signal_stop(p);
	p->status = os__ProcessState__stopped;
	return;
}

void os__Process_signal_continue(os__Process* p) {
	if (p->status != os__ProcessState__stopped) {
		return;
	}
	os__Process__signal_continue(p);
	p->status = os__ProcessState__running;
	return;
}

void os__Process_wait(os__Process* p) {
	if (p->status == os__ProcessState__not_started) {
		os__Process__spawn(p);
	}
	if (!(p->status == os__ProcessState__running || p->status == os__ProcessState__stopped)) {
		return;
	}
	os__Process__wait(p);
	return;
}

void os__Process_close(os__Process* p) {
	if (p->status == os__ProcessState__not_started || p->status == os__ProcessState__closed) {
		return;
	}
	p->status = os__ProcessState__closed;
	#if !defined(_WIN32)
	{
		for (int i = 0; i < 3; ++i) {
			if (p->stdio_fd[v_fixed_index(i, 3)] != 0) {
				os__fd_close(p->stdio_fd[v_fixed_index(i, 3)]);
			}
		}
	}
	#endif
}

// Attr: [unsafe]
void os__Process_free(os__Process* p) {
	os__Process_close(p);
	{ // Unsafe block
		string_free(&p->filename);
		string_free(&p->err);
		array_free(&p->args);
		array_free(&p->env);
	}
}

VV_LOCAL_SYMBOL int os__Process__spawn(os__Process* p) {
	if (!p->env_is_custom) {
		p->env = __new_array_with_default(0, 0, sizeof(string), 0);
		Map_string_string current_environment = os__environ();
		int _t2 = current_environment.key_values.len;
		for (int _t1 = 0; _t1 < _t2; ++_t1 ) {
			int _t3 = current_environment.key_values.len - _t2;
			_t2 = current_environment.key_values.len;
			if (_t3 < 0) {
				_t1 = -1;
				continue;
			}
			if (!DenseArray_has_index(&current_environment.key_values, _t1)) {continue;}
			string k = /*key*/ *(string*)DenseArray_key(&current_environment.key_values, _t1);
			k = string_clone(k);
			string v = (*(string*)DenseArray_value(&current_environment.key_values, _t1));
			array_push((array*)&p->env, _MOV((string[]){ string_clone( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, /*115 &string*/0xfe10, {.d_s = k}}, {_SLIT("="), /*115 &string*/0xfe10, {.d_s = v}}, {_SLIT0, 0, { .d_c = 0 }}}))) }));
		}
	}
	int pid = 0;
	#if defined(_WIN32)
	{
	}
	#else
	{
		pid = os__Process_unix_spawn_process(p);
	}
	#endif
	p->pid = pid;
	p->status = os__ProcessState__running;
	int _t6 = 0;
	return _t6;
}

bool os__Process_is_alive(os__Process* p) {
	bool res = false;
	if (p->status == os__ProcessState__running || p->status == os__ProcessState__stopped) {
		res = os__Process__is_alive(p);
	}
	return res;
}

void os__Process_set_redirect_stdio(os__Process* p) {
	p->use_stdio_ctl = true;
	return;
}

void os__Process_stdin_write(os__Process* p, string s) {
	os__Process__check_redirection_call(p, _SLIT("Process.stdin_write"));
	os__Process__write_to(p, os__ChildProcessPipeKind__stdin, s);
}

string os__Process_stdout_slurp(os__Process* p) {
	os__Process__check_redirection_call(p, _SLIT("Process.stdout_slurp"));
	string res = os__Process__slurp_from(p, os__ChildProcessPipeKind__stdout);
	return res;
}

string os__Process_stderr_slurp(os__Process* p) {
	os__Process__check_redirection_call(p, _SLIT("Process.stderr_slurp"));
	string res = os__Process__slurp_from(p, os__ChildProcessPipeKind__stderr);
	return res;
}

string os__Process_stdout_read(os__Process* p) {
	os__Process__check_redirection_call(p, _SLIT("Process.stdout_read"));
	string res = os__Process__read_from(p, os__ChildProcessPipeKind__stdout);
	return res;
}

string os__Process_stderr_read(os__Process* p) {
	os__Process__check_redirection_call(p, _SLIT("Process.stderr_read"));
	string res = os__Process__read_from(p, os__ChildProcessPipeKind__stderr);
	return res;
}

_option_string os__Process_pipe_read(os__Process* p, os__ChildProcessPipeKind pkind) {
	os__Process__check_redirection_call(p, _SLIT("Process.pipe_read"));
	if (!os__Process__is_pending(p, pkind)) {
		return (_option_string){ .state=2, .err=_const_none__, .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	string res = os__Process__read_from(p, pkind);
	_option_string _t2;
	_option_ok(&(string[]) { res }, (_option*)(&_t2), sizeof(string));
	return _t2;
}

bool os__Process_is_pending(os__Process* p, os__ChildProcessPipeKind pkind) {
	os__Process__check_redirection_call(p, _SLIT("Process.is_pending"));
	bool res = os__Process__is_pending(p, pkind);
	return res;
}

VV_LOCAL_SYMBOL string os__Process__read_from(os__Process* p, os__ChildProcessPipeKind pkind) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		multi_return_string_int mr_6368 = os__fd_read(p->stdio_fd[v_fixed_index(pkind, 3)], 4096);
		string s = mr_6368.arg0;
		return s;
	}
	#endif
	return (string){.str=(byteptr)"", .is_lit=1};
}

VV_LOCAL_SYMBOL string os__Process__slurp_from(os__Process* p, os__ChildProcessPipeKind pkind) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		string _t2 = Array_string_join(os__fd_slurp(p->stdio_fd[v_fixed_index(pkind, 3)]), _SLIT(""));
		return _t2;
	}
	#endif
	return (string){.str=(byteptr)"", .is_lit=1};
}

VV_LOCAL_SYMBOL void os__Process__write_to(os__Process* p, os__ChildProcessPipeKind pkind, string s) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		os__fd_write(p->stdio_fd[v_fixed_index(pkind, 3)], s);
	}
	#endif
}

VV_LOCAL_SYMBOL bool os__Process__is_pending(os__Process* p, os__ChildProcessPipeKind pkind) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		bool _t2 = os__fd_is_pending(p->stdio_fd[v_fixed_index(pkind, 3)]);
		return _t2;
	}
	#endif
	bool _t3 = false;
	return _t3;
}

VV_LOCAL_SYMBOL void os__Process__check_redirection_call(os__Process* p, string fn_name) {
	if (!p->use_stdio_ctl) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("Call p.set_redirect_stdio() before calling p."), /*115 &string*/0xfe10, {.d_s = fn_name}}, {_SLIT0, 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	if (p->status == os__ProcessState__not_started) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("Call p."), /*115 &string*/0xfe10, {.d_s = fn_name}}, {_SLIT("() after you have called p.run()"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
}

VV_LOCAL_SYMBOL void os__Process__signal_stop(os__Process* p) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		os__Process_unix_stop_process(p);
	}
	#endif
}

VV_LOCAL_SYMBOL void os__Process__signal_continue(os__Process* p) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		os__Process_unix_resume_process(p);
	}
	#endif
}

VV_LOCAL_SYMBOL void os__Process__signal_kill(os__Process* p) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		os__Process_unix_kill_process(p);
	}
	#endif
}

VV_LOCAL_SYMBOL void os__Process__signal_pgkill(os__Process* p) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		os__Process_unix_kill_pgroup(p);
	}
	#endif
}

VV_LOCAL_SYMBOL void os__Process__wait(os__Process* p) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		os__Process_unix_wait(p);
	}
	#endif
}

VV_LOCAL_SYMBOL bool os__Process__is_alive(os__Process* p) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		bool _t2 = os__Process_unix_is_alive(p);
		return _t2;
	}
	#endif
	return 0;
}

void os__Process_run(os__Process* p) {
	if (p->status != os__ProcessState__not_started) {
		return;
	}
	os__Process__spawn(p);
	return;
}

os__Process* os__new_process(string filename) {
	os__Process* _t1 = ((os__Process*)memdup(&(os__Process){.filename = filename,.pid = 0,.code = -1,.status = os__ProcessState__not_started,.err = (string){.str=(byteptr)"", .is_lit=1},.args = __new_array(0, 0, sizeof(string)),.work_folder = (string){.str=(byteptr)"", .is_lit=1},.env_is_custom = 0,.env = __new_array(0, 0, sizeof(string)),.use_stdio_ctl = 0,.use_pgroup = 0,.stdio_fd = {-1, -1, -1},.wdata = 0,.create_no_window = 0,}, sizeof(os__Process)));
	return _t1;
}

void os__Process_set_args(os__Process* p, Array_string pargs) {
	if (p->status != os__ProcessState__not_started) {
		return;
	}
	p->args = pargs;
	return;
}

void os__Process_set_work_folder(os__Process* p, string path) {
	if (p->status != os__ProcessState__not_started) {
		return;
	}
	p->work_folder = os__real_path(path);
	return;
}

void os__Process_set_environment(os__Process* p, Map_string_string envs) {
	if (p->status != os__ProcessState__not_started) {
		return;
	}
	p->env_is_custom = true;
	p->env = __new_array_with_default(0, 0, sizeof(string), 0);
	int _t2 = envs.key_values.len;
	for (int _t1 = 0; _t1 < _t2; ++_t1 ) {
		int _t3 = envs.key_values.len - _t2;
		_t2 = envs.key_values.len;
		if (_t3 < 0) {
			_t1 = -1;
			continue;
		}
		if (!DenseArray_has_index(&envs.key_values, _t1)) {continue;}
		string k = /*key*/ *(string*)DenseArray_key(&envs.key_values, _t1);
		k = string_clone(k);
		string v = (*(string*)DenseArray_value(&envs.key_values, _t1));
		array_push((array*)&p->env, _MOV((string[]){ string_clone( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, /*115 &string*/0xfe10, {.d_s = k}}, {_SLIT("="), /*115 &string*/0xfe10, {.d_s = v}}, {_SLIT0, 0, { .d_c = 0 }}}))) }));
	}
	return;
}

VV_LOCAL_SYMBOL int os__Process_unix_spawn_process(os__Process* p) {
	Array_fixed_int_6 pipeset = {0, 0, 0, 0, 0, 0};
	if (p->use_stdio_ctl) {
		int dont_care = pipe(&pipeset[0]);
		dont_care = pipe(&pipeset[2]);
		dont_care = pipe(&pipeset[4]);
		{int _ = dont_care;}
		;
	}
	int pid = os__fork();
	if (pid != 0) {
		if (p->use_stdio_ctl) {
			p->stdio_fd[0] = pipeset[1];
			p->stdio_fd[1] = pipeset[2];
			p->stdio_fd[2] = pipeset[4];
			os__fd_close(pipeset[0]);
			os__fd_close(pipeset[3]);
			os__fd_close(pipeset[5]);
		}
		return pid;
	}
	if (p->use_pgroup) {
		setpgid(0, 0);
	}
	if (p->use_stdio_ctl) {
		os__fd_close(pipeset[1]);
		os__fd_close(pipeset[2]);
		os__fd_close(pipeset[4]);
		dup2(pipeset[0], 0);
		dup2(pipeset[3], 1);
		dup2(pipeset[5], 2);
		os__fd_close(pipeset[0]);
		os__fd_close(pipeset[3]);
		os__fd_close(pipeset[5]);
	}
	if ((p->work_folder).len != 0) {
		if (!os__is_abs_path(p->filename)) {
			p->filename = os__abs_path(p->filename);
		}
		_result_void _t2 = os__chdir(p->work_folder);
		if (_t2.is_error) {
			IError err = _t2.err;
		}
		
 ;
	}
	_result_void _t3 = os__execve(p->filename, p->args, p->env);
	if (_t3.is_error) {
		IError err = _t3.err;
		eprintln(IError_str(err));
		_v_exit(1);
		VUNREACHABLE();
	;
	}
	
 ;
	int _t4 = 0;
	return _t4;
}

VV_LOCAL_SYMBOL void os__Process_unix_stop_process(os__Process* p) {
	kill(p->pid, SIGSTOP);
}

VV_LOCAL_SYMBOL void os__Process_unix_resume_process(os__Process* p) {
	kill(p->pid, SIGCONT);
}

VV_LOCAL_SYMBOL void os__Process_unix_kill_process(os__Process* p) {
	kill(p->pid, SIGKILL);
}

VV_LOCAL_SYMBOL void os__Process_unix_kill_pgroup(os__Process* p) {
	kill(-p->pid, SIGKILL);
}

VV_LOCAL_SYMBOL void os__Process_unix_wait(os__Process* p) {
	os__Process_impl_check_pid_status(p, false, 0);
}

VV_LOCAL_SYMBOL bool os__Process_unix_is_alive(os__Process* p) {
	bool _t1 = os__Process_impl_check_pid_status(p, true, WNOHANG);
	return _t1;
}

VV_LOCAL_SYMBOL bool os__Process_impl_check_pid_status(os__Process* p, bool exit_early_on_ret0, int waitpid_options) {
	int cstatus = 0;
	int ret = -1;
	p->code = ret;
	if (ret == -1) {
		p->err = os__posix_get_error_msg(errno);
		bool _t1 = false;
		return _t1;
	}
	if (exit_early_on_ret0 && ret == 0) {
		bool _t2 = true;
		return _t2;
	}
	multi_return_int_bool mr_2938 = os__posix_wait4_to_exit_status(cstatus);
	int pret = mr_2938.arg0;
	bool is_signaled = mr_2938.arg1;
	if (is_signaled) {
		p->status = os__ProcessState__aborted;
		p->err =  str_intp(3, _MOV((StrIntpData[]){{_SLIT("Terminated by signal "), /*100 &int*/0x4fe27, {.d_i32 = pret}}, {_SLIT(" ("), /*115 &string*/0xfe10, {.d_s = os__sigint_to_signal_name(pret)}}, {_SLIT(")"), 0, { .d_c = 0 }}}));
		pret += 128;
	} else {
		p->status = os__ProcessState__exited;
	}
	p->code = pret;
	bool _t3 = false;
	return _t3;
}

VV_LOCAL_SYMBOL int os__Process_win_spawn_process(os__Process* p) {
	int _t1 = 0;
	return _t1;
}

VV_LOCAL_SYMBOL void os__Process_win_stop_process(os__Process* p) {
}

VV_LOCAL_SYMBOL void os__Process_win_resume_process(os__Process* p) {
}

VV_LOCAL_SYMBOL void os__Process_win_kill_process(os__Process* p) {
}

VV_LOCAL_SYMBOL void os__Process_win_kill_pgroup(os__Process* p) {
}

VV_LOCAL_SYMBOL void os__Process_win_wait(os__Process* p) {
}

VV_LOCAL_SYMBOL bool os__Process_win_is_alive(os__Process* p) {
	bool _t1 = false;
	return _t1;
}

VV_LOCAL_SYMBOL void os__Process_win_write_string(os__Process* p, int idx, string s) {
}

VV_LOCAL_SYMBOL multi_return_string_int os__Process_win_read_string(os__Process* p, int idx, int maxbytes) {
	return (multi_return_string_int){.arg0=_SLIT(""), .arg1=0};
}

VV_LOCAL_SYMBOL string os__Process_win_slurp(os__Process* p, int idx) {
	string _t1 = _SLIT("");
	return _t1;
}

_result_anon_fn_os__signal os__signal_opt(os__Signal signum, void (*handler)(os__Signal )) {
	errno = 0;
	voidptr prev_handler = signal(((int)(signum)), (voidptr)handler);
	if (prev_handler == SIG_ERR) {
		return (_result_anon_fn_os__signal){ .is_error=true, .err=error_with_code(os__posix_get_error_msg(EINVAL), EINVAL), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_anon_fn_os__signal _t2;
	_result_ok(&(os__SignalHandler[]) { (voidptr)((os__SignalHandler)(prev_handler)) }, (_result*)(&_t2), sizeof(os__SignalHandler));
	return _t2;
}

VV_LOCAL_SYMBOL void os__ignore_signal_handler(os__Signal signal) {
}

void os__signal_ignore(Array_os__Signal args) {
	if (os__is_main_thread()) {
		#if !defined(_WIN32)
		{
			for (int _t2 = 0; _t2 < args.len; ++_t2) {
				os__Signal arg = ((os__Signal*)args.data)[_t2];
				_result_anon_fn_os__signal _t3 = os__signal_opt(arg, (voidptr)os__ignore_signal_handler);
				if (_t3.is_error) {
					IError err = _t3.err;
				}
				
  (*(os__SignalHandler*)_t3.data);
			}
		}
		#endif
	} else {
		os__signal_ignore_internal(args);
	}
}

// TypeDecl
// Attr: [inline]
inline bool os__debugger_present(void) {
	bool _t1 = false;
	return _t1;
}

_result_void os__open_uri(string uri) {
	string vopen_uri_cmd = os__getenv(_SLIT("VOPEN_URI_CMD"));
	if ((vopen_uri_cmd).len == 0) {
		#if defined(__APPLE__)
		{
		}
		#elif defined(__FreeBSD__) || defined(__OpenBSD__)
		{
		}
		#elif defined(__linux__)
		{
		}
		#endif
	}
	if ((vopen_uri_cmd).len == 0) {
		return (_result_void){ .is_error=true, .err=_v_error(_SLIT("unsupported platform")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	os__Result result = os__execute( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, /*115 &string*/0xfe10, {.d_s = vopen_uri_cmd}}, {_SLIT(" \""), /*115 &string*/0xfe10, {.d_s = uri}}, {_SLIT("\""), 0, { .d_c = 0 }}})));
	if (result.exit_code != 0) {
		return (_result_void){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("unable to open url: "), /*115 &string*/0xfe10, {.d_s = result.output}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

// TypeDecl
bool os__is_main_thread(void) {
	bool _t1 = g_main_thread_id == ((u64)(pthread_self()));
	return _t1;
}

VV_LOCAL_SYMBOL void os__signal_ignore_internal(Array_os__Signal args) {
}

f64 math__inf(int sign) {
	u64 v = (sign >= 0 ? (_const_math__uvinf) : (_const_math__uvneginf));
	f64 _t1 = math__f64_from_bits(v);
	return _t1;
}

f64 math__nan(void) {
	f64 _t1 = math__f64_from_bits(_const_math__uvnan);
	return _t1;
}

bool math__is_nan(f64 f) {
	#if defined(__FAST_MATH__)
	{
		if (math__f64_bits(f) == _const_math__uvnan) {
			bool _t2 = true;
			return _t2;
		}
	}
	#endif
	bool _t3 = f != f;
	return _t3;
}

bool math__is_inf(f64 f, int sign) {
	bool _t1 = (sign >= 0 && f > ((f64)(_const_math__max_f64))) || (sign <= 0 && f < ((f64)(-_const_math__max_f64)));
	return _t1;
}

bool math__is_finite(f64 f) {
	bool _t1 = !math__is_nan(f) && !math__is_inf(f, 0);
	return _t1;
}

multi_return_f64_int math__normalize(f64 x) {
	f64 smallest_normal = 2.2250738585072014e-308;
	if (math__abs_T_f64(x) < smallest_normal) {
		return (multi_return_f64_int){.arg0=(f64)(x * _const_math__normalize_smallest_mask), .arg1=-52};
	}
	return (multi_return_f64_int){.arg0=x, .arg1=0};
}

f64 math__cbrt(f64 a) {
	f64 x = a;
	int b1 = 715094163;
	int b2 = 696219795;
	f64 c = 5.42857142857142815906e-01;
	f64 d = -7.05306122448979611050e-01;
	f64 e_ = 1.41428571428571436819e+00;
	f64 f = 1.60714285714285720630e+00;
	f64 g = 3.57142857142857150787e-01;
	f64 smallest_normal = 2.22507385850720138309e-308;
	if (x == ((f64)(0.0)) || math__is_nan(x) || math__is_inf(x, 0)) {
		return x;
	}
	bool sign = false;
	if (x < 0) {
		x = -x;
		sign = true;
	}
	f64 t = math__f64_from_bits((u64)((u64)(math__f64_bits(x) / ((u64)(3U))) + ((((u64)(b1)) << 32U))));
	if (x < smallest_normal) {
		t = ((f64)((((u64)(1U)) << 54U)));
		t *= x;
		t = math__f64_from_bits((u64)((u64)(math__f64_bits(t) / ((u64)(3U))) + ((((u64)(b2)) << 32U))));
	}
	f64 r = (f64)((f64)(t * t) / x);
	f64 s = (f64)(c + (f64)(r * t));
	t *= (f64)(g + (f64)(f / ((f64)((f64)(s + e_) + (f64)(d / s)))));
	t = math__f64_from_bits((u64)((math__f64_bits(t) & ((((u64)(0xffffffffcU)) << 28U))) + ((((u64)(1U)) << 30U))));
	s = (f64)(t * t);
	r = (f64)(x / s);
	f64 w = (f64)(t + t);
	r = (f64)(((f64)(r - t)) / ((f64)(w + r)));
	t = (f64)(t + (f64)(t * r));
	if (sign) {
		t = -t;
	}
	return t;
}

f64 math__mod(f64 x, f64 y) {
	f64 _t1 = math__fmod(x, y);
	return _t1;
}

f64 math__fmod(f64 x, f64 y) {
	if (y == 0 || math__is_inf(x, 0) || math__is_nan(x) || math__is_nan(y)) {
		f64 _t1 = math__nan();
		return _t1;
	}
	f64 abs_y = math__abs_T_f64(y);
	multi_return_f64_int mr_594 = math__frexp(abs_y);
	f64 abs_y_fr = mr_594.arg0;
	int abs_y_exp = mr_594.arg1;
	f64 r = x;
	if (x < 0) {
		r = -x;
	}
	for (;;) {
		if (!(r >= abs_y)) break;
		multi_return_f64_int mr_680 = math__frexp(r);
		f64 rfr = mr_680.arg0;
		int rexp = mr_680.arg1;
		if (rfr < abs_y_fr) {
			rexp = (int)(rexp - 1);
		}
		r = (f64)(r - math__ldexp(abs_y, (int)(rexp - abs_y_exp)));
	}
	if (x < 0) {
		r = -r;
	}
	return r;
}

i64 math__gcd(i64 a_, i64 b_) {
	i64 a = a_;
	i64 b = b_;
	if (a < 0) {
		a = -a;
	}
	if (b < 0) {
		b = -b;
	}
	for (;;) {
		if (!(b != 0)) break;
		a %= b;
		if (a == 0) {
			return b;
		}
		b %= a;
	}
	return a;
}

multi_return_i64_i64_i64 math__egcd(i64 a, i64 b) {
	i64 old_r = a;
	i64 r = b;
	i64 old_s = ((i64)(1));
	i64 s = ((i64)(0));
	i64 old_t = ((i64)(0));
	i64 t = ((i64)(1));
	for (;;) {
		if (!(r != 0)) break;
		i64 quot = (i64)(old_r / r);
		i64 _var_1339 = old_r;
		i64 _var_1346 = r;
		old_r = _var_1346;
		r = _var_1339%_var_1346;
		i64 _var_1365 = old_s;
		i64 _var_1372 = s;
		old_s = _var_1372;
		s = _var_1365-quot*_var_1372;
		i64 _var_1398 = old_t;
		i64 _var_1405 = t;
		old_t = _var_1405;
		t = _var_1398-quot*_var_1405;
	}
	return (multi_return_i64_i64_i64){.arg0=(old_r < 0 ? (-old_r) : (old_r)), .arg1=old_s, .arg2=old_t};
}

i64 math__lcm(i64 a, i64 b) {
	if (a == 0) {
		return a;
	}
	i64 res = (i64)(a * ((i64)(b / math__gcd(b, a))));
	if (res < 0) {
		i64 _t2 = -res;
		return _t2;
	}
	return res;
}

f64 math__erf(f64 a) {
	f64 x = a;
	f64 very_tiny = 2.848094538889218e-306;
	f64 small_ = (f64)(((f64)(1.0)) / ((f64)((((u64)(1U)) << 28U))));
	if (math__is_nan(x)) {
		f64 _t1 = math__nan();
		return _t1;
	}
	if (math__is_inf(x, 1)) {
		f64 _t2 = 1.0;
		return _t2;
	}
	if (math__is_inf(x, -1)) {
		f64 _t3 = ((f64)(-1));
		return _t3;
	}
	bool sign = false;
	if (x < 0) {
		x = -x;
		sign = true;
	}
	if (x < ((f64)(0.84375))) {
		f64 temp = 0.0;
		if (x < small_) {
			if (x < very_tiny) {
				temp = (f64)(((f64)(0.125)) * ((f64)((f64)(((f64)(8.0)) * x) + (f64)(((f64)(_const_math__efx8)) * x))));
			} else {
				temp = (f64)(x + (f64)(((f64)(_const_math__efx)) * x));
			}
		} else {
			f64 z = (f64)(x * x);
			f64 r = (f64)(((f64)(_const_math__pp0)) + (f64)(z * ((f64)(((f64)(_const_math__pp1)) + (f64)(z * ((f64)(((f64)(_const_math__pp2)) + (f64)(z * ((f64)(((f64)(_const_math__pp3)) + (f64)(z * ((f64)(_const_math__pp4)))))))))))));
			f64 s_ = (f64)(((f64)(1.0)) + (f64)(z * ((f64)(((f64)(_const_math__qq1)) + (f64)(z * ((f64)(((f64)(_const_math__qq2)) + (f64)(z * ((f64)(((f64)(_const_math__qq3)) + (f64)(z * ((f64)(((f64)(_const_math__qq4)) + (f64)(z * ((f64)(_const_math__qq5))))))))))))))));
			f64 y = (f64)(r / s_);
			temp = (f64)(x + (f64)(x * y));
		}
		if (sign) {
			f64 _t4 = -temp;
			return _t4;
		}
		return temp;
	}
	if (x < ((f64)(1.25))) {
		f64 s_ = (f64)(x - 1);
		f64 p = (f64)(((f64)(_const_math__pa0)) + (f64)(s_ * ((f64)(((f64)(_const_math__pa1)) + (f64)(s_ * ((f64)(((f64)(_const_math__pa2)) + (f64)(s_ * ((f64)(((f64)(_const_math__pa3)) + (f64)(s_ * ((f64)(((f64)(_const_math__pa4)) + (f64)(s_ * ((f64)(((f64)(_const_math__pa5)) + (f64)(s_ * ((f64)(_const_math__pa6)))))))))))))))))));
		f64 q = (f64)(((f64)(1.0)) + (f64)(s_ * ((f64)(((f64)(_const_math__qa1)) + (f64)(s_ * ((f64)(((f64)(_const_math__qa2)) + (f64)(s_ * ((f64)(((f64)(_const_math__qa3)) + (f64)(s_ * ((f64)(((f64)(_const_math__qa4)) + (f64)(s_ * ((f64)(((f64)(_const_math__qa5)) + (f64)(s_ * ((f64)(_const_math__qa6)))))))))))))))))));
		if (sign) {
			f64 _t6 = (f64)(((f64)(-_const_math__erx)) - (f64)(p / q));
			return _t6;
		}
		f64 _t7 = (f64)(((f64)(_const_math__erx)) + (f64)(p / q));
		return _t7;
	}
	if (x >= 6) {
		if (sign) {
			f64 _t8 = -1;
			return _t8;
		}
		f64 _t9 = 1.0;
		return _t9;
	}
	f64 s_ = (f64)(((f64)(1.0)) / ((f64)(x * x)));
	f64 r = 0.0;
	f64 s = 0.0;
	if (x < ((f64)(2.857142857142857))) {
		r = (f64)(((f64)(_const_math__ra0)) + (f64)(s_ * ((f64)(((f64)(_const_math__ra1)) + (f64)(s_ * ((f64)(((f64)(_const_math__ra2)) + (f64)(s_ * ((f64)(((f64)(_const_math__ra3)) + (f64)(s_ * ((f64)(((f64)(_const_math__ra4)) + (f64)(s_ * ((f64)(((f64)(_const_math__ra5)) + (f64)(s_ * ((f64)(((f64)(_const_math__ra6)) + (f64)(s_ * ((f64)(_const_math__ra7))))))))))))))))))))));
		s = (f64)(((f64)(1.0)) + (f64)(s_ * ((f64)(((f64)(_const_math__sa1)) + (f64)(s_ * ((f64)(((f64)(_const_math__sa2)) + (f64)(s_ * ((f64)(((f64)(_const_math__sa3)) + (f64)(s_ * ((f64)(((f64)(_const_math__sa4)) + (f64)(s_ * ((f64)(((f64)(_const_math__sa5)) + (f64)(s_ * ((f64)(((f64)(_const_math__sa6)) + (f64)(s_ * ((f64)(((f64)(_const_math__sa7)) + (f64)(s_ * ((f64)(_const_math__sa8)))))))))))))))))))))))));
	} else {
		r = (f64)(((f64)(_const_math__rb0)) + (f64)(s_ * ((f64)(((f64)(_const_math__rb1)) + (f64)(s_ * ((f64)(((f64)(_const_math__rb2)) + (f64)(s_ * ((f64)(((f64)(_const_math__rb3)) + (f64)(s_ * ((f64)(((f64)(_const_math__rb4)) + (f64)(s_ * ((f64)(((f64)(_const_math__rb5)) + (f64)(s_ * ((f64)(_const_math__rb6)))))))))))))))))));
		s = (f64)(((f64)(1.0)) + (f64)(s_ * ((f64)(((f64)(_const_math__sb1)) + (f64)(s_ * ((f64)(((f64)(_const_math__sb2)) + (f64)(s_ * ((f64)(((f64)(_const_math__sb3)) + (f64)(s_ * ((f64)(((f64)(_const_math__sb4)) + (f64)(s_ * ((f64)(((f64)(_const_math__sb5)) + (f64)(s_ * ((f64)(((f64)(_const_math__sb6)) + (f64)(s_ * ((f64)(_const_math__sb7))))))))))))))))))))));
	}
	f64 z = math__f64_from_bits((math__f64_bits(x) & 0xffffffff00000000U));
	f64 r_ = (f64)(math__exp((f64)((f64)(-z * z) - ((f64)(0.5625)))) * math__exp((f64)((f64)(((f64)(z - x)) * ((f64)(z + x))) + (f64)(r / s))));
	if (sign) {
		f64 _t10 = (f64)((f64)(r_ / x) - ((f64)(1.0)));
		return _t10;
	}
	f64 _t11 = (f64)(((f64)(1.0)) - (f64)(r_ / x));
	return _t11;
}

f64 math__erfc(f64 a) {
	f64 x = a;
	f64 tiny = (f64)(((f64)(1.0)) / ((f64)((((u64)(1U)) << 56U))));
	if (math__is_nan(x)) {
		f64 _t1 = math__nan();
		return _t1;
	}
	if (math__is_inf(x, 1)) {
		f64 _t2 = 0.0;
		return _t2;
	}
	if (math__is_inf(x, -1)) {
		f64 _t3 = 2.0;
		return _t3;
	}
	bool sign = false;
	if (x < 0) {
		x = -x;
		sign = true;
	}
	if (x < ((f64)(0.84375))) {
		f64 temp = 0.0;
		if (x < tiny) {
			temp = x;
		} else {
			f64 z = (f64)(x * x);
			f64 r = (f64)(((f64)(_const_math__pp0)) + (f64)(z * ((f64)(((f64)(_const_math__pp1)) + (f64)(z * ((f64)(((f64)(_const_math__pp2)) + (f64)(z * ((f64)(((f64)(_const_math__pp3)) + (f64)(z * ((f64)(_const_math__pp4)))))))))))));
			f64 s_ = (f64)(((f64)(1.0)) + (f64)(z * ((f64)(((f64)(_const_math__qq1)) + (f64)(z * ((f64)(((f64)(_const_math__qq2)) + (f64)(z * ((f64)(((f64)(_const_math__qq3)) + (f64)(z * ((f64)(((f64)(_const_math__qq4)) + (f64)(z * ((f64)(_const_math__qq5))))))))))))))));
			f64 y = (f64)(r / s_);
			if (x < ((f64)(0.25))) {
				temp = (f64)(x + (f64)(x * y));
			} else {
				temp = (f64)(((f64)(0.5)) + ((f64)((f64)(x * y) + ((f64)(x - ((f64)(0.5)))))));
			}
		}
		if (sign) {
			f64 _t4 = (f64)(((f64)(1.0)) + temp);
			return _t4;
		}
		f64 _t5 = (f64)(((f64)(1.0)) - temp);
		return _t5;
	}
	if (x < ((f64)(1.25))) {
		f64 s_ = (f64)(x - 1);
		f64 p = (f64)(((f64)(_const_math__pa0)) + (f64)(s_ * ((f64)(((f64)(_const_math__pa1)) + (f64)(s_ * ((f64)(((f64)(_const_math__pa2)) + (f64)(s_ * ((f64)(((f64)(_const_math__pa3)) + (f64)(s_ * ((f64)(((f64)(_const_math__pa4)) + (f64)(s_ * ((f64)(((f64)(_const_math__pa5)) + (f64)(s_ * ((f64)(_const_math__pa6)))))))))))))))))));
		f64 q = (f64)(((f64)(1.0)) + (f64)(s_ * ((f64)(((f64)(_const_math__qa1)) + (f64)(s_ * ((f64)(((f64)(_const_math__qa2)) + (f64)(s_ * ((f64)(((f64)(_const_math__qa3)) + (f64)(s_ * ((f64)(((f64)(_const_math__qa4)) + (f64)(s_ * ((f64)(((f64)(_const_math__qa5)) + (f64)(s_ * ((f64)(_const_math__qa6)))))))))))))))))));
		if (sign) {
			f64 _t6 = (f64)(((f64)((float_literal)(1.0 + _const_math__erx))) + (f64)(p / q));
			return _t6;
		}
		f64 _t7 = (f64)(((f64)((float_literal)(1.0 - _const_math__erx))) - (f64)(p / q));
		return _t7;
	}
	if (x < 28) {
		f64 s_ = (f64)(((f64)(1.0)) / ((f64)(x * x)));
		f64 r = 0.0;
		f64 s = 0.0;
		if (x < ((f64)(2.857142857142857))) {
			r = (f64)(((f64)(_const_math__ra0)) + (f64)(s_ * ((f64)(((f64)(_const_math__ra1)) + (f64)(s_ * ((f64)(((f64)(_const_math__ra2)) + (f64)(s_ * ((f64)(((f64)(_const_math__ra3)) + (f64)(s_ * ((f64)(((f64)(_const_math__ra4)) + (f64)(s_ * ((f64)(((f64)(_const_math__ra5)) + (f64)(s_ * ((f64)(((f64)(_const_math__ra6)) + (f64)(s_ * ((f64)(_const_math__ra7))))))))))))))))))))));
			s = (f64)(((f64)(1.0)) + (f64)(s_ * ((f64)(((f64)(_const_math__sa1)) + (f64)(s_ * ((f64)(((f64)(_const_math__sa2)) + (f64)(s_ * ((f64)(((f64)(_const_math__sa3)) + (f64)(s_ * ((f64)(((f64)(_const_math__sa4)) + (f64)(s_ * ((f64)(((f64)(_const_math__sa5)) + (f64)(s_ * ((f64)(((f64)(_const_math__sa6)) + (f64)(s_ * ((f64)(((f64)(_const_math__sa7)) + (f64)(s_ * ((f64)(_const_math__sa8)))))))))))))))))))))))));
		} else {
			if (sign && x > 6) {
				f64 _t8 = 2.0;
				return _t8;
			}
			r = (f64)(((f64)(_const_math__rb0)) + (f64)(s_ * ((f64)(((f64)(_const_math__rb1)) + (f64)(s_ * ((f64)(((f64)(_const_math__rb2)) + (f64)(s_ * ((f64)(((f64)(_const_math__rb3)) + (f64)(s_ * ((f64)(((f64)(_const_math__rb4)) + (f64)(s_ * ((f64)(((f64)(_const_math__rb5)) + (f64)(s_ * ((f64)(_const_math__rb6)))))))))))))))))));
			s = (f64)(((f64)(1.0)) + (f64)(s_ * ((f64)(((f64)(_const_math__sb1)) + (f64)(s_ * ((f64)(((f64)(_const_math__sb2)) + (f64)(s_ * ((f64)(((f64)(_const_math__sb3)) + (f64)(s_ * ((f64)(((f64)(_const_math__sb4)) + (f64)(s_ * ((f64)(((f64)(_const_math__sb5)) + (f64)(s_ * ((f64)(((f64)(_const_math__sb6)) + (f64)(s_ * ((f64)(_const_math__sb7))))))))))))))))))))));
		}
		f64 z = math__f64_from_bits((math__f64_bits(x) & 0xffffffff00000000U));
		f64 r_ = (f64)(math__exp((f64)((f64)(-z * z) - ((f64)(0.5625)))) * math__exp((f64)((f64)(((f64)(z - x)) * ((f64)(z + x))) + (f64)(r / s))));
		if (sign) {
			f64 _t9 = (f64)(((f64)(2.0)) - (f64)(r_ / x));
			return _t9;
		}
		f64 _t10 = (f64)(r_ / x);
		return _t10;
	}
	if (sign) {
		f64 _t11 = 2.0;
		return _t11;
	}
	f64 _t12 = 0.0;
	return _t12;
}

// Attr: [inline]
inline f64 math__exp(f64 x) {
	f64 _t1 = exp(x);
	return _t1;
}

// Attr: [inline]
inline f64 math__exp2(f64 x) {
	f64 _t1 = exp2(x);
	return _t1;
}

// Attr: [inline]
inline f64 math__ldexp(f64 frac, int exp) {
	f64 _t1 = ldexp(frac, exp);
	return _t1;
}

f64 math__pure_v_but_overridden_by_c_exp(f64 x) {
	f64 log2e = 1.44269504088896338700e+00;
	f64 overflow = 7.09782712893383973096e+02;
	f64 underflow = -7.45133219101941108420e+02;
	f64 near_zero = (float_literal)(1.0 / (268435456));
	if (math__is_nan(x) || math__is_inf(x, 1)) {
		return x;
	}
	if (math__is_inf(x, -1)) {
		f64 _t2 = 0.0;
		return _t2;
	}
	if (x > overflow) {
		f64 _t3 = math__inf(1);
		return _t3;
	}
	if (x < underflow) {
		f64 _t4 = 0.0;
		return _t4;
	}
	if (-near_zero < x && x < near_zero) {
		f64 _t5 = (f64)(((f64)(1.0)) + x);
		return _t5;
	}
	int k = 0;
	if (x < 0) {
		k = ((int)((f64)((f64)(log2e * x) - ((f64)(0.5)))));
	}
	if (x > 0) {
		k = ((int)((f64)((f64)(log2e * x) + ((f64)(0.5)))));
	}
	f64 hi = (f64)(x - (f64)(((f64)(k)) * ((f64)(_const_math__ln2hi))));
	f64 lo = (f64)(((f64)(k)) * ((f64)(_const_math__ln2lo)));
	f64 _t6 = math__expmulti(hi, lo, k);
	return _t6;
}

f64 math__pure_v_but_overridden_by_c_exp2(f64 x) {
	f64 overflow = 1.0239999999999999e+03;
	f64 underflow = -1.0740e+03;
	if (math__is_nan(x) || math__is_inf(x, 1)) {
		return x;
	}
	if (math__is_inf(x, -1)) {
		f64 _t2 = 0;
		return _t2;
	}
	if (x > overflow) {
		f64 _t3 = math__inf(1);
		return _t3;
	}
	if (x < underflow) {
		f64 _t4 = 0;
		return _t4;
	}
	int k = 0;
	if (x > 0) {
		k = ((int)((f64)(x + ((f64)(0.5)))));
	}
	if (x < 0) {
		k = ((int)((f64)(x - ((f64)(0.5)))));
	}
	f64 t = (f64)(x - ((f64)(k)));
	f64 hi = (f64)(t * ((f64)(_const_math__ln2hi)));
	f64 lo = (f64)(-t * ((f64)(_const_math__ln2lo)));
	f64 _t5 = math__expmulti(hi, lo, k);
	return _t5;
}

f64 math__pure_v_but_overridden_by_c_ldexp(f64 frac, int exp) {
	f64 _t1 = math__scalbn(frac, exp);
	return _t1;
}

multi_return_f64_int math__frexp(f64 x) {
	u64 y = math__f64_bits(x);
	int ee = ((int)((((y >> 52U)) & 0x7ffU)));
	if (ee == 0) {
		if (x != ((f64)(0.0))) {
			f64 x1p64 = math__f64_from_bits(((u64)(0x43f0000000000000U)));
			multi_return_f64_int mr_3393 = math__frexp((f64)(x * x1p64));
			f64 z = mr_3393.arg0;
			int e_ = mr_3393.arg1;
			return (multi_return_f64_int){.arg0=z, .arg1=(int)(e_ - 64)};
		}
		return (multi_return_f64_int){.arg0=x, .arg1=0};
	} else if (ee == 0x7ff) {
		return (multi_return_f64_int){.arg0=x, .arg1=0};
	}
	int e_ = (int)(ee - 0x3fe);
	y &= ((u64)(0x800fffffffffffffU));
	y |= ((u64)(0x3fe0000000000000U));
	return (multi_return_f64_int){.arg0=math__f64_from_bits(y), .arg1=e_};
}

f64 math__expm1(f64 x) {
	if (math__is_inf(x, 1) || math__is_nan(x)) {
		return x;
	}
	if (math__is_inf(x, -1)) {
		f64 _t2 = ((f64)(-1));
		return _t2;
	}
	if (math__abs_T_f64(x) < ((f64)(_const_math__ln2))) {
		f64 i = 1.0;
		f64 sum = x;
		f64 term = (f64)(x / ((f64)(1.0)));
		i++;
		term *= (f64)(x / ((f64)(i)));
		sum += term;
		for (;;) {
			if (!(math__abs_T_f64(term) > (f64)(math__abs_T_f64(sum) * ((f64)(_const_math__internal__f64_epsilon))))) break;
			i++;
			term *= (f64)(x / ((f64)(i)));
			sum += term;
		}
		return sum;
	} else {
		f64 _t4 = (f64)(math__exp(x) - 1);
		return _t4;
	}
	return 0;
}

VV_LOCAL_SYMBOL f64 math__expmulti(f64 hi, f64 lo, int k) {
	f64 exp_p1 = 1.66666666666666657415e-01;
	f64 exp_p2 = -2.77777777770155933842e-03;
	f64 exp_p3 = 6.61375632143793436117e-05;
	f64 exp_p4 = -1.65339022054652515390e-06;
	f64 exp_p5 = 4.13813679705723846039e-08;
	f64 r = (f64)(hi - lo);
	f64 t = (f64)(r * r);
	f64 c = (f64)(r - (f64)(t * ((f64)(exp_p1 + (f64)(t * ((f64)(exp_p2 + (f64)(t * ((f64)(exp_p3 + (f64)(t * ((f64)(exp_p4 + (f64)(t * exp_p5))))))))))))));
	f64 y = (f64)(1 - ((f64)(((f64)(lo - (f64)(((f64)(r * c)) / ((f64)(2 - c))))) - hi)));
	f64 _t1 = math__ldexp(y, k);
	return _t1;
}

f64 math__factorial(f64 n) {
	if (n >= _const_math__factorials_table.len) {
		return _const_math__max_f64;
	}
	if (n == ((f64)(((i64)(n)))) && n >= ((f64)(0.0))) {
		f64 _t2 = (*(f64*)array_get(_const_math__factorials_table, ((i64)(n))));
		return _t2;
	}
	f64 _t3 = math__gamma((f64)(n + ((f64)(1.0))));
	return _t3;
}

f64 math__log_factorial(f64 n) {
	if (n < 0) {
		f64 _t1 = -_const_math__max_f64;
		return _t1;
	}
	if (n != ((f64)(((i64)(n))))) {
		f64 _t2 = math__log_gamma((f64)(n + 1));
		return _t2;
	} else if (n < _const_math__log_factorials_table.len) {
		f64 _t3 = (*(f64*)array_get(_const_math__log_factorials_table, ((i64)(n))));
		return _t3;
	}
	f64 _t4 = math__log_factorial_asymptotic_expansion(((int)(n)));
	return _t4;
}

VV_LOCAL_SYMBOL f64 math__log_factorial_asymptotic_expansion(int n) {
	int m = 6;
	Array_f64 term = __new_array_with_default(0, 0, sizeof(f64), 0);
	f64 xx = ((f64)((int)(((int)(n + 1)) * ((int)(n + 1)))));
	f64 xj = ((f64)((int)(n + 1)));
	f64 log_factorial = (f64)((f64)(((f64)(_const_math__log_sqrt_2pi)) - xj) + (f64)(((f64)(xj - ((f64)(0.5)))) * math__log(xj)));
	int i = 0;
	for (i = 0; i < m; i++) {
		array_push((array*)&term, _MOV((f64[]){ (f64)((*(f64*)array_get(_const_math__bernoulli, i)) / xj) }));
		xj *= xx;
	}
	f64 sum = (*(f64*)array_get(term, (int)(m - 1)));
	for (i = (int)(m - 2); i >= 0; i--) {
		if (math__abs_T_f64(sum) <= math__abs_T_f64((*(f64*)array_get(term, i)))) {
			break;
		}
		sum = (*(f64*)array_get(term, i));
	}
	for (;;) {
		if (!(i >= 0)) break;
		sum += (*(f64*)array_get(term, i));
		i--;
	}
	f64 _t2 = (f64)(log_factorial + sum);
	return _t2;
}

i64 math__factoriali(int n) {
	if (n <= 0) {
		i64 _t1 = ((i64)(1));
		return _t1;
	}
	if (n < 21) {
		i64 _t2 = ((i64)((*(f64*)array_get(_const_math__factorials_table, n))));
		return _t2;
	}
	i64 _t3 = ((i64)(-1));
	return _t3;
}

f64 math__floor(f64 x) {
	if (x == 0 || math__is_nan(x) || math__is_inf(x, 0)) {
		return x;
	}
	if (x < 0) {
		multi_return_f64_f64 mr_280 = math__modf(-x);
		f64 d = mr_280.arg0;
		f64 fract = mr_280.arg1;
		if (fract != ((f64)(0.0))) {
			d = (f64)(d + 1);
		}
		f64 _t2 = -d;
		return _t2;
	}
	multi_return_f64_f64 mr_350 = math__modf(x);
	f64 d = mr_350.arg0;
	return d;
}

f64 math__ceil(f64 x) {
	f64 _t1 = -math__floor(-x);
	return _t1;
}

f64 math__trunc(f64 x) {
	if (x == 0 || math__is_nan(x) || math__is_inf(x, 0)) {
		return x;
	}
	multi_return_f64_f64 mr_793 = math__modf(x);
	f64 d = mr_793.arg0;
	return d;
}

f64 math__round(f64 x) {
	if (x == 0 || math__is_nan(x) || math__is_inf(x, 0)) {
		return x;
	}
	f64 y = math__floor(x);
	f64 r = (f64)(x - y);
	if (r > ((f64)(0.5))) {
		{ // Unsafe block
			goto rndup;
		}
	}
	if (r == ((f64)(0.5))) {
		r = (f64)(y - (f64)(((f64)(2.0)) * math__floor((f64)(((f64)(0.5)) * y))));
		if (r == ((f64)(1.0))) {
			rndup: {}
			y += 1.0;
		}
	}
	return y;
}

f64 math__round_sig(f64 x, int sig_digits) {
	string ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*103 &f64*/0x1fe0f, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
	switch (sig_digits) {
		case 0: {
				ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*102 &f64*/0x8000000d, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case 1: {
				ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*102 &f64*/0x8000020d, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case 2: {
				ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*102 &f64*/0x8000040d, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case 3: {
				ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*102 &f64*/0x8000060d, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case 4: {
				ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*102 &f64*/0x8000080d, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case 5: {
				ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*102 &f64*/0x80000a0d, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case 6: {
				ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*102 &f64*/0x80000c0d, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case 7: {
				ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*102 &f64*/0x80000e0d, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case 8: {
				ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*102 &f64*/0x8000100d, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case 9: {
				ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*102 &f64*/0x8000120d, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case 10: {
				ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*102 &f64*/0x8000140d, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case 11: {
				ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*102 &f64*/0x8000160d, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case 12: {
				ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*102 &f64*/0x8000180d, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case 13: {
				ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*102 &f64*/0x80001a0d, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case 14: {
				ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*102 &f64*/0x80001c0d, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case 15: {
				ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*102 &f64*/0x80001e0d, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case 16: {
				ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*102 &f64*/0x8000200d, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		default: {
				ret_str =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, /*103 &f64*/0x1fe0f, {.d_f64 = x}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
	}
	
	f64 _t1 = string_f64(ret_str);
	return _t1;
}

f64 math__round_to_even(f64 x) {
	u64 bits = math__f64_bits(x);
	u64 e_ = (((bits >> _const_math__shift)) & _const_math__mask);
	if (e_ >= _const_math__bias) {
		u64 half_minus_ulp = (u64)(((u64)((((u64)(1U)) << ((int_literal)(_const_math__shift - 1))))) - 1U);
		e_ -= ((u64)(_const_math__bias));
		bits += (((u64)(half_minus_ulp + (((bits >> ((u64)(_const_math__shift - e_)))) & 1U))) >> e_);
		bits &= (_const_math__frac_mask >> e_);
		bits ^= (_const_math__frac_mask >> e_);
	} else if (e_ == (int_literal)(_const_math__bias - 1) && (bits & _const_math__frac_mask) != 0U) {
		bits = ((bits & _const_math__sign_mask) | _const_math__uvone);
	} else {
		bits &= _const_math__sign_mask;
	}
	f64 _t1 = math__f64_from_bits(bits);
	return _t1;
}

VV_LOCAL_SYMBOL multi_return_f64_f64 math__stirling(f64 x) {
	if (x > 200) {
		return (multi_return_f64_f64){.arg0=math__inf(1), .arg1=1.0};
	}
	f64 sqrt_two_pi = 2.506628274631000502417;
	f64 max_stirling = 143.01608;
	f64 w = (f64)(((f64)(1.0)) / x);
	w = (f64)(((f64)(1.0)) + (f64)(w * ((f64)((f64)(((f64)((f64)(((f64)((f64)(((f64)((f64)((*(f64*)array_get(_const_math__gamma_s, 0)) * w) + (*(f64*)array_get(_const_math__gamma_s, 1)))) * w) + (*(f64*)array_get(_const_math__gamma_s, 2)))) * w) + (*(f64*)array_get(_const_math__gamma_s, 3)))) * w) + (*(f64*)array_get(_const_math__gamma_s, 4))))));
	f64 y1 = math__exp(x);
	f64 y2 = 1.0;
	if (x > max_stirling) {
		f64 v = math__pow(x, (f64)((f64)(((f64)(0.5)) * x) - ((f64)(0.25))));
		f64 y1_ = y1;
		y1 = v;
		y2 = (f64)(v / y1_);
	} else {
		y1 = (f64)(math__pow(x, (f64)(x - ((f64)(0.5)))) / y1);
	}
	return (multi_return_f64_f64){.arg0=y1, .arg1=(f64)((f64)(((f64)(sqrt_two_pi)) * w) * y2)};
}

f64 math__gamma(f64 a) {
	f64 x = a;
	f64 euler = 0.57721566490153286060651209008240243104215933593992;
	if (math__is_neg_int(x) || math__is_inf(x, -1) || math__is_nan(x)) {
		f64 _t1 = math__nan();
		return _t1;
	}
	if (math__is_inf(x, 1)) {
		f64 _t2 = math__inf(1);
		return _t2;
	}
	if (x == ((f64)(0.0))) {
		f64 _t3 = math__copysign(math__inf(1), x);
		return _t3;
	}
	f64 q = math__abs_T_f64(x);
	f64 p = math__floor(q);
	if (q > 33) {
		if (x >= 0) {
			multi_return_f64_f64 mr_1482 = math__stirling(x);
			f64 y1 = mr_1482.arg0;
			f64 y2 = mr_1482.arg1;
			f64 _t4 = (f64)(y1 * y2);
			return _t4;
		}
		int signgam = 1;
		i64 ip = ((i64)(p));
		if (((ip & 1)) == 0) {
			signgam = -1;
		}
		f64 z = (f64)(q - p);
		if (z > ((f64)(0.5))) {
			p = (f64)(p + 1);
			z = (f64)(q - p);
		}
		z = (f64)(q * math__sin((f64)(((f64)(_const_math__pi)) * z)));
		if (z == 0) {
			f64 _t5 = math__inf(signgam);
			return _t5;
		}
		multi_return_f64_f64 mr_1927 = math__stirling(q);
		f64 sq1 = mr_1927.arg0;
		f64 sq2 = mr_1927.arg1;
		f64 absz = math__abs_T_f64(z);
		f64 d = (f64)((f64)(absz * sq1) * sq2);
		if (math__is_inf(d, 0)) {
			z = (f64)((f64)((f64)(((f64)(_const_math__pi)) / absz) / sq1) / sq2);
		} else {
			z = (f64)(((f64)(_const_math__pi)) / d);
		}
		f64 _t6 = (f64)(((f64)(signgam)) * z);
		return _t6;
	}
	f64 z = 1.0;
	for (;;) {
		if (!(x >= 3)) break;
		x = (f64)(x - 1);
		z = (f64)(z * x);
	}
	for (;;) {
		if (!(x < 0)) break;
		if (x > ((f64)(-1e-09))) {
			{ // Unsafe block
				goto __v_small;
			}
		}
		z = (f64)(z / x);
		x = (f64)(x + 1);
	}
	for (;;) {
		if (!(x < 2)) break;
		if (x < ((f64)(1e-09))) {
			{ // Unsafe block
				goto __v_small;
			}
		}
		z = (f64)(z / x);
		x = (f64)(x + 1);
	}
	if (x == 2) {
		return z;
	}
	x = (f64)(x - 2);
	p = (f64)((f64)(((f64)((f64)(((f64)((f64)(((f64)((f64)(((f64)((f64)(((f64)((f64)(x * (*(f64*)array_get(_const_math__gamma_p, 0))) + (*(f64*)array_get(_const_math__gamma_p, 1)))) * x) + (*(f64*)array_get(_const_math__gamma_p, 2)))) * x) + (*(f64*)array_get(_const_math__gamma_p, 3)))) * x) + (*(f64*)array_get(_const_math__gamma_p, 4)))) * x) + (*(f64*)array_get(_const_math__gamma_p, 5)))) * x) + (*(f64*)array_get(_const_math__gamma_p, 6)));
	q = (f64)((f64)(((f64)((f64)(((f64)((f64)(((f64)((f64)(((f64)((f64)(((f64)((f64)(((f64)((f64)(x * (*(f64*)array_get(_const_math__gamma_q, 0))) + (*(f64*)array_get(_const_math__gamma_q, 1)))) * x) + (*(f64*)array_get(_const_math__gamma_q, 2)))) * x) + (*(f64*)array_get(_const_math__gamma_q, 3)))) * x) + (*(f64*)array_get(_const_math__gamma_q, 4)))) * x) + (*(f64*)array_get(_const_math__gamma_q, 5)))) * x) + (*(f64*)array_get(_const_math__gamma_q, 6)))) * x) + (*(f64*)array_get(_const_math__gamma_q, 7)));
	if (true) {
		f64 _t8 = (f64)((f64)(z * p) / q);
		return _t8;
	}
	__v_small: {}
	if (x == 0) {
		f64 _t9 = math__inf(1);
		return _t9;
	}
	f64 _t10 = (f64)(z / ((f64)(((f64)(((f64)(1.0)) + (f64)(euler * x))) * x)));
	return _t10;
}

f64 math__log_gamma(f64 x) {
	multi_return_f64_int mr_3045 = math__log_gamma_sign(x);
	f64 y = mr_3045.arg0;
	return y;
}

multi_return_f64_int math__log_gamma_sign(f64 a) {
	f64 x = a;
	f64 ymin = 1.461632144968362245;
	f64 tiny = math__exp2(-70);
	f64 two52 = math__exp2(52);
	f64 two58 = math__exp2(58);
	f64 tc = 1.46163214496836224576e+00;
	f64 tf = -1.21486290535849611461e-01;
	f64 tt = -3.63867699703950536541e-18;
	int sign = 1;
	if (math__is_nan(x)) {
		return (multi_return_f64_int){.arg0=x, .arg1=sign};
	}
	if (math__is_inf(x, 1)) {
		return (multi_return_f64_int){.arg0=x, .arg1=sign};
	}
	if (x == ((f64)(0.0))) {
		return (multi_return_f64_int){.arg0=math__inf(1), .arg1=sign};
	}
	bool neg = false;
	if (x < 0) {
		x = -x;
		neg = true;
	}
	if (x < tiny) {
		if (neg) {
			sign = -1;
		}
		return (multi_return_f64_int){.arg0=-math__log(x), .arg1=sign};
	}
	f64 nadj = 0.0;
	if (neg) {
		if (x >= two52) {
			return (multi_return_f64_int){.arg0=math__inf(1), .arg1=sign};
		}
		f64 t = math__sin_pi(x);
		if (t == 0) {
			return (multi_return_f64_int){.arg0=math__inf(1), .arg1=sign};
		}
		nadj = math__log((f64)(((f64)(_const_math__pi)) / math__abs_T_f64((f64)(t * x))));
		if (t < 0) {
			sign = -1;
		}
	}
	f64 lgamma = 0.0;
	if (x == 1 || x == 2) {
		return (multi_return_f64_int){.arg0=0.0, .arg1=sign};
	} else if (x < 2) {
		f64 y = 0.0;
		int i = 0;
		if (x <= ((f64)(0.9))) {
			lgamma = -math__log(x);
			if (x >= ((f64)((f64)(ymin - 1) + ((f64)(0.27))))) {
				y = (f64)(((f64)(1.0)) - x);
				i = 0;
			} else if (x >= ((f64)((f64)(ymin - 1) - ((f64)(0.27))))) {
				y = (f64)(x - ((f64)(tc - 1)));
				i = 1;
			} else {
				y = x;
				i = 2;
			}
		} else {
			lgamma = 0;
			if (x >= ((f64)(ymin + ((f64)(0.27))))) {
				y = (f64)(((f64)(2)) - x);
				i = 0;
			} else if (x >= ((f64)(ymin - ((f64)(0.27))))) {
				y = (f64)(x - tc);
				i = 1;
			} else {
				y = (f64)(x - 1);
				i = 2;
			}
		}
		if (i == 0) {
			f64 z = (f64)(y * y);
			f64 gamma_p1 = (f64)((*(f64*)array_get(_const_math__lgamma_a, 0)) + (f64)(z * ((f64)((*(f64*)array_get(_const_math__lgamma_a, 2)) + (f64)(z * ((f64)((*(f64*)array_get(_const_math__lgamma_a, 4)) + (f64)(z * ((f64)((*(f64*)array_get(_const_math__lgamma_a, 6)) + (f64)(z * ((f64)((*(f64*)array_get(_const_math__lgamma_a, 8)) + (f64)(z * (*(f64*)array_get(_const_math__lgamma_a, 10))))))))))))))));
			f64 gamma_p2 = (f64)(z * ((f64)((*(f64*)array_get(_const_math__lgamma_a, 1)) + (f64)(z * ((f64)((*(f64*)array_get(_const_math__lgamma_a, 3)) + (f64)(z * ((f64)((*(f64*)array_get(_const_math__lgamma_a, 5)) + (f64)(z * ((f64)((*(f64*)array_get(_const_math__lgamma_a, 7)) + (f64)(z * ((f64)((*(f64*)array_get(_const_math__lgamma_a, 9)) + (f64)(z * (*(f64*)array_get(_const_math__lgamma_a, 11))))))))))))))))));
			f64 p = (f64)((f64)(y * gamma_p1) + gamma_p2);
			lgamma += ((f64)(p - (f64)(((f64)(0.5)) * y)));
		} else if (i == 1) {
			f64 z = (f64)(y * y);
			f64 w = (f64)(z * y);
			f64 gamma_p1 = (f64)((*(f64*)array_get(_const_math__lgamma_t, 0)) + (f64)(w * ((f64)((*(f64*)array_get(_const_math__lgamma_t, 3)) + (f64)(w * ((f64)((*(f64*)array_get(_const_math__lgamma_t, 6)) + (f64)(w * ((f64)((*(f64*)array_get(_const_math__lgamma_t, 9)) + (f64)(w * (*(f64*)array_get(_const_math__lgamma_t, 12)))))))))))));
			f64 gamma_p2 = (f64)((*(f64*)array_get(_const_math__lgamma_t, 1)) + (f64)(w * ((f64)((*(f64*)array_get(_const_math__lgamma_t, 4)) + (f64)(w * ((f64)((*(f64*)array_get(_const_math__lgamma_t, 7)) + (f64)(w * ((f64)((*(f64*)array_get(_const_math__lgamma_t, 10)) + (f64)(w * (*(f64*)array_get(_const_math__lgamma_t, 13)))))))))))));
			f64 gamma_p3 = (f64)((*(f64*)array_get(_const_math__lgamma_t, 2)) + (f64)(w * ((f64)((*(f64*)array_get(_const_math__lgamma_t, 5)) + (f64)(w * ((f64)((*(f64*)array_get(_const_math__lgamma_t, 8)) + (f64)(w * ((f64)((*(f64*)array_get(_const_math__lgamma_t, 11)) + (f64)(w * (*(f64*)array_get(_const_math__lgamma_t, 14)))))))))))));
			f64 p = (f64)((f64)(z * gamma_p1) - ((f64)(tt - (f64)(w * ((f64)(gamma_p2 + (f64)(y * gamma_p3)))))));
			lgamma += ((f64)(tf + p));
		} else if (i == 2) {
			f64 gamma_p1 = (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_u, 0)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_u, 1)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_u, 2)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_u, 3)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_u, 4)) + (f64)(y * (*(f64*)array_get(_const_math__lgamma_u, 5))))))))))))))))));
			f64 gamma_p2 = (f64)(((f64)(1.0)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_v, 1)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_v, 2)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_v, 3)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_v, 4)) + (f64)(y * (*(f64*)array_get(_const_math__lgamma_v, 5))))))))))))))));
			lgamma += ((f64)((f64)(((f64)(-0.5)) * y) + (f64)(gamma_p1 / gamma_p2)));
		}
	} else if (x < 8) {
		int i = ((int)(x));
		f64 y = (f64)(x - ((f64)(i)));
		f64 p = (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_s, 0)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_s, 1)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_s, 2)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_s, 3)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_s, 4)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_s, 5)) + (f64)(y * (*(f64*)array_get(_const_math__lgamma_s, 6)))))))))))))))))))));
		f64 q = (f64)(((f64)(1.0)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_r, 1)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_r, 2)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_r, 3)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_r, 4)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_r, 5)) + (f64)(y * (*(f64*)array_get(_const_math__lgamma_r, 6)))))))))))))))))));
		lgamma = (f64)((f64)(((f64)(0.5)) * y) + (f64)(p / q));
		f64 z = 1.0;
		if (i == 7) {
			z *= ((f64)(y + 6));
			z *= ((f64)(y + 5));
			z *= ((f64)(y + 4));
			z *= ((f64)(y + 3));
			z *= ((f64)(y + 2));
			lgamma += math__log(z);
		} else if (i == 6) {
			z *= ((f64)(y + 5));
			z *= ((f64)(y + 4));
			z *= ((f64)(y + 3));
			z *= ((f64)(y + 2));
			lgamma += math__log(z);
		} else if (i == 5) {
			z *= ((f64)(y + 4));
			z *= ((f64)(y + 3));
			z *= ((f64)(y + 2));
			lgamma += math__log(z);
		} else if (i == 4) {
			z *= ((f64)(y + 3));
			z *= ((f64)(y + 2));
			lgamma += math__log(z);
		} else if (i == 3) {
			z *= ((f64)(y + 2));
			lgamma += math__log(z);
		}
	} else if (x < two58) {
		f64 t = math__log(x);
		f64 z = (f64)(((f64)(1.0)) / x);
		f64 y = (f64)(z * z);
		f64 w = (f64)((*(f64*)array_get(_const_math__lgamma_w, 0)) + (f64)(z * ((f64)((*(f64*)array_get(_const_math__lgamma_w, 1)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_w, 2)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_w, 3)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_w, 4)) + (f64)(y * ((f64)((*(f64*)array_get(_const_math__lgamma_w, 5)) + (f64)(y * (*(f64*)array_get(_const_math__lgamma_w, 6)))))))))))))))))));
		lgamma = (f64)((f64)(((f64)(x - ((f64)(0.5)))) * ((f64)(t - ((f64)(1.0))))) + w);
	} else {
		lgamma = (f64)(x * ((f64)(math__log(x) - ((f64)(1.0)))));
	}
	if (neg) {
		lgamma = (f64)(nadj - lgamma);
	}
	return (multi_return_f64_int){.arg0=lgamma, .arg1=sign};
}

VV_LOCAL_SYMBOL f64 math__sin_pi(f64 x_) {
	f64 x = x_;
	f64 two52 = math__exp2(52);
	f64 two53 = math__exp2(53);
	if (x < ((f64)(0.25))) {
		f64 _t1 = -math__sin((f64)(((f64)(_const_math__pi)) * x));
		return _t1;
	}
	f64 z = math__floor(x);
	int n = 0;
	if (z != x) {
		x = math__mod(x, 2);
		n = ((int)((f64)(x * 4)));
	} else {
		if (x >= two53) {
			x = 0;
			n = 0;
		} else {
			if (x < two52) {
				z = (f64)(x + two52);
			}
			n = (1 & ((int)(math__f64_bits(z))));
			x = ((f64)(n));
			n <<= 2;
		}
	}
	if (n == 0) {
		x = math__sin((f64)(((f64)(_const_math__pi)) * x));
	} else if (n == 1 || n == 2) {
		x = math__cos((f64)(((f64)(_const_math__pi)) * ((f64)(((f64)(0.5)) - x))));
	} else if (n == 3 || n == 4) {
		x = math__sin((f64)(((f64)(_const_math__pi)) * ((f64)(((f64)(1.0)) - x))));
	} else if (n == 5 || n == 6) {
		x = -math__cos((f64)(((f64)(_const_math__pi)) * ((f64)(x - ((f64)(1.5))))));
	} else {
		x = math__sin((f64)(((f64)(_const_math__pi)) * ((f64)(x - 2))));
	}
	f64 _t2 = -x;
	return _t2;
}

f64 math__hypot(f64 x, f64 y) {
	if (math__is_inf(x, 0) || math__is_inf(y, 0)) {
		f64 _t1 = math__inf(1);
		return _t1;
	}
	if (math__is_nan(x) || math__is_nan(y)) {
		f64 _t2 = math__nan();
		return _t2;
	}
	f64 result = 0.0;
	if (x != ((f64)(0.0)) || y != ((f64)(0.0))) {
		f64 abs_x = math__abs_T_f64(x);
		f64 abs_y = math__abs_T_f64(y);
		multi_return_f64_f64 mr_305 = math__minmax(abs_x, abs_y);
		f64 cmin = mr_305.arg0;
		f64 cmax = mr_305.arg1;
		f64 rat = (f64)(cmin / cmax);
		f64 root_term = math__sqrt((f64)(((f64)(1.0)) + (f64)(rat * rat)));
		if (cmax < (f64)(((f64)(_const_math__max_f64)) / root_term)) {
			result = (f64)(cmax * root_term);
		} else {
			_v_panic(_SLIT("overflow in hypot_e function"));
			VUNREACHABLE();
		}
	}
	return result;
}

f64 math__acosh(f64 x) {
	if (x == ((f64)(0.0))) {
		f64 _t1 = 0.0;
		return _t1;
	} else if (x > ((f64)((float_literal)(1.0 / _const_math__internal__sqrt_f64_epsilon)))) {
		f64 _t2 = (f64)(math__log(x) + ((f64)((float_literal)(_const_math__pi * 2))));
		return _t2;
	} else if (x > ((f64)(2.0))) {
		f64 _t3 = math__log((f64)((f64)(((f64)(2.0)) * x) - (f64)(((f64)(1.0)) / ((f64)(math__sqrt((f64)((f64)(x * x) - ((f64)(1.0)))) + x)))));
		return _t3;
	} else if (x > ((f64)(1.0))) {
		f64 t = (f64)(x - ((f64)(1.0)));
		f64 _t4 = math__log1p((f64)(t + math__sqrt((f64)((f64)(((f64)(2.0)) * t) + (f64)(t * t)))));
		return _t4;
	} else if (x == ((f64)(1.0))) {
		f64 _t5 = 0.0;
		return _t5;
	} else {
		f64 _t6 = math__nan();
		return _t6;
	}
	return 0;
}

f64 math__asinh(f64 x) {
	f64 a = math__abs_T_f64(x);
	f64 s = (x < 0 ? (-1.0) : (1.0));
	if (a > ((f64)((float_literal)(1.0 / _const_math__internal__sqrt_f64_epsilon)))) {
		f64 _t1 = (f64)(s * ((f64)(math__log(a) + ((f64)((float_literal)(_const_math__pi * 2.0))))));
		return _t1;
	} else if (a > ((f64)(2.0))) {
		f64 _t2 = (f64)(s * math__log((f64)((f64)(((f64)(2.0)) * a) + (f64)(((f64)(1.0)) / ((f64)(a + math__sqrt((f64)((f64)(a * a) + ((f64)(1.0))))))))));
		return _t2;
	} else if (a > ((f64)(_const_math__internal__sqrt_f64_epsilon))) {
		f64 a2 = (f64)(a * a);
		f64 _t3 = (f64)(s * math__log1p((f64)(a + (f64)(a2 / ((f64)(((f64)(1.0)) + math__sqrt((f64)(((f64)(1.0)) + a2))))))));
		return _t3;
	} else {
		return x;
	}
	return 0;
}

f64 math__atanh(f64 x) {
	f64 a = math__abs_T_f64(x);
	f64 s = (x < 0 ? (-1.0) : (1.0));
	if (a > ((f64)(1.0))) {
		f64 _t1 = math__nan();
		return _t1;
	} else if (a == ((f64)(1.0))) {
		f64 _t2 = (x < 0 ? (math__inf(-1)) : (math__inf(1)));
		return _t2;
	} else if (a >= ((f64)(0.5))) {
		f64 _t3 = (f64)((f64)(s * ((f64)(0.5))) * math__log1p((f64)((f64)(((f64)(2.0)) * a) / ((f64)(((f64)(1.0)) - a)))));
		return _t3;
	} else if (a > ((f64)(_const_math__internal__f64_epsilon))) {
		f64 _t4 = (f64)((f64)(s * ((f64)(0.5))) * math__log1p((f64)((f64)(((f64)(2.0)) * a) + (f64)((f64)((f64)(((f64)(2.0)) * a) * a) / ((f64)(((f64)(1.0)) - a))))));
		return _t4;
	} else {
		return x;
	}
	return 0;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL f64 math__xatan(f64 x) {
	f64 xatan_p0 = -8.750608600031904122785e-01;
	f64 xatan_p1 = -1.615753718733365076637e+01;
	f64 xatan_p2 = -7.500855792314704667340e+01;
	f64 xatan_p3 = -1.228866684490136173410e+02;
	f64 xatan_p4 = -6.485021904942025371773e+01;
	f64 xatan_q0 = 2.485846490142306297962e+01;
	f64 xatan_q1 = 1.650270098316988542046e+02;
	f64 xatan_q2 = 4.328810604912902668951e+02;
	f64 xatan_q3 = 4.853903996359136964868e+02;
	f64 xatan_q4 = 1.945506571482613964425e+02;
	f64 z = (f64)(x * x);
	z = (f64)((f64)(z * ((f64)((f64)(((f64)((f64)(((f64)((f64)(((f64)((f64)(xatan_p0 * z) + xatan_p1)) * z) + xatan_p2)) * z) + xatan_p3)) * z) + xatan_p4))) / ((f64)((f64)(((f64)((f64)(((f64)((f64)(((f64)((f64)(((f64)(z + xatan_q0)) * z) + xatan_q1)) * z) + xatan_q2)) * z) + xatan_q3)) * z) + xatan_q4)));
	z = (f64)((f64)(x * z) + x);
	return z;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL f64 math__satan(f64 x) {
	if (x <= ((f64)(0.66))) {
		f64 _t1 = math__xatan(x);
		return _t1;
	}
	if (x > ((f64)(_const_math__tan3pio8))) {
		f64 _t2 = (f64)((f64)(((f64)((float_literal)(_const_math__pi / 2.0))) - math__xatan((f64)(((f64)(1.0)) / x))) + ((f64)(_const_math__morebits)));
		return _t2;
	}
	f64 _t3 = (f64)((f64)(((f64)((float_literal)(_const_math__pi / 4))) + math__xatan((f64)(((f64)(x - ((f64)(1.0)))) / ((f64)(x + ((f64)(1.0))))))) + (f64)(((f64)(0.5)) * ((f64)(_const_math__morebits))));
	return _t3;
}

f64 math__atan(f64 x) {
	if (x == 0) {
		return x;
	}
	if (x > 0) {
		f64 _t2 = math__satan(x);
		return _t2;
	}
	f64 _t3 = -math__satan(-x);
	return _t3;
}

f64 math__atan2(f64 y, f64 x) {
	if (math__is_nan(y) || math__is_nan(x)) {
		f64 _t1 = math__nan();
		return _t1;
	}
	if (y == ((f64)(0.0))) {
		if (x >= 0 && !math__signbit(x)) {
			f64 _t2 = math__copysign(0, y);
			return _t2;
		}
		f64 _t3 = math__copysign(_const_math__pi, y);
		return _t3;
	}
	if (x == ((f64)(0.0))) {
		f64 _t4 = math__copysign((float_literal)(_const_math__pi / 2.0), y);
		return _t4;
	}
	if (math__is_inf(x, 0)) {
		if (math__is_inf(x, 1)) {
			if (math__is_inf(y, 0)) {
				f64 _t5 = math__copysign((float_literal)(_const_math__pi / 4), y);
				return _t5;
			}
			f64 _t6 = math__copysign(0, y);
			return _t6;
		}
		if (math__is_inf(y, 0)) {
			f64 _t7 = math__copysign((float_literal)((float_literal)(3.0 * _const_math__pi) / 4.0), y);
			return _t7;
		}
		f64 _t8 = math__copysign(_const_math__pi, y);
		return _t8;
	}
	if (math__is_inf(y, 0)) {
		f64 _t9 = math__copysign((float_literal)(_const_math__pi / 2.0), y);
		return _t9;
	}
	f64 q = math__atan((f64)(y / x));
	if (x < 0) {
		if (q <= 0) {
			f64 _t10 = (f64)(q + ((f64)(_const_math__pi)));
			return _t10;
		}
		f64 _t11 = (f64)(q - ((f64)(_const_math__pi)));
		return _t11;
	}
	return q;
}

f64 math__asin(f64 x_) {
	f64 x = x_;
	if (x == ((f64)(0.0))) {
		return x;
	}
	bool sign = false;
	if (x < ((f64)(0.0))) {
		x = -x;
		sign = true;
	}
	if (x > ((f64)(1.0))) {
		f64 _t2 = math__nan();
		return _t2;
	}
	f64 temp = math__sqrt((f64)(((f64)(1.0)) - (f64)(x * x)));
	if (x > ((f64)(0.7))) {
		temp = (f64)(((f64)((float_literal)(_const_math__pi / 2.0))) - math__satan((f64)(temp / x)));
	} else {
		temp = math__satan((f64)(x / temp));
	}
	if (sign) {
		temp = -temp;
	}
	return temp;
}

// Attr: [inline]
inline f64 math__acos(f64 x) {
	if (x < ((f64)(-1.0)) || x > ((f64)(1.0))) {
		f64 _t1 = math__nan();
		return _t1;
	}
	if (x > ((f64)(0.5))) {
		f64 _t2 = (f64)(((f64)(2.0)) * math__asin(math__sqrt((f64)(((f64)(0.5)) - (f64)(((f64)(0.5)) * x)))));
		return _t2;
	}
	f64 z = (f64)((f64)(((f64)(_const_math__pi)) / ((f64)(4.0))) - math__asin(x));
	z = (f64)(z + ((f64)(_const_math__morebits)));
	z = (f64)(z + (f64)(((f64)(_const_math__pi)) / ((f64)(4.0))));
	return z;
}

// Attr: [inline]
inline f64 math__log(f64 a) {
	f64 _t1 = log(a);
	return _t1;
}

// Attr: [inline]
inline f32 math__logf(f32 a) {
	f32 _t1 = logf(a);
	return _t1;
}

f64 math__log_n(f64 x, f64 b) {
	f64 y = math__log(x);
	f64 z = math__log(b);
	f64 _t1 = (f64)(y / z);
	return _t1;
}

f64 math__log10(f64 x) {
	f64 _t1 = (f64)(math__log(x) * ((f64)(((float_literal)(1.0 / _const_math__ln10)))));
	return _t1;
}

f64 math__log2(f64 x) {
	multi_return_f64_int mr_397 = math__frexp(x);
	f64 frac = mr_397.arg0;
	int exp = mr_397.arg1;
	if (frac == ((f64)(0.5))) {
		f64 _t1 = ((f64)((int)(exp - 1)));
		return _t1;
	}
	f64 _t2 = (f64)((f64)(math__log(frac) * ((f64)(((float_literal)(1.0 / _const_math__ln2))))) + ((f64)(exp)));
	return _t2;
}

f64 math__log1p(f64 x) {
	f64 y = (f64)(((f64)(1.0)) + x);
	f64 z = (f64)(y - ((f64)(1.0)));
	f64 _t1 = (f64)(math__log(y) - (f64)(((f64)(z - x)) / y));
	return _t1;
}

f64 math__log_b(f64 x) {
	if (x == 0) {
		f64 _t1 = math__inf(-1);
		return _t1;
	}
	if (math__is_inf(x, 0)) {
		f64 _t2 = math__inf(1);
		return _t2;
	}
	if (math__is_nan(x)) {
		return x;
	}
	f64 _t4 = ((f64)(math__ilog_b_(x)));
	return _t4;
}

int math__ilog_b(f64 x) {
	if (x == 0) {
		int _t1 = ((int)(_const_math__min_i32));
		return _t1;
	}
	if (math__is_nan(x)) {
		int _t2 = ((int)(_const_math__max_i32));
		return _t2;
	}
	if (math__is_inf(x, 0)) {
		int _t3 = ((int)(_const_math__max_i32));
		return _t3;
	}
	int _t4 = math__ilog_b_(x);
	return _t4;
}

VV_LOCAL_SYMBOL int math__ilog_b_(f64 x_) {
	multi_return_f64_int mr_1498 = math__normalize(x_);
	f64 x = mr_1498.arg0;
	int exp = mr_1498.arg1;
	int _t1 = (int)((int)(((int)((((math__f64_bits(x) >> _const_math__shift)) & _const_math__mask))) - _const_math__bias) + exp);
	return _t1;
}

f64 math__pure_v_but_overridden_by_c_log(f64 a) {
	f64 ln2_hi = 6.93147180369123816490e-01;
	f64 ln2_lo = 1.90821492927058770002e-10;
	f64 l1 = 6.666666666666735130e-01;
	f64 l2 = 3.999999999940941908e-01;
	f64 l3 = 2.857142874366239149e-01;
	f64 l4 = 2.222219843214978396e-01;
	f64 l5 = 1.818357216161805012e-01;
	f64 l6 = 1.531383769920937332e-01;
	f64 l7 = 1.479819860511658591e-01;
	f64 x = a;
	if (math__is_nan(x) || math__is_inf(x, 1)) {
		return x;
	} else if (x < 0) {
		f64 _t2 = math__nan();
		return _t2;
	} else if (x == 0) {
		f64 _t3 = math__inf(-1);
		return _t3;
	}
	multi_return_f64_int mr_4088 = math__frexp(x);
	f64 f1 = mr_4088.arg0;
	int ki = mr_4088.arg1;
	if (f1 < ((f64)((float_literal)(_const_math__sqrt2 / 2)))) {
		f1 *= 2;
		ki--;
	}
	f64 f = (f64)(f1 - 1);
	f64 k = ((f64)(ki));
	f64 s = (f64)(f / ((f64)(2 + f)));
	f64 s2 = (f64)(s * s);
	f64 s4 = (f64)(s2 * s2);
	f64 t1 = (f64)(s2 * ((f64)(l1 + (f64)(s4 * ((f64)(l3 + (f64)(s4 * ((f64)(l5 + (f64)(s4 * l7))))))))));
	f64 t2 = (f64)(s4 * ((f64)(l2 + (f64)(s4 * ((f64)(l4 + (f64)(s4 * l6)))))));
	f64 r = (f64)(t1 + t2);
	f64 hfsq = (f64)((f64)(((f64)(0.5)) * f) * f);
	f64 _t4 = (f64)((f64)(k * ln2_hi) - ((f64)(((f64)(hfsq - ((f64)((f64)(s * ((f64)(hfsq + r))) + (f64)(k * ln2_lo))))) - f)));
	return _t4;
}

#if defined(_WIN32)
#else
#endif
f64 math__aprox_sin(f64 a) {
	f64 a0 = 1.91059300966915117e-31;
	f64 a1 = 1.00086760103908896;
	f64 a2 = -1.21276126894734565e-2;
	f64 a3 = -1.38078780785773762e-1;
	f64 a4 = -2.67353392911981221e-2;
	f64 a5 = 2.08026600266304389e-2;
	f64 a6 = -3.03996055049204407e-3;
	f64 a7 = 1.38235642404333740e-4;
	f64 _t1 = (f64)(a0 + (f64)(a * ((f64)(a1 + (f64)(a * ((f64)(a2 + (f64)(a * ((f64)(a3 + (f64)(a * ((f64)(a4 + (f64)(a * ((f64)(a5 + (f64)(a * ((f64)(a6 + (f64)(a * a7))))))))))))))))))));
	return _t1;
}

f64 math__aprox_cos(f64 a) {
	f64 a0 = 9.9995999154986614e-1;
	f64 a1 = 1.2548995793001028e-3;
	f64 a2 = -5.0648546280678015e-1;
	f64 a3 = 1.2942246466519995e-2;
	f64 a4 = 2.8668384702547972e-2;
	f64 a5 = 7.3726485210586547e-3;
	f64 a6 = -3.8510875386947414e-3;
	f64 a7 = 4.7196604604366623e-4;
	f64 a8 = -1.8776444013090451e-5;
	f64 _t1 = (f64)(a0 + (f64)(a * ((f64)(a1 + (f64)(a * ((f64)(a2 + (f64)(a * ((f64)(a3 + (f64)(a * ((f64)(a4 + (f64)(a * ((f64)(a5 + (f64)(a * ((f64)(a6 + (f64)(a * ((f64)(a7 + (f64)(a * a8)))))))))))))))))))))));
	return _t1;
}

// Attr: [inline]
inline f64 math__copysign(f64 x, f64 y) {
	f64 _t1 = math__f64_from_bits((((math__f64_bits(x) & ~_const_math__sign_mask)) | ((math__f64_bits(y) & _const_math__sign_mask))));
	return _t1;
}

// Attr: [inline]
inline f64 math__degrees(f64 radians) {
	f64 _t1 = (f64)(radians * ((f64)(((float_literal)(180.0 / _const_math__pi)))));
	return _t1;
}

// Attr: [inline]
inline f64 math__angle_diff(f64 radian_a, f64 radian_b) {
	f64 delta = math__fmod((f64)(radian_b - radian_a), _const_math__tau);
	delta = math__fmod((f64)(delta + ((f64)((float_literal)(1.5 * _const_math__tau)))), _const_math__tau);
	delta -= (float_literal)(.5 * _const_math__tau);
	return delta;
}

Array_int math__digits(i64 num, math__DigitParams params) {
	int b = params.base;
	if (b < 2) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("digits: Cannot find digits of n with base "), /*100 &int*/0xfe07, {.d_i32 = b}}, {_SLIT0, 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	i64 n = num;
	int sign = 1;
	if (n < 0) {
		sign = -1;
		n = -n;
	}
	Array_int res = __new_array_with_default(0, 0, sizeof(int), 0);
	if (n == 0) {
		array_push((array*)&res, _MOV((int[]){ 0 }));
		return res;
	}
	for (;;) {
		if (!(n != 0)) break;
		i64 next_n = (i64)(n / b);
		array_push((array*)&res, _MOV((int[]){ ((int)((i64)(n - (i64)(next_n * b)))) }));
		n = next_n;
	}
	if (sign == -1) {
		(*(int*)array_get(res, (int)(res.len - 1))) *= sign;
	}
	if (params.reverse) {
		res = array_reverse(res);
	}
	return res;
}

int math__count_digits(i64 number) {
	i64 n = number;
	if (n == 0) {
		int _t1 = 1;
		return _t1;
	}
	int c = 0;
	for (;;) {
		if (!(n != 0)) break;
		n = (i64)(n / 10);
		c++;
	}
	return c;
}

multi_return_f64_f64 math__minmax(f64 a, f64 b) {
	if (a < b) {
		return (multi_return_f64_f64){.arg0=a, .arg1=b};
	}
	return (multi_return_f64_f64){.arg0=b, .arg1=a};
}

// Attr: [inline]
inline f64 math__clamp(f64 x, f64 a, f64 b) {
	if (x < a) {
		return a;
	}
	if (x > b) {
		return b;
	}
	return x;
}

// Attr: [inline]
inline f64 math__sign(f64 n) {
	if (math__is_nan(n)) {
		f64 _t1 = math__nan();
		return _t1;
	}
	f64 _t2 = math__copysign(1.0, n);
	return _t2;
}

// Attr: [inline]
inline int math__signi(f64 n) {
	int _t1 = ((int)(math__copysign(1.0, n)));
	return _t1;
}

// Attr: [inline]
inline f64 math__radians(f64 degrees) {
	f64 _t1 = (f64)(degrees * ((f64)(((float_literal)(_const_math__pi / 180.0)))));
	return _t1;
}

// Attr: [inline]
inline bool math__signbit(f64 x) {
	bool _t1 = (math__f64_bits(x) & _const_math__sign_mask) != 0U;
	return _t1;
}

bool math__tolerance(f64 a, f64 b, f64 tol) {
	f64 ee = tol;
	if (a == b) {
		bool _t1 = true;
		return _t1;
	}
	f64 d = (f64)(a - b);
	if (d < 0) {
		d = -d;
	}
	if (b != 0) {
		ee = (f64)(ee * b);
		if (ee < 0) {
			ee = -ee;
		}
	}
	bool _t2 = d < ee;
	return _t2;
}

bool math__close(f64 a, f64 b) {
	bool _t1 = math__tolerance(a, b, 1e-14);
	return _t1;
}

bool math__veryclose(f64 a, f64 b) {
	bool _t1 = math__tolerance(a, b, 4e-16);
	return _t1;
}

bool math__alike(f64 a, f64 b) {
	if ((math__f64_bits(a) & 0xFFFFFFFFFFFFFFFCU) == (math__f64_bits(b) & 0xFFFFFFFFFFFFFFFCU)) {
		bool _t1 = true;
		return _t1;
	}
	if (a == -0 && b == 0) {
		bool _t2 = true;
		return _t2;
	}
	if (a == 0 && b == -0) {
		bool _t3 = true;
		return _t3;
	}
	if (math__is_nan(a) && math__is_nan(b)) {
		bool _t4 = true;
		return _t4;
	}
	if (a == b) {
		bool _t5 = math__signbit(a) == math__signbit(b);
		return _t5;
	}
	bool _t6 = false;
	return _t6;
}

VV_LOCAL_SYMBOL bool math__is_odd_int(f64 x) {
	multi_return_f64_f64 mr_5561 = math__modf(x);
	f64 xi = mr_5561.arg0;
	f64 xf = mr_5561.arg1;
	bool _t1 = xf == 0 && ((((i64)(xi)) & 1)) == 1;
	return _t1;
}

VV_LOCAL_SYMBOL bool math__is_neg_int(f64 x) {
	if (x < 0) {
		multi_return_f64_f64 mr_5661 = math__modf(x);
		f64 xf = mr_5661.arg1;
		bool _t1 = xf == 0;
		return _t1;
	}
	bool _t2 = false;
	return _t2;
}

// Attr: [inline]
inline int math__min_T_int(int a, int b) {
	int _t1 = (a < b ? (a) : (b));
	return _t1;
}

// Attr: [inline]
inline f32 math__max_T_f32(f32 a, f32 b) {
	f32 _t1 = (a > b ? (a) : (b));
	return _t1;
}

// Attr: [inline]
inline f64 math__abs_T_f64(f64 a) {
	f64 _t1 = (a < 0 ? (-a) : (a));
	return _t1;
}
inline f32 math__abs_T_f32(f32 a) {
	f32 _t1 = (a < 0 ? (-a) : (a));
	return _t1;
}

multi_return_f64_f64 math__modf(f64 f) {
	f64 abs_f = math__abs_T_f64(f);
	f64 i = 0.0;
	if (abs_f >= ((f64)(_const_math__modf_maxpowtwo))) {
		i = f;
	} else {
		i = (f64)(abs_f + ((f64)(_const_math__modf_maxpowtwo)));
		i -= _const_math__modf_maxpowtwo;
		for (;;) {
			if (!(i > abs_f)) break;
			i -= 1.0;
		}
		if (f < ((f64)(0.0))) {
			i = -i;
		}
	}
	return (multi_return_f64_f64){.arg0=i, .arg1=(f64)(f - i)};
}

f32 math__nextafter32(f32 x, f32 y) {
	f32 r = ((f32)(0.0));
	if (math__is_nan(((f64)(x))) || math__is_nan(((f64)(y)))) {
		r = ((f32)(math__nan()));
	} else if (x == y) {
		r = x;
	} else if (x == 0) {
		r = ((f32)(math__copysign(((f64)(math__f32_from_bits(1U))), ((f64)(y)))));
	} else if ((y > x) == (x > 0)) {
		r = math__f32_from_bits((u32)(math__f32_bits(x) + 1U));
	} else {
		r = math__f32_from_bits((u32)(math__f32_bits(x) - 1U));
	}
	return r;
}

f64 math__nextafter(f64 x, f64 y) {
	f64 r = 0.0;
	if (math__is_nan(x) || math__is_nan(y)) {
		r = math__nan();
	} else if (x == y) {
		r = x;
	} else if (x == 0) {
		r = math__copysign(math__f64_from_bits(1U), y);
	} else if ((y > x) == (x > 0)) {
		r = math__f64_from_bits((u64)(math__f64_bits(x) + 1U));
	} else {
		r = math__f64_from_bits((u64)(math__f64_bits(x) - 1U));
	}
	return r;
}

VV_LOCAL_SYMBOL f64 math__poly_n_eval(Array_f64 c, int n, f64 x) {
	if (c.len == 0) {
		_v_panic(_SLIT("coeficients can not be empty"));
		VUNREACHABLE();
	}
	int len = ((int)(math__min_T_int(c.len, n)));
	f64 ans = (*(f64*)array_get(c, (int)(len - 1)));
	Array_f64 _t1 = array_slice(c, 0, (int)(len - 1));
	for (int _t2 = 0; _t2 < _t1.len; ++_t2) {
		f64 e = ((f64*)_t1.data)[_t2];
		ans = (f64)(e + (f64)(x * ans));
	}
	return ans;
}

VV_LOCAL_SYMBOL f64 math__poly_n_1_eval(Array_f64 c, int n, f64 x) {
	if (c.len == 0) {
		_v_panic(_SLIT("coeficients can not be empty"));
		VUNREACHABLE();
	}
	int len = (int)(((int)(math__min_T_int(c.len, n))) - 1);
	f64 ans = (*(f64*)array_get(c, (int)(len - 1)));
	Array_f64 _t1 = array_slice(c, 0, (int)(len - 1));
	for (int _t2 = 0; _t2 < _t1.len; ++_t2) {
		f64 e = ((f64*)_t1.data)[_t2];
		ans = (f64)(e + (f64)(x * ans));
	}
	return ans;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL f64 math__poly_eval(Array_f64 c, f64 x) {
	f64 _t1 = math__poly_n_eval(c, c.len, x);
	return _t1;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL f64 math__poly_1_eval(Array_f64 c, f64 x) {
	f64 _t1 = math__poly_n_1_eval(c, c.len, x);
	return _t1;
}

VV_LOCAL_SYMBOL multi_return_f64_f64 math__ChebSeries_eval_e(math__ChebSeries cs, f64 x) {
	f64 d = 0.0;
	f64 dd = 0.0;
	f64 y = (f64)(((f64)((f64)((f64)(((f64)(2.0)) * x) - cs.a) - cs.b)) / ((f64)(cs.b - cs.a)));
	f64 y2 = (f64)(((f64)(2.0)) * y);
	f64 e_ = 0.0;
	f64 temp = 0.0;
	for (int j = cs.order; j >= 1; j--) {
		temp = d;
		d = (f64)((f64)((f64)(y2 * d) - dd) + (*(f64*)array_get(cs.c, j)));
		e_ += (f64)((f64)(math__abs_T_f64((f64)(y2 * temp)) + math__abs_T_f64(dd)) + math__abs_T_f64((*(f64*)array_get(cs.c, j))));
		dd = temp;
	}
	temp = d;
	d = (f64)((f64)((f64)(y * d) - dd) + (f64)(((f64)(0.5)) * (*(f64*)array_get(cs.c, 0))));
	e_ += (f64)((f64)(math__abs_T_f64((f64)(y * temp)) + math__abs_T_f64(dd)) + (f64)(((f64)(0.5)) * math__abs_T_f64((*(f64*)array_get(cs.c, 0)))));
	return (multi_return_f64_f64){.arg0=d, .arg1=(f64)((f64)(((f64)(_const_math__internal__f64_epsilon)) * e_) + math__abs_T_f64((*(f64*)array_get(cs.c, cs.order))))};
}

// Attr: [inline]
inline f64 math__pow(f64 x, f64 y) {
	f64 _t1 = pow(x, y);
	return _t1;
}

// Attr: [inline]
inline f32 math__powf(f32 a, f32 b) {
	f32 _t1 = powf(a, b);
	return _t1;
}

// Attr: [inline]
inline f32 math__pure_v_but_overridden_by_c_powf(f32 a, f32 b) {
	f32 _t1 = ((f32)(math__pow(a, b)));
	return _t1;
}

f64 math__pow10(int n) {
	if (0 <= n && n <= 308) {
		f64 _t1 = (f64)((*(f64*)array_get(_const_math__pow10postab32, (u32)(((u32)(n)) / 32U))) * (*(f64*)array_get(_const_math__pow10tab, (u32)(((u32)(n)) % 32U))));
		return _t1;
	}
	if (-323 <= n && n <= 0) {
		f64 _t2 = (f64)((*(f64*)array_get(_const_math__pow10negtab32, (u32)(((u32)(-n)) / 32U))) / (*(f64*)array_get(_const_math__pow10tab, (u32)(((u32)(-n)) % 32U))));
		return _t2;
	}
	if (n > 0) {
		f64 _t3 = math__inf(1);
		return _t3;
	}
	f64 _t4 = 0.0;
	return _t4;
}

i64 math__powi(i64 a, i64 b) {
	i64 b_ = b;
	i64 p = a;
	i64 v = ((i64)(1));
	if (b_ < 0) {
		if (a == 0) {
			i64 _t1 = -1;
			return _t1;
		}
		i64 _t2 = ((i64)(a * a) != 1 ? (0) : ((((b_ & 1)) > 0 ? (a) : (1))));
		return _t2;
	}
	for (; b_ > 0; ) {
		if ((b_ & 1) > 0) {
			v *= p;
		}
		p *= p;
		b_ >>= 1;
	}
	return v;
}

f64 math__pure_v_but_overridden_by_c_pow(f64 x, f64 y) {
	if (y == 0 || x == 1) {
		f64 _t1 = 1;
		return _t1;
	} else if (y == 1) {
		return x;
	} else if (math__is_nan(x) || math__is_nan(y)) {
		f64 _t3 = math__nan();
		return _t3;
	} else if (y == 2) {
		f64 _t4 = (f64)(x * x);
		return _t4;
	} else if (y == 3) {
		f64 _t5 = (f64)((f64)(x * x) * x);
		return _t5;
	} else if (x == 0) {
		if (y < 0) {
			if (math__is_odd_int(y)) {
				f64 _t6 = math__copysign(math__inf(1), x);
				return _t6;
			}
			f64 _t7 = math__inf(1);
			return _t7;
		} else if (y > 0) {
			if (math__is_odd_int(y)) {
				return x;
			}
			f64 _t9 = 0;
			return _t9;
		}
	} else if (math__is_inf(y, 0)) {
		if (x == -1) {
			f64 _t10 = 1;
			return _t10;
		} else if ((math__abs_T_f64(x) < 1) == math__is_inf(y, 1)) {
			f64 _t11 = 0;
			return _t11;
		} else {
			f64 _t12 = math__inf(1);
			return _t12;
		}
	} else if (math__is_inf(x, 0)) {
		if (math__is_inf(x, -1)) {
			f64 _t13 = math__pow((f64)(1 / x), -y);
			return _t13;
		}
		if (y < 0) {
			f64 _t14 = 0;
			return _t14;
		} else if (y > 0) {
			f64 _t15 = math__inf(1);
			return _t15;
		}
	} else if (y == ((f64)(0.5))) {
		f64 _t16 = math__sqrt(x);
		return _t16;
	} else if (y == ((f64)(-0.5))) {
		f64 _t17 = (f64)(1 / math__sqrt(x));
		return _t17;
	}
	multi_return_f64_f64 mr_2492 = math__modf(math__abs_T_f64(y));
	f64 yi = mr_2492.arg0;
	f64 yf = mr_2492.arg1;
	if (yf != 0 && x < 0) {
		f64 _t18 = math__nan();
		return _t18;
	}
	if (yi >= ((((u64)(1U)) << 63U))) {
		if (x == -1) {
			f64 _t19 = 1;
			return _t19;
		} else if ((math__abs_T_f64(x) < 1) == (y > 0)) {
			f64 _t20 = 0;
			return _t20;
		} else {
			f64 _t21 = math__inf(1);
			return _t21;
		}
	}
	if (yf == ((f64)(0.0))) {
		f64 result = x;
		for (i64 _t22 = 1; _t22 < ((i64)(yi)); ++_t22) {
			result *= x;
		}
		if (y > 0) {
			return result;
		}
		f64 _t24 = (f64)(1 / result);
		return _t24;
	}
	f64 a1 = 1.0;
	int ae = 0;
	if (yf != 0) {
		if (yf > ((f64)(0.5))) {
			yf--;
			yi++;
		}
		a1 = math__exp((f64)(yf * math__log(x)));
	}
	multi_return_f64_int mr_3267 = math__frexp(x);
	f64 x1 = mr_3267.arg0;
	int xe = mr_3267.arg1;
	for (i64 i = ((i64)(yi)); i != 0; i >>= 1) {
		if (xe < ((int)(((u32)((((u32)(-1)) << 12U))))) || 4096 < xe) {
			ae += xe;
			break;
		}
		if ((i & 1) == 1) {
			a1 *= x1;
			ae += xe;
		}
		x1 *= x1;
		xe <<= 1;
		if (x1 < ((f64)(.5))) {
			x1 += x1;
			xe--;
		}
	}
	if (y < 0) {
		a1 = (f64)(1 / a1);
		ae = -ae;
	}
	f64 _t25 = math__ldexp(a1, ae);
	return _t25;
}

// Attr: [inline]
inline f64 math__q_rsqrt(f64 x) {
	f64 x_half = (f64)(((f64)(0.5)) * x);
	i64 i = ((i64)(math__f64_bits(x)));
	i = (i64)(0x5fe6eb50c7b537a9 - ((i >> 1)));
	f64 j = math__f64_from_bits(((u64)(i)));
	j *= ((f64)(((f64)(1.5)) - (f64)((f64)(x_half * j) * j)));
	j *= ((f64)(((f64)(1.5)) - (f64)((f64)(x_half * j) * j)));
	return j;
}

f64 math__scalbn(f64 x, int n_) {
	int n = n_;
	f64 x1p1023 = math__f64_from_bits(((u64)(0x7fe0000000000000U)));
	f64 x1p53 = math__f64_from_bits(((u64)(0x4340000000000000U)));
	f64 x1p_1022 = math__f64_from_bits(((u64)(0x0010000000000000U)));
	f64 y = x;
	if (n > 1023) {
		y *= x1p1023;
		n -= 1023;
		if (n > 1023) {
			y *= x1p1023;
			n -= 1023;
			if (n > 1023) {
				n = 1023;
			}
		}
	} else if (n < -1022) {
		y *= (f64)(x1p_1022 * x1p53);
		n += 969;
		if (n < -1022) {
			y *= (f64)(x1p_1022 * x1p53);
			n += 969;
			if (n < -1022) {
				n = -1022;
			}
		}
	}
	f64 _t1 = (f64)(y * math__f64_from_bits((((u64)(((int)(0x3ff + n)))) << 52U)));
	return _t1;
}

// Attr: [inline]
inline f64 math__cos(f64 a) {
	f64 _t1 = cos(a);
	return _t1;
}

// Attr: [inline]
inline f64 math__sin(f64 a) {
	f64 _t1 = sin(a);
	return _t1;
}

// Attr: [inline]
inline f32 math__cosf(f32 a) {
	f32 _t1 = cosf(a);
	return _t1;
}

// Attr: [inline]
inline f32 math__sinf(f32 a) {
	f32 _t1 = sinf(a);
	return _t1;
}

f64 math__pure_v_but_overridden_by_c_sin(f64 x) {
	f64 p1 = 7.85398125648498535156e-1;
	f64 p2 = 3.77489470793079817668e-8;
	f64 p3 = 2.69515142907905952645e-15;
	int sgn_x = (x < 0 ? (-1) : (1));
	f64 abs_x = math__abs_T_f64(x);
	if (abs_x < ((f64)(_const_math__internal__root4_f64_epsilon))) {
		f64 x2 = (f64)(x * x);
		f64 _t1 = (f64)(x * ((f64)(((f64)(1.0)) - (f64)(x2 / ((f64)(6.0))))));
		return _t1;
	} else {
		int sgn_result = sgn_x;
		f64 y = math__floor((f64)(abs_x / ((f64)(((float_literal)(0.25 * _const_math__pi))))));
		int octant = ((int)((f64)(y - math__ldexp(math__floor(math__ldexp(y, -3)), 3))));
		if (((octant & 1)) == 1) {
			octant++;
			octant &= 7;
			y += 1.0;
		}
		if (octant > 3) {
			octant -= 4;
			sgn_result = -sgn_result;
		}
		f64 z = (f64)(((f64)(((f64)(abs_x - (f64)(y * p1))) - (f64)(y * p2))) - (f64)(y * p3));
		f64 result = 0.0;
		if (octant == 0) {
			f64 t = (f64)((f64)((f64)(((f64)(8.0)) * math__abs_T_f64(z)) / ((f64)(_const_math__pi))) - ((f64)(1.0)));
			multi_return_f64_f64 mr_1698 = math__ChebSeries_eval_e(_const_math__sin_cs, t);
			f64 sin_cs_val = mr_1698.arg0;
			result = (f64)(z * ((f64)(((f64)(1.0)) + (f64)((f64)(z * z) * sin_cs_val))));
		} else {
			f64 t = (f64)((f64)((f64)(((f64)(8.0)) * math__abs_T_f64(z)) / ((f64)(_const_math__pi))) - ((f64)(1.0)));
			multi_return_f64_f64 mr_1826 = math__ChebSeries_eval_e(_const_math__cos_cs, t);
			f64 cos_cs_val = mr_1826.arg0;
			result = (f64)(((f64)(1.0)) - (f64)((f64)((f64)(((f64)(0.5)) * z) * z) * ((f64)(((f64)(1.0)) - (f64)((f64)(z * z) * cos_cs_val)))));
		}
		result *= sgn_result;
		return result;
	}
	return 0;
}

f64 math__pure_v_but_overridden_by_c_cos(f64 x) {
	f64 p1 = 7.85398125648498535156e-1;
	f64 p2 = 3.77489470793079817668e-8;
	f64 p3 = 2.69515142907905952645e-15;
	f64 abs_x = math__abs_T_f64(x);
	if (abs_x < ((f64)(_const_math__internal__root4_f64_epsilon))) {
		f64 x2 = (f64)(x * x);
		f64 _t1 = (f64)(((f64)(1.0)) - (f64)(((f64)(0.5)) * x2));
		return _t1;
	} else {
		int sgn_result = 1;
		f64 y = math__floor((f64)(abs_x / ((f64)(((float_literal)(0.25 * _const_math__pi))))));
		int octant = ((int)((f64)(y - math__ldexp(math__floor(math__ldexp(y, -3)), 3))));
		if (((octant & 1)) == 1) {
			octant++;
			octant &= 7;
			y += 1.0;
		}
		if (octant > 3) {
			octant -= 4;
			sgn_result = -sgn_result;
		}
		if (octant > 1) {
			sgn_result = -sgn_result;
		}
		f64 z = (f64)(((f64)(((f64)(abs_x - (f64)(y * p1))) - (f64)(y * p2))) - (f64)(y * p3));
		f64 result = 0.0;
		if (octant == 0) {
			f64 t = (f64)((f64)((f64)(((f64)(8.0)) * math__abs_T_f64(z)) / ((f64)(_const_math__pi))) - ((f64)(1.0)));
			multi_return_f64_f64 mr_2672 = math__ChebSeries_eval_e(_const_math__cos_cs, t);
			f64 cos_cs_val = mr_2672.arg0;
			result = (f64)(((f64)(1.0)) - (f64)((f64)((f64)(((f64)(0.5)) * z) * z) * ((f64)(((f64)(1.0)) - (f64)((f64)(z * z) * cos_cs_val)))));
		} else {
			f64 t = (f64)((f64)((f64)(((f64)(8.0)) * math__abs_T_f64(z)) / ((f64)(_const_math__pi))) - ((f64)(1.0)));
			multi_return_f64_f64 mr_2816 = math__ChebSeries_eval_e(_const_math__sin_cs, t);
			f64 sin_cs_val = mr_2816.arg0;
			result = (f64)(z * ((f64)(((f64)(1.0)) + (f64)((f64)(z * z) * sin_cs_val))));
		}
		result *= sgn_result;
		return result;
	}
	return 0;
}

// Attr: [inline]
inline f32 math__pure_v_but_overridden_by_c_cosf(f32 a) {
	f32 _t1 = ((f32)(math__cos(a)));
	return _t1;
}

// Attr: [inline]
inline f32 math__pure_v_but_overridden_by_c_sinf(f32 a) {
	f32 _t1 = ((f32)(math__sin(a)));
	return _t1;
}

multi_return_f64_f64 math__sincos(f64 x) {
	if (math__is_nan(x)) {
		return (multi_return_f64_f64){.arg0=x, .arg1=x};
	}
	f64 p1 = 7.85398125648498535156e-1;
	f64 p2 = 3.77489470793079817668e-8;
	f64 p3 = 2.69515142907905952645e-15;
	int sgn_x = (x < 0 ? (-1) : (1));
	f64 abs_x = math__abs_T_f64(x);
	if (math__is_inf(x, sgn_x)) {
		return (multi_return_f64_f64){.arg0=math__nan(), .arg1=math__nan()};
	}
	if (abs_x < ((f64)(_const_math__internal__root4_f64_epsilon))) {
		f64 x2 = (f64)(x * x);
		return (multi_return_f64_f64){.arg0=(f64)(x * ((f64)(((f64)(1.0)) - (f64)(x2 / ((f64)(6.0)))))), .arg1=(f64)(((f64)(1.0)) - (f64)(((f64)(0.5)) * x2))};
	} else {
		int sgn_result_sin = sgn_x;
		int sgn_result_cos = 1;
		f64 y = math__floor((f64)(abs_x / ((f64)(((float_literal)(0.25 * _const_math__pi))))));
		int octant = ((int)((f64)(y - math__ldexp(math__floor(math__ldexp(y, -3)), 3))));
		if (((octant & 1)) == 1) {
			octant++;
			octant &= 7;
			y += 1.0;
		}
		if (octant > 3) {
			octant -= 4;
			sgn_result_sin = -sgn_result_sin;
			sgn_result_cos = -sgn_result_cos;
		}
		sgn_result_cos = (octant > 1 ? (-sgn_result_cos) : (sgn_result_cos));
		f64 z = (f64)(((f64)(((f64)(abs_x - (f64)(y * p1))) - (f64)(y * p2))) - (f64)(y * p3));
		f64 t = (f64)((f64)((f64)(((f64)(8.0)) * math__abs_T_f64(z)) / ((f64)(_const_math__pi))) - ((f64)(1.0)));
		multi_return_f64_f64 mr_4081 = math__ChebSeries_eval_e(_const_math__sin_cs, t);
		f64 sin_cs_val = mr_4081.arg0;
		multi_return_f64_f64 mr_4122 = math__ChebSeries_eval_e(_const_math__cos_cs, t);
		f64 cos_cs_val = mr_4122.arg0;
		f64 result_sin = 0.0;
		f64 result_cos = 0.0;
		if (octant == 0) {
			result_sin = (f64)(z * ((f64)(((f64)(1.0)) + (f64)((f64)(z * z) * sin_cs_val))));
			result_cos = (f64)(((f64)(1.0)) - (f64)((f64)((f64)(((f64)(0.5)) * z) * z) * ((f64)(((f64)(1.0)) - (f64)((f64)(z * z) * cos_cs_val)))));
		} else {
			result_sin = (f64)(((f64)(1.0)) - (f64)((f64)((f64)(((f64)(0.5)) * z) * z) * ((f64)(((f64)(1.0)) - (f64)((f64)(z * z) * cos_cs_val)))));
			result_cos = (f64)(z * ((f64)(((f64)(1.0)) + (f64)((f64)(z * z) * sin_cs_val))));
		}
		result_sin *= sgn_result_sin;
		result_cos *= sgn_result_cos;
		return (multi_return_f64_f64){.arg0=result_sin, .arg1=result_cos};
	}
	return (multi_return_f64_f64){0};
}

f64 math__sinh(f64 x_) {
	f64 x = x_;
	f64 p0 = -0.6307673640497716991184787251e+6;
	f64 p1 = -0.8991272022039509355398013511e+5;
	f64 p2 = -0.2894211355989563807284660366e+4;
	f64 p3 = -0.2630563213397497062819489e+2;
	f64 q0 = -0.6307673640497716991212077277e+6;
	f64 q1 = 0.1521517378790019070696485176e+5;
	f64 q2 = -0.173678953558233699533450911e+3;
	bool sign = false;
	if (x < 0) {
		x = -x;
		sign = true;
	}
	f64 temp = 0.0;
	if (x > 21) {
		temp = (f64)(math__exp(x) * ((f64)(0.5)));
	} else if (x > ((f64)(0.5))) {
		f64 ex = math__exp(x);
		temp = (f64)(((f64)(ex - (f64)(((f64)(1.0)) / ex))) * ((f64)(0.5)));
	} else {
		f64 sq = (f64)(x * x);
		temp = (f64)(((f64)((f64)(((f64)((f64)(((f64)((f64)(p3 * sq) + p2)) * sq) + p1)) * sq) + p0)) * x);
		temp = (f64)(temp / ((f64)((f64)(((f64)((f64)(((f64)(sq + q2)) * sq) + q1)) * sq) + q0)));
	}
	if (sign) {
		temp = -temp;
	}
	return temp;
}

f64 math__cosh(f64 x) {
	f64 abs_x = math__abs_T_f64(x);
	if (abs_x > 21) {
		f64 _t1 = (f64)(math__exp(abs_x) * ((f64)(0.5)));
		return _t1;
	}
	f64 ex = math__exp(abs_x);
	f64 _t2 = (f64)(((f64)(ex + (f64)(((f64)(1.0)) / ex))) * ((f64)(0.5)));
	return _t2;
}

// Attr: [inline]
inline f64 math__sqrt(f64 a) {
	f64 _t1 = sqrt(a);
	return _t1;
}

// Attr: [inline]
inline f32 math__sqrtf(f32 a) {
	f32 _t1 = sqrtf(a);
	return _t1;
}

// Attr: [inline]
inline f64 math__pure_v_but_overridden_by_c_sqrt(f64 a) {
	f64 x = a;
	if (x == ((f64)(0.0)) || math__is_nan(x) || math__is_inf(x, 1)) {
		return x;
	}
	if (x < ((f64)(0.0))) {
		f64 _t2 = math__nan();
		return _t2;
	}
	multi_return_f64_int mr_259 = math__frexp(x);
	f64 z = mr_259.arg0;
	int ex = mr_259.arg1;
	f64 w = x;
	x = (f64)(((f64)(4.173075996388649989089e-1)) + (f64)(((f64)(5.9016206709064458299663e-1)) * z));
	if (((ex & 1)) != 0) {
		x *= _const_math__sqrt2;
	}
	x = math__ldexp(x, (ex >> 1));
	x = (f64)(((f64)(0.5)) * ((f64)(x + (f64)(w / x))));
	x = (f64)(((f64)(0.5)) * ((f64)(x + (f64)(w / x))));
	x = (f64)(((f64)(0.5)) * ((f64)(x + (f64)(w / x))));
	return x;
}

// Attr: [inline]
inline f32 math__pure_v_but_overridden_by_c_sqrtf(f32 a) {
	f32 _t1 = ((f32)(math__sqrt(a)));
	return _t1;
}

i64 math__sqrti(i64 a) {
	i64 x = a;
	i64 q = ((i64)(1));
	i64 r = ((i64)(0));
	for (; q <= x; ) {
		q <<= 2;
	}
	for (; q > 1; ) {
		q >>= 2;
		i64 t = (i64)((i64)(x - r) - q);
		r >>= 1;
		if (t >= 0) {
			x = t;
			r += q;
		}
	}
	return r;
}

// Attr: [inline]
inline f32 math__tanf(f32 a) {
	f32 _t1 = tanf(a);
	return _t1;
}

f64 math__tan(f64 a) {
	f64 x = a;
	if (x == ((f64)(0.0)) || math__is_nan(x)) {
		return x;
	}
	if (math__is_inf(x, 0)) {
		f64 _t2 = math__nan();
		return _t2;
	}
	int sign = 1;
	if (x < 0) {
		x = -x;
		sign = -1;
	}
	if (x > ((f64)(_const_math__tan_lossth))) {
		f64 _t3 = 0.0;
		return _t3;
	}
	f64 y = math__floor((f64)((f64)(x * ((f64)(4.0))) / ((f64)(_const_math__pi))));
	f64 z = math__ldexp(y, -3);
	z = math__floor(z);
	z = (f64)(y - math__ldexp(z, 3));
	int octant = ((int)(z));
	if (((octant & 1)) == 1) {
		octant++;
		y += 1.0;
	}
	z = (f64)(((f64)(((f64)(x - (f64)(y * ((f64)(_const_math__tan_dp1))))) - (f64)(y * ((f64)(_const_math__tan_dp2))))) - (f64)(y * ((f64)(_const_math__tan_dp3))));
	f64 zz = (f64)(z * z);
	if (zz > ((f64)(1.0e-14))) {
		y = (f64)(z + (f64)(z * ((f64)((f64)(zz * ((f64)((f64)(((f64)(((f64)((*(f64*)array_get(_const_math__tan_p, 0)) * zz)) + (*(f64*)array_get(_const_math__tan_p, 1)))) * zz) + (*(f64*)array_get(_const_math__tan_p, 2))))) / ((f64)((f64)(((f64)((f64)(((f64)((f64)(((f64)(zz + (*(f64*)array_get(_const_math__tan_q, 1)))) * zz) + (*(f64*)array_get(_const_math__tan_q, 2)))) * zz) + (*(f64*)array_get(_const_math__tan_q, 3)))) * zz) + (*(f64*)array_get(_const_math__tan_q, 4))))))));
	} else {
		y = z;
	}
	if (((octant & 2)) == 2) {
		y = (f64)(((f64)(-1.0)) / y);
	}
	if (sign < 0) {
		y = -y;
	}
	return y;
}

// Attr: [inline]
inline f32 math__pure_v_but_overridden_by_c_tanf(f32 a) {
	f32 _t1 = ((f32)(math__tan(a)));
	return _t1;
}

f64 math__cot(f64 a) {
	f64 x = a;
	if (x == ((f64)(0.0))) {
		f64 _t1 = math__inf(1);
		return _t1;
	}
	int sign = 1;
	if (x < 0) {
		x = -x;
		sign = -1;
	}
	if (x > ((f64)(_const_math__tan_lossth))) {
		f64 _t2 = 0.0;
		return _t2;
	}
	f64 y = math__floor((f64)((f64)(x * ((f64)(4.0))) / ((f64)(_const_math__pi))));
	f64 z = math__ldexp(y, -3);
	z = math__floor(z);
	z = (f64)(y - math__ldexp(z, 3));
	int octant = ((int)(z));
	if (((octant & 1)) == 1) {
		octant++;
		y += 1.0;
	}
	z = (f64)(((f64)(((f64)(x - (f64)(y * ((f64)(_const_math__tan_dp1))))) - (f64)(y * ((f64)(_const_math__tan_dp2))))) - (f64)(y * ((f64)(_const_math__tan_dp3))));
	f64 zz = (f64)(z * z);
	if (zz > ((f64)(1.0e-14))) {
		y = (f64)(z + (f64)(z * ((f64)((f64)(zz * ((f64)((f64)(((f64)(((f64)((*(f64*)array_get(_const_math__tan_p, 0)) * zz)) + (*(f64*)array_get(_const_math__tan_p, 1)))) * zz) + (*(f64*)array_get(_const_math__tan_p, 2))))) / ((f64)((f64)(((f64)((f64)(((f64)((f64)(((f64)(zz + (*(f64*)array_get(_const_math__tan_q, 1)))) * zz) + (*(f64*)array_get(_const_math__tan_q, 2)))) * zz) + (*(f64*)array_get(_const_math__tan_q, 3)))) * zz) + (*(f64*)array_get(_const_math__tan_q, 4))))))));
	} else {
		y = z;
	}
	if (((octant & 2)) == 2) {
		y = -y;
	} else {
		y = (f64)(((f64)(1.0)) / y);
	}
	if (sign < 0) {
		y = -y;
	}
	return y;
}

f64 math__tanh(f64 x) {
	f64 maxlog = 8.8029691931113054295988e+01;
	f64 z = math__abs_T_f64(x);
	if (z > (f64)(((f64)(0.5)) * maxlog)) {
		if (x < 0) {
			f64 _t1 = ((f64)(-1));
			return _t1;
		}
		f64 _t2 = 1.0;
		return _t2;
	} else if (z >= ((f64)(0.625))) {
		f64 s = math__exp((f64)(((f64)(2.0)) * z));
		z = (f64)(((f64)(1.0)) - (f64)(((f64)(2.0)) / ((f64)(s + ((f64)(1.0))))));
		if (x < 0) {
			z = -z;
		}
	} else {
		if (x == 0) {
			return x;
		}
		f64 s = (f64)(x * x);
		z = (f64)(x + (f64)((f64)((f64)(x * s) * ((f64)((f64)(((f64)((f64)((*(f64*)array_get(_const_math__tanh_p, 0)) * s) + (*(f64*)array_get(_const_math__tanh_p, 1)))) * s) + (*(f64*)array_get(_const_math__tanh_p, 2))))) / ((f64)((f64)(((f64)((f64)(((f64)(s + (*(f64*)array_get(_const_math__tanh_q, 0)))) * s) + (*(f64*)array_get(_const_math__tanh_q, 1)))) * s) + (*(f64*)array_get(_const_math__tanh_q, 2))))));
	}
	return z;
}

// Attr: [inline]
inline u32 math__f32_bits(f32 f) {
	u32 p = *((u32*)(&f));
	return p;
}

// Attr: [inline]
inline f32 math__f32_from_bits(u32 b) {
	f32 p = *((f32*)(&b));
	return p;
}

// Attr: [inline]
inline u64 math__f64_bits(f64 f) {
	u64 p = *((u64*)(&f));
	return p;
}

// Attr: [inline]
inline f64 math__f64_from_bits(u64 b) {
	f64 p = *((f64*)(&b));
	return p;
}

// Attr: [inline]
inline f64 math__with_set_low_word(f64 f, u32 lo) {
	u64 tmp = math__f64_bits(f);
	tmp &= 0xffffffff00000000U;
	tmp |= ((u64)(lo));
	f64 _t1 = math__f64_from_bits(tmp);
	return _t1;
}

// Attr: [inline]
inline f64 math__with_set_high_word(f64 f, u32 hi) {
	u64 tmp = math__f64_bits(f);
	tmp &= 0x00000000ffffffffU;
	tmp |= (((u64)(hi)) << 32U);
	f64 _t1 = math__f64_from_bits(tmp);
	return _t1;
}

// Attr: [inline]
inline u32 math__get_high_word(f64 f) {
	u32 _t1 = ((u32)((math__f64_bits(f) >> 32U)));
	return _t1;
}

math__vec__Vec2_T_f32 math__vec__vec2_T_f32(f32 x, f32 y) {
	math__vec__Vec2_T_f32 _t1 = ((math__vec__Vec2_T_f32){.x = x,.y = y,});
	return _t1;
}

void math__vec__Vec2_T_f32_zero_T_f32(math__vec__Vec2_T_f32* v) {
	v->x = 0;
	v->y = 0;
}

void math__vec__Vec2_T_f32_one_T_f32(math__vec__Vec2_T_f32* v) {
	v->x = 1;
	v->y = 1;
}

math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_copy_T_f32(math__vec__Vec2_T_f32 v) {
	math__vec__Vec2_T_f32 _t1 = ((math__vec__Vec2_T_f32){.x = v.x,.y = v.y,});
	return _t1;
}

void math__vec__Vec2_T_f32_from_T_f32(math__vec__Vec2_T_f32* v, math__vec__Vec2_T_f32 u) {
	v->x = u.x;
	v->y = u.y;
}

math__vec__Vec3_T_f32 math__vec__Vec2_T_f32_as_vec3_T_f32(math__vec__Vec2_T_f32 v) {
	math__vec__Vec3_T_f32 _t1 = ((math__vec__Vec3_T_f32){.x = v.x,.y = v.y,.z = 0,});
	return _t1;
}

math__vec__Vec4_T_f32 math__vec__Vec2_T_f32_as_vec4_T_f32(math__vec__Vec2_T_f32 v) {
	math__vec__Vec4_T_f32 _t1 = ((math__vec__Vec4_T_f32){.x = v.x,.y = v.y,.z = 0,.w = 0,});
	return _t1;
}

// Attr: [inline]
inline math__vec__Vec2_T_f32 math__vec__Vec2_T_f32__plus_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u) {
	math__vec__Vec2_T_f32 _t1 = ((math__vec__Vec2_T_f32){.x = v.x + u.x,.y = v.y + u.y,});
	return _t1;
}

math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_add_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u) {
	math__vec__Vec2_T_f32 _t1 = math__vec__Vec2_T_f32__plus_T_f32(v, u);
	return _t1;
}

void math__vec__Vec2_T_f32_plus_T_f32(math__vec__Vec2_T_f32* v, math__vec__Vec2_T_f32 u) {
	v->x += u.x;
	v->y += u.y;
}

// Attr: [inline]
inline math__vec__Vec2_T_f32 math__vec__Vec2_T_f32__minus_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u) {
	math__vec__Vec2_T_f32 _t1 = ((math__vec__Vec2_T_f32){.x = v.x - u.x,.y = v.y - u.y,});
	return _t1;
}

math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_sub_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u) {
	math__vec__Vec2_T_f32 _t1 = math__vec__Vec2_T_f32__minus_T_f32(v, u);
	return _t1;
}

void math__vec__Vec2_T_f32_subtract_T_f32(math__vec__Vec2_T_f32* v, math__vec__Vec2_T_f32 u) {
	v->x -= u.x;
	v->y -= u.y;
}

// Attr: [inline]
inline math__vec__Vec2_T_f32 math__vec__Vec2_T_f32__mult_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u) {
	math__vec__Vec2_T_f32 _t1 = ((math__vec__Vec2_T_f32){.x = v.x * u.x,.y = v.y * u.y,});
	return _t1;
}

math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_mul_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u) {
	math__vec__Vec2_T_f32 _t1 = math__vec__Vec2_T_f32__mult_T_f32(v, u);
	return _t1;
}

math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_mul_scalar_T_f32_f32(math__vec__Vec2_T_f32 v, f32 scalar) {
	math__vec__Vec2_T_f32 _t1 = ((math__vec__Vec2_T_f32){.x = v.x * ((f32)(scalar)),.y = v.y * ((f32)(scalar)),});
	return _t1;
}

void math__vec__Vec2_T_f32_multiply_T_f32(math__vec__Vec2_T_f32* v, math__vec__Vec2_T_f32 u) {
	v->x *= u.x;
	v->y *= u.y;
}

// Attr: [inline]
inline math__vec__Vec2_T_f32 math__vec__Vec2_T_f32__div_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u) {
	math__vec__Vec2_T_f32 _t1 = ((math__vec__Vec2_T_f32){.x = v.x / u.x,.y = v.y / u.y,});
	return _t1;
}

math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_div_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u) {
	math__vec__Vec2_T_f32 _t1 = math__vec__Vec2_T_f32__div_T_f32(v, u);
	return _t1;
}

void math__vec__Vec2_T_f32_divide_T_f32(math__vec__Vec2_T_f32* v, math__vec__Vec2_T_f32 u) {
	v->x /= u.x;
	v->y /= u.y;
}

f32 math__vec__Vec2_T_f32_magnitude_T_f32(math__vec__Vec2_T_f32 v) {
	if (v.x == 0 && v.y == 0) {
		f32 _t1 = ((f32)(0));
		return _t1;
	}
	#if 16 == 17 && false == false
	{
	}
	#else
	{
		f32 _t3 = ((f32)(math__sqrt((f64)(((f64)(v.x * v.x)) + ((f64)(v.y * v.y))))));
		return _t3;
	}
	#endif
	return 0;
}

f32 math__vec__Vec2_T_f32_magnitude_x_T_f32(math__vec__Vec2_T_f32 v) {
	f32 _t1 = ((f32)(math__sqrt(v.x * v.x)));
	return _t1;
}

f32 math__vec__Vec2_T_f32_magnitude_y_T_f32(math__vec__Vec2_T_f32 v) {
	f32 _t1 = ((f32)(math__sqrt(v.y * v.y)));
	return _t1;
}

f32 math__vec__Vec2_T_f32_dot_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u) {
	f32 _t1 = (f32)((v.x * u.x) + (v.y * u.y));
	return _t1;
}

f32 math__vec__Vec2_T_f32_cross_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u) {
	f32 _t1 = (f32)((v.x * u.y) - (v.y * u.x));
	return _t1;
}

math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_unit_T_f32(math__vec__Vec2_T_f32 v) {
	f32 m = math__vec__Vec2_T_f32_magnitude_T_f32(v);
	math__vec__Vec2_T_f32 _t1 = ((math__vec__Vec2_T_f32){.x = v.x / m,.y = v.y / m,});
	return _t1;
}

math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_perp_cw_T_f32(math__vec__Vec2_T_f32 v) {
	math__vec__Vec2_T_f32 _t1 = ((math__vec__Vec2_T_f32){.x = v.y,.y = -v.x,});
	return _t1;
}

math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_perp_ccw_T_f32(math__vec__Vec2_T_f32 v) {
	math__vec__Vec2_T_f32 _t1 = ((math__vec__Vec2_T_f32){.x = -v.y,.y = v.x,});
	return _t1;
}

math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_perpendicular_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u) {
	math__vec__Vec2_T_f32 _t1 = math__vec__Vec2_T_f32__minus_T_f32(v, math__vec__Vec2_T_f32_project_T_f32(v, u));
	return _t1;
}

math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_project_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u) {
	f32 percent = math__vec__Vec2_T_f32_dot_T_f32(v, u) / math__vec__Vec2_T_f32_dot_T_f32(u, v);
	math__vec__Vec2_T_f32 _t1 = math__vec__Vec2_T_f32_mul_scalar_T_f32_f32(u, percent);
	return _t1;
}

// Attr: [inline]
inline bool math__vec__Vec2_T_f32_eq_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u) {
	bool _t1 = v.x == u.x && v.y == u.y;
	return _t1;
}

bool math__vec__Vec2_T_f32_eq_epsilon_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u) {
	bool _t1 = math__vec__Vec2_T_f32_eq_approx_T_f32_f32(v, u, _const_math__vec__vec_epsilon);
	return _t1;
}

bool math__vec__Vec2_T_f32_eq_approx_T_f32_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u, f32 tolerance) {
	f32 diff_x = math__abs_T_f32(v.x - u.x);
	f32 diff_y = math__abs_T_f32(v.y - u.y);
	if (diff_x <= tolerance && diff_y <= tolerance) {
		bool _t1 = true;
		return _t1;
	}
	f32 max_x = math__max_T_f32(math__abs_T_f32(v.x), math__abs_T_f32(u.x));
	f32 max_y = math__max_T_f32(math__abs_T_f32(v.y), math__abs_T_f32(u.y));
	if (diff_x < max_x * tolerance && diff_y < max_y * tolerance) {
		bool _t2 = true;
		return _t2;
	}
	bool _t3 = false;
	return _t3;
}

bool math__vec__Vec2_T_f32_is_approx_zero_T_f32(math__vec__Vec2_T_f32 v, f32 tolerance) {
	if (math__abs_T_f32(v.x) <= tolerance && math__abs_T_f32(v.y) <= tolerance) {
		bool _t1 = true;
		return _t1;
	}
	bool _t2 = false;
	return _t2;
}

f32 math__vec__Vec2_T_f32_distance_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u) {
	#if 16 == 17 && false == false
	{
	}
	#else
	{
		f32 _t2 = ((f32)(math__sqrt((f64)((f64)(((f64)(v.x - u.x)) * ((f64)(v.x - u.x))) + (f64)(((f64)(v.y - u.y)) * ((f64)(v.y - u.y)))))));
		return _t2;
	}
	#endif
	return 0;
}

f32 math__vec__Vec2_T_f32_manhattan_distance_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u) {
	f32 _t1 = (f32)(math__abs_T_f32(v.x - u.x) + math__abs_T_f32(v.y - u.y));
	return _t1;
}

f32 math__vec__Vec2_T_f32_angle_between_T_f32(math__vec__Vec2_T_f32 v, math__vec__Vec2_T_f32 u) {
	#if 16 == 17 && false == false
	{
	}
	#else
	{
		f32 _t2 = ((f32)(math__atan2(((f64)(v.y - u.y)), ((f64)(v.x - u.x)))));
		return _t2;
	}
	#endif
	return 0;
}

f32 math__vec__Vec2_T_f32_angle_T_f32(math__vec__Vec2_T_f32 v) {
	#if 16 == 17 && false == false
	{
	}
	#else
	{
		f32 _t2 = ((f32)(math__atan2(((f64)(v.y)), ((f64)(v.x)))));
		return _t2;
	}
	#endif
	return 0;
}

void math__vec__Vec2_T_f32_abs_T_f32(math__vec__Vec2_T_f32* v) {
	if (v->x < 0) {
		v->x = math__abs_T_f32(v->x);
	}
	if (v->y < 0) {
		v->y = math__abs_T_f32(v->y);
	}
}

math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_inv_T_f32(math__vec__Vec2_T_f32 v) {
	math__vec__Vec2_T_f32 _t1 = ((math__vec__Vec2_T_f32){.x = (v.x != 0 ? (((f32)(1)) / v.x) : (0)),.y = (v.y != 0 ? (((f32)(1)) / v.y) : (0)),});
	return _t1;
}

math__vec__Vec2_T_f32 math__vec__Vec2_T_f32_normalize_T_f32(math__vec__Vec2_T_f32 v) {
	f32 m = math__vec__Vec2_T_f32_magnitude_T_f32(v);
	if (m == 0) {
		math__vec__Vec2_T_f32 _t1 = math__vec__vec2_T_f32(0, 0);
		return _t1;
	}
	math__vec__Vec2_T_f32 _t2 = ((math__vec__Vec2_T_f32){.x = v.x * (1 / m),.y = v.y * (1 / m),});
	return _t2;
}

f32 math__vec__Vec2_T_f32_sum_T_f32(math__vec__Vec2_T_f32 v) {
	f32 _t1 = v.x + v.y;
	return _t1;
}

math__vec__Vec3_T_f32 math__vec__vec3_T_f32(f32 x, f32 y, f32 z) {
	math__vec__Vec3_T_f32 _t1 = ((math__vec__Vec3_T_f32){.x = x,.y = y,.z = z,});
	return _t1;
}

void math__vec__Vec3_T_f32_zero_T_f32(math__vec__Vec3_T_f32* v) {
	v->x = 0;
	v->y = 0;
	v->z = 0;
}

void math__vec__Vec3_T_f32_one_T_f32(math__vec__Vec3_T_f32* v) {
	v->x = 1;
	v->y = 1;
	v->z = 1;
}

math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_copy_T_f32(math__vec__Vec3_T_f32* v) {
	math__vec__Vec3_T_f32 _t1 = ((math__vec__Vec3_T_f32){.x = v->x,.y = v->y,.z = v->z,});
	return _t1;
}

void math__vec__Vec3_T_f32_from_T_f32(math__vec__Vec3_T_f32* v, math__vec__Vec3_T_f32 u) {
	v->x = u.x;
	v->y = u.y;
	v->z = u.z;
}

math__vec__Vec2_T_f32 math__vec__Vec3_T_f32_as_vec2_T_f32(math__vec__Vec3_T_f32* v) {
	math__vec__Vec2_T_f32 _t1 = ((math__vec__Vec2_T_f32){.x = v->x,.y = v->y,});
	return _t1;
}

math__vec__Vec4_T_f32 math__vec__Vec3_T_f32_as_vec4_T_f32(math__vec__Vec3_T_f32* v) {
	math__vec__Vec4_T_f32 _t1 = ((math__vec__Vec4_T_f32){.x = v->x,.y = v->y,.z = v->z,.w = 0,});
	return _t1;
}

// Attr: [inline]
inline math__vec__Vec3_T_f32 math__vec__Vec3_T_f32__plus_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u) {
	math__vec__Vec3_T_f32 _t1 = ((math__vec__Vec3_T_f32){.x = v.x + u.x,.y = v.y + u.y,.z = v.z + u.z,});
	return _t1;
}

math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_add_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u) {
	math__vec__Vec3_T_f32 _t1 = math__vec__Vec3_T_f32__plus_T_f32(v, u);
	return _t1;
}

void math__vec__Vec3_T_f32_plus_T_f32(math__vec__Vec3_T_f32* v, math__vec__Vec3_T_f32 u) {
	v->x += u.x;
	v->y += u.y;
	v->z += u.z;
}

// Attr: [inline]
inline math__vec__Vec3_T_f32 math__vec__Vec3_T_f32__minus_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u) {
	math__vec__Vec3_T_f32 _t1 = ((math__vec__Vec3_T_f32){.x = v.x - u.x,.y = v.y - u.y,.z = v.z - u.z,});
	return _t1;
}

math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_sub_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u) {
	math__vec__Vec3_T_f32 _t1 = math__vec__Vec3_T_f32__minus_T_f32(v, u);
	return _t1;
}

void math__vec__Vec3_T_f32_subtract_T_f32(math__vec__Vec3_T_f32* v, math__vec__Vec3_T_f32 u) {
	v->x -= u.x;
	v->y -= u.y;
	v->z -= u.z;
}

// Attr: [inline]
inline math__vec__Vec3_T_f32 math__vec__Vec3_T_f32__mult_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u) {
	math__vec__Vec3_T_f32 _t1 = ((math__vec__Vec3_T_f32){.x = v.x * u.x,.y = v.y * u.y,.z = v.z * u.z,});
	return _t1;
}

math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_mul_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u) {
	math__vec__Vec3_T_f32 _t1 = math__vec__Vec3_T_f32__mult_T_f32(v, u);
	return _t1;
}

math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_mul_scalar_T_f32_f32(math__vec__Vec3_T_f32 v, f32 scalar) {
	math__vec__Vec3_T_f32 _t1 = ((math__vec__Vec3_T_f32){.x = v.x * ((f32)(scalar)),.y = v.y * ((f32)(scalar)),.z = v.z * ((f32)(scalar)),});
	return _t1;
}

void math__vec__Vec3_T_f32_multiply_T_f32(math__vec__Vec3_T_f32* v, math__vec__Vec3_T_f32 u) {
	v->x *= u.x;
	v->y *= u.y;
	v->z *= u.z;
}

// Attr: [inline]
inline math__vec__Vec3_T_f32 math__vec__Vec3_T_f32__div_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u) {
	math__vec__Vec3_T_f32 _t1 = ((math__vec__Vec3_T_f32){.x = v.x / u.x,.y = v.y / u.y,.z = v.z / u.z,});
	return _t1;
}

math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_div_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u) {
	math__vec__Vec3_T_f32 _t1 = math__vec__Vec3_T_f32__div_T_f32(v, u);
	return _t1;
}

void math__vec__Vec3_T_f32_divide_T_f32(math__vec__Vec3_T_f32* v, math__vec__Vec3_T_f32 u) {
	v->x /= u.x;
	v->y /= u.y;
	v->z /= u.z;
}

f32 math__vec__Vec3_T_f32_magnitude_T_f32(math__vec__Vec3_T_f32 v) {
	if (v.x == 0 && v.y == 0 && v.z == 0) {
		f32 _t1 = ((f32)(0));
		return _t1;
	}
	f32 _t2 = ((f32)(math__sqrt((f32)((f32)((v.x * v.x) + (v.y * v.y)) + (v.z * v.z)))));
	return _t2;
}

f32 math__vec__Vec3_T_f32_dot_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u) {
	f32 _t1 = ((f32)((f32)((f32)((v.x * u.x) + (v.y * u.y)) + (v.z * u.z))));
	return _t1;
}

math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_cross_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u) {
	math__vec__Vec3_T_f32 _t1 = ((math__vec__Vec3_T_f32){.x = (f32)((v.y * u.z) - (v.z * u.y)),.y = (f32)((v.z * u.x) - (v.x * u.z)),.z = (f32)((v.x * u.y) - (v.y * u.x)),});
	return _t1;
}

math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_unit_T_f32(math__vec__Vec3_T_f32 v) {
	f32 m = math__vec__Vec3_T_f32_magnitude_T_f32(v);
	math__vec__Vec3_T_f32 _t1 = ((math__vec__Vec3_T_f32){.x = v.x / m,.y = v.y / m,.z = v.z / m,});
	return _t1;
}

math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_perpendicular_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u) {
	math__vec__Vec3_T_f32 _t1 = math__vec__Vec3_T_f32__minus_T_f32(v, math__vec__Vec3_T_f32_project_T_f32(v, u));
	return _t1;
}

math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_project_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u) {
	f32 percent = math__vec__Vec3_T_f32_dot_T_f32(v, u) / math__vec__Vec3_T_f32_dot_T_f32(u, v);
	math__vec__Vec3_T_f32 _t1 = math__vec__Vec3_T_f32_mul_scalar_T_f32_f32(u, percent);
	return _t1;
}

// Attr: [inline]
inline bool math__vec__Vec3_T_f32_eq_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u) {
	bool _t1 = v.x == u.x && v.y == u.y && v.z == u.z;
	return _t1;
}

bool math__vec__Vec3_T_f32_eq_epsilon_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u) {
	bool _t1 = math__vec__Vec3_T_f32_eq_approx_T_f32_f32(v, u, _const_math__vec__vec_epsilon);
	return _t1;
}

bool math__vec__Vec3_T_f32_eq_approx_T_f32_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u, f32 tolerance) {
	f32 diff_x = math__abs_T_f32(v.x - u.x);
	f32 diff_y = math__abs_T_f32(v.y - u.y);
	f32 diff_z = math__abs_T_f32(v.z - u.z);
	if (diff_x <= tolerance && diff_y <= tolerance && diff_z <= tolerance) {
		bool _t1 = true;
		return _t1;
	}
	f32 max_x = math__max_T_f32(math__abs_T_f32(v.x), math__abs_T_f32(u.x));
	f32 max_y = math__max_T_f32(math__abs_T_f32(v.y), math__abs_T_f32(u.y));
	f32 max_z = math__max_T_f32(math__abs_T_f32(v.z), math__abs_T_f32(u.z));
	if (diff_x < max_x * tolerance && diff_y < max_y * tolerance && diff_z < max_z * tolerance) {
		bool _t2 = true;
		return _t2;
	}
	bool _t3 = false;
	return _t3;
}

bool math__vec__Vec3_T_f32_is_approx_zero_T_f32(math__vec__Vec3_T_f32 v, f64 tolerance) {
	if (math__abs_T_f32(v.x) <= tolerance && math__abs_T_f32(v.y) <= tolerance && math__abs_T_f32(v.z) <= tolerance) {
		bool _t1 = true;
		return _t1;
	}
	bool _t2 = false;
	return _t2;
}

f64 math__vec__Vec3_T_f32_distance_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u) {
	f64 _t1 = math__sqrt((f32)((f32)((f32)((v.x - u.x) * (v.x - u.x)) + (f32)((v.y - u.y) * (v.y - u.y))) + (f32)((v.z - u.z) * (v.z - u.z))));
	return _t1;
}

f64 math__vec__Vec3_T_f32_manhattan_distance_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u) {
	f64 _t1 = (f32)((f32)(math__abs_T_f32(v.x - u.x) + math__abs_T_f32(v.y - u.y)) + math__abs_T_f32(v.z - u.z));
	return _t1;
}

f32 math__vec__Vec3_T_f32_angle_between_T_f32(math__vec__Vec3_T_f32 v, math__vec__Vec3_T_f32 u) {
	#if 16 == 17 && false == false
	{
	}
	#else
	{
		f32 _t2 = ((f32)(math__acos((f64)((f64)(((f64)((f32)((f32)((v.x * u.x) + (v.y * u.y)) + (v.z * u.z)))) / math__sqrt((f64)((f64)(((f64)(v.x * v.x)) + (v.y * v.y)) + (v.z * v.z)))) * math__sqrt((f64)((f64)(((f64)(u.x * u.x)) + (u.y * u.y)) + (u.z * u.z)))))));
		return _t2;
	}
	#endif
	return 0;
}

void math__vec__Vec3_T_f32_abs_T_f32(math__vec__Vec3_T_f32* v) {
	if (v->x < 0) {
		v->x = math__abs_T_f32(v->x);
	}
	if (v->y < 0) {
		v->y = math__abs_T_f32(v->y);
	}
	if (v->z < 0) {
		v->z = math__abs_T_f32(v->z);
	}
}

math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_inv_T_f32(math__vec__Vec3_T_f32 v) {
	math__vec__Vec3_T_f32 _t1 = ((math__vec__Vec3_T_f32){.x = (v.x != 0 ? (((f32)(1)) / v.x) : (0)),.y = (v.y != 0 ? (((f32)(1)) / v.y) : (0)),.z = (v.z != 0 ? (((f32)(1)) / v.z) : (0)),});
	return _t1;
}

math__vec__Vec3_T_f32 math__vec__Vec3_T_f32_normalize_T_f32(math__vec__Vec3_T_f32 v) {
	f32 m = math__vec__Vec3_T_f32_magnitude_T_f32(v);
	if (m == 0) {
		math__vec__Vec3_T_f32 _t1 = math__vec__vec3_T_f32(0, 0, 0);
		return _t1;
	}
	math__vec__Vec3_T_f32 _t2 = ((math__vec__Vec3_T_f32){.x = v.x * (1 / m),.y = v.y * (1 / m),.z = v.z * (1 / m),});
	return _t2;
}

f32 math__vec__Vec3_T_f32_sum_T_f32(math__vec__Vec3_T_f32 v) {
	f32 _t1 = v.x + v.y + v.z;
	return _t1;
}

math__vec__Vec4_T_f32 math__vec__vec4_T_f32(f32 x, f32 y, f32 z, f32 w) {
	math__vec__Vec4_T_f32 _t1 = ((math__vec__Vec4_T_f32){.x = x,.y = y,.z = z,.w = w,});
	return _t1;
}

void math__vec__Vec4_T_f32_zero_T_f32(math__vec__Vec4_T_f32* v) {
	v->x = 0;
	v->y = 0;
	v->z = 0;
	v->w = 0;
}

void math__vec__Vec4_T_f32_one_T_f32(math__vec__Vec4_T_f32* v) {
	v->x = 1;
	v->y = 1;
	v->z = 1;
	v->w = 1;
}

math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_copy_T_f32(math__vec__Vec4_T_f32 v) {
	math__vec__Vec4_T_f32 _t1 = ((math__vec__Vec4_T_f32){.x = v.x,.y = v.y,.z = v.z,.w = v.w,});
	return _t1;
}

void math__vec__Vec4_T_f32_from_T_f32(math__vec__Vec4_T_f32* v, math__vec__Vec4_T_f32 u) {
	v->x = u.x;
	v->y = u.y;
	v->z = u.z;
	v->w = u.w;
}

void math__vec__Vec4_T_f32_from_vec2_T_f32(math__vec__Vec4_T_f32* v, math__vec__Vec2_T_f32 u) {
	v->x = u.x;
	v->y = u.y;
}

// Attr: [inline]
inline math__vec__Vec4_T_f32 math__vec__Vec4_T_f32__plus_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u) {
	math__vec__Vec4_T_f32 _t1 = ((math__vec__Vec4_T_f32){.x = v.x + u.x,.y = v.y + u.y,.z = v.z + u.z,.w = v.w + u.w,});
	return _t1;
}

math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_add_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u) {
	math__vec__Vec4_T_f32 _t1 = math__vec__Vec4_T_f32__plus_T_f32(v, u);
	return _t1;
}

void math__vec__Vec4_T_f32_plus_T_f32(math__vec__Vec4_T_f32* v, math__vec__Vec4_T_f32 u) {
	v->x += u.x;
	v->y += u.y;
	v->z += u.z;
	v->w += u.w;
}

// Attr: [inline]
inline math__vec__Vec4_T_f32 math__vec__Vec4_T_f32__minus_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u) {
	math__vec__Vec4_T_f32 _t1 = ((math__vec__Vec4_T_f32){.x = v.x - u.x,.y = v.y - u.y,.z = v.z - u.z,.w = v.w - u.w,});
	return _t1;
}

math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_sub_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u) {
	math__vec__Vec4_T_f32 _t1 = math__vec__Vec4_T_f32__minus_T_f32(v, u);
	return _t1;
}

void math__vec__Vec4_T_f32_subtract_T_f32(math__vec__Vec4_T_f32* v, math__vec__Vec4_T_f32 u) {
	v->x -= u.x;
	v->y -= u.y;
	v->z -= u.z;
	v->w -= u.w;
}

// Attr: [inline]
inline math__vec__Vec4_T_f32 math__vec__Vec4_T_f32__mult_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u) {
	math__vec__Vec4_T_f32 _t1 = ((math__vec__Vec4_T_f32){.x = v.x * u.x,.y = v.y * u.y,.z = v.z * u.z,.w = v.w * u.w,});
	return _t1;
}

math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_mul_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u) {
	math__vec__Vec4_T_f32 _t1 = math__vec__Vec4_T_f32__mult_T_f32(v, u);
	return _t1;
}

math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_mul_scalar_T_f32_f32(math__vec__Vec4_T_f32 v, f32 scalar) {
	math__vec__Vec4_T_f32 _t1 = ((math__vec__Vec4_T_f32){.x = v.x * ((f32)(scalar)),.y = v.y * ((f32)(scalar)),.z = v.z * ((f32)(scalar)),.w = v.w * ((f32)(scalar)),});
	return _t1;
}

void math__vec__Vec4_T_f32_multiply_T_f32(math__vec__Vec4_T_f32* v, math__vec__Vec4_T_f32 u) {
	v->x *= u.x;
	v->y *= u.y;
	v->z *= u.z;
	v->w *= u.w;
}

// Attr: [inline]
inline math__vec__Vec4_T_f32 math__vec__Vec4_T_f32__div_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u) {
	math__vec__Vec4_T_f32 _t1 = ((math__vec__Vec4_T_f32){.x = v.x / u.x,.y = v.y / u.y,.z = v.z / u.z,.w = v.w / u.w,});
	return _t1;
}

math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_div_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u) {
	math__vec__Vec4_T_f32 _t1 = math__vec__Vec4_T_f32__div_T_f32(v, u);
	return _t1;
}

void math__vec__Vec4_T_f32_divide_T_f32(math__vec__Vec4_T_f32* v, math__vec__Vec4_T_f32 u) {
	v->x /= u.x;
	v->y /= u.y;
	v->z /= u.z;
	v->w /= u.w;
}

f32 math__vec__Vec4_T_f32_magnitude_T_f32(math__vec__Vec4_T_f32 v) {
	if (v.x == 0 && v.y == 0 && v.z == 0 && v.w == 0) {
		f32 _t1 = ((f32)(0));
		return _t1;
	}
	f32 _t2 = ((f32)(math__sqrt((f32)((f32)((f32)((v.x * v.x) + (v.y * v.y)) + (v.z * v.z)) + (v.w * v.w)))));
	return _t2;
}

f32 math__vec__Vec4_T_f32_dot_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u) {
	f32 _t1 = ((f32)((f32)((f32)((f32)((v.x * u.x) + (v.y * u.y)) + (v.z * u.z)) + (v.w * u.w))));
	return _t1;
}

math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_cross_xyz_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u) {
	math__vec__Vec4_T_f32 _t1 = ((math__vec__Vec4_T_f32){.x = (f32)((v.y * u.z) - (v.z * u.y)),.y = (f32)((v.z * u.x) - (v.x * u.z)),.z = (f32)((v.x * u.y) - (v.y * u.x)),.w = 0,});
	return _t1;
}

math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_unit_T_f32(math__vec__Vec4_T_f32 v) {
	f32 m = math__vec__Vec4_T_f32_magnitude_T_f32(v);
	math__vec__Vec4_T_f32 _t1 = ((math__vec__Vec4_T_f32){.x = v.x / m,.y = v.y / m,.z = v.z / m,.w = v.w / m,});
	return _t1;
}

math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_perpendicular_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u) {
	math__vec__Vec4_T_f32 _t1 = math__vec__Vec4_T_f32__minus_T_f32(v, math__vec__Vec4_T_f32_project_T_f32(v, u));
	return _t1;
}

math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_project_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u) {
	f32 percent = math__vec__Vec4_T_f32_dot_T_f32(v, u) / math__vec__Vec4_T_f32_dot_T_f32(u, v);
	math__vec__Vec4_T_f32 _t1 = math__vec__Vec4_T_f32_mul_scalar_T_f32_f32(u, percent);
	return _t1;
}

// Attr: [inline]
inline bool math__vec__Vec4_T_f32_eq_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u) {
	bool _t1 = v.x == u.x && v.y == u.y && v.z == u.z && v.w == u.w;
	return _t1;
}

bool math__vec__Vec4_T_f32_eq_epsilon_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u) {
	bool _t1 = math__vec__Vec4_T_f32_eq_approx_T_f32_f32(v, u, _const_math__vec__vec_epsilon);
	return _t1;
}

bool math__vec__Vec4_T_f32_eq_approx_T_f32_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u, f32 tolerance) {
	f32 diff_x = math__abs_T_f32(v.x - u.x);
	f32 diff_y = math__abs_T_f32(v.y - u.y);
	f32 diff_z = math__abs_T_f32(v.z - u.z);
	f32 diff_w = math__abs_T_f32(v.w - u.w);
	if (diff_x <= tolerance && diff_y <= tolerance && diff_z <= tolerance && diff_w <= tolerance) {
		bool _t1 = true;
		return _t1;
	}
	f32 max_x = math__max_T_f32(math__abs_T_f32(v.x), math__abs_T_f32(u.x));
	f32 max_y = math__max_T_f32(math__abs_T_f32(v.y), math__abs_T_f32(u.y));
	f32 max_z = math__max_T_f32(math__abs_T_f32(v.z), math__abs_T_f32(u.z));
	f32 max_w = math__max_T_f32(math__abs_T_f32(v.w), math__abs_T_f32(u.w));
	if (diff_x < max_x * tolerance && diff_y < max_y * tolerance && diff_z < max_z * tolerance && diff_w < max_w * tolerance) {
		bool _t2 = true;
		return _t2;
	}
	bool _t3 = false;
	return _t3;
}

bool math__vec__Vec4_T_f32_is_approx_zero_T_f32(math__vec__Vec4_T_f32 v, f64 tolerance) {
	if (math__abs_T_f32(v.x) <= tolerance && math__abs_T_f32(v.y) <= tolerance && math__abs_T_f32(v.z) <= tolerance && math__abs_T_f32(v.w) <= tolerance) {
		bool _t1 = true;
		return _t1;
	}
	bool _t2 = false;
	return _t2;
}

f64 math__vec__Vec4_T_f32_distance_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u) {
	f64 _t1 = math__sqrt((f32)((f32)((f32)((f32)((v.x - u.x) * (v.x - u.x)) + (f32)((v.y - u.y) * (v.y - u.y))) + (f32)((v.z - u.z) * (v.z - u.z))) + (f32)((v.w - u.w) * (v.w - u.w))));
	return _t1;
}

f64 math__vec__Vec4_T_f32_manhattan_distance_T_f32(math__vec__Vec4_T_f32 v, math__vec__Vec4_T_f32 u) {
	f64 _t1 = (f32)((f32)((f32)(math__abs_T_f32(v.x - u.x) + math__abs_T_f32(v.y - u.y)) + math__abs_T_f32(v.z - u.z)) + math__abs_T_f32(v.w - u.w));
	return _t1;
}

void math__vec__Vec4_T_f32_abs_T_f32(math__vec__Vec4_T_f32* v) {
	if (v->x < 0) {
		v->x = math__abs_T_f32(v->x);
	}
	if (v->y < 0) {
		v->y = math__abs_T_f32(v->y);
	}
	if (v->z < 0) {
		v->z = math__abs_T_f32(v->z);
	}
	if (v->w < 0) {
		v->w = math__abs_T_f32(v->w);
	}
}

math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_inv_T_f32(math__vec__Vec4_T_f32 v) {
	math__vec__Vec4_T_f32 _t1 = ((math__vec__Vec4_T_f32){.x = (v.x != 0 ? (((f32)(1)) / v.x) : (0)),.y = (v.y != 0 ? (((f32)(1)) / v.y) : (0)),.z = (v.z != 0 ? (((f32)(1)) / v.z) : (0)),.w = (v.w != 0 ? (((f32)(1)) / v.w) : (0)),});
	return _t1;
}

math__vec__Vec4_T_f32 math__vec__Vec4_T_f32_normalize_T_f32(math__vec__Vec4_T_f32 v) {
	f32 m = math__vec__Vec4_T_f32_magnitude_T_f32(v);
	if (m == 0) {
		math__vec__Vec4_T_f32 _t1 = math__vec__vec4_T_f32(0, 0, 0, 0);
		return _t1;
	}
	math__vec__Vec4_T_f32 _t2 = ((math__vec__Vec4_T_f32){.x = v.x * (1 / m),.y = v.y * (1 / m),.z = v.z * (1 / m),.w = v.w * (1 / m),});
	return _t2;
}

f32 math__vec__Vec4_T_f32_sum_T_f32(math__vec__Vec4_T_f32 v) {
	f32 _t1 = v.x + v.y + v.z + v.w;
	return _t1;
}

// Attr: [export]
VV_LOCAL_SYMBOL void main__game_initialize(void) {
	println(_SLIT("[game] initialize"));
	string scene_file = os__resource_abs_path(_SLIT("../../resources/scene.yaml"));
	ECS_loadScene(scene_file.str);
}
// export alias: game_initialize -> main__game_initialize
void game_initialize(void) {
	return main__game_initialize();
}

// Attr: [export]
VV_LOCAL_SYMBOL void main__game_update(f32 dt) {
	main__update_input();
}
// export alias: game_update -> main__game_update
void game_update(f32 dt) {
	return main__game_update(dt);
}

VV_LOCAL_SYMBOL void main__main(void) {
}

void main__update_input(void) {
	int* v = ((int*)(0));
	int size = Input_getPressed(&v);
	if (size > 0) {
		{ // Unsafe block
			for (int i = 0; i < size; ++i) {
				main__KEY /*A*/ _t1 = ((main__KEY)(v[i]));
				
				if (_t1 == (main__KEY__escape)) {
					println(_SLIT("[input] ESC"));
				}
				else if (_t1 == (main__KEY__w)) {
					println(_SLIT("[input] w"));
				}
				else if (_t1 == (main__KEY__a)) {
					println(_SLIT("[input] a"));
				}
				else if (_t1 == (main__KEY__s)) {
					println(_SLIT("[input] s"));
				}
				else if (_t1 == (main__KEY__d)) {
					println(_SLIT("[input] d"));
				}
				else if (_t1 == (main__KEY__f)) {
					println(_SLIT("[input] f"));
				}
				else if (_t1 == (main__KEY__o)) {
					println(_SLIT("[input] o"));
				}
				else if (_t1 == (main__KEY__space)) {
					println(_SLIT("[input] space"));
				}
				else if (_t1 == (main__KEY__arrowup)) {
					println(_SLIT("[input] arrow up"));
				}
				else if (_t1 == (main__KEY__arrowdown)) {
					println(_SLIT("[input] arrow down"));
				}
				else if (_t1 == (main__KEY__arrowright)) {
					println(_SLIT("[input] arrow right"));
				}
				else if (_t1 == (main__KEY__arrowleft)) {
					println(_SLIT("[input] arrow left"));
				}
				else if (_t1 == (main__KEY__mouse1)) {
					println(_SLIT("[input] mouse1"));
				}
			}
		}
	}
}

VV_LOCAL_SYMBOL void main__player_update(main__Player p, f32 dt) {
}

void _vinit(int ___argc, voidptr ___argv) {
	as_cast_type_indexes = new_array_from_c_array(1, 1, sizeof(VCastTypeIndexName), _MOV((VCastTypeIndexName[1]){(VCastTypeIndexName){.tindex = 0,.tname = _SLIT("unknown")}}));

	builtin_init();
	// Initializations of consts for module math.bits
	_const_math__bits__overflow_error = _SLIT("Overflow Error");
	_const_math__bits__divide_error = _SLIT("Divide Error");
	// Initializations of consts for module strconv
	_const_strconv__digit_pairs = _SLIT("00102030405060708090011121314151617181910212223242526272829203132333435363738393041424344454647484940515253545556575859506162636465666768696071727374757677787970818283848586878889809192939495969798999");
	_const_strconv__base_digits = _SLIT("0123456789abcdefghijklmnopqrstuvwxyz");
	// Initializations of consts for module builtin
	_const_digit_pairs = _SLIT("00102030405060708090011121314151617181910212223242526272829203132333435363738393041424344454647484940515253545556575859506162636465666768696071727374757677787970818283848586878889809192939495969798999");
	_const_si_s_code = _SLIT("0xfe10");
	_const_si_g32_code = _SLIT("0xfe0e");
	_const_si_g64_code = _SLIT("0xfe0f");
	_const_min_i64 = ((i64)((int_literal)(-9223372036854775807 - 1)));
	_const_max_i64 = ((i64)(9223372036854775807));
	_const_none__ = /*&IError*/I_None___to_Interface_IError(((None__*)memdup(&(None__){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(None__))));
	// Initializations of consts for module os
	_const_os__fslash_str = _SLIT("/");
	_const_os__dot_dot = _SLIT("..");
	_const_os__empty_str = _SLIT("");
	_const_os__dot_str = _SLIT(".");
	_const_os__path_separator = _SLIT("/");
	_const_os__path_delimiter = _SLIT(":");
	_const_os__path_devnull = _SLIT("/dev/null");
	_const_os__o_rdonly = O_RDONLY;
	_const_os__o_wronly = O_WRONLY;
	_const_os__o_rdwr = O_RDWR;
	_const_os__o_create = O_CREAT;
	_const_os__o_excl = O_EXCL;
	_const_os__o_noctty = O_NOCTTY;
	_const_os__o_trunc = O_TRUNC;
	_const_os__o_append = O_APPEND;
	_const_os__o_nonblock = O_NONBLOCK;
	_const_os__o_sync = O_SYNC;
	_const_os__args = os__init_os_args(___argc, (byte**)___argv);
	_const_os__wd_at_startup = os__getwd();
	_const_os__executable_suffixes = new_array_from_c_array(1, 1, sizeof(string), _MOV((string[1]){_SLIT("")}));
	g_main_thread_id = ((u64)(pthread_self())); // 3global
	// Initializations of consts for module math
	_const_math__min_i64 = ((i64)((int_literal)(-9223372036854775807 - 1)));
	_const_math__max_i64 = ((i64)(9223372036854775807));
	_const_math__bernoulli = new_array_from_c_array(10, 10, sizeof(f64), _MOV((f64[10]){
		(float_literal)(1.0 / (12.0)), (float_literal)(-1.0 / (360.0)), (float_literal)(1.0 / (1260.0)), (float_literal)(-1.0 / (1680.0)), (float_literal)(5.0 / (5940.0)), (float_literal)(-691.0 / (360360.0)), (float_literal)(7.0 / (1092.0)), (float_literal)(-3617.0 / (122400.0)), (float_literal)(43867.0 / (243576.0)),
		(float_literal)(-174611.0 / (125400.0))}));
	_const_math__factorials_table = new_array_from_c_array(171, 171, sizeof(f64), _MOV((f64[171]){
		1.000000000000000000000e+0, 1.000000000000000000000e+0, 2.000000000000000000000e+0, 6.000000000000000000000e+0, 2.400000000000000000000e+1, 1.200000000000000000000e+2, 7.200000000000000000000e+2, 5.040000000000000000000e+3, 4.032000000000000000000e+4,
		3.628800000000000000000e+5, 3.628800000000000000000e+6, 3.991680000000000000000e+7, 4.790016000000000000000e+8, 6.227020800000000000000e+9, 8.717829120000000000000e+10, 1.307674368000000000000e+12, 2.092278988800000000000e+13,
		3.556874280960000000000e+14, 6.402373705728000000000e+15, 1.216451004088320000000e+17, 2.432902008176640000000e+18, 5.109094217170944000000e+19, 1.124000727777607680000e+21, 2.585201673888497664000e+22, 6.204484017332394393600e+23,
		1.551121004333098598400e+25, 4.032914611266056355840e+26, 1.088886945041835216077e+28, 3.048883446117138605015e+29, 8.841761993739701954544e+30, 2.652528598121910586363e+32, 8.222838654177922817726e+33, 2.631308369336935301672e+35,
		8.683317618811886495518e+36, 2.952327990396041408476e+38, 1.033314796638614492967e+40, 3.719933267899012174680e+41, 1.376375309122634504632e+43, 5.230226174666011117600e+44, 2.039788208119744335864e+46, 8.159152832478977343456e+47,
		3.345252661316380710817e+49, 1.405006117752879898543e+51, 6.041526306337383563736e+52, 2.658271574788448768044e+54, 1.196222208654801945620e+56, 5.502622159812088949850e+57, 2.586232415111681806430e+59, 1.241391559253607267086e+61,
		6.082818640342675608723e+62, 3.041409320171337804361e+64, 1.551118753287382280224e+66, 8.065817517094387857166e+67, 4.274883284060025564298e+69, 2.308436973392413804721e+71, 1.269640335365827592597e+73, 7.109985878048634518540e+74,
		4.052691950487721675568e+76, 2.350561331282878571829e+78, 1.386831185456898357379e+80, 8.320987112741390144276e+81, 5.075802138772247988009e+83, 3.146997326038793752565e+85, 1.982608315404440064116e+87, 1.268869321858841641034e+89,
		8.247650592082470666723e+90, 5.443449390774430640037e+92, 3.647111091818868528825e+94, 2.480035542436830599601e+96, 1.711224524281413113725e+98, 1.197857166996989179607e+100, 8.504785885678623175212e+101, 6.123445837688608686152e+103,
		4.470115461512684340891e+105, 3.307885441519386412260e+107, 2.480914081139539809195e+109, 1.885494701666050254988e+111, 1.451830920282858696341e+113, 1.132428117820629783146e+115, 8.946182130782975286851e+116, 7.156945704626380229481e+118,
		5.797126020747367985880e+120, 4.753643337012841748421e+122, 3.945523969720658651190e+124, 3.314240134565353266999e+126, 2.817104114380550276949e+128, 2.422709538367273238177e+130, 2.107757298379527717214e+132, 1.854826422573984391148e+134,
		1.650795516090846108122e+136, 1.485715964481761497310e+138, 1.352001527678402962552e+140, 1.243841405464130725548e+142, 1.156772507081641574759e+144, 1.087366156656743080274e+146, 1.032997848823905926260e+148, 9.916779348709496892096e+149,
		9.619275968248211985333e+151, 9.426890448883247745626e+153, 9.332621544394415268170e+155, 9.332621544394415268170e+157, 9.425947759838359420852e+159, 9.614466715035126609269e+161, 9.902900716486180407547e+163, 1.029901674514562762385e+166,
		1.081396758240290900504e+168, 1.146280563734708354534e+170, 1.226520203196137939352e+172, 1.324641819451828974500e+174, 1.443859583202493582205e+176, 1.588245541522742940425e+178, 1.762952551090244663872e+180, 1.974506857221074023537e+182,
		2.231192748659813646597e+184, 2.543559733472187557120e+186, 2.925093693493015690688e+188, 3.393108684451898201198e+190, 3.969937160808720895402e+192, 4.684525849754290656574e+194, 5.574585761207605881323e+196, 6.689502913449127057588e+198,
		8.094298525273443739682e+200, 9.875044200833601362412e+202, 1.214630436702532967577e+205, 1.506141741511140879795e+207, 1.882677176888926099744e+209, 2.372173242880046885677e+211, 3.012660018457659544810e+213, 3.856204823625804217357e+215,
		4.974504222477287440390e+217, 6.466855489220473672507e+219, 8.471580690878820510985e+221, 1.118248651196004307450e+224, 1.487270706090685728908e+226, 1.992942746161518876737e+228, 2.690472707318050483595e+230, 3.659042881952548657690e+232,
		5.012888748274991661035e+234, 6.917786472619488492228e+236, 9.615723196941089004197e+238, 1.346201247571752460588e+241, 1.898143759076170969429e+243, 2.695364137888162776589e+245, 3.854370717180072770522e+247, 5.550293832739304789551e+249,
		8.047926057471991944849e+251, 1.174997204390910823948e+254, 1.727245890454638911203e+256, 2.556323917872865588581e+258, 3.808922637630569726986e+260, 5.713383956445854590479e+262, 8.627209774233240431623e+264, 1.311335885683452545607e+267,
		2.006343905095682394778e+269, 3.089769613847350887959e+271, 4.789142901463393876336e+273, 7.471062926282894447084e+275, 1.172956879426414428192e+278, 1.853271869493734796544e+280, 2.946702272495038326504e+282, 4.714723635992061322407e+284,
		7.590705053947218729075e+286, 1.229694218739449434110e+289, 2.004401576545302577600e+291, 3.287218585534296227263e+293, 5.423910666131588774984e+295, 9.003691705778437366474e+297, 1.503616514864999040201e+300, 2.526075744973198387538e+302,
		4.269068009004705274939e+304, 7.257415615307998967397e+306}));
	_const_math__log_factorials_table = new_array_from_c_array(172, 172, sizeof(f64), _MOV((f64[172]){
		0.000000000000000000000e+0, 0.000000000000000000000e+0, 6.931471805599453094172e-1, 1.791759469228055000812e+0, 3.178053830347945619647e+0, 4.787491742782045994248e+0, 6.579251212010100995060e+0, 8.525161361065414300166e+0, 1.060460290274525022842e+1,
		1.280182748008146961121e+1, 1.510441257307551529523e+1, 1.750230784587388583929e+1, 1.998721449566188614952e+1, 2.255216385312342288557e+1, 2.519122118273868150009e+1, 2.789927138384089156609e+1, 3.067186010608067280376e+1,
		3.350507345013688888401e+1, 3.639544520803305357622e+1, 3.933988418719949403622e+1, 4.233561646075348502966e+1, 4.538013889847690802616e+1, 4.847118135183522387964e+1, 5.160667556776437357045e+1, 5.478472939811231919009e+1,
		5.800360522298051993929e+1, 6.126170176100200198477e+1, 6.455753862700633105895e+1, 6.788974313718153498289e+1, 7.125703896716800901007e+1, 7.465823634883016438549e+1, 7.809222355331531063142e+1, 8.155795945611503717850e+1,
		8.505446701758151741396e+1, 8.858082754219767880363e+1, 9.213617560368709248333e+1, 9.571969454214320248496e+1, 9.933061245478742692933e+1, 1.029681986145138126988e+2, 1.066317602606434591262e+2, 1.103206397147573954291e+2,
		1.140342117814617032329e+2, 1.177718813997450715388e+2, 1.215330815154386339623e+2, 1.253172711493568951252e+2, 1.291239336391272148826e+2, 1.329525750356163098828e+2, 1.368027226373263684696e+2, 1.406739236482342593987e+2,
		1.445657439463448860089e+2, 1.484777669517730320675e+2, 1.524095925844973578392e+2, 1.563608363030787851941e+2, 1.603311282166309070282e+2, 1.643201122631951814118e+2, 1.683274454484276523305e+2, 1.723527971391628015638e+2,
		1.763958484069973517152e+2, 1.804562914175437710518e+2, 1.845338288614494905025e+2, 1.886281734236715911873e+2, 1.927390472878449024360e+2, 1.968661816728899939914e+2, 2.010093163992815266793e+2, 2.051681994826411985358e+2,
		2.093425867525368356464e+2, 2.135322414945632611913e+2, 2.177369341139542272510e+2, 2.219564418191303339501e+2, 2.261905483237275933323e+2, 2.304390435657769523214e+2, 2.347017234428182677427e+2, 2.389783895618343230538e+2,
		2.432688490029827141829e+2, 2.475729140961868839366e+2, 2.518904022097231943772e+2, 2.562211355500095254561e+2, 2.605649409718632093053e+2, 2.649216497985528010421e+2, 2.692910976510198225363e+2, 2.736731242856937041486e+2,
		2.780675734403661429141e+2, 2.824742926876303960274e+2, 2.868931332954269939509e+2, 2.913239500942703075662e+2, 2.957666013507606240211e+2, 3.002209486470141317540e+2, 3.046868567656687154726e+2, 3.091641935801469219449e+2,
		3.136528299498790617832e+2, 3.181526396202093268500e+2, 3.226634991267261768912e+2, 3.271852877037752172008e+2, 3.317178871969284731381e+2, 3.362611819791984770344e+2, 3.408150588707990178690e+2, 3.453794070622668541074e+2,
		3.499541180407702369296e+2, 3.545390855194408088492e+2, 3.591342053695753987760e+2, 3.637393755555634901441e+2, 3.683544960724047495950e+2, 3.729794688856890206760e+2, 3.776141978739186564468e+2, 3.822585887730600291111e+2,
		3.869125491232175524822e+2, 3.915759882173296196258e+2, 3.962488170517915257991e+2, 4.009309482789157454921e+2, 4.056222961611448891925e+2, 4.103227765269373054205e+2, 4.150323067282496395563e+2, 4.197508055995447340991e+2,
		4.244781934182570746677e+2, 4.292143918666515701285e+2, 4.339593239950148201939e+2, 4.387129141861211848399e+2, 4.434750881209189409588e+2, 4.482457727453846057188e+2, 4.530248962384961351041e+2, 4.578123879812781810984e+2,
		4.626081785268749221865e+2, 4.674121995716081787447e+2, 4.722243839269805962399e+2, 4.770446654925856331047e+2, 4.818729792298879342285e+2, 4.867092611368394122258e+2, 4.915534482232980034989e+2, 4.964054784872176206648e+2,
		5.012652908915792927797e+2, 5.061328253420348751997e+2, 5.110080226652360267439e+2, 5.158908245878223975982e+2, 5.207811737160441513633e+2, 5.256790135159950627324e+2, 5.305842882944334921812e+2, 5.354969431801695441897e+2,
		5.404169241059976691050e+2, 5.453441777911548737966e+2, 5.502786517242855655538e+2, 5.552202941468948698523e+2, 5.601690540372730381305e+2, 5.651248810948742988613e+2, 5.700877257251342061414e+2, 5.750575390247102067619e+2,
		5.800342727671307811636e+2, 5.850178793888391176022e+2, 5.900083119756178539038e+2, 5.950055242493819689670e+2, 6.000094705553274281080e+2, 6.050201058494236838580e+2, 6.100373856862386081868e+2, 6.150612662070848845750e+2,
		6.200917041284773200381e+2, 6.251286567308909491967e+2, 6.301720818478101958172e+2, 6.352219378550597328635e+2, 6.402781836604080409209e+2, 6.453407786934350077245e+2, 6.504096828956552392500e+2, 6.554848567108890661717e+2,
		6.605662610758735291676e+2, 6.656538574111059132426e+2, 6.707476076119126755767e+2, 6.758474740397368739994e+2, 6.809534195136374546094e+2, 6.860654073019939978423e+2, 6.911834011144107529496e+2, 6.963073650938140118743e+2,
		7.014372638087370853465e+2, 7.065730622457873471107e+2, 7.117147258022900069535e+2}));
	_const_math__gamma_p = new_array_from_c_array(7, 7, sizeof(f64), _MOV((f64[7]){1.60119522476751861407e-04, 1.19135147006586384913e-03, 1.04213797561761569935e-02, 4.76367800457137231464e-02, 2.07448227648435975150e-01, 4.94214826801497100753e-01, 9.99999999999999996796e-01}));
	_const_math__gamma_q = new_array_from_c_array(8, 8, sizeof(f64), _MOV((f64[8]){-2.31581873324120129819e-05, 5.39605580493303397842e-04, -4.45641913851797240494e-03, 1.18139785222060435552e-02, 3.58236398605498653373e-02, -2.34591795718243348568e-01, 7.14304917030273074085e-02, 1.00000000000000000320e+00}));
	_const_math__gamma_s = new_array_from_c_array(5, 5, sizeof(f64), _MOV((f64[5]){7.87311395793093628397e-04, -2.29549961613378126380e-04, -2.68132617805781232825e-03, 3.47222221605458667310e-03, 8.33333333333482257126e-02}));
	_const_math__lgamma_a = new_array_from_c_array(12, 12, sizeof(f64), _MOV((f64[12]){
		7.72156649015328655494e-02, 3.22467033424113591611e-01, 6.73523010531292681824e-02, 2.05808084325167332806e-02, 7.38555086081402883957e-03, 2.89051383673415629091e-03, 1.19270763183362067845e-03, 5.10069792153511336608e-04, 2.20862790713908385557e-04,
		1.08011567247583939954e-04, 2.52144565451257326939e-05, 4.48640949618915160150e-05}));
	_const_math__lgamma_r = new_array_from_c_array(7, 7, sizeof(f64), _MOV((f64[7]){1.0, 1.39200533467621045958e+00, 7.21935547567138069525e-01, 1.71933865632803078993e-01, 1.86459191715652901344e-02, 7.77942496381893596434e-04, 7.32668430744625636189e-06}));
	_const_math__lgamma_s = new_array_from_c_array(7, 7, sizeof(f64), _MOV((f64[7]){-7.72156649015328655494e-02, 2.14982415960608852501e-01, 3.25778796408930981787e-01, 1.46350472652464452805e-01, 2.66422703033638609560e-02, 1.84028451407337715652e-03, 3.19475326584100867617e-05}));
	_const_math__lgamma_t = new_array_from_c_array(15, 15, sizeof(f64), _MOV((f64[15]){
		4.83836122723810047042e-01, -1.47587722994593911752e-01, 6.46249402391333854778e-02, -3.27885410759859649565e-02, 1.79706750811820387126e-02, -1.03142241298341437450e-02, 6.10053870246291332635e-03, -3.68452016781138256760e-03, 2.25964780900612472250e-03,
		-1.40346469989232843813e-03, 8.81081882437654011382e-04, -5.38595305356740546715e-04, 3.15632070903625950361e-04, -3.12754168375120860518e-04, 3.35529192635519073543e-04}));
	_const_math__lgamma_u = new_array_from_c_array(6, 6, sizeof(f64), _MOV((f64[6]){-7.72156649015328655494e-02, 6.32827064025093366517e-01, 1.45492250137234768737e+00, 9.77717527963372745603e-01, 2.28963728064692451092e-01, 1.33810918536787660377e-02}));
	_const_math__lgamma_v = new_array_from_c_array(6, 6, sizeof(f64), _MOV((f64[6]){1.0, 2.45597793713041134822e+00, 2.12848976379893395361e+00, 7.69285150456672783825e-01, 1.04222645593369134254e-01, 3.21709242282423911810e-03}));
	_const_math__lgamma_w = new_array_from_c_array(7, 7, sizeof(f64), _MOV((f64[7]){4.18938533204672725052e-01, 8.33333333333329678849e-02, -2.77777777728775536470e-03, 7.93650558643019558500e-04, -5.95187557450339963135e-04, 8.36339918996282139126e-04, -1.63092934096575273989e-03}));
	_const_math__pow10tab = new_array_from_c_array(32, 32, sizeof(f64), _MOV((f64[32]){
		((f64)(1e+00)), 1e+01, 1e+02, 1e+03, 1e+04, 1e+05, 1e+06, 1e+07, 1e+08,
		1e+09, 1e+10, 1e+11, 1e+12, 1e+13, 1e+14, 1e+15, 1e+16,
		1e+17, 1e+18, 1e+19, 1e+20, 1e+21, 1e+22, 1e+23, 1e+24,
		1e+25, 1e+26, 1e+27, 1e+28, 1e+29, 1e+30, 1e+31}));
	_const_math__pow10postab32 = new_array_from_c_array(10, 10, sizeof(f64), _MOV((f64[10]){
		((f64)(1e+00)), 1e+32, 1e+64, 1e+96, 1e+128, 1e+160, 1e+192, 1e+224, 1e+256,
		1e+288}));
	_const_math__pow10negtab32 = new_array_from_c_array(11, 11, sizeof(f64), _MOV((f64[11]){
		((f64)(1e-00)), 1e-32, 1e-64, 1e-96, 1e-128, 1e-160, 1e-192, 1e-224, 1e-256,
		1e-288, 1e-320}));
	_const_math__sin_data = new_array_from_c_array(12, 12, sizeof(f64), _MOV((f64[12]){
		-0.3295190160663511504173, 0.0025374284671667991990, 0.0006261928782647355874, -4.6495547521854042157541e-06, -5.6917531549379706526677e-07, 3.7283335140973803627866e-09, 3.0267376484747473727186e-10, -1.7400875016436622322022e-12, -1.0554678305790849834462e-13,
		5.3701981409132410797062e-16, 2.5984137983099020336115e-17, -1.1821555255364833468288e-19}));
	_const_math__cos_data = new_array_from_c_array(11, 11, sizeof(f64), _MOV((f64[11]){
		0.165391825637921473505668118136, -0.00084852883845000173671196530195, -0.000210086507222940730213625768083, 1.16582269619760204299639757584e-6, 1.43319375856259870334412701165e-7, -7.4770883429007141617951330184e-10, -6.0969994944584252706997438007e-11, 2.90748249201909353949854872638e-13, 1.77126739876261435667156490461e-14,
		-7.6896421502815579078577263149e-17, -3.7363121133079412079201377318e-18}));
	_const_math__tan_p = new_array_from_c_array(3, 3, sizeof(f64), _MOV((f64[3]){-1.30936939181383777646e+4, 1.15351664838587416140e+6, -1.79565251976484877988e+7}));
	_const_math__tan_q = new_array_from_c_array(5, 5, sizeof(f64), _MOV((f64[5]){1.00000000000000000000e+0, 1.36812963470692954678e+4, -1.32089234440210967447e+6, 2.50083801823357915839e+7, -5.38695755929454629881e+7}));
	_const_math__tanh_p = new_array_from_c_array(3, 3, sizeof(f64), _MOV((f64[3]){-9.64399179425052238628e-1, -9.92877231001918586564e+1, -1.61468768441708447952e+3}));
	_const_math__tanh_q = new_array_from_c_array(3, 3, sizeof(f64), _MOV((f64[3]){1.12811678491632931402e+2, 2.23548839060100448583e+3, 4.84406305325125486048e+3}));
	_const_math__pi_2 = (float_literal)(_const_math__pi / 2.0);
	_const_math__pi_4 = (float_literal)(_const_math__pi / 4.0);
	_const_math__one_over_tau = (float_literal)(1.0 / _const_math__tau);
	_const_math__one_over_pi = (float_literal)(1.0 / _const_math__pi);
	_const_math__tau_over2 = (float_literal)(_const_math__tau / 2.0);
	_const_math__tau_over4 = (float_literal)(_const_math__tau / 4.0);
	_const_math__tau_over8 = (float_literal)(_const_math__tau / 8.0);
	_const_math__log2_e = (float_literal)(1.0 / _const_math__ln2);
	_const_math__log10_e = (float_literal)(1.0 / _const_math__ln10);
	_const_math__sin_cs = ((math__ChebSeries){.c = _const_math__sin_data,.order = 11,.a = -1,.b = 1,});
	_const_math__cos_cs = ((math__ChebSeries){.c = _const_math__cos_data,.order = 10,.a = -1,.b = 1,});
}
void _vcleanup(void) {
}

// THE END.
