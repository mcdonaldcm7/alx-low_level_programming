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
 * str_concat - Concatenates the two strings s1 and s2
 *
 * @s1: First input string
 * @s2: Second input string
 *
 * Return: Pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, len1, len2;
	char *comb;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	len1 = LQ_strlen(s1);
	len2 = LQ_strlen(s2);
	comb = (char *) malloc((sizeof(char) * len1) + (sizeof(char) * len2) + 1);
	if (comb != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			comb[i] = s1[i];
		}
		for (; i < (len1 + len2); i++)
		{
			comb[i] = s2[i - len1];
		}
		comb[i] = '\0';
	}
	return (comb);
}
