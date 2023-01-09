#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates and array of chars, and initializes it with c
 *
 * @size: Size of array
 * @c: Character to initialize array
 *
 * Return: Pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	i = 0;
	array = (char*) malloc(size);
	if (array != NULL)
	{
		while (i < size)
		{
			array[i] = c;
			i++;
		}
	}
	return (array);
}
