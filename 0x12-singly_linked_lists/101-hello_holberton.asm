section.data
	hello_msg db "Hello, Holberton", 0
	format db "%s", 0

section .text
	global main
	extern printf

main:
	mov edi, format
	mov rsi, hello_msg
	xor eax, eax
	call printf 

	mov eax, 0
	ret
