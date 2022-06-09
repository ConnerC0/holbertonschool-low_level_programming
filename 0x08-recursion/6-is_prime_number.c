#include "main.h"
#include <stdio.h>

/**
 * checker - checks if prime
 * @f: factor check
 * @n: possible prime
 * Return: true if prime, false if not.
 */

int checker(int n, int f)
{
	if (n < 2 || n % f == 0)
		return (0);
	if (f > n / 2)
		return (1);
	return (checker(f + 1, n));
}

/**
 * is_prime_number - states if prime
 * @n: number to check
 * Return: true if prime, false if not.
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (checker(n, 2));
}
