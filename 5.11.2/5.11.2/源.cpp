#include <stdio.h>
int main()
{
	int num;
	int origin = 0;
	
	printf("���������һ��������"
		"Ȼ����򽫻ᰴ��һ���ĸ�ʽ����ȸ�����10����������\n");
	printf("���������������");
	scanf_s("%d", &num);
	origin = num;
	printf("����ǽ����");
	printf("%d", num);

	while (num++ < origin + 10)
	{
		printf("%4d", num);
	}
	      
	return 0;
}