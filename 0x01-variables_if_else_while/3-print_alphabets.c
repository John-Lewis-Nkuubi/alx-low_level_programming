#include <stdio.h>

/**
 * Program: 3-print_alphabets.c
 * Description: Prints the alphabet in lowercase, and then in uppercase
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int v;

	n = 'a';
	v = 'A';
	for (n = 'a'; n <= 'z'; n++)
	{
		putchar (n);
	}
	for (n = 'A'; n <= 'Z'; v++)
	{
		putchar (v);
	}
	putchar ('\n');
	return (0);
}
