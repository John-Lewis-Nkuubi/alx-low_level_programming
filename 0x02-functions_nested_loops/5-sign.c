#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: contains the number
 * Return: 0 or 1
 */

int print_sign(int n)
{
	int neg = -1;
	char y = (char) neg;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (y);
	}
}
