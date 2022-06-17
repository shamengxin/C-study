#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//方法一
	int a = 3;
	int b = 5;
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("after:a=%d b=%d", a, b);
	//如果a或b的值过大，有可能会发生溢出
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after:a=%d b=%d", a, b);
	return 0;
}