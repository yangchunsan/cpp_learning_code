#include <stdio.h>
int main()
{
	int input, output, origin;
	input = 0;
	output = 0;
	origin = 0;

	printf("����һ����������ƽ���͵ĳ�����ֻҪ�����������ĸ�������\n");
	printf("Ҫ���������������������������������ֹͣ���С�\n");
	printf("�����������룺");
	scanf_s("%4d", &input);

	while (origin++ < input)
	{
		output = output + origin * origin;
	}
	printf("����Ľ���ǣ�%4d", output);

	return 0;
}