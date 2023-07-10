#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers and matriz
 * @separator: check pointers
 * @n: check pointers numbers
 *
 * Return: Always 0 (succelss)
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list numbers;
	unsigned int i;
	int resultado;

	va_start(numbers, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			resultado = va_arg(numbers, int);
			printf ("%d", resultado);
			if (i != n - 1)
			{
				printf ("%s", separator);
			}
		}
	}
	printf ("\n");
	va_end(numbers);
}
