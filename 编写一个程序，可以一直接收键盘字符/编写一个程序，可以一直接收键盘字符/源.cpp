#define  _CRT_SECURE_NO_WARNINGS 1
//��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
#include<stdio.h>
int main()
{
	int i = 0;
	printf("������һ���ַ���");
	while ((i = getchar()) != EOF)//EOF---ctrl+z
	{
		if (i >= 'a' && i <= 'z')
		{
			putchar(i - 32);
		}
		else if (i >= 'A' && i <= 'Z')
		{
			putchar(i + 32);
		}
		else if (i >= '1' && i <= '9')
		{
			printf(" ");
		}
		else
		{
			putchar(i);
		}
		getchar();//���\n
		printf("\n������һ���ַ���");
	}
	printf("\n");
	return 0;
}