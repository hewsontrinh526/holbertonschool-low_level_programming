#include "main.h"

/**
 * reverse_array - A function that reverses an array.
 *
 * @a: array input integer
 * @n: array input integer
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int len;
	int temp;
	int swap1;
	int swap2;

	len = 0;
	while (len < n)
	{
		len = len + 1;
	}
	swap1 = len - 1;
	swap2 = 0;
	while (swap2 < (n / 2))
	{
		temp = a[swap2];
		a[swap2] = a[swap1];
		a[swap1] = temp;
		swap1 = swap1 - 1;
		swap2 = swap2 + 1;
	}
}
