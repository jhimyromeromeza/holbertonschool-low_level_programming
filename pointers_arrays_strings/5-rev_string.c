#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse string
 * @s: check pointers
 *
 * Return: string reverses (succelss)
 */

void rev_string(char *s)

{
	int i, j;
	char momen;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		momen = s[i];
		s[i] = s[j];
		s[j] = momen;
	}
}
