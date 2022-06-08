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
	do
	{
		if (haystack == needle)
			return (haystack);
	}
	while (haystack ++);
	return (0);
}
