; A simple "Hello, Holberton\n" program
;
; Author: Stanley Ezechukwu
; Date:   Fri, Oct 21, 2022

SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret
