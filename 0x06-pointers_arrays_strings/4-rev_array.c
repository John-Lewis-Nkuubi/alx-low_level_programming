#include "main.h"
/**
 * reverse_array - prints reverse array
 * @a: array to be compared
 * @n: size of array
 * Return: reverse array
 */
void reverse_array(int *a, int n)
{
	int exchange, start, finish;

	start = 0;
	finish = n - 1;
	while (start < finish)
	{
		exchange = *(a + start);
		*(a + start) = *(a + finish);
		*(a + finish) = exchange;
		start++;
		finish--;
	}
}
