#include "lists.h"

/**
 * pop_listint - deletes head node of linstint_t
 * @head: double ptr to beginning of list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *beginning;
	int n = 0;

	if (head == NULL || *head == NULL)
		return (n);
	beginning = *head;
	*head = beginning->next;
	n = beginning->n;
	free(beginning);
	return (n);
}

