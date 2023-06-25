#include <stdio.h>
#include "main.h"
/**
 * _isdigit - look if is digit
 * @c: digit and number
 *
 * Return: Always 0 (succels)
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
