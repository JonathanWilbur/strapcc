/* ---------------------------------------------- */
/* alloca.S */

#ifdef __leading_underscore
# define _(s) _##s
#else
# define _(s) s
#endif

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
