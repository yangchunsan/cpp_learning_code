#include <stdio.h>
#define WEEK 7
int main()
{
	int days, weeks, left;
	printf("���������һ����������������Ϊ�������棬Ȼ�������ת��������ʣ���������\n");
	printf("��������Ҫ���ǣ�����������ɺ󣬳�����һֱ���У�������Ĳ����������������ֹͣ��\n");
	printf("������������������");
	scanf_s("%5d", &days);

	while (days > 0)
	{
		weeks = days / WEEK;//�������
		left = days % WEEK;//ʣ�������
		printf("��ô%d���൱��%d��%d��", days, weeks, left);
		printf("\n��ô��������ɣ�");
		scanf_s("%5d", &days);
	}
	printf("��û����������������");
	printf("��������һ�����ɣ�");

	return 0;
}