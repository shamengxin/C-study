#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[10] = { 0 };
	char passwd[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("�������û��������룺\n");
		scanf("%s%s", arr, passwd);
		if (strcmp(arr, "hello") == 0 && strcmp(passwd, "123456") == 0)
		{
			printf("��¼�ɹ���\n");
			break;
		}
		else
			printf("�û����������������������!\n");
	}
	if (i == 3)
	{
		printf("�����ﵽ���ޣ������˳���\n");
	}
	return 0;
}