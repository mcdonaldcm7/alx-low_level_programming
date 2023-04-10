#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table
 *
 * @ht: The hash table to delete
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, i;
	hash_node_t *iter, *del;

	if (ht == (void *) 0)
		return;
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		if (ht->array[i] != (void *) 0)
		{
			iter = ht->array[i];

			while (iter)
			{
				del = iter;
				iter = iter->next;
				free(del->key);
				free(del->value);
				free(del);
			}
		}
	}
	free(ht->array);
	free(ht);
}
