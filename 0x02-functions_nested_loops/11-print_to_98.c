#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - stff
 * @n: variable
 *
 * Retrun: numbers
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");
}
