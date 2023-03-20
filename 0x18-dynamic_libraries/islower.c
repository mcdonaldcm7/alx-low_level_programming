#include "main.h"

/**
 * _islower - Checks if a character is lowercase or not
 *
 * @c: Character to check
 *
 * Return: 1 if c is lower, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
