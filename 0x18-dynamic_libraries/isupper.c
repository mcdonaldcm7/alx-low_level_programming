#include "main.h"

/**
 * _isupper - Checks if a character is uppercase or not
 *
 * @c: Character to check
 *
 * Return: 1 if c is upper, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
