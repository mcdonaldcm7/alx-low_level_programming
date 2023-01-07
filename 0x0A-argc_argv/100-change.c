#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * chage - gives the minimum number of times on needs to reduce value to 0
 *
 * @value: input integer
 *
 * Return: minimum number of reductions to 0
 */
int change(int value)
{
	int count;

	count = 0;
	while (value > 0)
	{
		int div;

		div = 0;
		if (value >= 25)
		{
			div = value / 25;
			value -= 25 * div;
			count += div;
		} else if (value >= 10)
		{
			div = value / 10;
			value -= 10 * div;
			count += div;
		} else if (value >= 5)
		{
			div = value / 5;
			value -= div * 5;
			count += div;
		} else if (value >= 2)
		{
			div = value / 2;
			value -= div * 2;
			count += div;
		} else
		{
			count += value;
			value -= value;
		}
	}
	return (count);
}

/**
 * main - print minimum number of coins to make change for input
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 iferror, 0 otherwise
 */
int main(int argc, char **argv)
{
	int cents;

	cents = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
	} else
	{
		printf("%d\n", change(cents));
	}
	return (0);
}
