/*
��һ����ά����.
�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
�������������в���һ�������Ƿ���ڡ�
ʱ�临�Ӷ�С��O(N);
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�����Ͻǿ�ʼ
int find_num(int arr[3][3], int num, int* px, int* py)
{
	int x = *px - 1;
	int y = 0;
	while (x >= 0 && y < *py)
	{
		if (num > arr[x][y])
		{
			y++;
		}
		else if (num < arr[x][y])
		{
			x--;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
//���½�ͬ��
int main()
{
	int arr[3][3] = { {1,3,6},{2,5,7},{4,6,8} };
	int x = 3;
	int y = 3;
	int num = 5;
	int ret = find_num(arr, num, &x, &y);
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("�±��ǣ�%d %d\n", x + 1, y + 1);
	}
	else
	{
		printf("�Ҳ�����\n");
	}
	return 0;
}