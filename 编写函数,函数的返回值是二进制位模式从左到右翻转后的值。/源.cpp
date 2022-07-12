/*
��д������
unsigned int reverse_bit(unsigned int value);
��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��

�磺
��32λ������25���ֵ�������и�λ��
00000000000000000000000000011001
��ת�󣺣�2550136832��
10011000000000000000000000000000
���������أ�
          2550136832
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
����һ��
unsigned int reverse_bit(unsigned int value)
{
    unsigned int date = 0;
    int num = 0;
    int bit = 0;
    while (num < 32)
    {
        bit = value & 1;
        value >>= 1;
        date += bit << (31 - num);
        num++;
    }
    return date;
}
*/

//��������
unsigned int reverse_bit(unsigned int value)
{
    unsigned int date = 0;
    unsigned int i = 0;
    for (i = 1; i != 0; i <<= 1)
    {
        date <<= 1;
        if (value & 1)
        {
            date |= 1;
        }//ȡ�����һλ����ֵ��date�����һλ��Ȼ���date������������һλ���Դ����ƣ�һ����32λ��
        value >>= 1;
    }
    return date;
}

int main()
{
    printf("��ת��%u", reverse_bit(25));
    return 0;
}