//Name: ex6_2.c
//Purpose: �û�������������Ȼ����㲢��ʾ���������������Լ����GCD��
//	Enter two integers: 12 28
//	Greatest commom divisor: 4
//Hint: �����Լ���ľ����㷨��Euclid�㷨��
//	�ֱ���m��n������������ֵ�����nΪ0����ôֹͣ������m�е�ֵ��GCD
//	�������m����n����������n���浽m�У����������浽n�С�
//	�ظ��������̣�ÿ�ζ����ж�n�Ƿ�Ϊ0��

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
