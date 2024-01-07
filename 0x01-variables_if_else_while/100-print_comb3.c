#include <stdio.h>

/**
 * main - a program that prints all possible different
 * combinations of two digits.
 * Description - Numbers are separated by a comma
 * followed by a space
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * only the smallest combination of two digits are printed
 * Numbers are printed in ascending order, with two digits
 * only the putchar function is in use
 * putchar is in use five times maximum
 * variable of type char is not in use
 * Return: 0 (success)
 */

int main(void)
{
	int i = '0';
	int n = '0';

	for (n = '0'; n <= '9'; n++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (!((i == n) || (n > i)))
			{
				putchar(n);
				putchar(i);
				if (!(i == 9 && n == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
