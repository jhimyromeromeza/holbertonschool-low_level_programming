#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - immprimir caracteres
 * @str: check pinters
 *
 * Return: numbers (succelss)
 */

void puts2(char *str)

{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
