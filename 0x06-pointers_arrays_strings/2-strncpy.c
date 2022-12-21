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

	for (count = 0; count < n && (src[count] != '\0'); count++)
	{
		dest[count] = src[count];
	}
	dest[count] = '\0';
	return (dest);
}
