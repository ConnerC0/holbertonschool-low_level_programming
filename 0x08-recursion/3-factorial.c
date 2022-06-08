#include "main.h"
#include <stdio.h>

/**
 * factorial - returns factorial of given number
 * @n: given number
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n-1));
}
