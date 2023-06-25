#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: number de veces
 *
 * Return: Alwayas diagonal (succelss)
 */

void print_diagonal(int n)

{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
