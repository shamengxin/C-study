#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void emnu()//��Ϸ�˵�
{
	printf("*******************************\n");
	printf("*******0��100������²�********\n");
	printf("***1��������Ϸ   0���˳���Ϸ***\n");
	printf("*******************************\n");
}

void game()//��Ϸ����
{
	int i = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess >= 1 && guess <= 100)
		{
			if (guess > i)
			{
				printf("�´��ˣ�\n");
			}
			else if (guess < i)
			{
				printf("��С�ˣ�\n");
			}
			else
			{
				printf("��ϲ��¶��ˣ�\n");
				break;
			}
		}
		else
		{
			printf("�²����ֳ�����Χ����²�1��100֮�ڵ�����\n");
			printf("���������룡\n");
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
		printf("�����루1/0��:");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("����������������룡\n");

		}

	} while (input);

	return 0;
}