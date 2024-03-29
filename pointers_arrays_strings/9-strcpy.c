#include "main.h"

/**
 * *_strcpy - A function that copies the string pointed to by src to the buffer
 * pointed to by dest.
 *
 * @dest: buffer string to be copied to
 * @src: string to be copied
 *
 * Return: length of string
 */
char *_strcpy(char *dest, char *src)
{
	int i; /* array position */

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
