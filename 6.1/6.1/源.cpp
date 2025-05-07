//该程序利用了scanf_s()的两个特性
//要使程序正常运行，就必须要在每次循环中得到num的一个新值，并重置status
//重置status的目的是判断用户输入的数值是否符合类型。若符合，则正常循环；若不符合，则程序终止
#include <stdio.h>
int main()
{
	int num;
	int sum = 0;
	int status;

	printf("Please enter an integer to be summed ");
	printf("(q to quit):");
	
	status = scanf_s("%d", &num);
	//第一个特性：scanf_s()若成功读取一个整数，那么会将其赋给num，并返回1，随后将1赋给status

	//下面的循环是一个累加的程序
	//当用户输入的数据是数字时，循环不会结束。num被赋值数据。
	// 每次循环，num内置的数字都会刷新，num的当前值都会被加到sum上。
	//sum就是当前整数之和

	while (status == 1)//== 的意思表示等于，而非赋值
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit)");
		status = scanf_s("%d", &num);
	}
	//这里用到第二个特性：scanf_s()读取失败的时候，会返回0，此时status的值发生改变，不再满足进入while循环的条件
	//若scanf_s在转换值之前就出现了问题，会返回EOF。程序也会终止

	printf("Those integers sum to %d.\n", sum);

	return 0;
}