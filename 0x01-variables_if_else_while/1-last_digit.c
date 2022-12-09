#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point.
 *
 *Description: Prints varying output depending on the last digit of n
 *Return: 0
 */
int main(void)
{
	int n, n2, nabs, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nabs = n > 0 ? n : (-1 * n);
	n2 = nabs;
	while ((n2 % 10) != 0)
		n2--;
	lastDigit = nabs - n2;
	printf("Last digit of %d is %d ", n, lastDigit);
	if (lastDigit > 5)
		printf("and is greater than 5\n");
	else if (lastDigit == 0)
		printf("and is 0\n");
	else if (lastDigit < 6 && lastDigit != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
