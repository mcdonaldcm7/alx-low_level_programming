#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Prints the alphabet in lowercase and uppercase
 *Return: 0
 */
int main(void)
{
	int a, A;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	for (A = 65; A <= 90; A++)
	{
		putchar(A);
	}
	putchar(10);
	return (0);
}
