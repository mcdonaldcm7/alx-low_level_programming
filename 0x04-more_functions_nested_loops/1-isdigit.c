#include "main.h"

/**
 * _isdigit - Checks whether or not c is a digit
 *
 * @c: integer input
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 59)
	{
		return (1);
	}
	return (0);
}
