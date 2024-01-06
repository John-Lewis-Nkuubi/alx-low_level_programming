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

	for (l = 0; l < 10; l++)
	{
		putchar (l + '0');
		if (l < 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
