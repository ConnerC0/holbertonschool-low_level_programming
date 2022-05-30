#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints 1-9 excluding 2 and 4
 * return: void
 */
void print_most_numbers(void)
{
	char s[] = "01356789\n";
	char c;
	int i;

	for (i = 0; i <= 8; i++)
	{
		c = s[i];
		_putchar(c);
	}
}
