//Name: ex5_10.c
//Purpose: 利用switch语句编写一个程序，把用数字表示的成绩转化为字母表示的等级
//Enter numerical grade: 84
//Letter grade: B
//使用下面的等级评定规则：
//A 90~100
//B 80~89
//C 70~79
//D 60~69
//F 0~59
//成绩高于100或低于0显示出错。

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

