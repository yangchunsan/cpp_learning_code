#include <stdio.h>
void hollowPyramid( int n )
{
	for (int i = 0; i < n; i++)//��������
	{
		if (i == n - 1)//�������һ��
		{
			for (int b = 0; b < 2 * n - 1; b++)
			{
				printf("%d", n);
			}
			break;
		}
		
		for (int j = 0; j < n - i - 1; j++)//����ÿ��ǰ��Ŀո������ո���+1 = ��������
		{
			printf(" ");
		}
		
		for (int a = 0; a < (1 + 2 * i); a++)//����ÿ�е��ַ����ڲ��Ŀո�
		{
			if (a == 0 || a == 2 * i)
			{
				printf("%d", i + 1);
			}
			else
			{
				printf(" ");
			}
		}
	
		printf("\n");//ÿ�л���
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	hollowPyramid(n);
	
	return 0;
}
