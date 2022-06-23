#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: size
 * @cmp: compared function
 * Return: first index for which 0 or -1 isn't returned
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0 && array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
