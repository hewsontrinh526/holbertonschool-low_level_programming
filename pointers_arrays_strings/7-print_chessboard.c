#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 *
 * @a: input character
 *
 * Return: Prints the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j = j + 1;
		}
		_putchar('\n');
		i = i + 1;
		j = 0;
	}
}
