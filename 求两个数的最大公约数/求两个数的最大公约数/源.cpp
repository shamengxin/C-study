#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入两个数字：");
	scanf("%d%d", &a, &b);
	int tmp;
	tmp = a % b;
	while (tmp)
	{
		a = b;
		b = tmp;
		tmp= a % b;
	}
	printf("最大公约数为：%d",b);
	return 0;
}