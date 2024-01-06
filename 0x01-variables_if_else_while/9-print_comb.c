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
	char l, m, n;

	l = '0';
	m = ',';
	n = ' ';
	while (l < 10)
	{
		putchar (l);
		putchar (m);
		putchar (n);
	}
	l++;
	m++;
	n++;
	putchar ('\n');
	return (0);
}
