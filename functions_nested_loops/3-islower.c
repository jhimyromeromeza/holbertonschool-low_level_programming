#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - print 1 o 0 si se encuentra c
 * @c: parametro check
 *
 * Return: Always 1 o 0 (succelss)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
