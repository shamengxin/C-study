/*
��һ���ַ����������Ϊ:"student a am i",
���㽫��������ݸ�Ϊ"i am a student".
Ҫ��
����ʹ�ÿ⺯����
ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
//����һ��ָ��
//student a am i
//i ma a tneduts
//i am a student

#include<stdlib.h>
#include<string.h>

void filpString(char* str1, char* str2)
{
	char* left = str1;
	char* right = str2;
	char tmp;
	while (left < right)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void filpWord(char* p)
{
	while (*p != '\0')
	{
		char* tmp = p;
		while (*p != '\0' && *p != ' ')
		{
			p++;
		}
		filpString(tmp, p - 1);
		p++;
	}
}
int main()
{
	char p[] = "student a am i";
	int len = strlen(p);
	printf("ԭ�ַ���Ϊ��%s\n", p);
	printf("��ת����ַ���Ϊ��");
	filpString(p, p + len - 1);
	filpWord(p);
	printf("%s\n", p);
	return 0;
}
*/

//������������
//student a am i
//tneduts a ma i
//i am a student
void reverseString(char arr[], int x, int y)
{
	x -= 1;
	while (y<x)
	{
		char tmp = arr[y];
		arr[y] = arr[x];
		arr[x] = tmp;
		y++;
		x--;
	}
}

void reverse(char arr[], int sz)
{
	int x = 0;
	int y = 0;
	int i = sz;
	while (sz--)
	{
		if (arr[x] == ' ' || arr[x] == '\0')
		{
			reverseString(arr, x, y);
			y = x + 1;
			x = y;
		}
		else
		{
			x++;
		}
	}
	//reverseString(arr, sz - 1, 0);���е�����ʱ��sz�Ѿ����0�ˣ����������������������������ִ��
	reverseString(arr, i- 1, 0);
}

int main()
{
	char arr[] = "student a am i";
	int sz = sizeof(arr) / sizeof(arr[0]);//��1��ʼ������'\0',����ֵΪ15
	printf("ԭ�ַ���Ϊ��%s\n", arr);
	reverse(arr, sz);
	printf("��ת����ַ���Ϊ��%s\n", arr);
	return 0;
}