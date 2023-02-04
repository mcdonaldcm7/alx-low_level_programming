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
	unsigned long int set;

	if (n == (void *) 0)
		return (-1);
	set = 1 << index;
	if (index > 0 && (set <= 1 || set > *n))
		return (-1);
	*n += set;
	return (1);
}
