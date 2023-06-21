#include "main.h"

/**
 * times_table - Adds two integers and returns result
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int x = 0;
	int y = 0;
	int z;

	while (x < 10)
	{
		while (y < 10)
		{
			_putchar(' ');
			z = x * y;
			if (z < 10)
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			if (y != 9)
			{
				_putchar(',');
			}
			y = y + 1;
		}
		_putchar('\n');
		x = x + 1;
		y = 0;
	}
}
