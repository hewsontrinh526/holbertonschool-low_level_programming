#include <stdio.h>

/**
 * main - Prints the alphabet in uppercase then lowercase, in a new line
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch = ch + 1;
	}
	putchar('\n');
	return (0);
}
