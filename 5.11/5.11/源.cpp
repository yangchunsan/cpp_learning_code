#include <stdio.h>
int main()
{
	int a = 1, b = 1;
	int a_post, pre_b;

	a_post = a++;//后缀：是使用之后赋值加一
	pre_b = ++b;//前缀：使用之前已经赋值加一
	printf("a  a_post  b  pre_b \n");
	printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);

	return 0;
}