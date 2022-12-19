#include "main.h"

void print_rev(char *s)
{
	int length;

	length = _strlen(s);
	for (; length >= 0;length--)
	{
		_putchar(s[length]);
	}
	_putchar(10);
}
