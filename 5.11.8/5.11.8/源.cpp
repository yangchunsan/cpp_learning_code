#include <stdio.h>
int main()
{
	int input1, input2, output;
	
	printf("This program computes moduli.\n");
	printf("Enter an integar to serve as the second operand:");
	scanf_s("%d", &input1);//input1作为求模运算符的第二个运算对象，且在运算过程中保持不变
	printf("Now enter the first operand:");
	scanf_s("%d", &input2);//input2作为求模运算符的第一个运算对象，且可以改变

	while (input2 > 0)
	{
		output = input2 % input1;//求模的结果
		printf("%d '%%' %d = %d\n", input2, input1, output);
		printf("Enter next number for first operand: ");
		scanf_s("%d", &input2);
		printf("(<= 0 to quit）");
	}
	printf("Done!");

	return 0;
}