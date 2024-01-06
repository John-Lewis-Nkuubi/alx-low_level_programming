#include <stdio.h>
/**
 * main - program that prints all the numbers of base 16 in lowercase
 * Return: 0 (success)
 */

int main(void)
{
	int r;
	char t;

	for (r = 0; r < 10; r++)
		putchar (r + '0');
	for (t = 'a'; t < 'g'; t++)
		putchar (t);
	putchar ('\n');
	return (0);
}
