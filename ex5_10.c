//Name: ex5_10.c
//Purpose: ����switch����дһ�����򣬰������ֱ�ʾ�ĳɼ�ת��Ϊ��ĸ��ʾ�ĵȼ�
//Enter numerical grade: 84
//Letter grade: B
//ʹ������ĵȼ���������
//A 90~100
//B 80~89
//C 70~79
//D 60~69
//F 0~59
//�ɼ�����100�����0��ʾ����

#include <stdio.h>
int main(void)
{
	int num, num1,num2,dev;
	char ch;
	
	printf("Enter numerical grade: ");
	scanf("%d",&num);

	dev=num/10;
	if (num<=100 && num>=0){
		switch (dev){
			case 0: case 1: case 2: case 3: case 4: case 5:
				ch='F';
				break;
			case 6: ch='D'; break;
			case 7: ch='C'; break;
			case 8: ch='B'; break;
			case 9: case 10:
				ch='A'; break;
		}
		printf("Letter grade: %c\n", ch);
	}
	else
		printf("WARNING!");
	return 0;
}

