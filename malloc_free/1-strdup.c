#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter..
 *
 * @str: str to be duplicated
 *
 * Return: NULL if str = NULL, string duplicated if successful
 */
char *_strdup(char *str)
{
	int i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		i = i + 1;
	}

	dup = malloc(i + 1);
	i = 0;

	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i = i + 1;
	}
	dup[i] = '\0';
	return (dup);
	free(dup);
}
