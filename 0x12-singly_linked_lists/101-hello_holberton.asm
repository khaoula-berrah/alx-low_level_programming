global _start

section .data
message db "Hello, Holberton", 0
format db "%s\n", 0

section .text
_start:
; Set up stack frame
mov rbp, rsp

; Call printf function
mov edi, format
mov rsi, message
xor eax, eax
call printf

; Exit program
xor edi, edi
mov eax, 60
syscall
