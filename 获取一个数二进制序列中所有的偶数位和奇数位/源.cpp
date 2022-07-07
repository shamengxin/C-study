#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print_odd_bits(int value)
{
	int i;
	printf("奇数位序列：");
	for (i = 31; i >= 1; i -= 2)
		printf("%d", ((value >> i) & 1));
	printf("\n");
}

void print_even_digits(int value)
{
	int i;
	printf("偶数位序列：");
	for (i = 30; i >= 0; i -= 2)
		printf("%d", ((value >> i) & 1));
	printf("\n");
}
int main()
{
	int num;
	scanf("%d", &num);
	print_odd_bits(num);
	print_even_digits(num);
	return 0;
}