#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ע�ⱻ�������ַ����Ŀռ�Ҫ���ڻ���ڿ������ַ���
char* My_strcpy(char* dest, const char* str)
{
	char* ret = dest;
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
}

//ע�ⱻ���ӵ��Ǹ����Ŀռ�Ҫ���������Ŀռ������Ҫ��������
char* My_strcat(char* str1, char* str2)
{
	char* ret = str1;
	while (*str1 != '\0')
	{
		str1++;
	}
	while (*str1++ = *str2++)
	{
		;
	}
	return ret;
}

int main()
{
	char str1[20] = "Hello";
	char str2[] = "World";
	char str3[20] = "";
	My_strcpy(str3, str1);
	printf("%s\n", str3);
	My_strcat(str1, str2);
	printf("%s\n", str1);
	return 0;
}