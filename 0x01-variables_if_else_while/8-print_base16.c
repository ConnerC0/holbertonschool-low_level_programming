#include <stdio.h>

/**
 * main - stuff goes here
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	for (i = 10; i < 16; i++)
	{
	if ((i > 9) && (i < 16))
	{
		for (i = 'a'; i <= 'f'; i++)
			putchar(i);
	}
	}
	putchar('\n');
	return (0);
}
