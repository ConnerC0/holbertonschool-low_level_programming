#include "main.h"
#include <stdio.h>

/**
 * print_square - function that prints squares.
 * @size: provided integer
 * Return: void
 */
void print_square(int size)
{
	int n, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
