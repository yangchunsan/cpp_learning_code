#include <stdio.h>
union Un1
{
	char c[5];//1*5=5
	int i;//4
};
union Un2
{
	short c[7];//2*7=14
	int i;//4
};

int main()
{
	//下面输出的结果是什么？
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));

	return 0;
}
