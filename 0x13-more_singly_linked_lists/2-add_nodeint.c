#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t
 * @head: double pointer to begnning of listint_t
 * @n: int to add
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newadd;

	if (head != NULL)
	{
		newadd = malloc(sizeof(listint_t));
		if (newadd == NULL)
			return (NULL);

		newadd->n = n;
		newadd->next = *head;
		*head = newadd;

		return (newadd);
	}
	return (NULL);
}
