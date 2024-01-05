#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10
 * Descirption - numbers start form 0, putchar fucntion is in use
 * at a maximum of 2 times
 * Return: 0 (success)
 */

int main(void)
{
	int u;

	for (u = 5; u < 10; u++)
		putchar (u + '5');
	putchar ('\n');
	return (0);
}
