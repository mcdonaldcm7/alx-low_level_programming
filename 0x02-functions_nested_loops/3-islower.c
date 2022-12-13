#include "main.h"

/**
 * _islower - Checks if a character is lowercase or not
 *
 * @c : Character to check
 *
 * Return: 0 if c is not lowercase 1 otherwise
 */
int _islower(int c)
{
	if (c >= 98 && c <= 122)
		return (1);
	else
		return (0);
}
