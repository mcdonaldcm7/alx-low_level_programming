#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Performs a simple operation
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 if it exites properly
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int (*func)(int a, int b);

	num1 = 0, num2 = 0;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != 0 || (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
			argv[2][0] != '/' && argv[2][0] != '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	printf("%d\n", func(num1, num2));
	return (0);
}
