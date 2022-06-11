#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: characters in string
 * Return: length of string
 */
int _strlen(char *s)
{
	int n = 0;

	while (*(s + n))
	{
		n++;
	}

	return (n);
}
