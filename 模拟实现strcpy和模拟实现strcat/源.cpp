#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//注意被拷贝的字符串的空间要大于或等于拷贝的字符串
char* My_strcpy(char* dest, const char* str)
{
	char* ret = dest;
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
}

//注意被链接的那个串的空间要比两个串的空间加起来要大或者相等
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