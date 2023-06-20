#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int ch;
	int j = 0;

	while (j < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch = ch + 1;
		}
		_putchar('\n');
		j = j + 1;
	}
}
