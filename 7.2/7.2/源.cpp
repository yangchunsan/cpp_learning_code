#include <stdio.h>
#define SPACE ' '//������+�ո�+������
int main()
{
	char ch;

	ch = getchar();//��ȡһ���ַ�

	while (ch != '\n')//��һ��δ����ʱ
	{
		if (ch == SPACE)//���¿ո�
			putchar(ch);//���ַ�����
		else
			putchar(ch + 1);//û���¿ո���������ȡ��һ���ַ�
		ch = getchar();//��ȡ��һ���ַ�
	}
	putchar(ch);

	return 0;
}