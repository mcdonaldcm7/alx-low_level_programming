#include "variadic_functions.h"
#include <stdio.h>

void opr::print_int(int a)
{
	printf("%d", a);
}

void opr::print_str(char *s)
{
	printf("%s", s);
}

void opr::print_char(char c)
{
	printf("%c", c);
}

void opr::print_float(float f)
{
	printf("%f", f);
}

void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	opr_t ops[];

	ops = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str}
	};
	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		char tmp1, tmp2;

		tmp1 = format[i];
		tmp2 = va_arg(args, char);
		if (tmp1 != 'c' && tmp1 != 'i' && tmp1 != 'f' && tmp1 != 's')
		{
			printf("(nil)");
		}
		if (tmp1 == ops[i].fmt)
		{
			ops[i].
		}
	}
}
