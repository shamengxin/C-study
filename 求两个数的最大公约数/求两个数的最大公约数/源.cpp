#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	printf("�������������֣�");
	scanf("%d%d", &a, &b);
	int tmp;
	tmp = a % b;
	while (tmp)
	{
		a = b;
		b = tmp;
		tmp= a % b;
	}
	printf("���Լ��Ϊ��%d",b);
	return 0;
}