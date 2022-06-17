#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: two strings concatenated or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *s;

	if (s1 == NULL)
		i = 0;
	if (s2 == NULL)
		j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;

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
