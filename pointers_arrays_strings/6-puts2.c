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
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
