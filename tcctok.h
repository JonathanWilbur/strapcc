/*********************************************************************/
/* keywords */
     DEF(TOK_IF, "if")
     DEF(TOK_ELSE, "else")
     DEF(TOK_WHILE, "while")
     DEF(TOK_FOR, "for")
     DEF(TOK_DO, "do")
     DEF(TOK_CONTINUE, "continue")
     DEF(TOK_BREAK, "break")
     DEF(TOK_RETURN, "return")
     DEF(TOK_GOTO, "goto")
     DEF(TOK_SWITCH, "switch")
     DEF(TOK_CASE, "case")
     DEF(TOK_DEFAULT, "default")
     DEF(TOK_ASM1, "asm")
     DEF(TOK_ASM2, "__asm")
     DEF(TOK_ASM3, "__asm__")

     DEF(TOK_EXTERN, "extern")
     DEF(TOK_STATIC, "static")
     DEF(TOK_UNSIGNED, "unsigned")
     DEF(TOK__Atomic, "_Atomic")
     DEF(TOK_CONST1, "const")
     DEF(TOK_CONST2, "__const") /* gcc keyword */
     DEF(TOK_CONST3, "__const__") /* gcc keyword */
     DEF(TOK_VOLATILE1, "volatile")
     DEF(TOK_VOLATILE2, "__volatile") /* gcc keyword */
     DEF(TOK_VOLATILE3, "__volatile__") /* gcc keyword */
     DEF(TOK_REGISTER, "register")
     DEF(TOK_SIGNED1, "signed")
     DEF(TOK_SIGNED2, "__signed") /* gcc keyword */
     DEF(TOK_SIGNED3, "__signed__") /* gcc keyword */
     DEF(TOK_AUTO, "auto")
     DEF(TOK_INLINE1, "inline")
     DEF(TOK_INLINE2, "__inline") /* gcc keyword */
     DEF(TOK_INLINE3, "__inline__") /* gcc keyword */
     DEF(TOK_RESTRICT1, "restrict")
     DEF(TOK_RESTRICT2, "__restrict")
     DEF(TOK_RESTRICT3, "__restrict__")
     DEF(TOK_EXTENSION, "__extension__") /* gcc keyword */
     DEF(TOK_THREAD_LOCAL, "_Thread_local") /* C11 thread-local storage */

     DEF(TOK_GENERIC, "_Generic")
     DEF(TOK_STATIC_ASSERT, "_Static_assert")

     DEF(TOK_VOID, "void")
     DEF(TOK_CHAR, "char")
     DEF(TOK_INT, "int")
     DEF(TOK_FLOAT, "float")
     DEF(TOK_DOUBLE, "double")
     DEF(TOK_BOOL, "_Bool")
     DEF(TOK_COMPLEX, "_Complex")
     DEF(TOK_SHORT, "short")
     DEF(TOK_LONG, "long")
     DEF(TOK_STRUCT, "struct")
     DEF(TOK_UNION, "union")
     DEF(TOK_TYPEDEF, "typedef")
     DEF(TOK_ENUM, "enum")
     DEF(TOK_SIZEOF, "sizeof")
     DEF(TOK_ATTRIBUTE1, "__attribute")
     DEF(TOK_ATTRIBUTE2, "__attribute__")
     DEF(TOK_ALIGNOF1, "__alignof")
     DEF(TOK_ALIGNOF2, "__alignof__")
     DEF(TOK_ALIGNOF3, "_Alignof")
     DEF(TOK_ALIGNAS, "_Alignas")
     DEF(TOK_TYPEOF1, "typeof")
     DEF(TOK_TYPEOF2, "__typeof")
     DEF(TOK_TYPEOF3, "__typeof__")
     DEF(TOK_LABEL, "__label__")

/*********************************************************************/
/* the following are not keywords. They are included to ease parsing */
/* preprocessor only */
     DEF(TOK_DEFINE, "define")
     DEF(TOK_INCLUDE, "include")
     DEF(TOK_INCLUDE_NEXT, "include_next")
     DEF(TOK_IFDEF, "ifdef")
     DEF(TOK_IFNDEF, "ifndef")
     DEF(TOK_ELIF, "elif")
     DEF(TOK_ENDIF, "endif")
     DEF(TOK_DEFINED, "defined")
     DEF(TOK_UNDEF, "undef")
     DEF(TOK_ERROR, "error")
     DEF(TOK_WARNING, "warning")
     DEF(TOK_LINE, "line")
     DEF(TOK_PRAGMA, "pragma")
     DEF(TOK___LINE__, "__LINE__")
     DEF(TOK___FILE__, "__FILE__")
     DEF(TOK___DATE__, "__DATE__")
     DEF(TOK___TIME__, "__TIME__")
     DEF(TOK___FUNCTION__, "__FUNCTION__")
     DEF(TOK___VA_ARGS__, "__VA_ARGS__")
     DEF(TOK___COUNTER__, "__COUNTER__")
     DEF(TOK___HAS_INCLUDE, "__has_include")
     DEF(TOK___HAS_INCLUDE_NEXT, "__has_include_next")

