#include <stdio.h>
int main()
{
	int input1, input2, output;
	
	printf("This program computes moduli.\n");
	printf("Enter an integar to serve as the second operand:");
	scanf_s("%d", &input1);//input1��Ϊ��ģ������ĵڶ����������������������б��ֲ���
	printf("Now enter the first operand:");
	scanf_s("%d", &input2);//input2��Ϊ��ģ������ĵ�һ����������ҿ��Ըı�

	while (input2 > 0)
	{
		output = input2 % input1;//��ģ�Ľ��
		printf("%d '%%' %d = %d\n", input2, input1, output);
		printf("Enter next number for first operand: ");
		scanf_s("%d", &input2);
		printf("(<= 0 to quit��");
	}
	printf("Done!");

	return 0;
}