#include "main.h"
#include <stdbool.h>

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
	while (!isDigit(s[index]))
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
	int count, length, pos, neg;

	length = _strlen(s);
	pos = 0;
	neg = 0;
	for (count = 0; !isDigit(s[count]) && count < length; count++)
	{
		if (s[count] == '+')
			pos++;
		else if (s[count] == '-')
			neg++;
	}
	return (pos >= neg);
}

/**
 * _atoi - Converts a string to an integer
 *
 * @s: Input string to convert
 *
 * Return: Integer conversion of s
 */
int _atoi(char *s)
{
	int count, num;

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
