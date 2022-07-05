/*
编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void reverse_string(char* str)
{
	if (*str == '\0')
		return ;
	reverse_string(++str);
	printf("%c ", *(str-1));//这里-1是因为，*str指向\0时下标为7，在返回后，printf打印*str时，*str的值还是为7，
}							//如果不-1的话，会从下标为7（也就是\0）开始打印，这样会导致最后的a不能被打印，出现
							//bug。
int main()
{
	char str[] = "abcdef";
	reverse_string(str);
	return 0;
}
 