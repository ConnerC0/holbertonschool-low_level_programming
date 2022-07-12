#include "lists.h"

/**
 * sum_listint - returns the same of all data of listint_t
 * @head: ptr to beginning of listint_t
 * Return: sum of all data of listint_t
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
