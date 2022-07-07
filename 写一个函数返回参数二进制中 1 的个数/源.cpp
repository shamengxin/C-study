/*
写一个函数返回参数二进制中 1 的个数
比如： 15       0000 1111       4 个 1
程序原型：
int  count_one_bits(unsigned int value)
{
	   // 返回 1的位数
}
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//方法一
//int count_one_bits(unsigned int value)
//{
//	int count=0;
//	while (value !=0 )
//	{
//		if (value % 2 == 1)
//			count++;
//		value = value / 2;
//	}
//	return count;
//}
//方法二
int Count_one_bits(unsigned int value)
{
	int count = 0;
	while (value)
	{
		value = value & (value - 1);
		//每次去掉最右边的一个1
		//效率更高，有几个1，运行几次
		count++;
	}
	return count;
}
int main()
{
	int value;
	scanf("%d", &value);
	printf("1的个数为：%d\n",Count_one_bits(value));
	return 0;
}