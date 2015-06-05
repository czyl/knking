//Name: ch9_prime.c
//Purpose: Tests whether a number is prime.

#include <stdio.h>

int is_prime(int n)
{
	int divisor;

	if (n<=1)
		return 0;
	else
		for(divisor=2;divisor*divisor<=n;divisor++)
			if (n % divisor==0)
				return 0;
	return 1;
}

int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%d",&n);

	if (is_prime(n))
		printf("prime\n");
	else
		printf("Not prime\n");

	return 0;
}
