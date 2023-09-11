#include "search_algos.h"

/**
 * linear_search - Search for a value in an array using
 * using the linear search method
 *
 * @array: Array to be searched
 * @size: Size of array
 * @value: Value to be found
 *
 * Return: Index of value if found, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	i = 0;

	while (i < size)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i = i + 1;
	}
	return (-1);
}
