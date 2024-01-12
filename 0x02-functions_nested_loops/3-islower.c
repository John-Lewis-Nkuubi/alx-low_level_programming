#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * Description - Returns 1 if c is lowercase
 * @c: contains alphabet
 * Return: (1) if c is lowercase otherwise (0)
 */

int _islower(int c)
{
	char t;
	int lower = 0;

	for (t = 'a'; t <= 'z'; t++)
	{
		if (t == c)
			lower = 1;
	}
	return (lower);
}
