#include "main.h"

/**
 * main - stuff
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 0;
	char c;
	char s[] = "_putchar\n";

	while (n <= 9)
	{
		c = s[n];
		_putchar(c);
		n++;
	}
	return (0);
}
