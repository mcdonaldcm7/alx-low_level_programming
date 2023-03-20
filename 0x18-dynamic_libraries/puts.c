#include "main.h"
#include <unistd.h>

/**
 * _puts - Writes the input string in the standard output
 *
 * @s: Input string
 *
 * Return: Nothing
 */
void _puts(char *s)
{
	int len;

	len = _strlen(s);
	write(STDOUT_FILENO, s, len);
}
