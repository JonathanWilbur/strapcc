/* ---------------------------------------------- */
/* This file implements for arm/arm64/riscv:
 * __atomic_compare_exchange_1
 * __atomic_compare_exchange_2
 * __atomic_compare_exchange_4
 * __atomic_compare_exchange_8
 */

#ifdef __leading_underscore
# define _(s) _##s
#else
# define _(s) s
#endif

        .text
        .align  2

        .global _(__atomic_test_and_set)
        .type   _(__atomic_test_and_set), %function
_(__atomic_test_and_set):
        movl    $1, %eax
        xchgb   (%rdi), %al
        ret
	.size   _(__atomic_test_and_set), .-_(__atomic_test_and_set)

        .global _(__atomic_clear)
        .type   _(__atomic_clear), %function
_(__atomic_clear):
        xorl    %eax, %eax
        xchgb   (%rdi), %al
        ret
	.size   _(__atomic_clear), .-_(__atomic_clear)
