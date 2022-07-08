#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of the list
 * @head: original linked list
 * @str: string to add
 * Return: address of the new list or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}
	return (0);
}
