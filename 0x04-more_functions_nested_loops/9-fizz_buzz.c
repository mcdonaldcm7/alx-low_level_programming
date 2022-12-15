#include <stdio.h>

/**
 * main - Prints 1 - 100 replacing multiples of 3 and 5 with Fizz and Buzz
 * and products of both 3 and 5 with FizzBuzz
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i > 1)
		{
			printf(" ");
		}

		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			continue;
		} else if (i % 3 == 0)
		{
			printf("Fizz");
			continue;
		} else if (i % 5 == 0)
		{
			printf("Buzz");
			continue;
		}
		printf("%d", i);
	}
	return (0);
}
