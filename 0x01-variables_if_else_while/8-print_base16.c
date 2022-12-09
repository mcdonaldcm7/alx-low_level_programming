#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Prints all single digits numbers of base 16
 *Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (j = 97; j < 103; j++)
	{
		putchar(j);
	}
	putchar(10);
	return (0);
}
