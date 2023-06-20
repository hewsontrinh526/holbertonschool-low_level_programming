#include "main.h"

/**
 * _isalpha - Checks for lowercase characters.
 *
 * @c: char input from user.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122)||(c >= 65 && c<= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
