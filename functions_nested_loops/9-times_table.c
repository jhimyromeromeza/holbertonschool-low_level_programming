#include <stdio.h>
#include "main.h"
/**
 * times_table - print table
 *
 * Return: Always 0 (succelss)
 */

void times_table(void)

{
	int i, e;
	int resultado;

	for (i = 0; i <= 9; i++)
		for (e = 0; e <= 9; e++)
		{
			resultado = i * e;
			printf("%d", resultado);
			if (e != 9)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
}
