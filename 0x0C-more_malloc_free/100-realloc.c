#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to old memory
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: Pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memblock;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	memblock = malloc(new_size);
	if (memblock == NULL)
		return (NULL);
	if (ptr == NULL)
		return (memblock);
	for (i = 0; i < old_size; i++)
	{
		((char *) memblock)[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (memblock);
}
