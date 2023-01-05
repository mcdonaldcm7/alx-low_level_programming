#include "main.h"

/**
 * factorial - Returns the factorial of the input integer
 *
 * @n: Input integer
 *
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
