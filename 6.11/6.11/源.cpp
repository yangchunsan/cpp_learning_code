//这是一个使用for循环的计数循环
#include <stdio.h>
int main()
{
	const int NUMBER = 22;
	int count;

	for (count = 1; count <= NUMBER; count++)
		//三个表达式，用分号隔开
		//第一个表达式为初始化，只会在循环开始时执行一次
		//第二个表达式是测试条件，在执行循环时对表达式求值。若表达式为假，循环结束,且不会再次进入循环
		//第三个表达式执行更新，在每次循环结束时求值，在求值后重新进入循环中的测试条件，不再进行初始化	
		printf("Be my Valentine!\n");
	printf("count = %d", count);

	return 0;
}