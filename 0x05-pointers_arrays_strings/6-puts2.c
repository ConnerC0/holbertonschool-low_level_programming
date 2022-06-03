#include "main.h"
#include <stdio.h>

/**
 * puts2 - print every 2 characters
 * @str: provided variable
 * Return: void
 */
void puts2(char *str)
{
	int n = 0;

	while (*(str + n); n <= 224)
	{
		_putchar(*(str + n));
		n = n + 2;
	}
	_putchar('\n');
}
