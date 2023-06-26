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
	int j;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		printf("%d, ", *(a + i));
		i = i + 1;
	}
	if (i == j)
	{
		printf("%d\n", *(a + i));
	}
}
