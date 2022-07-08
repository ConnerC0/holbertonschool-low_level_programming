#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to beginning of list
 * Return: number of elements in list
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *temp;

	temp = h;
	while (temp)
	{
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
	return (i);
}
