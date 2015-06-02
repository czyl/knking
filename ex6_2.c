//Name: ex6_2.c
//Purpose: 用户输入两个数，然后计算并显示这两个整数的最大公约数（GCD）
//	Enter two integers: 12 28
//	Greatest commom divisor: 4
//Hint: 求最大公约数的经典算法是Euclid算法。
//	分别让m和n储存两个数的值。如果n为0，那么停止操作，m中的值是GCD
//	否则计算m除以n的余数，把n保存到m中，把余数保存到n中。
//	重复上述过程，每次都先判定n是否为0。

#include <stdio.h>

int main(void)
{
	int m, n, mod1, i;
	printf("Enter two integers: ");
	scanf("%d%d",&m,&n);

	for (i=0;n!=0;i++)
	{
		mod1=m%n;
		m=n;
		n=mod1;
	}

	printf("Greatest common divisor: %d\n",m);
		
	return 0;
}
