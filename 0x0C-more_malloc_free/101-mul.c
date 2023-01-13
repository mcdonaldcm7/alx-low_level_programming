#include "main.h"
#include <stdbool.h>
#include <stdlib.h>

/**
 * lq_strlen - Returns the length of the input string
 *
 * @s: Input string
 *
 * Return: Length of the string
 */

int lq_strlen(char *s)
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
 * isDigit - Checks if the input character is a digit
 *
 * @c: Input character
 *
 * Return: true if c is a digit, false otherwise
 */
bool isDigit(char c)
{
	if (c >= 48 && c <= 57)
		return (true);
	else
		return (false);
}

/**
 * allDigit - checks all charactes in a string are digits
 *
 * @s: input string
 *
 * Return: true if s contains only digits, false otherwise
 */
bool allDigit(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < 48 || s[i] > 57)
			return (false);
		i++;
	}
	return (true);
}

/**
 * getIndex - Retrieves the index of the first occurence of a number
 *
 * @s: Input string
 *
 * Return: Index of first number
 */
int getIndex(char *s)
{
	int index;

	index = 0;
	while (!isDigit(s[index]) && s[index] != '\0')
	{
		index++;
	}
	return (index);
}

/**
 * isPos - Checks and returns the majority of the signs in the input string
 *
 * @s: Input string
 *
 * Return: false if majority is negative and false otherwise
 */
bool isPos(char *s)
{
	int count, length, neg;

	length = lq_strlen(s);
	neg = 0;
	for (count = 0; !isDigit(s[count]) && count < length; count++)
	{
		if (s[count] == '-')
			neg++;
	}
	return (neg % 2 == 0);
}

/**
 * _atoi - Converts a string to an integer
 *
 * @s: Input string to convert
 *
 * Return: Integer conversion of s
 */
unsigned long _atoi(char *s)
{
	unsigned long count, num;

	for (count = getIndex(s), num = 0; isDigit(s[count]); count++)
	{
		switch (s[count])
		{															case '0':
			num *= 10;
			break;
		case '1':
			num = (num * 10) + 1;
			break;
		case '2':
			num = (num * 10) + 2;
			break;
		case '3':
			num = (num * 10) + 3;
			break;
		case '4':
			num = (num * 10) + 4;
			break;
		case '5':
			num = (num * 10) + 5;
			break;
		case '6':
			num = (num * 10) + 6;
			break;
		case '7':
			num = (num * 10) + 7;
			break;
		case '8':
			num = (num * 10) + 8;
			break;
		case '9':
			num = (num * 10) + 9;
			break;
		default:
			break;
		}
	}
	return (isPos(s) ? num : -num);
}

/**
 * getPow - Gives the base 10 log of a number
 *
 * @n: Input integer
 *
 * Return: Log base 10 of n
 */
unsigned long getPow(unsigned long n)
{
	unsigned long pow, rem, h;
	unsigned long divisor;

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
unsigned long raise(int base, unsigned long exp)
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
void print_number(unsigned long n)
{
	unsigned long digit, powDiff, pwr;
	unsigned long num;

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

/**
 * main - multiplies two positive numbers
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!allDigit(argv[1]) || !allDigit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	print_number(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
