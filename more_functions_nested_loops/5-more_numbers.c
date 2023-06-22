#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14, 10 times.
 *
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int j;

	j = 0;
	while (j < 10)
	{
		i = 0;
		while (i <= 14)
		{
			if (i > 9 && i <= 14)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
			i = i + 1;
		}
		_putchar('\n');
		j = j + 1;
	}
}
