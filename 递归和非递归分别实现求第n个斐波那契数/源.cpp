#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ǵݹ�
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

//�ݹ�
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
	printf("����������ڼ���쳲���������");
	scanf("%d", &n);
	if (n > 0)
		printf("��%d��쳲�������Ϊ��%d\n", n, fib(n));
	else
		printf("��������\n");
	return 0;
}