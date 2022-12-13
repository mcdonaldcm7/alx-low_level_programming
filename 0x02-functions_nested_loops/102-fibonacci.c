#include <stdio.h>

int main()
{
	int i;
	unsigned long long p1, p2, curr;

	p1 = 1, p2 = 2;
	printf("1, 2, ");
	for (i = 0; i <= 48; i++)
	{
		curr = p1 + p2;
		if (i == 48)
		{
			printf("%llu", curr);
			continue;
		}
		printf("%llu, ", curr);
		p1 = p2;
		p2 = curr;
	}
	printf("\n");
}
