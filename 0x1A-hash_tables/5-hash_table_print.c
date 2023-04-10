#include "hash_tables.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: The hash table to print
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, i;
	hash_node_t *iter;
	bool printed;

	if (ht == (void *) 0)
		return;
	printed = false;
	size = ht->size;
	printf("{");
	for (i = 0; i < size; i++)
	{
		if (ht->array[i] != (void *) 0)
		{
			iter = ht->array[i];

			while (iter)
			{
				if (printed)
					printf(", ");
				printf("'%s': '%s'", iter->key, iter->value);
				iter = iter->next;
				printed = true;
			}
		}
	}
	printf("}\n");
}
