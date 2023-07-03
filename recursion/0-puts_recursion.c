#include "main.h"

/**
 * _puts_recursion - A function that prints a string followed by a new line.
 *
 * @s: input array
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}
