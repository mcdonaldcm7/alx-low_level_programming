#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located, -1 Otherwise
 */
int interpolation_search(int *array, unsigned int size, int value)
{
	unsigned int low, high, mid;

	low = 0;
	high = size - 1;
	if (!array)
		return (-1);
	while ((array[high] != array[low]) && (value >= array[low]) &&
				(value <= array[high]))
	{
		mid = low +
			(((double)(high - low) /
			  (array[high] - array[low])) *
			 (value - array[low]));
		if (array[mid] < value)
		{
			printf("Value checked array[%u] = [%d]\n",
					mid, array[mid]);
			low = mid + 1;
		} else if (value < array[mid])
		{
			printf("Value checked array[%u] = [%d]\n",
					mid, array[mid]);
			high = mid - 1;
		} else
		{
			printf("Value checked array[%u] = [%d]\n",
					mid, array[mid]);
			return (mid);
		}
	}
	if (value == array[low])
	{
		printf("Value checked array[%u] = [%d]\n", mid, array[mid]);
		return (low);
	}
	return (-1);
}
