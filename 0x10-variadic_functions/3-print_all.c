#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 *
 * @fmt: String containing the format of the parameters
 * @...: Varags
 *
 * Return: Nothing
 */
void print_all(const char * const fmt, ...)
{
	int i;
	va_list args;

	va_start(args, fmt);
	i = 0;
	while (fmt != NULL && fmt[i] != '\0')
	{
		char *s;

		if (i && (fmt[i - 1] == 'c' || fmt[i - 1] == 'i' || fmt[i - 1] == 'f' ||
					fmt[i - 1] == 's'))
				printf(", ");
		switch (fmt[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
