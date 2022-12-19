#include "main.h"
#include <stdio.h>

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
	int length, begin, end;

	length = _strlen(s);
	end = length - 1;
	if (length > 0)
	{
		for (begin = 0; begin < (length / 2); begin++, end--)
		{
			char tmp;

			tmp = s[begin];
			s[begin] = s[end];
			s[end] = tmp;
		}
	}
}
