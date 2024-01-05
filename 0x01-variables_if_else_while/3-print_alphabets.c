#include <stdio.h>

/**
 * main: Prints alphabet in lowercase, and then in uppercase
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int v;

	n = 'a';
	v = 'A';
	for (n = 'a', v = 'A'; n <= 'z' && v <= 'Z'; n++, v++)
	{
		putchar (n);
		putchar (v);
	}
	putchar ('\n');
	return (0);
}
