#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * set_bit - Set a value of a bit to 1
 *
 * @n: Input number
 * @index: Bit position
 *
 * Return: Returns 1 if successful, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(*n) * 8))
	{
		return (-1);
	}

	i = 1;
	i = i << index;
	*n = *n | i;
	return (i);
}
