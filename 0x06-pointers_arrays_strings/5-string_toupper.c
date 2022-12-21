#include "main.h"

/**
 * LQ_strlen - Retrieves the length of a string
 *
 * @s: Input string
 *
 * Return: Length of s
 */
int LQ_strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 *
 * @s: Input string
 *
 * Return: Converted string
 */
char *string_toupper(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		if (s[len] >= 97 && s[len] <= 122)
			s[len] -= 32;
	       len++;
	}
	return (s);
}
