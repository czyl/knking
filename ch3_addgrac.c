//Name: addfrac.c
//Purpose: add two fractions.

#include <stdio.h>
int main(void)
{
	int num1, num2, num3, num4, result1, result2;

	printf("Please enter a fraction: / ");
	scanf("%d/%d", &num1, &num2);
	printf("Please enter another fraction: / ");
	scanf("%d/%d", &num3, &num4);

	result1 = num2 * num4;
	result2 = num1*num4+num2*num3;
	printf("result=%d/%d\n", result2/result1);

	return 0;

}
