#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - function that draws a diagonal line
 * @n: provided integer
 * Return: void
 */

void print_diagonal(int n)
{
	int i, d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 0; d < n; d++)
		{
			for (i = 0; i < d; i++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
