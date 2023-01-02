#include "main.h"

/**
 * _memset - Fills the memory pointed to by s, with the constant byte b
 *
 * @s: Pointer to memory
 * @b: Constant byte
 * @n: Number of byte to write
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
