#include "main.h"

/**
 * times_table -stuff
 *
 * Return: void
 */

void times_table(void)
{
	int r;
	int i;

	for (r = 0; r <= 9; r++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (i == 0)
				_putchar(i + '0');
			else if (i * r <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(i * r + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((i * r) / 10 + '0');
				_putchar((i * r) % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
