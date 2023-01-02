#include "main.h"
#include <stdbool>

/**
 * contains - Checks whether a word is in a string
 *
 * @s: Input string
 * @check: Character to check for
 *
 * Return: true or false based on whether check is found.
 */
bool contains(char *s, char check)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == check)
			return (true);
		i++;
	}
	return (false);
}

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: Input string
 * @accept: prefix composition
 *
 * Return: Length of prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (s[i] != '0' && contains(accept, s[i]))
	{
		i++;
	}
	return (i);
}
