#include <stdio.h>

/**
 * main - stuff goes here
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		else
		{
			c++;
		}
	}
	putchar('\n');
	return (0);
}