#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 *
 * @a: int input a
 * @b: int input b
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
