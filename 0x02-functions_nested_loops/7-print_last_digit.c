#include "main.h"

/**
 * print_last_digit - Prints the last digit of n
 *
 * @n: Integer input
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;
	char digit;

	lastDigit = (lastDigit >= 0) ? lastDigit : -lastDigit;
	digit = 48 + lastDigit;

	_putchar(digit);
	return (lastDigit);
}