/* special identifiers */
     DEF(TOK___FUNC__, "__func__")

/* special floating point values */
     DEF(TOK___NAN__, "__nan__")
     DEF(TOK___SNAN__, "__snan__")
     DEF(TOK___INF__, "__inf__")
     DEF(TOK___mzerosf, "__mzerosf") /* -0.0 */
     DEF(TOK___mzerodf, "__mzerodf") /* -0.0 */

/* attribute identifiers */
/* XXX: handle all tokens generically since speed is not critical */
     DEF(TOK_SECTION1, "section")
     DEF(TOK_SECTION2, "__section__")
     DEF(TOK_ALIGNED1, "aligned")
     DEF(TOK_ALIGNED2, "__aligned__")
     DEF(TOK_PACKED1, "packed")
     DEF(TOK_PACKED2, "__packed__")
     DEF(TOK_WEAK1, "weak")
     DEF(TOK_WEAK2, "__weak__")
     DEF(TOK_ALIAS1, "alias")
     DEF(TOK_ALIAS2, "__alias__")
     DEF(TOK_UNUSED1, "unused")
     DEF(TOK_UNUSED2, "__unused__")
     DEF(TOK_NODEBUG1, "nodebug")
     DEF(TOK_NODEBUG2, "__nodebug__")
     DEF(TOK_CDECL1, "cdecl")
     DEF(TOK_CDECL2, "__cdecl")
     DEF(TOK_CDECL3, "__cdecl__")
     DEF(TOK_STDCALL1, "stdcall")
     DEF(TOK_STDCALL2, "__stdcall")
     DEF(TOK_STDCALL3, "__stdcall__")
     DEF(TOK_FASTCALL1, "fastcall")
     DEF(TOK_FASTCALL2, "__fastcall")
     DEF(TOK_FASTCALL3, "__fastcall__")
     DEF(TOK_THISCALL1, "thiscall")
     DEF(TOK_THISCALL2, "__thiscall")
     DEF(TOK_THISCALL3, "__thiscall__")
     DEF(TOK_REGPARM1, "regparm")
     DEF(TOK_REGPARM2, "__regparm__")
     DEF(TOK_CLEANUP1, "cleanup")
     DEF(TOK_CLEANUP2, "__cleanup__")
     DEF(TOK_CONSTRUCTOR1, "constructor")
     DEF(TOK_CONSTRUCTOR2, "__constructor__")
     DEF(TOK_DESTRUCTOR1, "destructor")
     DEF(TOK_DESTRUCTOR2, "__destructor__")
     DEF(TOK_ALWAYS_INLINE1, "always_inline")
     DEF(TOK_ALWAYS_INLINE2, "__always_inline__")

     DEF(TOK_MODE, "__mode__")
     DEF(TOK_MODE_QI, "__QI__")
     DEF(TOK_MODE_DI, "__DI__")
     DEF(TOK_MODE_HI, "__HI__")
     DEF(TOK_MODE_SI, "__SI__")
     DEF(TOK_MODE_word, "__word__")

     DEF(TOK_DLLEXPORT, "dllexport")
     DEF(TOK_DLLIMPORT, "dllimport")
     DEF(TOK_NODECORATE, "nodecorate")
     DEF(TOK_NORETURN1, "noreturn")
     DEF(TOK_NORETURN2, "__noreturn__")
     DEF(TOK_NORETURN3, "_Noreturn")
     DEF(TOK_VISIBILITY1, "visibility")
     DEF(TOK_VISIBILITY2, "__visibility__")

     DEF(TOK_builtin_types_compatible_p, "__builtin_types_compatible_p")
     DEF(TOK_builtin_choose_expr, "__builtin_choose_expr")
     DEF(TOK_builtin_constant_p, "__builtin_constant_p")
     DEF(TOK_builtin_frame_address, "__builtin_frame_address")
     DEF(TOK_builtin_return_address, "__builtin_return_address")
     DEF(TOK_builtin_expect, "__builtin_expect")
     DEF(TOK_builtin_unreachable, "__builtin_unreachable")
     /*DEF(TOK_builtin_va_list, "__builtin_va_list")*/
     DEF(TOK_builtin_va_arg_types, "__builtin_va_arg_types")

/* atomic operations */
#define DEF_ATOMIC(ID) DEF(TOK_##__##ID, "__"#ID)
     DEF_ATOMIC(atomic_store)
     DEF_ATOMIC(atomic_load)
     DEF_ATOMIC(atomic_exchange)
     DEF_ATOMIC(atomic_compare_exchange)
     DEF_ATOMIC(atomic_fetch_add)
     DEF_ATOMIC(atomic_fetch_sub)
     DEF_ATOMIC(atomic_fetch_or)
     DEF_ATOMIC(atomic_fetch_xor)
     DEF_ATOMIC(atomic_fetch_and)
     DEF_ATOMIC(atomic_fetch_nand)
     DEF_ATOMIC(atomic_add_fetch)
     DEF_ATOMIC(atomic_sub_fetch)
     DEF_ATOMIC(atomic_or_fetch)
     DEF_ATOMIC(atomic_xor_fetch)
     DEF_ATOMIC(atomic_and_fetch)
     DEF_ATOMIC(atomic_nand_fetch)

