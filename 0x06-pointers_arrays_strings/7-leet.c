#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: Input string
 *
 * Return: Encoded string
 */
char *leet(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		char tmp;

		tmp = s[i];
		if (tmp == 'a' || tmp == 'A')
			s[i] = '4';
		else if (tmp == 'e' || tmp == 'E')
			s[i] = '3';
		else if (tmp == 'o' || tmp == 'O')
			s[i] = '0';
		else if (tmp == 't' || tmp == 'T')
			s[i] = '7';
		else if (tmp == 'l' || tmp == 'L')
			s[i] = '1';
		i++;
	}
	return (s);
}
