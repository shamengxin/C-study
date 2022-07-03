#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int zhiShu(int n, int k)
{
	if (k > 0)
	return n * zhiShu(n, --k);
}
int main()
{
	int n = 0;
	int k = 0;
	printf("请输入底数和指数：");
	scanf("%d %d", &n, &k);
	int result = zhiShu(n, k);
	printf("结果为：%d",result);
	return 0;
}