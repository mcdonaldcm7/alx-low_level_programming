#include "main.h"
#include <stdbool.h>

/**
 * LQ_strlen - Returns the length of the input string
 *
 * @s: Input string
 *
 * Return: Length of the string
 */
int LQ_strlen(char *s)
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

	length = LQ_strlen(s);
	neg = 0;
	for (count = 0; !isDigit(s[count]) && count < length; count++)
	{
		if (s[count] == '-')
			neg++;
	}
	return (neg % 2 == 0);
}

/**
 * putSign - Ensures num is the right sign
 *
 * @num: Pointer to the number to correct
 * @s: Input string to fecth sign from
 */
void putSign(int *num, char *s)
{
	int n;
	bool isPve;

	n = *num;
	isPve = isPos(s);
	if (isPve)
	{
		if (n < 0)
			n *= -1;
	}
	*num = n;
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
		if (num == 1)
			putSign(&num, s);
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
