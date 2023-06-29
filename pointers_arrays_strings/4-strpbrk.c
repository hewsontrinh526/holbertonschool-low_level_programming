#include "main.h"

/**
 * *_strpbrk - A function that gets the length of a prefix substring.
 *
 * @s: input string
 * @accept: input character
 *
 * Return: The string that returns the rest of the string.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return ('\0');
}
