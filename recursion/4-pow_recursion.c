#include "main.h"

/**
 * _pow_recursion - A function that returns the length of a string.
 *
 * @x: input int base
 * @y: input int power
 *
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
