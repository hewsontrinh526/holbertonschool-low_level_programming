#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Writing a function that creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: NULL is min > max
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(*array) * (max - min + 1));

	if (array == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (min <= max)
	{
		array[i] = min;
		min = min + 1;
		i = i + 1;
	}
	return (array);
}
