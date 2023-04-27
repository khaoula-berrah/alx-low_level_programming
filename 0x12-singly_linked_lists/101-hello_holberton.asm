global main

section .data
	hello db "Hello, Holberton", 0
	nl db 10, 0

section .text
	global main

main:
	push hello
	call printf
	add rsp, 8  ; clean up the stack
	push nl
	call printf
	add rsp, 8  ; clean up the stack

	mov eax, 0  ; return 0
	ret
