global _Godswill

section .text


_Godswill:
	MOV rax, 1
	MOV rdi, 1
	MOV rsi, msg
	MOV rdx, msglength
	SYSCALL

	MOV rax, 60
	MOV rdi, 0
	SYSCALL

section .rodata
	msg: DB "Hello, Holberton", 10
	msglength: equ $ - msg
