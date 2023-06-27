#include "main.h"
#include <stdio.h>
/**
 * _strlen - length of a string
 * @s: check points
 *
 * Return: Always len (succelss)
 */

int _strlen(char *s)

{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	return (len);
}
