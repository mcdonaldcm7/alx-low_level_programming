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
 * _strncat - Concatenates two strings
 *
 * @dest: Destination string
 * @src: Source string
 * @n: Max bytes of src to catenate
 *
 * Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen, count;

	dlen = LQ_strlen(dest);
	for (count = 0; count < n && (src[count] != '\0'); count++, dlen++)
	{
		dest[dlen] = src[count];
	}
	return (dest);
}
