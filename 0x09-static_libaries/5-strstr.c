#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds first occurrence of substring needle in the string haystack.
 * @haystack: provided variable
 * @needle: provided variable
 * Return: needle
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; *haystack; haystack++)
	{
		for (i = 0; needle[i]; i++)
		{
			if (!(*(haystack + i)))
				return (NULL);
			if (*(haystack + i) != needle[i])
				break;
		}
		if (needle[i] == '\0')
			return (haystack);
	}
	return (NULL);
}
