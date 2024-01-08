#include <stdio.h>

/**
 * main - a program that prints all possible
 * different combinations of three digits.
 * Descripton - Numbers are separated by comma
 * followed by a space
 * The three digits are different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * Of the three digits 0, 1 and 2
 * The smallest combination of three digits is printed
 * Numbers are printed in ascending order, with three digits
 * only use the putchar function is in us
 * putchar is in use at a  six times maximum
 * no variable of type char is in use
 * All the code is in the main function
 * Return: 0 (success)
 */

int main(void)
{
	int o;
	int t;
	int h;

	for (h = '0'; h <= '9'; h++)
	{
		for (t = '0'; t <= '9'; t++)
		{
			for (o = '0'; o <= '9'; o++)
			{
				if (!((o == t) || (t == h) || (t > o) || (h > t)))
				{
					putchar(h);
					putchar(t);
					putchar(o);
					if (!(o == '9' && t == '8' && h == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
