#include "variadic_functions.h"
#include <limits.h>
#include <stdlib.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	print_numbers(NULL, 6, 2,48,49,50, INT_MAX, INT_MIN);
    print_strings(NULL, 5, "APC","Django", "Accolade", "\nBetter", "Come");
    print_all("ceisfcsc", 'B', 3, "stSchool", 3.14159629, 65, "Abracadabra", "Jus");
    return (0);
}
