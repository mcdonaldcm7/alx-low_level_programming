#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer
 *
 * @array: Array with elements to look
 * @size: Number of elements in the array
 * @cmp: Pointer to the function to be used to compare values
 *
 * Return: Index of elements being searched for in array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
