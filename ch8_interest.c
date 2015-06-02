//Name: ch8_interest.c
//Purpose: Printd a table of compound interest

#include <stdio.h>
#define INITIAL_BALANCE 100.00

int main(void)
{
	int rate,years,i,j,n;
	
	printf("Enter interest rate: ");
	scanf("%d",&rate);
	printf("Enter number of years: ");
	scanf("%d",&years);

	printf("Years");
	for (n=rate;n<5+rate;n++)
		printf("%10d",n);
	printf("\n");

	for (i=1;i<=years;i++) { 
	      	printf("%5d",i);
		for (j=0;j<5;j++)
			printf("%10.2f",INITIAL_BALANCE*(1+rate*0.01));
		printf("\n");
	}
//
	return 0;
}
