#include <stdio.h>
double Temperature(double input, double output1, double output2)
//1代表摄氏温度，2代表开氏温度，input输入的是华氏温度
{
	const double A = 32.0;
	const double B = 273.16;
	
	output1 = 5.0 / 9.0 * (input - A);
	output2 = output1 + B;
	printf("华氏温度： %.2lf， 摄氏温度： %.2lf 开氏温度： %.2lf", input, output1, output2);

	return 0;
}

int main()
{
	double input, double output1, double output2;
    printf("现在请你输入一个人华氏温度：");
	scanf("%.2lf", input);

	while ()
}