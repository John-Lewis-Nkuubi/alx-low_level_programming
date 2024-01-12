#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10
 * times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int h;
	char y;

	for (h = 0; h < 10; h++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
