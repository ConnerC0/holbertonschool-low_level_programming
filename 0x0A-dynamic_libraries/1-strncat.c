#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - a function that concatenates two strings.
 * @dest: provided variable
 * @src: provided variable
 * @n: provided integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int d = strlen(dest);

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[d + a] = src[a];
	dest[d + a] = '\0';
	return (dest);
}
