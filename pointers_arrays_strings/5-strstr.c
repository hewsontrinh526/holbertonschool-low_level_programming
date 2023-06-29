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

	i = 0;
	if (needle[i] == 0)
	{
		return (haystack);
	}
	while (haystack[i] != '\0')
	{
		while (haystack[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
			{
				return (haystack);
			}
			i = i + 1;
		}
		haystack = haystack + 1;
	}
	return ('\0');
}
