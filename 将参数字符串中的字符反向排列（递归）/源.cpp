/*
��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�������������
*/
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void reverse_string(char* str)
{
	if (*str == '\0')
		return ;
	reverse_string(++str);
	printf("%c ", *(str-1));//����-1����Ϊ��*strָ��\0ʱ�±�Ϊ7���ڷ��غ�printf��ӡ*strʱ��*str��ֵ����Ϊ7��
}							//�����-1�Ļ�������±�Ϊ7��Ҳ����\0����ʼ��ӡ�������ᵼ������a���ܱ���ӡ������
							//bug��
int main()
{
	char str[] = "abcdef";
	reverse_string(str);
	return 0;
}
 