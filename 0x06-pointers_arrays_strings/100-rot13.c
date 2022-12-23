#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 *
 * @s: Input string
 *
 * Return: Encoded string
 */
char *rot13(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		while ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
		{
			if ((s[i] >= 78 && s[i] <= 90) || (s[i] >= 110 && s[i] <= 122))
				s[i] -= 13;
			else
				s[i] += 13;
			i++;
		}
		i++;
	}
	return (s);
}
