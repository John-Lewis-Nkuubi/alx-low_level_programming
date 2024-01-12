#include "main.h"

/**
 * _isalpha - a function that checks
 * for alphabetic character
 * @c: collects the character
 * Return: (1) if c is a letter, lowercase or uppercase
 * and 0 otherwise
 */

int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == c)
				letter = 1;
		}
	}
	return (letter);
}
