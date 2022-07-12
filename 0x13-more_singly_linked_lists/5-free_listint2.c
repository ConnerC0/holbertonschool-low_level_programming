#include "lists.h"

/**
 * free_listint2 - frees listint_t
 * @head: double ptr to beginning of list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			next = (*head)->next;
			free(*head);
			*head = next;
		}
	}
}
