//#include <stdio.h>
//#include <math.h>//计算幂会方便一点
//
//void distinguish_print(int i, int bit)
//{
//	//利用for循环取出每一位的数字
//	int input = i;
//	int arr[bit];//利用数组依次储存由低到高位数的数字
//	int j = 0;
//	for (j = 0; j < bit; j++)
//	{
//		arr[j] = i % 10;
//
//		if (i / 10 == 0)
//		{
//			break;
//		}
//		i = i / 10;
//	}
//
//	int sum = 0;
//	for (j = 0; j < bit; j++)
//	{
//		sum += (int)pow(arr[j], bit);
//	}
//
//	if (input == sum)
//	{
//		printf("%d  ", input);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int bit = 0;
//	
//	for (i = 1; i <= 100000; i++)
//	{
//		int tmp = i;
//		while (tmp / 10 != 0) 
//		{
//			bit++;
//			tmp /= 10;
//		}
//		
//		distinguish_print(i, bit);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>//计算幂会方便一点
//
//void distinguish_print(int i, int bit)
//{
//	//利用for循环取出每一位的数字
//	int input = i;
//	int arr[bit];//利用数组依次储存由低到高位数的数字
//	int j = 0;
//	for (j = 0; j < bit; j++)
//	{
//		arr[j] = i % 10;
//
//		if (i / 10 == 0)
//		{
//			break;
//		}
//		i = i / 10;
//	}
//
//	int sum = 0;
//	for (j = 0; j < bit; j++)
//	{
//		sum += (int)pow(arr[j], bit);
//	}
//
//	if (input == sum)
//	{
//		printf("%d  ", input);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int bit = 0;
//	
//	for (i = 1; i <= 100000; i++)
//	{
//		if (i > 99 && i < 1000)//三位数
//		{
//			bit = 3;
//			distinguish_print(i, bit);
//		}
//		else if (i > 999 && i < 10000)//四位数
//		{
//			bit = 4;
//			distinguish_print(i, bit);
//		}
//		else if (i > 9999 && i < 100000)//五位数
//		{
//			bit = 5;
//			distinguish_print(i, bit);
//		}
//		else
//			continue;
//	}
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "";//这是用来分割的字符串
    const char* sep = "-@.";//这个是分割字符串的分隔符
    char* ret;//这个是用来接收返回值的指针

    for (ret = strtok(str, sep); ret != NULL; ret = strtok(NULL, sep))
//这里用到for函数只初始化一次的特性
//因为strtok函数第一次不为空指针NULL的时候，会标记分隔符的位置并返回这个位置的指针
//第二次寻找时参数为NULL时会从上一次标记的位置开始寻找下一个分隔符
//因此如果字符串一直有分隔符（分隔符之间是有内容的）会一直找下去
//直至字符串停止或者没有分隔符出现返回空指针，然后跳出循环
    {
        printf("%s\n", ret);
    }

    return 0;
}
