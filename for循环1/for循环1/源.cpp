//打印多行相同数据
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
}*

//打印内容倒金字塔
/*
ABCDEF
BCDEF
CDEF
DEF
EF
F
*/
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

//金字塔的编程练习
/*
$
$$
$$$
$$$$
$$$$$
*/
/*#include <stdio.h>
int main()
{
	const int ROWS = 6;
	int row;
	char ch = '$';

	for (row = 1; row < ROWS; row++)//外层循环控制行数,每次循环row会+1，能打五行
	{
		for (int i = 0; i < row; i++)//内层循环控制打印的字符和字符数
		{                            //i的大小决定字符数的多少
			printf("%c", ch);        //在一次外层循环中，内层循环的次数是i+1次
		}                            //而i和row会同步加一，因此每次循环的时候内层函数打印字符的个数会+1
		printf("\n");
	}

	return 0;
}*/

//正金字塔
/*
F
FE
FED
FEDC
FEDCB
FEDCBA
*/
/*#include <stdio.h>
int main()
{
	char ch = 'F';
	int rows = 6; // 总行数 

for (int i = 1; i <= rows; i++)//外层循环总行数为六行
{
	for (int j = 0,ch = 'F'; j < i; j++)
	{                                       
		printf("%c", ch);
		ch--;
	}                                       
		printf("\n");
	}

	return 0;
}*/

//金字塔
/*
A
BC
DEF
GHIJ
KLMNO
PQRSTU
*/
#include <stdio.h>
int main()
{
	int rows = 6;
	char ch = 'A';

	for (int i = 1; i <= rows; i++)//确保六行
	{
		for (int j = 0; j < i; j++)
		{
			printf("%c", ch);
			ch++;
		}
		printf("\n");
	}

	return 0;
}

/*
ABCDEF
BCDEF
CDEF
DEF
EF
F
*/
/*#include <stdio.h>
int main()
{
	int rows = 6;
	int n;
	char ch;

	for (n = 0; n < rows; n++)
	{
		for (int i = 6, ch = ('A' + n); i > n; i--)
		{
			
			printf("%c", ch);
			ch++;
		}
		printf("\n");
	}

	return 0;
}*/

/*
F
FE
FED
FEDC
FEDCB
FEDCBA
*/
/*#include <stdio.h>
int main()
{
	int rows = 6;//控制行数为六行
	char ch;

	for (int n = 1; n <= rows; n++)//因为要利用行数限制字符数，所以初始化为1
	{
		for (int i = 0, ch = 'F'; i < n; i++)
		{
			printf("%c", ch);
			ch--;
		}
		printf("\n");
	}

	return 0;
}*/