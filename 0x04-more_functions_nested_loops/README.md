#0x04. C - More functions, more nested loops
##Learning Objectives
*without the the help of google, i am able to explain the following below;*
##General##
- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
- What are header files and how to to use them with #include

##PROJECTS
0-isupper.c; A function that checks for uppercase character.
- Returns 1 if c is uppercase
- Returns 0 otherwise

1-isdigit.c; A function that checks for a digit (0 through 9).i
Returns 1 if c is a digit
Returns 0 otherwise

2-mul.c; A function that multiplies two integers.

3-print_numbers.c; a function that prints the numbers, from 0 to 9, followed by a new line.

4-print_most_numbers.c; a function that prints the numbers, from 0 to 9, followed by a new line.
- Doesn't print 2 and 4

5-more_numbers.c; a function that prints 10 times the numbers, from 0 to 14, followed by a new line.

6-print_line.c; a function that draws a straight line in the terminal.

Prototype: void print_line(int n); A function that draws a straight line in the terminal.
- _putchar function is used once to print
- Where n is the number of times the character _ should be printed
- The line ends with a \n
- If n is 0 or less, the function only print \n 

7-print_diagonal.c; a function that draws a diagonal line on the terminal.

Prototype: void print_diagonal(int n); A function that draws a diagonal line on the terminal.
- only _putchar function is in use to print
- Where n is the number of times the character \ is be printed
- The diagonal ends with a \n
- If n is 0 or less, the function only prints a \n

8-print_square.c; A function that prints a square, followed by a new line.
- only _putchar function is in use to print
- Size is the size of the square
- If size is 0 or less, the function prints only a new line
- the character # prints the square

9-fizz_buzz.c; A program that prints the numbers from 1 to 100, followed by a new line. 
- for multiples of three prints Fizz instead of the number
- for the multiples of five prints Buzz.
- numbers which are multiples of both three and five print FizzBuzz.
- Each number or word is separated by a space
- the standard library is in use

10-print_triangle.c; A function that prints a triangle, followed by a new line.
- only _putchar function is in use to print
- size is the size of the triangle
- If size is 0 or less, the function prints only a new line
- the character # prints the triangle

100-prime_factor.c; A program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.

101-print_number.c; A function that prints an integer.
- only the _putchar function is in use to print
- long isnt in use
- arrays or pointers arent in use
- no hard-coding of  special values
