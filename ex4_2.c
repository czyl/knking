//Name: ex4_2
//��Ŀ����дһ������Ҫ���û�����һ����λ������������λ��˳���������

#include <stdio.h>
int main(void)
{
	int i, j, num1, num2, num3;

	printf("Please insert a number: ");
	scanf("%d",&i);	
	num1=i/100;
	num2=(i-num1*100)/10;
	num3=(i-num1*100-num2*10);
	j=num3*100+num2*10+num1;
	printf("The reverse of the number is: %d\n",j);

	return 0;
}

