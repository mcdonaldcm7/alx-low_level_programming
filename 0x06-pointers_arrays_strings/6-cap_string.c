#include "main.h"
#include <stdbool.h>

/**
 * isAlph - checks if a character is an alphabet
 *
 * @c: input character
 *
 * Return: true if c is an alphabet, false otherwise
 */
bool isAlph(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (true);
	return (false);
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
	int index;
	bool nWord;

	nWord = isAlph(s[0]);
	index = 0;
	while (s[index] != '\0')
	{
		char tmp = s[index];

		if (isAlph(tmp) && nWord)
		{
			if (tmp >= 97 && tmp <= 122)
			{
				s[index] -= 32;
			}
			nWord = false;
		} else if (tmp == ',' || tmp == ';' || tmp == '.' || tmp == '!'
				|| tmp == '?' || tmp == '"' || tmp == '(' || tmp == ')'
				|| tmp == '{' || tmp == '}' || tmp == ' ' || tmp == 9 || tmp == 10)
		{
			nWord = true;
		} else
		{
			nWord = false;
		}
		index++;
	}
	return (s);
}
