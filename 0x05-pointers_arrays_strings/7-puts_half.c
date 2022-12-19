#include "main.h"

/**
 * _strlen - Gets the length of the input string s
 *
 * @s: Input string
 *
 * Return: Length of string s
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
 * puts_half - Prints half of input string str
 *
 * @str: Input string
 */
void puts_half(char *str)
{
	int length, half;

	length = _strlen(str);
	if (length % 2 == 0)
		half = length / 2;
	else
		half = (length - 1) / 2;

	for (; half < length; half++)
	{
		_putchar(str[half]);
	}
}
