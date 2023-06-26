#include <stdio.h>
#include "main.h"
/**
 * times_table - print table
 *
 * Return: Always 0 (succelss)
 */

void times_table(void)

{
	int i, e;
	int resultado;

	for (i = 0; i <= 9; i++)
	{
		for (e = 0; e <= 9; e++)
		{
			resultado = i * e;
			if (e != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (resultado >= 10)
			{
				_putchar(resultado / 10 + '0');
				_putchar(resultado % 10 + '0');
			}
			else
			{
				if (e != 0)
					_putchar(' ');
				_putchar(resultado + '0');
			}
		}
		_putchar('\n');
	}
}
