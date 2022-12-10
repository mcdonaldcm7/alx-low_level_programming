#include <stdio.h>

int main(void)
{
	int i, j, k, counti, countj;

	counti = -1;
	countj = -1;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i == j || j == k || i == k)
					continue;
				if (k <= countj || j <= counti)
					continue;
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);
				putchar(44);
				putchar(32);
			}
			countj++;
		}
		counti++;
	}
	putchar(10);
	return (0);
}
