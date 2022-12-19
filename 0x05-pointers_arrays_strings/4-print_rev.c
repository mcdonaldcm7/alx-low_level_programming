#include "main.h"

/**
 * _strlen - Gets the length of a string
 *
 * @s: Input string
 *
 * Return: Return length of s
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * print_rev - Prints the reverse of the input string s
 *
 * @s: Input string
 */
void print_rev(char *s)
{
	int length;

	length = _strlen(s) - 1;
	for (; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar(10);
}
