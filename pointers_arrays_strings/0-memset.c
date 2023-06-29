#include "main.h"

/**
 * *_memset - A function that fills memory with a constant byte.
 *
 * @s: input string
 * @b: input string
 * @n: input integer
 *
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i = i + 1;
	}
	return (s);
}
