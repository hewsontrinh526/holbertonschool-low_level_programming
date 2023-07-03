#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string in reverse.
 *
 * @s: input array
 *
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[i]);
}
