#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints n elements of an array of integers.
 *
 * @a: Input string
 * @n: Int input
 *
 * Return: length of string
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n - 1)
	{
		printf("%d, ", *(a + i));
		i = i + 1;
	}
	if (i == n - 1)
	{
		printf("%d\n", *(a + i));
	}
}
