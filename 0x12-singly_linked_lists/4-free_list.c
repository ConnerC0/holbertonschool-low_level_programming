#include "lists.h"

/**
 * free_list - frees the list
 * @head: node to be free'd
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
