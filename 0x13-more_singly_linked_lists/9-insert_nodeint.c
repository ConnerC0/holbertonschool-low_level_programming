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

	while (*head != NULL)
	{
		new = malloc(sizeof(listint_t));
		current = *head;
		new->n = n;

		if (idx == 0)
		{
			new->next = NULL;
			return (new);
		}
		while (current->next != NULL && idx - 1 > 0)
		{
			current = current->next;
			idx--;
		}
		if (current->next == NULL)
		{
			free(new);
			return (NULL);
		}
		new->next = current->next;
		current->next = new;
		return (new);
	}
	return (NULL);
}
