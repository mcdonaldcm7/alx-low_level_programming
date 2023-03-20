#include "main.h"

/**
 * _strlen - Computes the length of a string
 *
 * @s: Input string
 *
 * Return: Length of s
 */
int _strlen(char *s)
{
	if (s == (void *) 0 || s[0] == '\0')
		return (0);
	return (1 + _strlen(&s[1]));
}
