/*
дһ���������ز����������� 1 �ĸ���
���磺 15       0000 1111       4 �� 1
����ԭ�ͣ�
int  count_one_bits(unsigned int value)
{
	   // ���� 1��λ��
}
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����һ
//int count_one_bits(unsigned int value)
//{
//	int count=0;
//	while (value !=0 )
//	{
//		if (value % 2 == 1)
//			count++;
//		value = value / 2;
//	}
//	return count;
//}
//������
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
	int value;
	scanf("%d", &value);
	printf("1�ĸ���Ϊ��%d\n",Count_one_bits(value));
	return 0;
}