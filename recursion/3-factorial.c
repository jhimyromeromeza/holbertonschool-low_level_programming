#include "main.h"
#include <stdio.h>
/**
 * factorial - print factorial of a numeber
 * @n: numbers check
 *
 * Return: Always factorial (succelss)
 */

int factorial(int n)

{
	int resultado;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		resultado = n * factorial(n - 1);
		return (resultado);
	}
}
