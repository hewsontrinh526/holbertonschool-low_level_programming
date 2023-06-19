#include <stdio.h>

/**
 * main - Prints all single digit number of base 10 starting from 0
 * as a character, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
