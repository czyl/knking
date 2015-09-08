//Name: ch8_repdigit.c
//Purpose: for example:
//Enter a number: 4171092
//Digit:      0 1 2 3 4 5 6 7 8 9
//Occurrence: 1 2 2 0 1 0 0 1 0 1 

#include <stdio.h>

int main(void)
{
	int digit_seen[10]={0};
	int digit, i;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while(n>0)
	{
		digit=n%10;
		digit_seen[digit]=digit_seen[digit]+1;
		n/=10;
	}
	
	printf("Digit:        ");
	for (i=0;i<10;i++)
		printf("%3d",i);
	printf("\n");
	printf("Occurrences:  ");
	for (i=0;i<10;i++)
		printf("%3d",digit_seen[i]);
	printf("\n");

	return 0;
}
