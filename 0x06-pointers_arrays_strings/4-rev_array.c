#include "main.h"

/**
 * reverse_array - reverses the contents of the input array
 *
 * @a: input string
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int begin, end;

	end = n - 1;
	for (begin = 0; begin < (n / 2); begin++, end--)
	{
		int tmp;

		tmp = a[begin];
		a[begin] = a[end];
		a[end] = tmp;
	}
}
