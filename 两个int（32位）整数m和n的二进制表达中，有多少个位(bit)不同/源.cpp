/*
����int��32λ������m��n�Ķ����Ʊ���У�
�ж��ٸ�λ(bit)��ͬ��
�������� :
1999 2299
������� : 7
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int binary_comparison(int a, int b)
{
	return (a^ b);//������������򣬶�����λ��ͬ��Ϊ1����ͬ��Ϊ0
}
int Count_one_bits(unsigned int value)
{
	int count = 0;
	while (value)
	{
		value = value & (value - 1);
		//ÿ��ȥ�����ұߵ�һ��1
		//Ч�ʸ��ߣ��м���1�����м���
		count++;
	}
	return count;
}
int main()
{
	int a;
	int b;
	int count;
	printf("������Ƚϵ�������");
	scanf("%d %d", &a, &b);
	count=Count_one_bits(binary_comparison(a, b));
	printf("��ͬλ��Ϊ��%d", count);
	return 0;
}