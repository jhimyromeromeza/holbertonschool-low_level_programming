#include "main.h"
#include <stdio.h>
/**
 * puts_half - print half of string followe by a new line
 * @str: check pointers
 *
 * Return: Always result (succelss)
 */

void puts_half(char *str)

{
	int i, e;
	int len = 0;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		e = len / 2;
	else
		e = (len + 1) / 2;

	for (i = e; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
