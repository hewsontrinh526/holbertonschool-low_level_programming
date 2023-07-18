#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds two integers together
 *
 * @a: Input integer
 * @b: Input integer
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two integers from one another
 *
 * @a: Input integer
 * @b: Input integer
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiples two integers together
 *
 * @a: Input integer
 * @b: Input integer
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers together
 *
 * @a: Input integer
 * @b: Input integer
 *
 * Return: Quotient of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Finds the remainder from the result of division
 * of two integers
 *
 * @a: Input integer
 * @b: Input integer
 *
 * Return: Remainder of a divided by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
