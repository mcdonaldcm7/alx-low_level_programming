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
			if (i > 0 || j > 0)
			{
				printf(", ");
			}
			printf("%d", (i * j));
		}
		printf("\n");
	}
}
