#include <stdio.h>
#define SPACE ' '//单引号+空格+单引号
int main()
{
	char ch;

	ch = getchar();//读取一个字符

	while (ch != '\n')//当一行未结束时
	{
		if (ch == SPACE)//留下空格
			putchar(ch);//该字符不变
		else
			putchar(ch + 1);//没留下空格的情况将读取下一个字符
		ch = getchar();//获取下一个字符
	}
	putchar(ch);

	return 0;
}