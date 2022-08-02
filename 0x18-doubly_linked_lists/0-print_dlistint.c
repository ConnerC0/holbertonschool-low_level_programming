#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: ptr to head of list
 * Return: num of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}
