/*
两个int（32位）整数m和n的二进制表达中，
有多少个位(bit)不同？
输入例子 :
1999 2299
输出例子 : 7
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int binary_comparison(int a, int b)
{
	return (a^ b);//把两数进行异或，二进制位不同的为1，相同的为0
}
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
	int a;
	int b;
	int count;
	printf("请输入比较的两数：");
	scanf("%d %d", &a, &b);
	count=Count_one_bits(binary_comparison(a, b));
	printf("不同位数为：%d", count);
	return 0;
}