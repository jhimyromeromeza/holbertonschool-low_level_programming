#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - look alphabet c and C.
 * @c: variable check
 *
 * Return: Alwaya 0 and 1 (succelss)
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
