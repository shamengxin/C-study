#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10];
	int b[10];
	printf("����������a������:\n");
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("����������b������:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = 0; i < 10; i++)
	{
		/*����һ
		a[i] = a[i] ^ b[i];
		b[i] = a[i] ^ b[i];
		a[i] = a[i] ^ b[i];*/
		/*������*/
		a[i] = a[i] + b[i];
		b[i] = a[i] - b[i];
		a[i] = a[i] - b[i];
	/*	����������������strcpy�������н���
		�����ģ���������ָ����н���
		�����壺���Դ���������������Ϊ�м�������н���*/
	}
	printf("����a������Ϊ��");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("����b������Ϊ��");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}