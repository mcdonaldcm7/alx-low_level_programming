#include "main.h"

/**
 * _strcmp - Compares two strings for equality
 *
 * @s1: First input string
 * @s2: Second input string
 *
 * Return: 0 if s1 == s2, 1 if s1 > s2, and -1 if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int l1, l2, i;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	for (i = 0; (i < l1) && (i < l2); i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				return (1);
			else
				return (-1);
		}
	}
	return (0);
}
