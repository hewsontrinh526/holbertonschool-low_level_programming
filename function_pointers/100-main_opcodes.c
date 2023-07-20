#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * main - Prints opcodes of the main function
 *
 * @argc: Number of argument in the command line
 * @argv: Array of strings that contain the arguments
 *
 * Return: Opcodes, else error.
 */
int main(int argc, char *argv[])
{
	int byt;
	int i;
	char *prntz_op;

	prntz_op = (char *)main;

	i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < byt)
	{
		printf("%02x", prntz_op[i] & 0xFF);
		if (i < byt - 1)
		{
			printf(" ");
		}
		i = i + 1;
	}
	printf("\n");
	return (0);
}
