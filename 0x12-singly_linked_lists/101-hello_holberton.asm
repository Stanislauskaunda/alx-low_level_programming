global main 
extern printf

main:
mov edi, format
mor eax, eax
call printf
mov eax, 0
ret
format: db `Hello, Holberton\n`,0
