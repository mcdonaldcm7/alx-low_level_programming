#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 *
 * @ht: The hash table you want to look into
 * @key: The key you are looking for
 *
 * Return: Value associated with the element, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t **at_index, *iter;

	if (ht == (void *) 0 || key == (void *) 0 || _strlen(key) == 0)
		return ((void *) 0);
	index = key_index((unsigned char *) key, ht->size);
	at_index = &ht->array[index];
	if (*at_index == (void *) 0)
		return ((void *) 0);
	iter = *at_index;

	while (iter)
	{
		if (_strcmp(iter->key, key) == 0)
		{
			return (iter->value);
		}
		iter = iter->next;
	}
	return ((void *) 0);
}
