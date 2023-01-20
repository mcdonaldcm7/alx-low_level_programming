#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 *
 * @seperator: String to be printed between numbers
 * @n: The number of integers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (seperator != NULL)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			int tmp;

			if (i)
				printf("%s", seperator);
			tmp = va_arg(args, int);
			printf("%d", tmp);
		}
		va_end(args);
	}
	printf("\n");
}
