//Name: ex7_6.c
//Purpose: 编写程序显示sizeof(int), sizeof(short), sizeof(long), sizeof(float)
//sizeof(double), sizeof(long double)的值

#include <stdio.h>

int main(void)
{
//	int sizeof(int), sizeof(short),sizeof(long), sizeof(float);
//	int sizeof(double), sizeof(long double);

	printf("The size of int is %d\n",(int) sizeof(int));
	printf("The size of int is %d\n",(int) sizeof(short));
	printf("The size of int is %d\n",(int) sizeof(long));
	printf("The size of int is %d\n",(int) sizeof(float));
	printf("The size of int is %d\n",(int)sizeof(double));
	printf("The size of int is %d\n",(int) sizeof(long double));

	return 0;
}
