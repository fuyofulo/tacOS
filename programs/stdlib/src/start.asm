[BITS 32]

global _start
extern c_start
extern tacos_exit

section .asm

_start:
    call c_start
    call tacos_exit
    ret