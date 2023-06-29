#include "main.h"

/**
 * *_strstr - A function that locates a substring.
 *
 * @haystack: input string
 * @needle: input character
 *
 * Return: The substring that is being looked for.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	j = 0;
	while (needle[j] != '\0')
	{
		i = 0;
		while (haystack[i] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				return (&needle[j]);
			}
			i = i + 1;
		}
		j = j + 1;
	}
	return ('\0');
}
