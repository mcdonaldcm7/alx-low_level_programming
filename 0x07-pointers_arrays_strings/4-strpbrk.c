#include "main.h"

/**
 * contain - checks if the input string contains the input character
 *
 * @s: Input string
 * @c: Character to check against
 *
 * Return: 1 if check is in s, and 0 otherwise
 */
int contain(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 * _strpbrk - Searches a string for any set of bytes.
 *
 * @s: Input string
 * @accept: String to check against
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (contain(accept, s[i]))
			return (&s[i]);
		i++;
	}
	return (0);
}
