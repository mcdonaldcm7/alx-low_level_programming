#include "main.h"

/**
 * print_triangle - Prints a triangle of size size
 *
 * @size: Integer size of the triangle
 */
void print_triangle(int size)
{
	int i, j, count;

	count = size - 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j >= count)
			{
				_putchar(35);
			} else
			{
				_putchar(32);
			}
		}
		count--;
		_putchar(10);
	}

	if (size <= 0)
		_putchar(10);
}
