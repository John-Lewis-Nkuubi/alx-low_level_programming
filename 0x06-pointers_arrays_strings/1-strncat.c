#include "main.h"
/**
 * _strncat - concatenate strings, defining the size of second string
 * dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, t;

	i = 0;
	t = 0;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + t) != '\0' && t < 97 && t < n)
	{
		*(dest + t) = *(src + t);
		i++;
		t++;
	}
	*(dest + i) = '\0';
	return (dest);
}
