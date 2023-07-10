#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings pass for parameter
 * @separator: separador
 * @n: check pointers
 *
 * Return: Always result (succelss)
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list print;
	unsigned int i;
	char *resultado;

	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		resultado = va_arg(print, char*);
		if (resultado == NULL)
		{
			printf("nil");
		}
		else
		{	
			printf("%s", resultado);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print);
}
