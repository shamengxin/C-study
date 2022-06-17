#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i ,j;
	int arr[3] = { 0 };
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3 - i; j++)
		{
			int tmp = 0;
			if (arr[j] < arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}