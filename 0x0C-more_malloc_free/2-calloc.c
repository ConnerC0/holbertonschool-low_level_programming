#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements in array
 * @size: size in bytes of elements
 * Return: void pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i, l;

	l = nmemb * size;

	if (l == 0)
		return (NULL);
	m = malloc(l);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		m[i] = 0;
	return (m);
}
