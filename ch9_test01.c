//Name: ch9_test01.c
//Purpose: test the relation between parameter and argument. page 137.

#include <stdio.h>

int main (void)
{
	double x=3.0;
	//printf("Square: %d\n",square(x));
	printf("Square: %d\n",square((int) x));

	return 0;
}

int square(int n)
{
	return n*n;
}
