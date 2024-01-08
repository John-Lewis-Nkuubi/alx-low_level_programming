#include <stdio.h>

/**
 * main - a program that prints all possible
 * combinations of two two-digit numbers
 * Description - The numbers range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers are printed with two digits.
 * 1 is printed as 01
 * The combination of numbers is separated by comma, followed by a space
 * The combinations of numbers is printed in ascending order
 * There is no repitetion of numbers as 00 01 and 01 00 are considered
 * as the same combination of the numbers 0 and 1
 * Only the putchar function is in use
 * putchar is in use only eight times maximum
 * no variable of type char is in use
 * All code is in the main function
 * Return: 0 (suucess)
 */

int main(void)
{
	int t;
	int o;

	for (o = '0'; o <= '9'; o++)
	{
		for (t = '0'; t <= '9'; t++)
			if (!(o == t || t > o))
			{
				putchar(t);
				putchar(o);
				if (!(o == '9' && t == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
