#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns value of x raised to pow of y
 * @x: base num
 * @y: pow num
 * Return: sum
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
