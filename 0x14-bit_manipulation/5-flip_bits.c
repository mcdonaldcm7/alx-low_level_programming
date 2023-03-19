#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Retrieves number of n bit to flip to get m
 *
 * @n: Number to flip
 * @m: Number to flip to
 *
 * Return: Number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ret, xor;
	unsigned int i;

	ret = 0;
	xor = n ^ m;
	ret += (xor & 1);
	for (i = 0; i <= 32; i++)
	{
		xor >>= 1;
		ret += (xor & 1);
	}
	return (ret);
}
