#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a fucntion given as a parameter on each
 * element of an array
 *
 * @action: Pointer to the function you need to use
 * @array: Input array
 * @size: Size of the array
 *
 * Return: Returns name
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	i = 0;
	if (action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i = i + 1;
		}
	}
}
