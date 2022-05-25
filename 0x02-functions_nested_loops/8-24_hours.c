#include "main.h"
/**
 * jack_bauer - stuff
 *
 * Return: void
 */
void jack_bauer(void)
{
	char c;
	char n;

	for (c = 0; c < 24; c++)
	{
		for (n = 0; n <= 59; n++)
		{
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			_putchar(':');
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar('\n');
		}
	}
}
