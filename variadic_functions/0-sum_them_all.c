#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - value pass
 * @n: check pointers
 *
 * Return: Always var_list (succelss)
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list suma;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(suma, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(suma, int);
	}
	va_end(suma);
	return (sum);
}


