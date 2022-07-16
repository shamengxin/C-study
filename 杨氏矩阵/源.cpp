/*
有一个二维数组.
数组的每行从左到右是递增的，每列从上到下是递增的.
在这样的数组中查找一个数字是否存在。
时间复杂度小于O(N);
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//从右上角开始
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
//左下角同理
int main()
{
	int arr[3][3] = { {1,3,6},{2,5,7},{4,6,8} };
	int x = 3;
	int y = 3;
	int num = 5;
	int ret = find_num(arr, num, &x, &y);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标是：%d %d\n", x + 1, y + 1);
	}
	else
	{
		printf("找不到！\n");
	}
	return 0;
}