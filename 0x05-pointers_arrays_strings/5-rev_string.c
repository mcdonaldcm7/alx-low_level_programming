#include "main.h"

/**
 * _strlen - Returns the length of the input string s
 *
 * @s: Input string
 *
 * Return: Length of s
 */
int _strlen(char *s)
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
 * rev_string - Reverses the input string
 *
 * @s: Input string
 */
void rev_string(char *s)
{
	int length, count;

	length = _strlen(s);
	if (length > 0)
	{
		for (count = 0; count <= (length / 2); count++, length--)
		{
			char tmp;

			tmp = s[count];
			s[count] = s[length];
			s[length] = tmp;
		}
	}
}
