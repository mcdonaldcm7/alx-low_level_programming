#include "main.h"

/**
 * print_line - This function prints n straight lines
 *
 * @n: Integer length of the line
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar(95);
	}
	_putchar(10);
}
