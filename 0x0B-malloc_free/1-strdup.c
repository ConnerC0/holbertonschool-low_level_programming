#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that return s a pointer to a newly allocated space in mem
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: NULL or string
 */

char *_strdup(char *str)
{
	unsigned int i = 0, n = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (n = 0; n < i; n++)
		s[n] = str[n];
	return (s);
}
