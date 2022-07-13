#include "main.h"

/**
 * print_binary - prints the binary of a num
 * @n: num to print in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	_divide(n);
}

/**
 * _divide - recursive function to turn number into binary
 * @n: number to be turned into binary
 * Return: void
 */

void _divide(unsigned long int n)
{
	if (n < 1)
		return;
	_divide(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
