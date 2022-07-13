#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at given index
 * @n: num to modify
 * @index: index in num to modify
 * Return: 1 if works -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}
	return (-1);
}
