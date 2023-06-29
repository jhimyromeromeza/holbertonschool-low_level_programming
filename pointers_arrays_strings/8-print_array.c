#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of array
 * @a: check point array
 * @n: numbers of elements
 *
 * Return: Always n array (succelss)
 */

void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		else
			printf("\n");
	}
}
