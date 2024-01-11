#include "main.h"

/**
 * main - a program that prints _putchar
 * Return: 0 success
 */

int main(void)
{
	int i;
	char y[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		_putchar(y[i]);
	}
	_putchar('\n');
	return (0);
}
