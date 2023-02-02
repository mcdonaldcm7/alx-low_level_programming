#include "main.h"

/**
 * non_zero - Prints binary representation of the given (number > 0)
 *
 * @n: Input number
 *
 * Return: Nothing
 */
void non_zero(unsigned long int n)
{
	if (n <= 0)
		return;
	non_zero(n >> 1);
	_putchar(((n << 1) & 2) == 0 ? '0' : '1');
}

/**
 * print_binary - Prints binary representation of a given integer
 *
 * @n: Input integer
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		non_zero(n);
}
