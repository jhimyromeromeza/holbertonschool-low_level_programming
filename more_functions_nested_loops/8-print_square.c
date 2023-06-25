#include <stdio.h>
#include "main.h"
/**
 * print_square - print square
 * @size: square
 *
 * Return: Always square (succelss)
 */

void print_square(int size)

{
	int i, e;

	if (size <= 0)
	{
		_putchar('\n');
	}
	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (e = 1; e <= size; e++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
