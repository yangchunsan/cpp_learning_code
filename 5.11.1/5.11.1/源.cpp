#include <stdio.h>
#define MIN 60
int main()
{
	int hour, min, left;
	printf("这是一个可以将分钟数转换为小时和分钟的程序\n");
	printf("要求：输入小于或等于零的数时程序会停止运行，"
		"若不是，程序会一直运行\n");
	printf("请在这里输入你想转变的分钟数：");
	scanf_s("%d", &min);//读取分钟数

	while (min > 0)
	{
		hour = min / MIN;//截断小时数
		left = min % MIN;//剩余分钟数
		printf("那么，转换的结果是%2d时%2d分", hour, left);
		printf("现在你可以继续输入啦，不过还是要按照要求来哦！\n");
		printf("请在这里输入你想转变的分钟数：");
		scanf_s("%d", &min);
		
	}
	printf("程序结束！！！");

	return 0;
}