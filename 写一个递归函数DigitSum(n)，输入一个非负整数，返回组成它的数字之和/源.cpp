#define  _CRT_SECURE_NO_WARNINGS 1
/*
���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
*/
#include<stdio.h>
int DigitSum(int i)
{
	int k=0;
	if (i!=0)
	{
		k = (i % 10) + DigitSum(i / 10);
	}
	return k;
}
int main()
{
	int i;
	printf("������һ�����֣�");
	scanf("%d", &i);
	int result = DigitSum(i);
	printf("���Ϊ��%d", result);
	return 0;
}