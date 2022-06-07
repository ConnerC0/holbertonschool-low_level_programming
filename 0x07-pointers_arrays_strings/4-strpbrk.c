#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: provided variable
 * @accept: provided variable
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, p, f = 0;

	for (i = 0; s[i] != '\0'; i++)
		p = i;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= p)
				{
					p = j;
					f = 1;
				}
			}
		}
	}
	if (f == 1)
		return (&s[p]);
	else
		return (NULL);
}
