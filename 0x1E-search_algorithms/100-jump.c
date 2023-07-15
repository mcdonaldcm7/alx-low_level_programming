#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - Searches for a value in a sorted array of integers using the
 * Jump search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located
 */
int jump_search(int *array, unsigned int size, int value)
{
	unsigned int b, block, i;

	b = 0;
	block = sqrt(size);
	if (!array)
		return (-1);
	do {
		printf("Value checked array[%u] = [%d]\n", b, array[b]);
		b += block;
	} while (b < size && array[b] < value);

	printf("Value found between indexes [%u] and [%u]\n", b - block, b);
	for (i = b - block; i <= b && i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
