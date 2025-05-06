#include <stdio.h>
int main()
{
	int num;
	int origin = 0;
	
	printf("你可以输入一个整数，"
		"然后程序将会按照一定的格式输出比该数大10的所有整数\n");
	printf("请输入这个整数：");
	scanf_s("%d", &num);
	origin = num;
	printf("这就是结果：");
	printf("%d", num);

	while (num++ < origin + 10)
	{
		printf("%4d", num);
	}
	      
	return 0;
}