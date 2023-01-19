#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line
 *
 * @seperator: String to be printed between strings
 * @n: The number of strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (seperator == NULL)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *tmp;

		if (i)
			printf("%s", seperator);
		tmp = va_arg(args, char *);
		if (tmp == NULL)
		{
			printf("(nil)");
			continue;
		}
		printf("%s", tmp);
	}
	printf("\n");
	va_end(args);
}
