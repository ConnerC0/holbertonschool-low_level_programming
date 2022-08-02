#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double ptr to head of list
 * @n: value to add to new node
 * Return: ptr to new node or NULL on fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	n = new->n;
	if (*head != NULL)
	{
		new->next = *head;
		new->prev = *head->prev;
		*head->prev = new;
		*head = new;
		return (*head);
	}
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}

