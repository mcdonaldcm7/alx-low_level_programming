#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an arrar of integers
 *
 * @min: minimum value to initialize array with
 * @max: maximum value to initialize array with
 *
 * Return: Pointer to array
 */
int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof *array * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
