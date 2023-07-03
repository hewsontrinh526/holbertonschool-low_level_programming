#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number.
 *
 * @n: input integer
 *
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
