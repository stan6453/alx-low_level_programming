; A simple "Hello, Holberton\n" program
;
; Author: Stanley Ezechukwu
; Date:   Fri, Oct 21, 2022

global _start

section .text:

_start:
	mov eax, 0x4		; use the write syscall
	mov ebx, 1		; use stdout as the file descriptor
	mov ecx, message	; use the message sa the buffer
	mov edx, message_length	; supply the message length
	int 0x80		; invoke the syscall

	; now gracefully exit

	mov eax, 0x1
	mov ebx, 0
	int 0x80

section .data:
	message: db "Hello, Holberton", 0xA
	message_length equ $-message
