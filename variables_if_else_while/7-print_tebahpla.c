#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and reverse followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch = ch - 1;
	}
	putchar('\n');
	return (0);
}
