#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double ptr to head of list
 * @n: value to add to new node
 * Return: ptr to new node or NULL on fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	n = new->n;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->prev)
			tmp = tmp->prev;
		new->next = tmp;
		tmp->prev = new;
	}
	return (new);
}

