#include "main.h"

/**
 * swap_int - Swaps the two input integer values.
 *
 * @a: First input integer
 * @b: Second input integer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
