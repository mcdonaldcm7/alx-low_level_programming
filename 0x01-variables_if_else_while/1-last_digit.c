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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int n2 = n;
	while (n2%10 != 0)
		n2--;
	int lastDigit = n-n2;
	printf("Last digit of %d is %d ", n, lastDigit);
	if (lastDigit > 5)
		printf("and is greater than 5\n");
	else if(lastDigit == 0)
		printf("and is 0\n");
	else if(lastDigit < 6 && lastDigit != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
