#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Init(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i;
	}
}

void print(int arr[],int sz)
{
	int j;
	for(j=0;j<sz;j++)
	{
		printf("%d ", arr[j]);
	}
	printf("\n");
}

void Reverse(int arr[], int sz)
{
	int left, right, tmp;
	left = 0;
	right = sz - 1;
	while(left < right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

void Empty(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Init(arr, sz);
	printf("初始化后，数组元素为：");
	print(arr, sz);
	Reverse(arr, sz);
	printf("数组元素逆置后，数组元素为：");
	print(arr, sz);
	Empty(arr, sz);
	printf("清空数组后，数组元素为：");
	print(arr, sz);
	return 0;
}