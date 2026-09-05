;strLen

strLen:
    push rbp
    mov rbp, rsp

    mov rax, 0

    .loop:
        cmp BYTE [rdi], 0
        je .salgo

        inc rax
        inc rdi
        jmp .loop
    .salgo:

    mov rsp, rbp
    pop rbp
    ret