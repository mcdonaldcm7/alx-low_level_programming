#include  "main.h"

/**
 * print_alphabet - Prints the alphabets in lowercase
 *
 * Return: void
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

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}
