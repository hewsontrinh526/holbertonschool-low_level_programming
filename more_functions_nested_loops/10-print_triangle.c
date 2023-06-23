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
 * print_triangle - Writing a function that prints a triangle
 * , followed by a new line.
 *
 * @size: int input from user
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
	int current_line;
	int print_space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	current_line = 1;
	print_space = size - 1;
	while (current_line <= size)
	{
		if (size == 1)
		{
			print_char('#', size);
			_putchar('\n');
		}
		else
		{
			print_char(' ', print_space);
			print_char('#', current_line);
			_putchar('\n');
		}
		current_line = current_line + 1;
		print_space = print_space - 1;
	}
	size = size + 1;
}
