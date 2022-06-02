#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the values of two integers
 * @a: provided integer
 * @b: provided integer
 * REturn: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
