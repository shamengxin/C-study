#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	printf("0��999�е�ˮ�ɻ���Ϊ��");
	for (i =0; i < 1000; i++)
	{
		int tmp = 0;
		int j = i;
		while (j)//���ﲻ��i����Ϊ��i����֮��i��ֵ�ᱻ���ģ�������ѭ��������Ҫ��j������
		{
			tmp += (int)pow(j % 10, 3);
			j= j/ 10;
		}
		if (tmp == i&&tmp>100)
			printf("%d ", i);

	}
	return 0;
}