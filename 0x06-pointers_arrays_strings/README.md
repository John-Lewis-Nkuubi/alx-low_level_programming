#0x06. C - More pointers, arrays and strings
##Learning Objectives
*By the end of this project, I am able to explain to anyone, without the help of Google the following;*

- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

##PROJECTS
0-strcat.c; a function that concatenates two strings.
- This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
- Returns a pointer to the resulting string dest

1-strncat.c; a function that concatenates two strings.
- The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
- Return a pointer to the resulting string dest

2-strncpy.c; a function that copies a string.

3-strcmp.c; a function that compares two strings.

4-rev_array.c; a function that reverses the content of an array of integers.

5-string_toupper.c; a function that changes all lowercase letters of a string to uppercase.

6-cap_string.c; a function that capitalizes all words of a string.
- Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

7-leet.c; a function that encodes a string into 1337.

- Letters a and A are replaced by 4
- Letters e and E are replaced by 3
- Letters o and O are replaced by 0
- Letters t and T are replaced by 7
- Letters l and L are replaced by 1
- only one if in use
- only two loops are in use
-  switch isnt in use
- ternary operation isnt in use

100-rot13.c; a function that encodes a string using rot13.
- if statement is in use only once
- only two loops are in use
- switch isnt in use
- ternary operations arent in us

101-print_number.c; a function that prints an integer.

- only _putchar function is in use
- long isnt in use
- arrays or pointers arent in use
- no hard-coding of special valuese

102-magic.c; program prints a[2] = 98, followed by a new line.

103-infinite_add.c; a function that adds two numbers.
- n1 and n2 are the two numbers
- r is the buffer that the function will use to store the result
- size_r is the buffer size
- The function returns a pointer to the result
- you will always get positive numbers, or 0
- there will be only digits in the strings n1 and n2
- n1 and n2 will never be empty
- If the result can not be stored in r the function returns 0

104-print_buffer.c; a function that prints a buffer.
- The function prints the content of size bytes of the buffer pointed by b
- The output prints 10 bytes per line
- Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0
- Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
- Each line shows the content of the buffer. If the byte is a printable character, it prints the letter, if not, it prints .
- Each line ends with a new line \n
- If size is 0 or less, the output is a new line only \n
- the standard library isnt in use
