#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10];
	int b[10];
	printf("请输入数组a的内容:\n");
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("请输入数组b的内容:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = 0; i < 10; i++)
	{
		/*方法一
		a[i] = a[i] ^ b[i];
		b[i] = a[i] ^ b[i];
		a[i] = a[i] ^ b[i];*/
		/*方法二*/
		a[i] = a[i] + b[i];
		b[i] = a[i] - b[i];
		a[i] = a[i] - b[i];
	/*	方法三：可以利用strcpy函数进行交换
		方法四：可以利用指针进行交换
		方法五：可以创建第三个数组作为中间变量进行交换*/
	}
	printf("数组a的内容为：");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("数组b的内容为：");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}