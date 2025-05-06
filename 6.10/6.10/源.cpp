//嵌套循环
/*#include <stdio.h>
#define ROWS 6
#define CHARS 10

int main()
{
	int row;
	char ch;

	for (row = 0; row < ROWS; row++)//外层循环，总共执行六次
	{
		for (ch = 'A'; ch < ('A' + CHARS); ch++)//内层循环，每次外层循环开始，内层循环进行一次
		{
			printf("%c", ch);
		}
		printf("\n");//换行，帮助分清每次循环进行的内容
	}

	return 0;
}*/

//打印内容倒金字塔
/*#include <stdio.h>
int main()
{
	const int ROWS  = 6;
	const int CHARS = 6;
	int row;
	char ch;

	for (row = 0; row < ROWS; row++)//外层循环
	{
		for (ch = ('A' + row); ch < ('A' + CHARS); ch++)//内层循环，外层循环会影响内层循环
		{                                       //原理是，每进行一次外层循环，row加一
			printf("%c", ch);                   //内层循环定义“ch"的值加一，打印的字母个数减一
		}
		printf("\n");
	}

	return 0;
}*/

