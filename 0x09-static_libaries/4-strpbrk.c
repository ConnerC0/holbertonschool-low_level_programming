#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: provided variable
 * @accept: provided variable
 * Return: s + n or 0
 */

char *_strpbrk(char *s, char *accept)
{
	int n, m;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[n] == accept[m])
				break;
		}
		if (accept[m])
			return (s + n);
	}
	return (0);
}
