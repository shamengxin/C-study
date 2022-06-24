#define  _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
#include<stdio.h>
int main()
{
	int i = 0;
	printf("请输入一个字符：");
	while ((i = getchar()) != EOF)//EOF---ctrl+z
	{
		if (i >= 'a' && i <= 'z')
		{
			putchar(i - 32);
		}
		else if (i >= 'A' && i <= 'Z')
		{
			putchar(i + 32);
		}
		else if (i >= '1' && i <= '9')
		{
			printf(" ");
		}
		else
		{
			putchar(i);
		}
		getchar();//清除\n
		printf("\n请输入一个字符：");
	}
	printf("\n");
	return 0;
}