#include <stdio.h>

/**
 * isPrime - Checks if a number is prime
 *
 * @n - Integer parameter
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int isPrime(long int n)
{
	long int h;

	for (h = ((n / 2) + 1); h > 1; h--)
	{
		if (n % h == 0)
			return (0);
	}
	return (1);
}

/**
 * main - Prints highest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int num, i;

	num = 612852475143;
	for (i = ((num / 2) + 1); i > 1; i--)
	{
		if (num % i == 0)
		{
			if (isPrime(i))
			{
				printf("%ld\n", i);
				break;
			}
		}
	}
	return (0);
}
