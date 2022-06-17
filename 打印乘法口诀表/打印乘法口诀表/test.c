#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m, n;
	for (m = 1; m < 10; m++)
	{
		for (n = 1; n <= m; n++)
		{
			printf("%3d¡Á%d=%2d",n, m, n * m);
		}
		printf("\n");
	}
	return 0;
}