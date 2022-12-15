#include "main.h"

/**
 * more_numbers - Prints number 0 to 14 follwed by a new line 10 times
 */
void more_numbers(void)
{
	int h, i;

	for (h = 0; h < 10; h++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar(49);
			_putchar(48 + (i % 10));
		}
		_putchar(10);
	}
}
