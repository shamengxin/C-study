//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char murderer;
	for (murderer = 'a'; murderer <= 'd'; murderer++)
	{
		if ((murderer != 'a') + (murderer == 'c') + (murderer == 'd') + (murderer != 'd') == 3)
			printf("murderer=%c", murderer);
	}
	return 0;
}