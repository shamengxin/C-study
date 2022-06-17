#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	printf("1000～2000之间的闰年有：\n");
	for (n = 1000; n <= 2000; n++)
	{
		if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
		{
			printf("%d ", n);
		}

	}
	return 0;
}