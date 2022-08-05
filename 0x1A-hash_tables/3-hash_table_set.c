#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update
 * @key: the key of a value
 * @value: value associated with key
 * Return: 1 on success 0 on fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL, *new = NULL;

	if (ht == NULL || key == NULL || (strcmp(key,"") == 0))
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	tmp = ht->array[index];
	if (tmp && strcmp(key, tmp->key) == 0)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
