/*
����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
��20Ԫ�����Զ�����ˮ��
���ʵ�֡�
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//money��ӵ�е�Ǯ����univalence����ˮ���ۣ�num�Ǽ�����ƿ���Ի�һƿ��ˮ
	//sum�ǿ��Եõ���ˮ������,initalBottle���ʼ�����򵽵�ƿ��
	int money, univalence, num,sum,initalBottle;
	printf("������ӵ�е�Ǯ������ˮ�ĵ��ۣ��Լ�������ƿ���Ի�һƿ��ˮ��");
	scanf("%d %d %d", &money, &univalence, &num);
	initalBottle = money / univalence;
	sum = initalBottle;
	while (initalBottle >= num)
	{
		sum += initalBottle / num;
		initalBottle = initalBottle / num + initalBottle % num;
	}
	printf("�ܺ�%dƿ��ˮ\n", sum);
	return 0;
}