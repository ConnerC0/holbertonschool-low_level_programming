#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes node at given position
 * @head: ptr to ptr of beginning of list
 * @index: unsigned int index position
 * Return: 1 if successful -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *nxt;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->nxt;
		free(tmp);
		return (1);
	}
	for (i = 0; tmp != NULL && i < index - 1; i++)
		tmp = tmp->nxt;
	if (tmp == NULL || tmp->nxt == NULL)
		return (-1);
	nxt = tmp->nxt->nxt;
	free(tmp->nxt);
	tmp->nxt = nxt;
	return (1);
}
