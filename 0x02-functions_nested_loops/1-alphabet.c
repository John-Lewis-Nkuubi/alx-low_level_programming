#include "main.h"

/**
 * print_alphabet -  a function that prints the alphabet, in lowercase
 */

void print_alphabet(void)
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
	{
		_putchar(v);
	}
	_putchar('\n');
}
