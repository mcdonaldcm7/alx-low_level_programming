#include <stdio.h>
#include <stdbool.h>

/**
 *main - Entry point
 *
 *Description: Prints all possible different combinations of two two-digits
 *Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = i; k < 10; k++)
			{
				for (l = j; l < 10; l++)
				{
					if (k == i && l == j)
						continue;
					if (i > 1 || j > 1 || k > 1 || l > 1)
					{
						putchar(44);
						putchar(32);
					}
					putchar(48 + i);
					putchar(48 + j);
					putchar(32);
					putchar(48 + k);
					putchar(48 + l);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
