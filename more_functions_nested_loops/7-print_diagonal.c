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
	int e;

	if (n <= 0)
	{
		_putchar('\n');
	}
	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (e = 1; e <= i; e++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
