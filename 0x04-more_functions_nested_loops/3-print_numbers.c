#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints 1-9
 * Return: void
 */
void print_numbers(void)
{
	char s[] = "0123456789\n";
	char c;
	int i;

	for (i = 0; i <= 10; i++)
	{
		c = s[i];
		_putchar(c);
	}
}
