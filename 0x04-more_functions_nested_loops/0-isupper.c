#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 *
 * @c: Character
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
