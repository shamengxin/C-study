/*
喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
给20元，可以多少汽水。
编程实现。
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//money是拥有的钱数，univalence是汽水单价，num是几个空瓶可以换一瓶汽水
	//sum是可以得到汽水的总数,initalBottle是最开始可以买到的瓶数
	int money, univalence, num,sum,initalBottle;
	printf("请输入拥有的钱数，汽水的单价，以及几个空瓶可以换一瓶汽水：");
	scanf("%d %d %d", &money, &univalence, &num);
	initalBottle = money / univalence;
	sum = initalBottle;
	while (initalBottle >= num)
	{
		sum += initalBottle / num;
		initalBottle = initalBottle / num + initalBottle % num;
	}
	printf("能喝%d瓶汽水\n", sum);
	return 0;
}