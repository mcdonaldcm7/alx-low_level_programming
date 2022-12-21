#include "main.h"

/**
 * isAlph - checks if a character is an alphabet
 *
 * @c: input character
 *
 * Return: true if c is an alphabet, false otherwise
 */
int isAlph(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
			return (1);
	return (0);
}

/**
 * cap_string - Capitalized every word in a string
 *
 * @s: Input string
 *
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int index, nWord;

	nWord = 0;
	index = 0;

	while (s[index] != '\0')
	{
		char tmp = s[index];

		if ((isAlph(tmp) && nWord) || index == 0)
		{
			if (tmp >= 97 && tmp <= 122)
			{
				s[index] -= 32;
			}
			nWord = 0;
		} else if (tmp == ',' || tmp == ';' || tmp == '.' || tmp == '!'
				|| tmp == '?' || tmp == '"' || tmp == '(' || tmp == ')'
				|| tmp == '{' || tmp == '}' || tmp == ' ' || tmp == 9 || tmp == 10)
		{
			nWord = 1;
		} else
		{
			nWord = 0;
		}
		index++;
	}
	return (s);
}
