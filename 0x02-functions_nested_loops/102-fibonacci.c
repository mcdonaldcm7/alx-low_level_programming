#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints first 50 fibonacci numbers
 * Return: void
 */
int main(void)
{
	int i;
	unsigned long p1, p2, curr;

	p1 = 1, p2 = 2;
	printf("1, 2, ");
	for (i = 0; i < 48; i++)
	{
		curr = p1 + p2;
		if (i == 47)
		{
			printf("%lu", curr);
			continue;
		}
		printf("%lu, ", curr);
		p1 = p2;
		p2 = curr;
	}
	printf("\n");
	return (0);
}
