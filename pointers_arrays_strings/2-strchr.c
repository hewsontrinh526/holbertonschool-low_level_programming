#include "main.h"

/**
 * *_strchr - A function that locates a character in a string.
 *
 * @s: input string
 * @c: input character
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i = i + 1;
	}
	return ('\0');
}
