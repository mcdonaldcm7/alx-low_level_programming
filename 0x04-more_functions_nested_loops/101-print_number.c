#include "main.h"

/**
 * getPow - Gives the base 10 log of a number
 *
 * @n: Input integer
 *
 * Return: Log base 10 of n
 */
int getPow(int n)
{
	int pow, divisor;

	pow = 0;
	divisor = 10;
	while ((n / divisor) > 0)
	{
		pow++;
		divisor *= 10;
	}
	return (pow);
}

/**
 * raise - Raises the base by power exp i.e base^exp
 *
 * @base: Base
 * @exp: Exponent
 *
 * Return: base raised to the power of exp
 */
int raise(int base, int exp)
{
	int result;

	result = 1;
	while (exp > 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}

/**
 * print_number - Prints the input number
 *
 * @n: Input integer
 */
void print_number(int n)
{
	int digit, powDiff, pwr, num;

	num = n;
	powDiff = 0;
	if (num < 0)
	{
		_putchar(45);
		num *= -1;
	}
	while (num > 0)
	{
		pwr = getPow(num);
		digit = num / raise(10, pwr);
		_putchar(48 + digit);
		num -= digit * raise(10, pwr);
		powDiff = pwr - getPow(num);
		for (; powDiff > 1; powDiff--)
		{
			_putchar(48);
		}
	}
	if (num == 0)
	{
		_putchar(48);
	}
	if (n != 0 && n % 10 == 0)
	{
		_putchar(48);
	}
}
