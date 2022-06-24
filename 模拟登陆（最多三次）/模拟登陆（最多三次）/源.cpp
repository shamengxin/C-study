#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[10] = { 0 };
	char passwd[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入用户名和密码：\n");
		scanf("%s%s", arr, passwd);
		if (strcmp(arr, "hello") == 0 && strcmp(passwd, "123456") == 0)
		{
			printf("登录成功！\n");
			break;
		}
		else
			printf("用户名或密码错误，请重新输入!\n");
	}
	if (i == 3)
	{
		printf("次数达到上限，程序退出！\n");
	}
	return 0;
}