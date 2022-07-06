#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//非递归
//int factorial(int n)
//{
//	int i = 0;
//	int result = 1;
//	for (i = 1; i <= n; i++)
//	{
//		result *= i;
//	}
//	return result;
//}
//递归
int Factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return n * Factorial(n - 1);
}
int main()
{
	int n = 5;
	int result = Factorial(n);
	printf("结果为：%d\n", result);
	return 0;
}
