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
		for (d = 1; d <= n; d++)
		{
			for (i = 1; i <= n; i++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
