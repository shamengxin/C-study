/*
有一个字符数组的内容为:"student a am i",
请你将数组的内容改为"i am a student".
要求：
不能使用库函数。
只能开辟有限个空间（空间个数和字符串的长度无关）。
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
//方法一：指针
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
	printf("原字符串为：%s\n", p);
	printf("翻转后的字符串为：");
	filpString(p, p + len - 1);
	filpWord(p);
	printf("%s\n", p);
	return 0;
}
*/

//方法二：数组
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
	//reverseString(arr, sz - 1, 0);运行到这里时，sz已经变成0了，进入这个函数后不满足条件，不会执行
	reverseString(arr, i- 1, 0);
}

int main()
{
	char arr[] = "student a am i";
	int sz = sizeof(arr) / sizeof(arr[0]);//从1开始还包含'\0',所以值为15
	printf("原字符串为：%s\n", arr);
	reverse(arr, sz);
	printf("翻转后的字符串为：%s\n", arr);
	return 0;
}