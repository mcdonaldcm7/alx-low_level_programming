#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: size of bytes each
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
	{
		((char *) array)[i] = 0;
	}
	return (array);
}
