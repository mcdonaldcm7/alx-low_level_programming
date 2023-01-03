#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 *
 * @a: Pointer to square matrix
 * @size: Size of matrix
 *
 * Return: void (empty)
 */
void print_diagsums(int *a, int size)
{
	int f, lDiag, rDiag;

	lDiag = 0;
	rDiag = 0;
	for (f = 0; f < size;  f++)
	{
		lDiag += a[f * (size + 1)];
		rDiag += a[(f + 1) * (size - 1)];
	}
	printf("%d, %d\n", lDiag, rDiag);
}
