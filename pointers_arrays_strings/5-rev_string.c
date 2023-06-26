#include "main.h"

/**
 * rev_string - A function that prints a string and then the reverse.
 *
 * @s: Input string
 *
 * Return: length of string
 */
void rev_string(char *s)
{
	int len;
	int swap1;
	int swap2;
	int temp;

	len = 0;
	while (s[len] != '\0')
	{
		len = len + 1;
	}
	swap1 = len - 1;
	swap2 = 0;
	while (swap2 < (len / 2))
	{
		temp = s[swap2];
		s[swap2] = s[swap1];
		s[swap1] = temp;
		swap1 = swap1 - 1;
		swap2 = swap2 + 1;
	}
}
