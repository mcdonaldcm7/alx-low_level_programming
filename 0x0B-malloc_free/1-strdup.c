#include "main.h"
#include <stdlib.h>

/**
 * LQ_strlen - Returns the length of the input string
 *
 * @s: Input string
 *
 * Return: length of s
 */
int LQ_strlen(char *s)
{
	if (s[0] == '\0')
		return (0);

	return (1 + LQ_strlen(&s[1]));
}

/**
 * _strdup - Returns a new string which is a duplicate of str
 *
 * @str: Input string
 *
 * Return: Pointer to duplicate string
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *dup;

	if (str == NULL)
		return (NULL);

	len = LQ_strlen(str);
	dup = (char *) malloc((sizeof(char) * len) + 1);
	if (dup != NULL)
	{
		for (i = 0; i < len; i++)
		{
			dup[i] = str[i];
		}
		dup[i] = '\0';
	}
	return (dup);
}
