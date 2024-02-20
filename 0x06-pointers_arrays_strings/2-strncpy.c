#include "main.h"
/**
 * _strncpy - concatenate strings, definingthe size of second string
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0
 */
char *strncpy(char *dest, char *src, int n)
{
	int h;

	for (h = 0; h < n && src[h] != '\0'; h++)
		*(dest + h) = *(src + h);
	for(; h < n; h++)
		*(dest + h) = '\0';
	return (dest);
}
