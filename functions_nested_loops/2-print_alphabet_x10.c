#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - return for te veces
 *
 * Return: Always 0 (succelss)
 */

void print_alphabet_x10(void)

{
	int e;
	char i;

	for (e = 0; e < 10; e++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
