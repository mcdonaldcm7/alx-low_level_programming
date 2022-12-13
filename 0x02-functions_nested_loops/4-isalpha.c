#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet or not
 *
 * @c : Character to check
 *
 * Return: 0 if c is not an alphabet 1 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 98 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
