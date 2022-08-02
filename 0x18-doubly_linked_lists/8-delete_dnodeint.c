#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node from list at given index
 * @head: double ptr to head of list
 * @index: index of node to delete
 * Return: 1 on success -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	while (i < index)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
