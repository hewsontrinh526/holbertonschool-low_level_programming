#include "main.h"

/**
 * *_strncat - A function that concatenates two strings.
 *
 * @dest: string input value
 * @src: string input value
 * @n: length of src
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x = x + 1;
	}
	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x = x + 1;
		y = y + 1;
	}
	return (dest);
}
