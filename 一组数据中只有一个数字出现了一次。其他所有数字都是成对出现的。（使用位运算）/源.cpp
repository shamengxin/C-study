/*
һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
���ҳ�������֡���ʹ��λ���㣩
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int singleNumber(int arr[],int sz)
{
	int num = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		num ^= arr[i];
		//a^0=a,a^a=0
	}
	return num;
}
int main()
{
	int arr[] = { 1,2,4,5,3,3,4,1,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("����������Ϊ��%d",singleNumber(arr,sz));
	return 0;
}