global main     ; Declare main function as global

extern printf   ; Declare printf function as external, so linker can find it

main:            ; Main function begins


mov edi, format ; Move the address of the format string to the edi register
xor eax, eax    ; Set the eax register to zero
call printf     ; Call the printf function, which prints the string pointed to by edit
mov eax, 0      ; Set the return value of the main function to zero
ret             ; Return from the main function

format: db `Hello, Holberton\n`,0  ; Declare the format string as a null-terminated byte sequence
