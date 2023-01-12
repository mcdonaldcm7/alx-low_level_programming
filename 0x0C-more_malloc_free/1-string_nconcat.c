#include "main.h"
#include <stdlib.h>

/**
 * lq_strlen - retrieves the length of s
 *
 * @s: input string
 *
 * Return: length of s
 */
int lq_strlen(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + lq_strlen(&s[1]));
}

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first input string
 * @s2: second input string
 * @n: bytes of s2 to read into new string
 *
 * Return: Pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *conctd;

	len1 = lq_strlen(s1);
	len2 = lq_strlen(s2);
	len2 = n >= len2 ? len2 : n;
	conctd = malloc(sizeof(char) * (len2 + len1) + 1);
	if (conctd != NULL)
	{
		unsigned int i, j;

		for (i = 0; i < len1; i++)
			conctd[i] = s1[i];
		for (j = 0; j < len2; j++, i++)
			conctd[i] = s2[j];
		conctd[i] = '\0';
		return (conctd);
	}
	return (NULL);
}
