#include <stdio.h>
#include "main.h"

/**
 * get_bit - Finding the value of the bit at a given index
 *
 * @n: Input number
 * @index: Bit position
 *
 * Return: Value of bit at index, else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i; /* Value of bit */

	if (index > n)
	{
		return (-1);
	}

	i = (n >> index) & 1;

	return (i);
}
