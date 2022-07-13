/*
一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
请找出这个数字。（使用位运算）
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
	printf("单独的数字为：%d",singleNumber(arr,sz));
	return 0;
}