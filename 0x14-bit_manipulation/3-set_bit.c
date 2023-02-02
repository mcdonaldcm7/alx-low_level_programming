#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 *
 * @n: Integer value
 * @index: Index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if it failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == (void *) 0)
		return (-1);
	*n += 1 << index;
	return (1);
}
