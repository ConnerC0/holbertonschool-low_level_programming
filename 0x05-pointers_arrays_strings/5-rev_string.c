#include "main.h"
#include <stdio.h>

/**
 * rev_string - print a string in reverse
 * @s: provided variable
 * Return: void
 */
void rev_string(char *s)
{
	int n = 0, i = 0;
	char c[2000];

	while (*(s + n))
	{
		*(c + n) = *(s + n);
		n++;
	}
	n = n - 1;
	while (n >= 0)
	{
		*(s + n) = *(c + i);
		i++;
		n--;
	}
}
