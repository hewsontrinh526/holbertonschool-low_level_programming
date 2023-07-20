section .text
global main
main:
	;; Write "Hello, World" to standard output
	mov rax, 1 		; System call number for sys_write
	mov rdi, 1		; File description 1 (standard output)
	mov rsi, msg		; Pointer to the string to print
	mov rdx, 13		; Length of string, including null-terminator
	syscall

	;; Exit the program
	mov rax, 60		; System call number for sys_exit
	mov rdi, 0		; Exit status code 0
	syscall

section .data
msg db "Hello, World",10
