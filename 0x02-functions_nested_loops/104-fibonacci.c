#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints first 98 fibonacci numbers
 * Return: void
 */
int main(void)
{
	int i;
	unsigned long p1, p1m, p2, p2m, curr, currm;

	p1 = 1, p2 = 2;
	printf("1, 2, ");
	for (i = 0; i < 91; i++)
	{
		curr = p1 + p2;
		printf("%lu, ", curr);
		p1 = p2;
		p2 = curr;
		p1m = p1 % 1000000;
		p2m = p2 % 1000000;
		currm = curr % 1000000;
	}
	p1 -= p1m;
	p2 -= p2m;
	curr -= currm;
	for (i = 0; i < 6; i++)
	{
		curr = p1 + p2;
		currm = p1m + p2m;
		if (i == 5)
		{
			printf("%lu", (curr + currm));
			continue;
		}
		printf("%lu, ", (curr + currm));
		p1 = p2;
		p2 = curr;
		p1m = p2m;
		p2m = currm;
	}
	printf("\n");
	return (0);
}
