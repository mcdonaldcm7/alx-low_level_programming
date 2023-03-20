#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a character to the standard output
 *
 * @c: Character to write
 *
 * Return: Number of byte written (1) on success
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
