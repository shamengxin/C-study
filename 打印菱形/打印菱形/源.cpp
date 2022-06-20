#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int i, j;
	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= 7 - i; j++)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
	for (i = 1; i <= 6; i++)//如这里为7最后一行会打印7个空格
	{
		for (j = 1; j <= i; j++)
			printf(" ");
		for (j = 1; j <= 13-2 * i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}