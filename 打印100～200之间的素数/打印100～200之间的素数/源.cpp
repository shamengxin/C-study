#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int m, n,i;
	printf("100～200之间的素数有:\n");
	for (m = 100; m <= 200; m++)
	{
		n = (int)sqrt(m);
		for (i = 2; i <=n; i++)
		{
			if (0 == m % i)
				break;
		}
		if (i > n)
			printf("%d ", m);
	}

	return 0;
}