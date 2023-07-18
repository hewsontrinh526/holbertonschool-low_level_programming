#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - A function that
 *
 * @argc: Number of arguments in the command line
 * @argv: Array of strings that contain
 *
 * Return: Returns the operator
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	res = get_op_func(argv[2])(num1, num2);

	printf("%d\n", res);

	return (0);
}
