#include "main.h"

/**
 * *leet - A function that encodes a string into 1337.
 *
 * @s: input string
 *
 * Return: 0
 */
char *leet(char *s)
{
	int i;
	int j;
	char alpha[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int num[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (s[i] == alpha[j])
			{
				s[i] = num[j];
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (s);
}
