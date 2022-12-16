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
	int pow, rem, h;
	unsigned int divisor;

	pow = 9;
	divisor = 1000000000;
	rem = n / divisor;
	h = rem >= 0 ? rem : -rem;
	while (h <= 0)
	{
		pow--;
		divisor /= 10;
		if (divisor == 0)
			return (0);
		rem = n / divisor;
		h = rem >= 0 ? rem : -rem;
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
	int digit, powDiff, pwr;
	unsigned int num;

	num = n >= 0 ? n : -n;
	powDiff = 0;
	if (n < 0)
	{
		_putchar(45);
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
	if (n == 0)
	{
		_putchar(48);
	}
	if (n != 0 && n % 10 == 0)
		_putchar(48);
}
