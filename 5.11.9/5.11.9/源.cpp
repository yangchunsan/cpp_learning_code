#include <stdio.h>
double Temperature(double input, double output1, double output2)
//1���������¶ȣ�2�������¶ȣ�input������ǻ����¶�
{
	const double A = 32.0;
	const double B = 273.16;
	
	output1 = 5.0 / 9.0 * (input - A);
	output2 = output1 + B;
	printf("�����¶ȣ� %.2lf�� �����¶ȣ� %.2lf �����¶ȣ� %.2lf", input, output1, output2);

	return 0;
}

int main()
{
	double input, double output1, double output2;
    printf("������������һ���˻����¶ȣ�");
	scanf("%.2lf", input);

	while ()
}