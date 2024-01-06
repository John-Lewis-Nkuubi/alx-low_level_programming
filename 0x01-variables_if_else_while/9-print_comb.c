#include <stdio.h>

/**
 * main - program that prints all possible combinations of
 *  single-digit numbers
 *  Description - Numbers are separated by a comma followed by a space
 *  Numbers are printed in ascending order
 *  only putchar function is in use
 *  Putchar finction is in use 4 times maximum
 *  No variable of type char is in use
 *  Return: 0 (success)
 */

int main(void)
{
	int l;

	l = '0';
	while (l < 10)
	{
		putchar (l + '0');
		putchar (',');
		putchar (' ');
	}
	putchar ('\n');
	return (0);
}
