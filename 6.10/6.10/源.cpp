//Ƕ��ѭ��
/*#include <stdio.h>
#define ROWS 6
#define CHARS 10

int main()
{
	int row;
	char ch;

	for (row = 0; row < ROWS; row++)//���ѭ�����ܹ�ִ������
	{
		for (ch = 'A'; ch < ('A' + CHARS); ch++)//�ڲ�ѭ����ÿ�����ѭ����ʼ���ڲ�ѭ������һ��
		{
			printf("%c", ch);
		}
		printf("\n");//���У���������ÿ��ѭ�����е�����
	}

	return 0;
}*/

//��ӡ���ݵ�������
/*#include <stdio.h>
int main()
{
	const int ROWS  = 6;
	const int CHARS = 6;
	int row;
	char ch;

	for (row = 0; row < ROWS; row++)//���ѭ��
	{
		for (ch = ('A' + row); ch < ('A' + CHARS); ch++)//�ڲ�ѭ�������ѭ����Ӱ���ڲ�ѭ��
		{                                       //ԭ���ǣ�ÿ����һ�����ѭ����row��һ
			printf("%c", ch);                   //�ڲ�ѭ�����塰ch"��ֵ��һ����ӡ����ĸ������һ
		}
		printf("\n");
	}

	return 0;
}*/

