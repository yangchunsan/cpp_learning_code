#include <stdio.h>
#define WEEK 7
int main()
{
	int days, weeks, left;
	printf("你可以输入一个正整数，它将作为天数储存，然后程序将其转变周数和剩余的天数。\n");
	printf("这个程序的要求是：当你输入完成后，程序能一直运行；若输入的不是正整数，程序会停止。\n");
	printf("现在请你输入天数：");
	scanf_s("%5d", &days);

	while (days > 0)
	{
		weeks = days / WEEK;//算的周数
		left = days % WEEK;//剩余的天数
		printf("那么%d天相当于%d周%d天", days, weeks, left);
		printf("\n那么继续输入吧：");
		scanf_s("%5d", &days);
	}
	printf("你没输入正整数！！！");
	printf("重新运行一遍程序吧！");

	return 0;
}