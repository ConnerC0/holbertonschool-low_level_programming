#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concates two strings
 * @s1: frist string
 * @s2: second string
 * @n: number of bytes of s2 to copy
 * Return: pointer to newly allocated place in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		while (s1[i])
			i++;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		while (s2[j])
			j++;
	}

	if (j > n)
		j = n;
	l = i + j + 1;
	s = malloc(l * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
	return (s);
}
