#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char ch = 'a';

	while (i < 10)
	{
		putchar('0' + i);
		i = i + 1;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch = ch + 1;
	}
	putchar('\n');
	return (0);
}
