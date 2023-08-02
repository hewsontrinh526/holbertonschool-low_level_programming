#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Changing a long unsigned int to binary
 *
 * @n: Number to be converted
 *
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
