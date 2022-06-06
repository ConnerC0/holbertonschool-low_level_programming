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
	int i = 5, x = 0, y = 0;
	char a[5] = {'a', 'e', 'o', 't', 'l'};
	char b[5] = {'4', '3', '0', '7', '1'};

	while (str[x])
	{
		y = 0;

		while (y < i)
		{
			if (str[x] == a[y] || str[x] + 32 == a[y])
				str[x] = b[y];
			y++;
		}
		x++;
	}
	return (str);
}
