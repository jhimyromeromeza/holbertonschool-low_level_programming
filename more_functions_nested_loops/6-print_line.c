#include <stdio.h>
#include "main.h"
/**
 * print_line - print diagonal
 * @n: number de veces
 *
 * Return: Alwayas diagonal (succelss)
 */

void print_line(int n)

{
	int i;

	if (n < 1)
	{
		_putchar('\n');
	}
	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
