#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int j,tmp=0;
	int k = 0;
	printf("请输入1～9的数字：\n");
	scanf(" %d", &i);
	if (i>=1&&i<=9)
	{
		printf("Sn=");
		for (j = 1; j <= 5; j++)//打印Sn=a+aa+aaa+aaaa+aaaaa
		{
			int n;
			n = j;
			while (n)
			{
				printf("%d", i);
				n--;
			}
			if (j <= 4)
				printf("+");
			else
				printf("=");
		}
		for (j = 0; j < 5; j++)
		{
			k += i;
			tmp += k;
			i = i * 10;
		}
		printf("%d", tmp);
	}
	else
		printf("输入有误，退出!\n");
	return 0;
}