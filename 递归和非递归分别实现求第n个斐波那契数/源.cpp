#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//非递归
int Fib(int n)
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
	{
		int one = 0;
		int two = 1;
		int result;
		while (n > 2)
		{
			result = one + two;
			one = two;
			two = result;
			n--;
		}
		return result;
	}
}

//递归
int fib(int n)
{
	if (n ==1)
	{
		return 0;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int main()
{
	int n;
	printf("请输入想求第几个斐波那契数：");
	scanf("%d", &n);
	if (n > 0)
		printf("第%d个斐波那契数为：%d\n", n, fib(n));
	else
		printf("输入有误！\n");
	return 0;
}