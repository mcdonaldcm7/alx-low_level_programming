#include "main.h"

/**
 * _strlen - Returns the length of the input string
 *
 * @*s: Pointer to array of char(string)
 *
 * Return: Length of string
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
