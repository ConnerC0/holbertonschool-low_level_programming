#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - a function that concatenates two strings
 * @dest: provided variable
 * @src: provided variable
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int d = strlen(dest);

	for (a = 0; src[a] != '\0'; a++)
		dest[d + a] = src[a];
	dest[d + a] = '\0';
	return (dest);
}
