#include "main.h"

/**
 * get_bit - returns value of a bit at given index
 * @n: num to check bits in
 * @index: index at which to check bit
 * Return: value of bit, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	check = n & div;
	if (check == div)
		return (1);
	return (0);
}
