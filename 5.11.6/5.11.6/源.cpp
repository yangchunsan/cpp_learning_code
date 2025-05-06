#include <stdio.h>
int main()
{
	int input, output, origin;
	input = 0;
	output = 0;
	origin = 0;

	printf("这是一个能算整数平方和的程序，你只要输入正整数的个数即可\n");
	printf("要求：请输入正整数；若非正整数，程序会停止运行。\n");
	printf("现在请你输入：");
	scanf_s("%4d", &input);

	while (origin++ < input)
	{
		output = output + origin * origin;
	}
	printf("输出的结果是：%4d", output);

	return 0;
}