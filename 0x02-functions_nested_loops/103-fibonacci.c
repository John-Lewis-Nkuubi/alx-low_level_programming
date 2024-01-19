#include <stdio.h>

/**
 * main - sum up even fibonacci upto 4 million
 * Return: (0)
 */

int main(void)
{
	long int i, x = 1, y = 2, sum = 0, h = 0;

	for (i = 0; i < 49; i++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			h += y;
		}
		sum = x + y;
		x = y;
		y = sum;
	}
	printf("%ld\n", h);
	return (0);
}
