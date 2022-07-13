#include "main.h"

/**
 * set_bit - set value of bit to 1 at given index
 * @n: num to modify
 * @index: index in num to modify
 * Return: 1 if works -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	return ((*n |= 1 << index) ? 1 : -1);
}
