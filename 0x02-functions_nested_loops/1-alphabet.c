#include "main.h"

/**
 * print_alphabet - stuff
 *
 * Return: void
 */

void print_alphabet(void)
{
	int n = 0;
	char c;
	char s[] = "abcdefghijklmnopqrstuvwxyz\n";

	while (n <= 26)
	{
		c = s[n];
		_putchar(c);
		n++;
	}
}
