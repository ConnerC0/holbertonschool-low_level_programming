#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes node at given position
 * @head: ptr to ptr of beginning of list
 * @index: unsigned int index position
 * Return: 1 if successful -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *next;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; tmp != NULL && i < index - 1; i++)
		tmp = tmp->next;
	if (tmp == NULL || tmp->next == NULL)
		return (-1);
	next = tmp->next->next;
	free(tmp->next);
	tmp->next = next;
	return (1);
}
