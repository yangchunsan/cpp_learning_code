/*#include <stdio.h>
int main()
{
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;

	printf("Enter the list of daily low temperatures.\n");
	printf("Use Celsius, and enter q to quit.\n");
	//利用scanf()的返回值来结束循环，其读取非数字字符会返回0
	while (scanf_s("%f", &temperature) == 1)//这里是一个个的读取输入的数据的？
	{
		all_days++;
		if (temperature < FREEZING)
			cold_days++;//这里if语句指示计算机，若刚读取的值小于0，就递增cold_days;反之跳过，while循环读取下一个温度值
	}
	if (all_days != 0)//有数据就打印结果
		printf("%d days total : % .1f % %were below freezing.\n",
			all_days, 100.0 * (float)cold_days / all_days);
	if (all_days == 0)//没数据就打印信息
		printf("No data entered!\n");

	return 0;
}*/

//7.1的改进版，使用if else 语句
/*#include <stdio.h>
int main()
{
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;

	printf("Enter the list of daily low temperatures.\n");
	printf("Use Celsius, and enter q to quit.\n");
	//利用scanf()的返回值来结束循环，其读取非数字字符会返回0
	while (scanf_s("%f", &temperature) == 1)//这里是一个个的读取输入的数据的？
	{
		all_days++;
		if (temperature < FREEZING)
			cold_days++;//这里if语句指示计算机，若刚读取的值小于0，就递增cold_days;反之跳过，while循环读取下一个温度值
	}
	if (all_days != 0)//若条件为真，执行该语句	
		printf("%d days total : % .1f % %were below freezing.\n",
			all_days, 100.0 * (float)cold_days / all_days);
	else//若条件为假，那么执行else
		printf("No data entered!\n");
	
	return 0;
}*/

#include <stdio.h>
int main()
{
	char ch;	
	putchar(ch);//跟printf("%c", ch);的语句效果相同

	return 0;
}