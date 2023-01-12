#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory of size b
 *
 * @b: Size to allocate
 *
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *tmp;

	tmp = malloc(b);

	if (tmp == NULL)
		exit(98);
	return (tmp);
}