/* pragma */
     DEF(TOK_pack, "pack")
     DEF(TOK_comment, "comment")
     DEF(TOK_lib, "lib")
     DEF(TOK_push_macro, "push_macro")
     DEF(TOK_pop_macro, "pop_macro")
     DEF(TOK_once, "once")
     DEF(TOK_option, "option")

/* builtin functions or variables */
#ifndef TCC_ARM_EABI
     DEF(TOK_memcpy, "memcpy")
     DEF(TOK_memmove, "memmove")
     DEF(TOK_memset, "memset")
     DEF(TOK___divdi3, "__divdi3")
     DEF(TOK___moddi3, "__moddi3")
     DEF(TOK___udivdi3, "__udivdi3")
     DEF(TOK___umoddi3, "__umoddi3")
     DEF(TOK___ashrdi3, "__ashrdi3")
     DEF(TOK___lshrdi3, "__lshrdi3")
     DEF(TOK___ashldi3, "__ashldi3")
     DEF(TOK___floatundisf, "__floatundisf")
     DEF(TOK___floatundidf, "__floatundidf")
# ifndef TCC_ARM_VFP
     DEF(TOK___floatundixf, "__floatundixf")
     DEF(TOK___fixunsxfdi, "__fixunsxfdi")
# endif
     DEF(TOK___fixunssfdi, "__fixunssfdi")
     DEF(TOK___fixunsdfdi, "__fixunsdfdi")
#endif
     DEF(TOK_alloca, "alloca")

/* bound checking symbols */
#ifdef CONFIG_TCC_BCHECK
     DEF(TOK___bound_ptr_add, "__bound_ptr_add")
     DEF(TOK___bound_ptr_indir1, "__bound_ptr_indir1")
     DEF(TOK___bound_ptr_indir2, "__bound_ptr_indir2")
     DEF(TOK___bound_ptr_indir4, "__bound_ptr_indir4")
     DEF(TOK___bound_ptr_indir8, "__bound_ptr_indir8")
     DEF(TOK___bound_ptr_indir12, "__bound_ptr_indir12")
     DEF(TOK___bound_ptr_indir16, "__bound_ptr_indir16")
     DEF(TOK___bound_main_arg, "__bound_main_arg")
     DEF(TOK___bound_local_new, "__bound_local_new")
     DEF(TOK___bound_local_delete, "__bound_local_delete")
     DEF(TOK___bound_setjmp, "__bound_setjmp")
     DEF(TOK___bound_longjmp, "__bound_longjmp")
     DEF(TOK___bound_new_region, "__bound_new_region")
     DEF(TOK_sigsetjmp, "sigsetjmp")
     DEF(TOK___sigsetjmp, "__sigsetjmp")
     DEF(TOK_siglongjmp, "siglongjmp")
     DEF(TOK_setjmp, "setjmp")
     DEF(TOK__setjmp, "_setjmp")
     DEF(TOK_longjmp, "longjmp")
#endif

/*********************************************************************/
/* Tiny Assembler */
#define DEF_ASM(x) DEF(TOK_ASM_ ## x, #x)
#define DEF_ASMDIR(x) DEF(TOK_ASMDIR_ ## x, "." #x)
#define TOK_ASM_int TOK_INT

#define TOK_ASMDIR_FIRST TOK_ASMDIR_byte
#define TOK_ASMDIR_LAST TOK_ASMDIR_section

 DEF_ASMDIR(byte)       /* must be first directive */
 DEF_ASMDIR(word)
 DEF_ASMDIR(align)
 DEF_ASMDIR(balign)
 DEF_ASMDIR(p2align)
 DEF_ASMDIR(set)
 DEF_ASMDIR(skip)
 DEF_ASMDIR(space)
 DEF_ASMDIR(string)
 DEF_ASMDIR(asciz)
 DEF_ASMDIR(ascii)
 DEF_ASMDIR(file)
 DEF_ASMDIR(globl)
 DEF_ASMDIR(global)
 DEF_ASMDIR(weak)
 DEF_ASMDIR(hidden)
 DEF_ASMDIR(ident)
 DEF_ASMDIR(size)
 DEF_ASMDIR(type)
 DEF_ASMDIR(text)
 DEF_ASMDIR(data)
 DEF_ASMDIR(bss)
 DEF_ASMDIR(previous)
 DEF_ASMDIR(pushsection)
 DEF_ASMDIR(popsection)
 DEF_ASMDIR(fill)
 DEF_ASMDIR(rept)
 DEF_ASMDIR(endr)
 DEF_ASMDIR(org)
 DEF_ASMDIR(quad)
 DEF_ASMDIR(code64)
 DEF_ASMDIR(short)
 DEF_ASMDIR(long)
 DEF_ASMDIR(int)
 DEF_ASMDIR(symver)
 DEF_ASMDIR(section)    /* must be last directive */

#include "i386-tok.h"
