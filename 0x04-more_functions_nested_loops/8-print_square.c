#include "main.h"

/**
 * print_square - Prints a square
 *
 * @size: Integer size of square
 */
void print_square(int size)
{
	int s;

	for (s = 1; s <= (size * size); s++)
	{
		_putchar(35);
		if (s % size == 0)
		{
			_putchar(10);
		}
	}
	_putchar(10);
}
