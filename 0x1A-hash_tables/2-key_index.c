#include "hash_tables.h"

/**
 * key_index - finds index of given key in hash table
 * @key: given key
 * @size: size of hash table
 * Return: index of given key in hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
