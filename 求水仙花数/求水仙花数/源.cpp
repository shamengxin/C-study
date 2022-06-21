#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	printf("0～999中的水仙花数为：");
	for (i =0; i < 1000; i++)
	{
		int tmp = 0;
		int j = i;
		while (j)//这里不用i是因为，i进入之后，i的值会被更改，进入死循环，所以要用j来代替
		{
			tmp += (int)pow(j % 10, 3);
			j= j/ 10;
		}
		if (tmp == i&&tmp>100)
			printf("%d ", i);

	}
	return 0;
}