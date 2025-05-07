#include <stdio.h>
void san(double a)
{
	printf("它的三次方是%lf", a * a * a);
}

int main()
{
	double num;
	printf("请输入一个double类型的值：");
	scanf_s("%lf", &num);
	san(num);

	return 0;
}