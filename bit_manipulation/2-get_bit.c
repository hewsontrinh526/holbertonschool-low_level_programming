#include <stdio.h>
#include <math.h>
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
	unsigned int bit_count; /* Uint of bits in n */
	unsigned long int bit_num; /* Temp Ulong to hold n */

	bit_count = 0;
	bit_num = n;

	while (bit_num != 0)
	{
		bit_count = bit_count + 1;
		bit_num >>= 1;
	}
	if (index > n || index > bit_count)
	{
		return (-1);
	}

	i = (n >> index) & 1;

	return (i);
}
