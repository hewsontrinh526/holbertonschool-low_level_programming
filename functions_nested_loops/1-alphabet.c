#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch = ch + 1;
	}
	_putchar('\n');
}
