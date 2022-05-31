#include "main.h"
#include <stdio.h>

/**
 * print_triangle - pritns a triangle onto the screen
 * @size: provided integer
 * Return: void
 */

void print_triangle(int size)
{
	int i, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (n = 1; n <= size; n++)
			{
				if (n <= (size - i))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
