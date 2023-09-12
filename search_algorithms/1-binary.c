#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @lower: Lower index of array
 * @upper: Upper index of array
 *
 * Return: Void
 */
void print_array(int *array, size_t lower, size_t upper)
{
	printf("Searching in array: ");
	while (lower <= upper)
	{
		printf("%d", array[lower]);
		if (lower != upper)
		{
			printf(", ");
		}
		lower = lower + 1;
	}
	printf("\n");
}

/**
 * binary_search - Search for a value in an array using
 * using the binary search method
 *
 * @array: Array to be searched
 * @size: Size of array
 * @value: Value to be found
 *
 * Return: Index of value if found, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t lower;
	size_t upper;
	size_t middle;
	size_t i;

	i = 0;
	lower = i;
	upper = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (lower <= upper)
	{
		print_array(array, lower, upper);
		middle = lower + (upper - lower) / 2;
		if (array[middle] == value)
		{
			return (middle);
		}
		if (array[middle] < value)
		{
			lower = middle + 1;
		}
		else
		{
			upper = middle - 1;
		}
	}
	return (-1);
}
