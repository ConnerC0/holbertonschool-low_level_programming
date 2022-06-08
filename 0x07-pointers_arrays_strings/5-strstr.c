#include "main.h"
#include <stdio.h>

/**
 * _strstr - funtion finds the first occurrence of the substring needle in the string haystack.
 * @haystack: provided variable
 * @needle: provided variable
 * Return: needle
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[i])
		{
			for (i = 0; needle[i] != '\0'; i++)
			{
				return (needle);
			}
		}
	}
	return (0);
}
