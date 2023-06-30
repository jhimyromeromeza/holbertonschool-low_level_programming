#include "main.h"
#include <stdio.h>

int find_root(int n, int i);

/**
 * _sqrt_recursion - main of number
 * @n: number check
 *
 * Return: Always result (succelss)
 */

int _sqrt_recursion(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	return (find_root(n, 0));
}
/**
 * find_root - finds the natural square root of a number
 * @n: number to calculate the square root of
 * @i: counter
 *
 * Return: the natural square root of n, or -1
 */

int find_root(int n, int i)

{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (find_root(n, i + 1));
}
