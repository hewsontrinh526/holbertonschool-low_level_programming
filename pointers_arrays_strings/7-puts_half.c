#include "main.h"

/**
 * puts_half - A function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: Input string
 *
 * Return: length of string
 */
void puts_half(char *str)
{
	int i;
	int len;

	len = 0;
	while (str[len])
	{
		len = len + 1;
	}

	i = (len + 1) / 2;
	while (i < len)
	{
		_putchar(str[i]);
		i = i + 1;
	}
	_putchar('\n');
}
