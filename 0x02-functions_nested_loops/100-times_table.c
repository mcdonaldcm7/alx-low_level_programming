#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 *
 * @n: Integer input
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int prod = i * j;

			if (j == n)
			{
				if (prod > n)
					printf("%d", prod);
				else
					printf(" %d", prod);
				continue;
			}
			if (prod < 10 && j != 0)
			{
				printf(" %d, ", prod);
			} else
			{
				printf("%d, ", prod);
			}
		}
		printf("\n");
	}
}
