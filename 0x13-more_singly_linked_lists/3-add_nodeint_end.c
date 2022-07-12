#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of listint_t
 * @head: double pointer to beginning of list
 * @n: int to add
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newadd, *tmp;

	if (head != NULL)
	{
		newadd = malloc(sizeof(listint_t));
		if (newadd == NULL)
			return (NULL);
		newadd->n = n;
		newadd->next = NULL;

		if (*head == NULL)
		{
			*head = newadd;
			return (*head);
		}
		else
		{
			tmp = *head;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = newadd;
			return (tmp);
		}
	}
	return (NULL);
}
