#include "main.h"

/**
 * _puts_recursion - A function that  prints a string followed by a new line
 *
 * @s: Input string
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(s[0]);
	_puts_recursion(&s[1]);
}
