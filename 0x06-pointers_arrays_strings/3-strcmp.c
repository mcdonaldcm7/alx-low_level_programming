#include "main.h"

/**
 * _strcmp - Compares two string
 *
 * @s1: First input string
 * @s2: Second input string
 *
 * Return: 15 if s1 > s2, -15 if s1 < s2, 0 if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	int count;

	for (count = 0; s1[count] != '\0' && s2[count] != '\0'; count++)
	{
		if (s1[count] != s2[count])
		{
			if (s1[count] > s2[count])
				return (15);
			else
				return (-15);
		}
	}
	return (0);
}
