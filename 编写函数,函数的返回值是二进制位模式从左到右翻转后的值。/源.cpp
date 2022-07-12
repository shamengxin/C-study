/*
编写函数：
unsigned int reverse_bit(unsigned int value);
这个函数的返回值是value的二进制位模式从左到右翻转后的值。

如：
在32位机器上25这个值包含下列各位：
00000000000000000000000000011001
翻转后：（2550136832）
10011000000000000000000000000000
程序结果返回：
          2550136832
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
方法一：
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

//方法二：
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
        }//取出最后一位，赋值给date的最后一位，然后把date整体在向左移一位，以此类推，一共移32位。
        value >>= 1;
    }
    return date;
}

int main()
{
    printf("反转后：%u", reverse_bit(25));
    return 0;
}