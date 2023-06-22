#include "main.h"

/**
 * print_line - Writing a function that draws a straight line in the terminal.
 *
 * @n: int input from user
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int l;

	l = 0;
	if (n > 0)
	{
		while (l <= n)
		{
			_putchar('_');
			l = l + 1;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
