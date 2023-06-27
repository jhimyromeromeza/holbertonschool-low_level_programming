#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps of numbers pointers
 * @a: pointers check
 * @b: pointers check
 *
 * Return: Always changer of numbers (succelss)
 */
void swap_int(int *a, int *b)

{
	int almacen = *a;

	*a = *b;
	*b = almacen;
}

