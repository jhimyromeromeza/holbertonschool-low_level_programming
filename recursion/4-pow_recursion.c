#include <math.h>
#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - power of a number
 * @x: number check
 * @y: number check
 *
 * Return: pow of number (succelss)
 */

int _pow_recursion(int x, int y)

{
	int potencia;

	if (y < 0)
	{
		return (-1);
	}
	if (x == 0 || y == 0)
	{
		return (1);
	}
	else
	{
		potencia = x * _pow_recursion(x, y - 1);
		return (potencia);
	}
}
