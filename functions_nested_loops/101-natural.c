#include "main.h"
#include <stdio.h>
/**
 * main - banth main number 3 or 5
 *
 * Return: Always 0 (succelss)
 */

int main(void)

{
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			printf("%d", i);
		else if (i % 5 == 0)
			printf("%d", i);
	}
	printf("\n");
	return (0);
}
