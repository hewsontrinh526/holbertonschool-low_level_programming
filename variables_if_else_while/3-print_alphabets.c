#include <stdio.h>

/**
 * main - Prints the alphabet in uppercase then lowercase
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch = ch + 1;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH = CH + 1;
	}
	putchar('\n');
	return (0);
}
