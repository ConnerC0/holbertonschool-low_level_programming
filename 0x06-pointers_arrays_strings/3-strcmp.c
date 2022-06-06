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
	int x = 0, y = 0, z = 0, max, result = 0;

	while (s1[x])
		x++;
	while (s2[y])
		y++;
	if (x <= y)
		max = x;
	else
		max = y;
	while (z <= max)
	{
		if (s1[z] == s2[z])
		{
			z++;
			continue;
		}
		else
		{
			result = s1[z] - s2[z];
			break;
		}
		z++;
	}
	return (result);
}

