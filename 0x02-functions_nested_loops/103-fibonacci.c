#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints sum of even fibonacci numbers less than 4,000,000
 * Return: void
 */
int main(void)
{
	unsigned long p1, p2, curr, sum;

	p1 = 1, p2 = 2, sum = 2;
	while (curr < 4000000)
	{
		curr = p1 + p2;
		if (curr % 2 == 0)
		{
			sum += curr;
		}
		p1 = p2;
		p2 = curr;
	}
	printf("%lu\n", sum);
	return (0);
}
