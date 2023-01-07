#include "main.h"
#include <stdio.h>

/**
 * main - Multiplies two numbers
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 1 if argc < 3, 0 otherwise
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
