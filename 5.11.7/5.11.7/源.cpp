#include <stdio.h>
void san(double a)
{
	printf("�������η���%lf", a * a * a);
}

int main()
{
	double num;
	printf("������һ��double���͵�ֵ��");
	scanf_s("%lf", &num);
	san(num);

	return 0;
}