#include "lists.h"

/**
 * get_dnodeint_at_index - finds node at index
 * @head: ptr to head of list
 * @index: index of node
 * Return: indexxed node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	i = 0;
	current = head;

	while (i != index)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		i++;
	}
	return (current);
}
