/*
调整数组使奇数全部都位于偶数前面。
题目：
输入一个整数数组，实现一个函数，
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
所有偶数位于数组的后半部分。
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void exchange(int* arr,int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while ((arr[left] & 1) == 1 && left < right)
		{
			left++;
		}
		while ((arr[right] & 1) == 0 && left < right)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

int main()
{
	int arr[] = {2,3,4,3,8,7,9,3,1,5,7};
	int sz = sizeof(arr) / sizeof(arr[0]);
	exchange(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}