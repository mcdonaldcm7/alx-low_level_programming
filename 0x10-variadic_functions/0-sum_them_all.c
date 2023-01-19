#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculate and gives the sum of all its parameters
 *
 * @n: Number of arguments
 *
 * Return: Sum of all the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum, i;

	sum = 0;
	va_start(ap, n);
	for (i = n; i > 0; i--)
	{
		sum += va_arg(ap, const unsigned int);
	}
	va_end(ap);
	return (sum);
}
