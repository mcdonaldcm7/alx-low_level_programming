#include "main.h"

/**
 * clear_bit - Clears the value of a bit to 1 at a given index
 *
 * @n: Integer value
 * @index: Index, starting from 0 of the bit you want to clear
 *
 * Return: 1 if it worked, or -1 if it failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == (void *) 0)
		return (-1);
	(*n) >> (index + 1);
	return (1);
}
