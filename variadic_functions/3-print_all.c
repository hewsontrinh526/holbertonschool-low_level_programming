#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints char
 *
 * @args: string to be printed
 *
 * Return: Void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints int
 *
 * @args: string to be printed
 *
 * Return: Void
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_str - Prints string
 *
 * @args: string to be printed
 *
 * Return: Void
 */
void print_str(va_list args)
{
	char *str;

	str = va_arg(args, char*);

	str == NULL ? printf("(nil)") : printf("%s", str);
}

/**
 * print_float - Prints float
 *
 * @args: string to be printed
 *
 * Return: Void
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_all - A function that prints anything
 *
 * @format: Format of input string
 *
 * Return: Returns all strings, else 0
 */
void print_all(const char * const format, ...)
{
	int i;
	int j;
	va_list args;

	type prntz[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(args, format);

	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (prntz[j].ftype != NULL)
		{
			if (*prntz[j].ftype == format[i])
			{
				(prntz[j].f)(args);
				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
			}
			j = j + 1;
		}
		i = i + 1;
	}
	va_end(args);
	printf("\n");
}
