#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int i = 0;
	printf("������Ҫ���ҵ�Ԫ�أ�");
	scanf("%d", &i);
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (i > arr[mid])
		{
			left = mid + 1;
		}
		else if (i < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("���������޴�Ԫ��\n");
	}
	return 0;
}