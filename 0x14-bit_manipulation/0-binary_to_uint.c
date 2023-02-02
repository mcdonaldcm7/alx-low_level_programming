#include "main.h"

/**
 * lq_strlen - Retrieves the length of a string
 *
 * @b: Input string
 *
 * Return: Length of b
 */
int lq_strlen(const char *b)
{
	if (b == (void *) 0 || b[0] == '\0')
		return (0);
	return (1 + lq_strlen(&b[1]));
}

/**
 * raise - Raises the base by power exp i.e base^exp
 *
 * @base: Base
 * @exp: Exponent
 *
 * Return: base raised to the power of exp
 */
int raise(int base, int exp)
{
	int result;

	result = 1;
	while (exp > 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned integer
 *
 * @b: Character string containing binary 0's and 1's
 *
 * Return: Converted number if b is valid, or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int l, i;
	unsigned int sum;

	if (b == (void *) 0)
		return (0);
	sum = 0;
	for (i = 0, l = lq_strlen(b); l > 0; l--, i++)
	{
		char tmp;

		tmp = b[l - 1];
		switch (tmp)
		{
		case '0':
			continue;
		case '1':
			sum += raise(2, i);
			break;
		default:
			return (0);
		}
	}
	return (sum);
}
