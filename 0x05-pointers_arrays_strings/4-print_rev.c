#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse followed by a new line.
 * @s: provided variable
 * Return: void
 */
void print_rev(char *s)
{
	int n = 0;

	while (*(s + n))
		n++;
	n = n - 1;
	while (n >= 0)
	{
		_putchar(*(s + n));
		n--;
	}
	_putchar('\n');
}
