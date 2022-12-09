#include <stdio.h>

int main(void)
{
	int n = 1239;
	int n2 = n;
	while(n2%10 != 0)
		n2--;
	printf("The last digit of %d is %d\n", n, (n-n2));
	return (1);
}
