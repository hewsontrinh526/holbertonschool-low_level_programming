#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Changing binary to an unsigned int
 *
 * @b: Binary number
 *
 * Return: Returns an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	i = 0;
	num = 0;
	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		num = num *  2 + (b[i] - '0');
		i = i + 1;
	}
	return (num);
}
