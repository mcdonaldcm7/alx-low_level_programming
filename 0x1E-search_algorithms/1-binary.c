#include "search_algos.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * print_array - Prints all the values of an array
 *
 * @array: Pointer to first element in the array to print
 * @start: Index of the array to start printing
 * @end: Index of the array to stop printing
 *
 * Return: Nothing
 */
void print_array(int *array, unsigned int start, unsigned int end)
{
	unsigned int i;
	bool looped;

	looped = false;
	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		if (looped)
			printf(", ");
		printf("%d", array[i]);
		looped = true;
	}
	printf("\n");
}

/**
 * binary_search_index - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: Pointer to the first elemeny of the array to search in
 * @start: Index of the array to start search
 * @end: End of the array to search
 * @value: Value to search for
 *
 * Return: Index where value is located, -1 Otherwise
 */
int binary_search_index(int *array, unsigned int start, unsigned int end,
		int value)
{
	unsigned int mid;

	mid = (start + end) / 2;
	if (start > end)
		return (-1);
	if (array[mid] > value)
	{
		print_array(array, start, end + 1);
		return (binary_search_index(array, start, mid - 1, value));
	}
	else if (array[mid] < value)
	{
		print_array(array, start, end + 1);
		return (binary_search_index(array, mid + 1, end, value));
	}
	else
	{
		print_array(array, start, end + 1);
		return (mid);
	}
	return (-1);
}

/**
 * binary_search - A wrapper around the binary_search_index function
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, -1 Otherwise
 */
int binary_search(int *array, unsigned int size, int value)
{
	if (!array)
		return (-1);
	return (binary_search_index(array, 0, size - 1, value));
}
