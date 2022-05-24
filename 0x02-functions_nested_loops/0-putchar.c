#include "main.h"

/**
 * main - stuff
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	char c;
	char s[] = "_putchar\n";

	for (n = 0; n <= 8; n++)
	{
		c = s[n];
		_putchar(c);
	}
	return (0);
}
