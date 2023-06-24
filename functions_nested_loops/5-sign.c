#include "main.h"
#include <stdio.h>
/**
 * print_sign - return + and - or 0.
 * @n: numbre check
 *
 * Return: Always 0 or 1 (succelss)
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
