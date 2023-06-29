#include "main.h"

/**
 * *_memcpy - A function that copies a memory area.
 *
 * @dest: input string
 * @src: input string
 * @n: input integer
 *
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	return (dest);
}
