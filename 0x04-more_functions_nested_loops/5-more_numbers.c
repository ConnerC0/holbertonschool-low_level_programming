#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 1-14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int i;
	char c;
	char s[] = "01234567891011121314\n";

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 21; i++)
		{
			c = s[i];
			_putchar(c);
		}
	}
}
