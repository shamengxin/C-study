#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define ROW 100
#define COL 100
int main()
{
	int i,m;
	int n = 0;
	printf("请输入要打印的行数:>");
	scanf("%d", &i);
	int arr[ROW][COL];
	for (m = 0; m < i; m++)
	{
		arr[m][0] = 1;
		arr[m][m] = 1;
	}
	for (m = 2; m < i; m++)
	{
		for (n = 1; n < m; n++)
		{
			arr[m][n] = arr[m - 1][n - 1] + arr[m - 1][n];
		}
	}
	for (m = 0; m < i; m++)
	{
		for (n = 1; n <= i-m; n++)
			printf(" ");
		for (n = 0; n <= m; n++)
		{
			printf("%d ", arr[m][n]);
		}
		printf("\n");
	}
	return 0;
}