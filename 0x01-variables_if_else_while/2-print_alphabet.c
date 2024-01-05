#include <stdio.h>

/**
 * main - Program that prints lowercase of the aphabet
 * Return: (0) success
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar (n);
		putchar ('\n');
	}
	return (0);
}
