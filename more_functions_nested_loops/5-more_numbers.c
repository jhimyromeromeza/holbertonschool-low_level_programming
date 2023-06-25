#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print numbers from 0 a 14
 *
 * Return: Always result (succelss)
 */

void more_numbers(void)

{
	int e;
	int i;

	for (e = 1; e <= 10; e++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
			_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
