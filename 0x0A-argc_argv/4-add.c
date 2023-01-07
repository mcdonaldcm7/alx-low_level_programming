#include "main.h"
#include <stdio.h>

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
		printf("2\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i] == 0) && argv[i] != 48)
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]) < 0)
			continue;
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
