#include <stdio.h>
#include "main.h"
/**
 * print_triangle - print space and triangle
 * @size: size of triangle
 *
 * Return: Always # (succelss)
 */

void print_triangle(int size)

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
				if (e <= size - i)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
