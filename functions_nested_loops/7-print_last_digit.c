#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - print last digit
 * @r: int check
 *
 * Return: Always number (succelss)
 */

int print_last_digit(int r)

{
	int lastdigit = r % 10;

	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
	}
	return (lastdigit);
}
