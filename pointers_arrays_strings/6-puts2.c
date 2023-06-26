#include "main.h"

/**
 * puts2 - A function that prints every other character of a string, starting
 * with the first character, followed by a new line.
 *
 * @atr: Input string
 *
 * Return: length of string
 */
void puts2(char *str)
{
	int i;
	int len;

	len = 0;
	while (str[len])
	{
		len = len + 1;
	}

	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
