#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - a function that compares two strings.
 * @s1: provided variable
 * @s2: provided variable
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int a = strlen(s1);
	int b = strlen(s2);

	if (a > b)
		return (15);
	else if (b > a)
		return (-15);
	else if (a == b)
		return (0);
	return (0);
}

