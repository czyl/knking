//Name: randnum.c
//Purpose: generate a rand number.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 1000
int main(void)
{
	int randnum;
	srand((unsigned) time(NULL));

	randnum=rand() % NUM;

	printf("%d",randnum);

	return 0;
}
