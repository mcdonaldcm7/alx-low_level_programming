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
	int i, j, k;
	bool printed;

	printed = false;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i == j || j == k || i == k)
					continue;
				if (k <= j || j <= i)
					continue;
				if (i > 1 || j > 1 || (k > 1 && printed))
				{
					putchar(44);
					putchar(32);
				}
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);
				printed = true;
			}
		}
	}
	putchar(10);
	return (0);
}
