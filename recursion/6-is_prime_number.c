#include "main.h"
/**
 * is_prime_helper - helper function to check
 * @n: check pointers
 * @i: the current divisor check pointers
 *
 * Return: 1 if n is Always o (succelss)
 */

int is_prime_helper(int n, int i)

{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (is_prime_helper(n, i - 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the check pointers 2
 *
 * Return: 1 if n is prime,0 (succelss)
 */

int is_prime_number(int n)

{
	return (is_prime_helper(n, n / 2));
}

