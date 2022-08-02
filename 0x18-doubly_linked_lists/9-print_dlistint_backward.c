#include "lists.h"

/**
 * print_dlistint_backward - prints linked list backwards
 * @h: ptr to head of list
 * Return: num of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->next == NULL)
		{
			i++;
			break;
		}
		i++;
		h = h->next;
	}
	while (h)
	{
		printf("%i\n", h->n);
		h = h->prev;
	}
	return (i);
}
