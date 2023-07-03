#include "main.h"

/**
 * prime_calc - A function that determines whether a number if a
 * prime number or not.
 *
 * @x: same number as n
 * @y: number that iterates to detemines the prime nmumber
 *
 * Return: prime number
 */
int prime_calc(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	return (prime_calc(x, y + 1));
}

/**
 * is_prime_number - A function that returns 1 if the input integer
 * is prime number, otherwise return 0.
 *
 * @n: input int base
 *
 * Return: prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_calc(n, 2));
}
