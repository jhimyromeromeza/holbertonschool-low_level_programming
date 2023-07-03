#include "main.h"
/**
 * puts2 - putchar a char
 * @str: check pointers
 *
 * Return: Always (succelss)
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
