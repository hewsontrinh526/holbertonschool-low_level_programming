#include "main.h"

/**
 * _isdigit - Checks for digits.
 *
 * @c: char input from user.
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
