/*
��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
����һ��
int average(int a, int b)
{
	return (a + b) >> 1;
}
*/

/*
��������
int average(int a, int b)
{
	return a + ((b - a) >> 1);
}
*/

//��������
int average(int a, int b)
{
	return (a & b) + ((a ^ b) >> 1);
	//���в���+��ͬ���ֵĺ͵�һ��
	/*
	��6��4
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