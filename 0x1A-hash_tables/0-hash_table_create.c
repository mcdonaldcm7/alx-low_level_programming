#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table - Creates a hash_table
 *
 * @size: The size of the array
 *
 * Return: Pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t *arr;

	table = malloc(sizeof(*table));
	if (table == (void *) 0)
		return (table);
	table->size = size;
	arr = malloc(sizeof(*arr) * size);
	if (arr == (void *) 0)
		return ((void *) 0);
	table->array = &arr;
	return (table);
}
