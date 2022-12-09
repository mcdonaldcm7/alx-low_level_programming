#include <stdio.h>
#include <stdbool.h>

/**
 *main - Entry point
 *
 *Description: Prints all possible different combinations of two digits
 *Return: 0
 */
int main(void)
{
	int i, j, count;

	count = -1;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == j)
			{
				continue;
			}
			if (j <= count || i <= count)
			{
				continue;
			}
			if (i > 1 || j > 1)
			{
				putchar(44);
				putchar(32);
			}
			putchar(48 + i);
			putchar(48 + j);
		}
		count++;
	}
	putchar(10);
	return (0);
}
