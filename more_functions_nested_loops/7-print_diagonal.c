#include "main.h"

/**
 * print_char - Prints the number of spaces according to the current line.
 *
 * @to_print: Character to print
 * @number_of_times: Number of times to print character
 *
 * Return: Always 0
 */

void print_char(char to_print, int number_of_times)
{
	while (number_of_times > 0)
	{
		_putchar(to_print);
		number_of_times = number_of_times - 1;
	}
}

/**
 * end_diagonal - Prints a backlash and a new line.
 *
 * Return: Always 0
 */

void end_diagonal(void)
{
	_putchar('\\');
	_putchar('\n');
}

/**
 * print_diagonal - Writing a function that draws a diagonal line in
 * the terminal.
 *
 * @n: int input from user
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int current_line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	current_line = 0;
	while (current_line < n)
	{
		print_char(' ', current_line);
		end_diagonal();
		current_line = current_line + 1;
	}
}
