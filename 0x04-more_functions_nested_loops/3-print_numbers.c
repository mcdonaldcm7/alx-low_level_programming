#include "main.h"

/**
 * print_numbers - Prints number 0 to 9 follwed by a new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(48 + i);
	}
	_putchar(10);
}
