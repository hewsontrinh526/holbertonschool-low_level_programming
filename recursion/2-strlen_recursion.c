#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string.
 *
 * @s: input array
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
