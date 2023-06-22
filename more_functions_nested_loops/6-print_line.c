#include "main.h"

/**
 * print_line - Prints the numbers from 0 to 9 except for 2 and 4.
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
