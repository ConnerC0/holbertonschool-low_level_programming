#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: first num
 * @max: last num
 * Return: pointer or NULL
 */

int *array_range(int min, int max)
{
	int *a, i, s;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	a = malloc(sizeof(int) * s);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		a[i] = min++;
	return (a);
}
