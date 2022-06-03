#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements into array
 * @a: provided variable
 * @n: provided integer
 * Return: void
 */
void print_array(int *a, int n)
{
	int b = 0;

	while (b < n)
	{
		printf("%d", a[b]);
		if (b < (n - 1))
			printf(", ");
		b++;
	}
	_putchar('\n');
}
