#include "main.h"
#include <stdio.h>

/**
 * _memcpy - a function that copies memory area.
 * @dest: provided variable
 * @src: provided variable
 * @n: provided integer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *srcchar = (char *)src;
	char *destchar = (char *)dest;

	for (i = 0; i < n; i++)
		destchar[i] = srcchar[i];
	return (dest);
}
