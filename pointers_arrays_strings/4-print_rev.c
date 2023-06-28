#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - string reverse
 * @s: check pinters
 *
 * Return: Always reverse (succelss)
 */

void print_rev(char *s)

{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
