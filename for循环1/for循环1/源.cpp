//��ӡ������ͬ����
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
}*

//��ӡ���ݵ�������
/*
ABCDEF
BCDEF
CDEF
DEF
EF
F
*/
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

//�������ı����ϰ
/*
$
$$
$$$
$$$$
$$$$$
*/
/*#include <stdio.h>
int main()
{
	const int ROWS = 6;
	int row;
	char ch = '$';

	for (row = 1; row < ROWS; row++)//���ѭ����������,ÿ��ѭ��row��+1���ܴ�����
	{
		for (int i = 0; i < row; i++)//�ڲ�ѭ�����ƴ�ӡ���ַ����ַ���
		{                            //i�Ĵ�С�����ַ����Ķ���
			printf("%c", ch);        //��һ�����ѭ���У��ڲ�ѭ���Ĵ�����i+1��
		}                            //��i��row��ͬ����һ�����ÿ��ѭ����ʱ���ڲ㺯����ӡ�ַ��ĸ�����+1
		printf("\n");
	}

	return 0;
}*/

//��������
/*
F
FE
FED
FEDC
FEDCB
FEDCBA
*/
/*#include <stdio.h>
int main()
{
	char ch = 'F';
	int rows = 6; // ������ 

for (int i = 1; i <= rows; i++)//���ѭ��������Ϊ����
{
	for (int j = 0,ch = 'F'; j < i; j++)
	{                                       
		printf("%c", ch);
		ch--;
	}                                       
		printf("\n");
	}

	return 0;
}*/

//������
/*
A
BC
DEF
GHIJ
KLMNO
PQRSTU
*/
#include <stdio.h>
int main()
{
	int rows = 6;
	char ch = 'A';

	for (int i = 1; i <= rows; i++)//ȷ������
	{
		for (int j = 0; j < i; j++)
		{
			printf("%c", ch);
			ch++;
		}
		printf("\n");
	}

	return 0;
}

/*
ABCDEF
BCDEF
CDEF
DEF
EF
F
*/
/*#include <stdio.h>
int main()
{
	int rows = 6;
	int n;
	char ch;

	for (n = 0; n < rows; n++)
	{
		for (int i = 6, ch = ('A' + n); i > n; i--)
		{
			
			printf("%c", ch);
			ch++;
		}
		printf("\n");
	}

	return 0;
}*/

/*
F
FE
FED
FEDC
FEDCB
FEDCBA
*/
/*#include <stdio.h>
int main()
{
	int rows = 6;//��������Ϊ����
	char ch;

	for (int n = 1; n <= rows; n++)//��ΪҪ�������������ַ��������Գ�ʼ��Ϊ1
	{
		for (int i = 0, ch = 'F'; i < n; i++)
		{
			printf("%c", ch);
			ch--;
		}
		printf("\n");
	}

	return 0;
}*/