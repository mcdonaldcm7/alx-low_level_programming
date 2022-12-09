#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Prints all single digits numbers of base 10
 *Return: 0
 */
int main(void)
{
	for (int i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
