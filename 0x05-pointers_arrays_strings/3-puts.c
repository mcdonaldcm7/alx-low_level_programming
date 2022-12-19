#include "main.h"

/**
 * _puts - Prints the string str followed by a new line
 *
 * @str: String to print
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
