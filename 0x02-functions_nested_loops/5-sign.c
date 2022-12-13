#include "main.h"

/**
 * print_sign - Prints the sign of a given number
 *
 * @n : Number to check
 *
 * Return: 1 for positive, 0 if n is 0, and -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
}
