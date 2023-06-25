#include <stdio.h>
#include "main.h"
/**
 * print_numbers - print number from 1 a 9
 *
 * Return: Always 0 (succelss)
 */

void print_numbers(void)

{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
