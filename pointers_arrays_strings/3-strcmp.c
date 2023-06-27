#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 *
 * @s1: string input value
 * @s2: string input value
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0' && diff == 0)
	{
		diff = s1[i] - s2[i];
		i = i + 1;
	}
	return (diff);
}
