#include <stdio.h>

/**
 * main - Print all lowercase letters except q and e
 * Return: 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i != 'q' && i != 'e'; i++)
	{
		putchar (i);
	}
	putchar ('\n');
	return (0);
}
