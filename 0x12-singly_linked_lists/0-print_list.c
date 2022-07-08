#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to beginning of list
 * Return: number of elements in list
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (temp)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
