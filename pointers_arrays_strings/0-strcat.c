#include "main.h"

/**
 * *_strcat - A function that concatenates two strings.
 *
 * @dest: string input value
 * @src: string input value
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x = x + 1;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x = x + 1;
		y = y + 1;
	}
	dest[x] = '\0';
	return (dest);
}
