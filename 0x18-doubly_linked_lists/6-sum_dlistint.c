#include "lists.h"

/**
 * sum_dlistint - sum of all nodes in linked list
 * @head: head of linked list
 * Return: sum of all nodes
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head)
	{
		while (current)
		{
			sum += current->n;
			current = current->next;
		}
	}
	return (sum);
}
