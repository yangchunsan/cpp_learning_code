#include <math.h>
#include <stdio.h>
int main()
{
	const double ANSWER = 3.14159;
	double response;

	printf("What is the value of pi?\n");
	scanf_s("%lf", &response);

	while (fabs(response - ANSWER) > 0.0001)//除非用户输入的值跟正确值相差0.0001以内
	{                                       //否则循环会一直提示用户继续输入
		printf("Try again!!!\n");
		scanf_s("%lf", &response);
	}
	printf("Close enough!\n");

	return 0;
}