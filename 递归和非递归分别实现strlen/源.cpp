#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ǵݹ�
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
//�ݹ�
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
	printf("���鳤Ϊ%d\n", count);
	return 0;
}