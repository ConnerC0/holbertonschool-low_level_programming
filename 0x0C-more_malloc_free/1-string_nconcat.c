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
	unsigned int i, l = n;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i ++)
		l++;
	s = malloc(sizeof(char) * (l + 1));
	if (s == NULL)
		return (NULL);
	l = 0;
	for (i = 0; s1[i]; i++)
		s[l++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		s[l++] = s2[i];
	s[l] = '\0';
	return (s);
}
