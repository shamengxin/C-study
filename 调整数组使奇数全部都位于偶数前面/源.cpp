/*
��������ʹ����ȫ����λ��ż��ǰ�档
��Ŀ��
����һ���������飬ʵ��һ��������
�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
����ż��λ������ĺ�벿�֡�
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