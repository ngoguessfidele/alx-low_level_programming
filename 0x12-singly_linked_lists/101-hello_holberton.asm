section.data
	hello_msg db "Hello, Holberton", 0
	format db "%s", 0

section .text
	global main
	extern printf

main:
	sub rsp, 8  ; Align the stack to a 16-byte boundary

	;Prepare the arguments for printf
	mov edi, format
	mov rsi, hello_msg
	xor eax, eax ;Clear eax register before using it

	; Call printf
	call printf

	add rsp, 8 ;Restore the stack pointer

	;Exit program
	mov eax, 0
	ret
