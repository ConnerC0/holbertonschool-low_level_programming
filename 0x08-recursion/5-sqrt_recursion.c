#include "main.h"
#include <stdio.h>

/**
 * sqrtguess - checks for sqrt
 * @n: number to check
 * @max: max guess
 * @min: min guess counting up
 * Return: correct guess
 */

int sqrtguess(int n, int min, int max)
{
	int guess, guess_squared;

	if (max < min)
		return (-1);
	guess = (min + max) / 2;
	guess_squared = guess * guess;

	if (guess_squared == n)
		return (guess);
	if (guess_squared < n)
		return (sqrtguess(n, guess + 1, max));
	return (sqrtguess(n, min, guess - 1));
}

/**
 * _sqrt_recursion - returns natural square root
 * @n: number to test
 * Return: sqrt or -1
 */

int _sqrt_recursion(int n)
{
	return (sqrtguess(n, 1, n));
}
