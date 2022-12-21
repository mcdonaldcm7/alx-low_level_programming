#include "main.h"

/**
 * LQ_strlen - Retrieves the length of the string
 *
 * @s: Input string
 * Return: Length of the string
 */
int LQ_strlen(char *s)
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
 * _strcat - Concatenates two strings
 *
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int dlen, count;

	dlen = LQ_strlen(dest);
	for (count = 0; src[count] != '\0'; count++, dlen++)
	{
		dest[dlen] = src[count];
	}
	return (dest);
}
