#include <stdio.h>
int main()
{
	int input, origin, output;
	origin = 0;
	output = 0;
	input = 0;
	printf("这是一个累加程序，你可以输入累加数字个数的多少\n");
	printf("现在你可以输入该个数了：");
	scanf_s("%d", &input);

	while (origin++ < input)
	{
		output = output + origin;
	}
	printf("结果是：%d\n", output);
	printf("我还想知道最后origin = %d", origin);

	return 0;
}