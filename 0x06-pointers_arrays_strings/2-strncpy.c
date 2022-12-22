#include "main.h"

/**
 * _strncpy - Copies src to dest
 *
 * @dest: Destination string
 * @src: Source string
 * @n: Max bytes of src to copy
 *
 * Return: Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; src[count] != '\0' && count < n; count++)
	{
		dest[count] = src[count];
	}
	for (; count < n; count++)
		dest[count] = '\0';
	return (dest);
}
