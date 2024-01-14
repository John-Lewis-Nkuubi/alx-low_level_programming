#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @r: number from which to extract the last digit
 * Return: 0
 */

int print_last_digit(int r)
{
	int t = (r % 10);

	if (r < 0)
	{
		t *= -1;
	}
	else
		t = (r % 10);
	_putchar(t + '0');
	return (t);
}
