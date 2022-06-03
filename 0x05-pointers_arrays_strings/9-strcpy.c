#include "main.h"
#include <stdio.h>

/**
 * _strcpy - does stuff
 * @src: provided variable
 * @dest: provided variable
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (*(src + n))
	{
		*(dest + n) = *(src + n);
		n++;
	}
	*(dest + n) = '\0';
	return (dest);
}
