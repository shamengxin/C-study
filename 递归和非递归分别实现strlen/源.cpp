#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//非递归
//int my_strlrn(char arr[])
//{
//	int count = 0;
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		count++;
//		i++;
//	}
//	return count;
//}
//递归
int My_strlen(char* arr)
{
	if (*arr == '\0')
		return 0;
	else
		return 1 + My_strlen(arr + 1);
}
int main()
{
	char arr[] = "abcdef";
	int count=My_strlen(arr);
	printf("数组长为%d\n", count);
	return 0;
}