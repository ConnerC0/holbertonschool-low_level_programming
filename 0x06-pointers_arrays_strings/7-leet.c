#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * leet - changes string to 1337.
 * @str: provided variable
 * Return: str
 */

char *leet(char *str)
{
	int i;
	int l = 0;

	l = strlen(str);
	for (i = 0; i < l; i++)
	{
		if (str[i] == 'A' || str[i] == 'a')
			str[i] = '4';
		else if (str[i] == 'E' || str[i] == 'e')
			str[i] = '3';
		else if (str[i] == 'O' || str[i] == 'o')
			str[i] = '0';
		else if (str[i] == 'T' || str[i] == 't')
			str[i] = '7';
		else if (str[i] == 'L' || str[i] == 'l')
			str[i] = '1';
	}
	return (str);
}
