#include "main.h"
#include <limits.h>

/**
 * get_bit - Returns the value of a bit at a given index
 *
 * @n: Input integer
 * @index: The index, starting from 0 of the bit you want to get
 *
 * Return: The value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n < index || n >= ULONG_MAX)
		return (-1);
	if (index == 0)
		return (n & 1);
	return (((n >> index) & 1) ? 1 : 0);
}
