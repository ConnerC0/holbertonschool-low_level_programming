#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_array - a function that reverses the contents of an array.
 * @a: provided int
 * @n: provided int
 * Return: a
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
