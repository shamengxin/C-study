/*
ʵ��һ�����������������ַ����е�k���ַ���
ABCD����һ���ַ��õ�BCDA
ABCD���������ַ��õ�CDAB
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void levogyration(char arr[],int k,int len)
{
	k%=len;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < len-1; j++)
		{
			char tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
		}
	}
}
int main()
{
	int k = 0;
	scanf("%d", &k);
	char arr[]="ABCD";
	int len = strlen(arr);
	levogyration(arr, k, len);
	printf("%s\n", arr);
	return 0;
}