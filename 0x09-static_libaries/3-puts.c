#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string and new line to stdout
 * @str: provided variable
 * Return: void
 */
void _puts(char *str)
{
	int n = 0;

	while (*(str + n))
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
