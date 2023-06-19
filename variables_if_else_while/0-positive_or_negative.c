#include <stdlib.h>
#include <time.h>
/**
 * main - Determines whether a randomly generated number is positive, negative
 * or 0
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative", n);

	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is positive", n);
	}
	return (0);
}
