#include <stdio.h>
int main()
{
	int input, origin, output;
	origin = 0;
	output = 0;
	input = 0;
	printf("����һ���ۼӳ�������������ۼ����ָ����Ķ���\n");
	printf("�������������ø����ˣ�");
	scanf_s("%d", &input);

	while (origin++ < input)
	{
		output = output + origin;
	}
	printf("����ǣ�%d\n", output);
	printf("�һ���֪�����origin = %d", origin);

	return 0;
}