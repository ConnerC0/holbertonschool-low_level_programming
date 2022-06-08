#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diag in arrays
 * @a: provided variable
 * @size: provided variable
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int b = 0;
	int c = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
			b += a[i];
		if (i % (size - 1) == 0 && (i > 0 && (i < (size * size - 1))))
			c += a[i];
	}
	printf("%d, %d\n", b, c);
}
