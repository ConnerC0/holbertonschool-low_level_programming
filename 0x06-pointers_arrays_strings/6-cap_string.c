#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - capitalizes first letter of every word in string.
 * @str: provided variable
 * Return: str
 */

char *cap_string(char *str)
{
	int l = 0;
	int i;
	l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if (i == 0 || i == (l - 1))
			str[i] = toupper(str[i]);
		else if (str[i] == ' ')
			str[i + 1] = toupper(str[i + 1]);
		else if (str[i] == '.')
			str[i + 1] = toupper(str[i + 1]);
	}
	return (str);
}
