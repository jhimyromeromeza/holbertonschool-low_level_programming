#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - print string reverse
 * @s: check pointers
 *
 * Return: Always string reverse (succelss)
 */

void _print_rev_recursion(char *s)

{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
