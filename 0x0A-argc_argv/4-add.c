#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds two positive numbers
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 1 if there was an error, 0 otherwise
 */
int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if ((atoi(argv[i]) == 0 && *argv[i] != '0') || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
