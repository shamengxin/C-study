#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void emnu()//游戏菜单
{
	printf("*******************************\n");
	printf("*******0～100随机数猜测********\n");
	printf("***1、进入游戏   0、退出游戏***\n");
	printf("*******************************\n");
}

void game()//游戏内容
{
	int i = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess >= 1 && guess <= 100)
		{
			if (guess > i)
			{
				printf("猜大了！\n");
			}
			else if (guess < i)
			{
				printf("猜小了！\n");
			}
			else
			{
				printf("恭喜你猜对了！\n");
				break;
			}
		}
		else
		{
			printf("猜测数字超出范围，请猜测1～100之内的数字\n");
			printf("请重新输入！\n");
		}
	}

}
int main()
{
	int input;
	srand((unsigned)time(NULL));
	do
	{
		emnu();
		printf("请输入（1/0）:");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误，请重新输入！\n");

		}

	} while (input);

	return 0;
}