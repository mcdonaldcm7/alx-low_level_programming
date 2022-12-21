#include "main.h"

/**
 * _strcmp - Compares two string
 *
 * @s1: First input string
 * @s2: Second input string
 *
 * Return: Difference between two string
 */
int _strcmp(char *s1, char *s2)
{
	int count;

	for (count = 0; s1[count] != '\0' && s2[count] != '\0'; count++)
	{
		char tmp1, tmp2;

		tmp1 = s1[count];
		tmp2 = s2[count];
		if (tmp1 != tmp2)
		{
			if (tmp1 > tmp2)
				return (tmp1 - tmp2);
			else
				return (tmp1 - tmp2);
		}
	}
	return (0);
}
