#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Prints all single digits numbers of base 16
 *Return: 0
 */
int main(void)
{
	for (int i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (int i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
