#include <stdio.h>
#define MIN 60
int main()
{
	int hour, min, left;
	printf("����һ�����Խ�������ת��ΪСʱ�ͷ��ӵĳ���\n");
	printf("Ҫ������С�ڻ���������ʱ�����ֹͣ���У�"
		"�����ǣ������һֱ����\n");
	printf("����������������ת��ķ�������");
	scanf_s("%d", &min);//��ȡ������

	while (min > 0)
	{
		hour = min / MIN;//�ض�Сʱ��
		left = min % MIN;//ʣ�������
		printf("��ô��ת���Ľ����%2dʱ%2d��", hour, left);
		printf("��������Լ�������������������Ҫ����Ҫ����Ŷ��\n");
		printf("����������������ת��ķ�������");
		scanf_s("%d", &min);
		
	}
	printf("�������������");

	return 0;
}