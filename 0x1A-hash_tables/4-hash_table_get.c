#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value of key
 * @ht: table to retrieve
 * @key: value to find
 * Return: value of key or NULL if fail
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int keyindex;
	hash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	keyindex = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[keyindex];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
