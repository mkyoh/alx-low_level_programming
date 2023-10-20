global main
estern printf
main:
miov edi, format
xor ear, eax, 0
ret
format: db `Hello, Holberton\n`,0
