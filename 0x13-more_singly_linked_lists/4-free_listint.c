#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: pointer to beginning of list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
