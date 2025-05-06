////思路是先写一个for循环遍历全部五位数
////然后写一个取各位数字，计算是否符合要求，若符合要求则直接打印的函数（也可以不是函数）
////第一组是first_1 = n / 10000,拿出万位数字；剩下的用first_2 = n % 10000解决
////第二组是second_1 = n / 1000,拿出前两位的数字；剩下的用second_2 = n % 1000解决
////第三组是third_1 = n / 100,拿出前三位的数字；后两位third_2 = n % 100解决
////第四组是forth_1 = n / 10,拿出前四位的数字；后两位forth_2 = n % 10解决
//#include <stdio.h>
//int main()
//{
//	for (int n = 10000; n < 100000; n++)
//	{
//		int first_1 = 0;
//		int first_2 = 0;
//		int second_1 = 0;
//		int second_2 = 0;
//		int third_1 = 0;
//		int third_2 = 0;
//		int forth_1 = 0;
//		int forth_2 = 0;
//		int result = 0;
//		
//		first_1 = n / 10000;
//		first_2 = n % 10000;
//		second_1 = n / 1000;
//		second_2 = n % 1000;
//		third_1 = n / 100;
//		third_2 = n % 100;
//		forth_1 = n / 10;
//		forth_2 = n % 10;
//		
//		result = (first_1 * first_2) + (second_1 * second_2) + (third_1 * third_2) + (forth_1 * forth_2);
//		if (result == n)
//		{
//			printf("%d ", n);
//		}
//	}
//	
//	return 0;
//}
//
#include <stdio.h>
#include <math.h>
int main()
{
	for (int n = 10000; n < 100000; n++)
	{
		int sum = 0;//每更换一次数字初始化一次
		
		for (int j = 1; j < 5; j++)
		{
			sum += ((n / (int)pow(10 , j)) * (n % (int)pow(10, j)));
		}
		
		if (sum == n)
		{
			printf("%d  ", n);
		}
	}
	
	return 0;
}

