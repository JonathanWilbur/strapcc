/* ---------------------------------------------- */
/* alloca.S */

#ifdef __leading_underscore
# define _(s) _##s
#else
# define _(s) s
#endif

/* ---------------------------------------------- */
#if defined __i386__

.globl _(alloca), _(__alloca)
_(alloca):
_(__alloca):
    push    %ebp
    mov     %esp,%ebp
    mov     8(%ebp),%eax
    add     $3,%eax
    and     $-4,%eax
    sub     %eax,%esp
    mov     4(%ebp),%eax
    mov     0(%ebp),%ebp
    add     $8,%esp
    push    %eax
    lea     8(%esp),%eax
    ret

/* ---------------------------------------------- */
#elif defined __x86_64__

.globl _(alloca)
_(alloca):
    pop     %rdx
    mov     %rdi,%rax
    add     $15,%rax
    and     $-16,%rax
    jz      p3
    sub     %rax,%rsp
    mov     %rsp,%rax
p3:
    push    %rdx
    ret

#endif
