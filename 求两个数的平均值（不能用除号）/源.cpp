/*
不使用（a + b） / 2这种方式，求两个数的平均值。
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
方法一：
int average(int a, int b)
{
	return (a + b) >> 1;
}
*/

/*
方法二：
int average(int a, int b)
{
	return a + ((b - a) >> 1);
}
*/

//方法三：
int average(int a, int b)
{
	return (a & b) + ((a ^ b) >> 1);
	//共有部分+不同部分的和的一半
	/*
	如6和4
	a 6 110
	b 4 100
	a&b=100 a^b=010
	*/
}
int main()
{
	printf("%d\n", average(20, 40));
	return 0;
}