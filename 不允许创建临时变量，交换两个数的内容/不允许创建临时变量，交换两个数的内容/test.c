#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//����һ
	int a = 3;
	int b = 5;
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("after:a=%d b=%d", a, b);
	//���a��b��ֵ�����п��ܻᷢ�����
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after:a=%d b=%d", a, b);
	return 0;
}