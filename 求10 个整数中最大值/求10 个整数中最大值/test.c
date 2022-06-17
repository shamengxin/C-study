#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int max = 0;
	int arr[10] = { 0 };
	int i ;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("×î´óÖµmax=%d\n",max);
	return  0;
}