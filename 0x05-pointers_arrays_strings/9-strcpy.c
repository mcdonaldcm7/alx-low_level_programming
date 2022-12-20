#include "main.h"
#include <stdbool.h>

/**
 * _strlen - Gets the length of the input string up to the null byte (\0)
 *
 * @s: Input string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int count;
	bool met;

	met = false;
	count = 0;
	while (!met)
	{
		if (s[count] == '\0')
			met = !met;
		count++;
	}
	return (count);
}

/**
 * _strcpy - Copies the content of one string to another
 *
 * @dest: Buffer to copy to
 * @src: String to copy from
 *
 * Return: Pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i, length;

	length = _strlen(src);
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
