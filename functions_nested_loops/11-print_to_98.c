#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print numbers
 * @n: number check
 *
 * Return: Always number (succelss)
 */

void print_to_98(int n)

{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
	}
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
}
