#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/**
 * print_char - print char
 * @operation: arguments
 */

void print_char(va_list operation)
{
	printf("%c", va_arg(operation, int));
}

/**
 * print_int - print float
 * @operation: arguments
 */
void print_int(va_list operation)
{
	printf("%d", va_arg(operation, int));
}

/**
 * print_float - print float
 * @operation: arguments float
 */
void print_float(va_list operation)
{
	printf("%f", va_arg(operation, double));
}

/**
 * print_string - print string
 * @operation: arguments string
 */
void print_string(va_list operation)
{
	char *string = va_arg(operation, char *);

	if (string == NULL)
	{
		string = "(nil)";
	}
	printf("%s", string);
}

/**
 * print_all - print anything parameter
 * @format: types de format
 *
 * Return: list (succelss)
 */
void print_all(const char * const format, ...)
{
	va_list operation;
	int i = 0;
	int star = 1;

	print_t value[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};
	va_start(operation, format);
	while (format && format[i])
	{
		int j = 0;

		while (value[j].c)
		{
			if (format[i] == value[j].c)
			{
				printf("%s", star ? "" : ", ");
				value[j].f(operation);
				star = 0;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(operation);
}
