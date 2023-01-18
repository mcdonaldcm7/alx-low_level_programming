#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function given as a parameter on each element of an array
 *
 * @array: Input array
 * @size: Size of the array
 * @action: Pointer to the function you need to use
 *
 * Return: Nothing
 */
void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;

	if (size <= 0 || array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
