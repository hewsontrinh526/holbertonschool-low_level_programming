#include "main.h"

/**
 * _atoi - A function that convert a string to an integer
 *
 * @s: buffer string to be copied to
 *
 * Return: length of string
 */
int _atoi(char *s)
{
	unsigned int n; /* current number required without sign*/
	int sign; /* sign infront of number */
	int i; /* string array position */

	n = 0;
	sign = 1;
	i = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		i = i + 1;
	}
	if (s[i] != '\0')
	{
		while (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + (s[i] - '0');
			i = i + 1;
		}
	}
	return (n * sign);
}
