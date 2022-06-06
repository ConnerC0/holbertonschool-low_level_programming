#include "main.h"
#include <stdio.h>

/**
 * string_toupper - converts all lowercase to uppercase in string.
 * @*: provided variable
 * return: *
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
