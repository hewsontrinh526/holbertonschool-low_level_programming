#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, but q and e followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		putchar(ch);
		ch = ch + 1;
	}
	putchar('\n');
	return (0);
}
