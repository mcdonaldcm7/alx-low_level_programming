#include "main.h"

/**
 * LQ_strlen - Retrieves the length of a string
 *
 * @s: Input string
 *
 * Return: Length of input string
 */
int LQ_strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

/**
 * _strstr - Locates a substring
 *
 * @haystack: Input string
 * @needle: Substring
 *
 * Return: pointer to the bginning of the locatd substring, or NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (LQ_strlen(needle) > 0)
	{
		for (i = 0, j = 0; haystack[i] != '\0'; i++)
		{
			if (needle[j] != 0 && haystack[i] == needle[j])
			{
				int count;

				count = 0;
				while (haystack[i] == needle[j] &&
						(haystack[i] != '\0' && needle[j] != '\0'))
				{
					count++;
					i++;
					j++;
				}

				if (count == LQ_strlen(needle))
					return (&haystack[i - count]);
				 j = 0;
			}
		}
	}
	return (haystack);
}
