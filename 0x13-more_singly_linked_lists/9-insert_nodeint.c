#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: ptr to ptr of beginning of list
 * @idx: unsigned int index position
 * @n: int data
 * Return: address of new element or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *head;
		for (i = 0; i < idx -  1 && current != NULL; i++)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
