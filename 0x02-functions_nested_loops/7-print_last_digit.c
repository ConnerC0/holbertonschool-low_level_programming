#include "main.h"

/**
 * print_last_digit - stuff
 * @i: provided integer
 *
 * Return: i
 */
int print_last_digit(int i)
{
	i = i % 10;
	if (i > 0)
	{
	_putchar(i + '0');
	return (i);
	}
	else if (i <= 0)
	{
		i *= -1;
		_putchar(i + '0');
		return (i);
	}
	return (i);
}
