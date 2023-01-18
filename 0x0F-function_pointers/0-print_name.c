#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name with the given function
 *
 * @name: Name to print
 * @f: Function to print name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
