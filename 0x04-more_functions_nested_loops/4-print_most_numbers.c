#include "main.h"

/**
 * print_numbers - Prints number 0 to 9 follwed by a new line except 2 and 4
 */
void print_numbers(void)
{
	int i;

	for(i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(48 + i);
	}
	_putchar(10);
}
