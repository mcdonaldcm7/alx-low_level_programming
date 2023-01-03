#include "main.h"

/**
 * _strchr - Locates and returns the first occurence of a character in a string
 *
 * @s: Input string
 * @c: Character to look for
 *
 * Return: pointer to the first occurence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	return (0);
}
