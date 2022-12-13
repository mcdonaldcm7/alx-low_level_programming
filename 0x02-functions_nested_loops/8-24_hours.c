#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute, h1, h2, m1, m2;

	h1 = 0;
	h2 = 0;
	m1 = 0;
	m2 = 0;
	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			h1 = hour / 10;
			h2 = hour % 10;
			m1 = minute / 10;
			m2 = minute % 10;
			_putchar(48 + h1);
			_putchar(48 + h2);
			_putchar(58);
			_putchar(48 + m1);
			_putchar(48 + m2);
			_putchar('\n');
		}
	}
}
