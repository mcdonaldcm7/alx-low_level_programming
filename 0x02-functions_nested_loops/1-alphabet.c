#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lower case
 *
 * Returns: void
 */
void print_alphabet(void)
{
	int i;
	char alph;

	alph = 97;
	for (i = 0; i < 26; i++)
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
