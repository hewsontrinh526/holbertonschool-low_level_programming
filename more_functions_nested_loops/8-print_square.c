#include "main.h"

/**
 * print_char - Prints the number of a specific character
 * according to the current line.
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
 * print_square - Writing a function that draws a diagonal line in
 * the terminal.
 *
 * @size: int size input from user
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int total_lines;

	if (size <= 0)
	{
		_putchar('\n');
	}
	total_lines = 0;
	while (total_lines < size)
	{
		print_char('#', size);
		_putchar('\n');
		total_lines = total_lines + 1;
	}
}
