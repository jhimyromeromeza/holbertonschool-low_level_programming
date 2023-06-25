#include <stdio.h>
#include "main.h"
/**
 * _isupper - look uppercase and lowercase
 * @c: alphabet
 *
 * Return: Always 0 or 1 (succelss)
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	return (0);
}
