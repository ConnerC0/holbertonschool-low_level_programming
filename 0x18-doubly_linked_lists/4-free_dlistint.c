#include "lists.h"

/**
 * free_dlistint - free dlistint_t list
 * @head: ptr to head of list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
