#include "lists.h"

/**
 * get_nodeint_at_index - returns indexxed node of listint_t
 * @head: ptr to beginning of list
 * @index: index of node to return
 * Return: ptr to the indexxed node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
