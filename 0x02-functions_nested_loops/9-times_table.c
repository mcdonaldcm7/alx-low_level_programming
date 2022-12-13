#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int prod = i * j;

			if (j == 9)
			{
				if (prod > 9)
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
