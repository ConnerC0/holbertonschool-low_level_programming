#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string followed by a new line.
 * @str: provided variable
 * Return: void
 */
void puts_half(char *str)
{
	int i, n = 0;

	while (*(str + n))
		n++;
	i = n / 2;
	if (n % 2)
		i = i + 1;
	while (i < n)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
