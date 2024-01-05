#include <stdio.h>

/**
 * main - 3-print_alphabets.c
 * Description: Prints the alphabet in lowercase, and then in uppercase
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar (n);
	}
	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar (n);
	}
	putchar ('\n');
	return (0);
}
