#include "main.h"
#include <stdio.h>

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: provided variable
 * @b: provided variable
 * @n: provided integer
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
