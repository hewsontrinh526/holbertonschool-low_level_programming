#include "main.h"

/**
 * sq_rt - A function that finds the square root of a number.
 *
 * @base: input int base
 * @root: input int power
 *
 * Return: root of a number
 */
int sq_rt(int base, int root)
{
	if (root * root == base)
	{
		return (root);
	}
	if (root * root > base)
	{
		return (-1);
	}
	return (sq_rt(base, root + 1));
}

/**
 * _sqrt_recursion - A function that returns the natural root of a
 * given number.
 *
 * @n: input integer
 *
 * Return: root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sq_rt(n, 1));
}
