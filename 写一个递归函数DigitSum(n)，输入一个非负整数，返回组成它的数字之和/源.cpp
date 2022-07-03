#define  _CRT_SECURE_NO_WARNINGS 1
/*
例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
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
	printf("请输入一个数字：");
	scanf("%d", &i);
	int result = DigitSum(i);
	printf("结果为：%d", result);
	return 0;
}