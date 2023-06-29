#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring.
 *
 * @s: input string
 * @accept: input character
 *
 * Return: The number of bytes in s which only consist of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int byt;

	i = 0;
	byt = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				byt = byt + 1;
				break;
			}
			j = j + 1;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		i = i + 1;
	}
	return (byt);
}
