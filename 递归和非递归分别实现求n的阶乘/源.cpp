#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ǵݹ�
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
//�ݹ�
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
	printf("���Ϊ��%d\n", result);
	return 0;
}
