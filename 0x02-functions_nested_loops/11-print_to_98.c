#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @n: Input integer
 *
 * Return: void
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		if (n == 98)
		{
			print(98);
			continue;
		}
		printf("%d, ", n);
	}
	_putchar('\n');
}
