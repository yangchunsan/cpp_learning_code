////˼·����дһ��forѭ������ȫ����λ��
////Ȼ��дһ��ȡ��λ���֣������Ƿ����Ҫ��������Ҫ����ֱ�Ӵ�ӡ�ĺ�����Ҳ���Բ��Ǻ�����
////��һ����first_1 = n / 10000,�ó���λ���֣�ʣ�µ���first_2 = n % 10000���
////�ڶ�����second_1 = n / 1000,�ó�ǰ��λ�����֣�ʣ�µ���second_2 = n % 1000���
////��������third_1 = n / 100,�ó�ǰ��λ�����֣�����λthird_2 = n % 100���
////��������forth_1 = n / 10,�ó�ǰ��λ�����֣�����λforth_2 = n % 10���
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
		int sum = 0;//ÿ����һ�����ֳ�ʼ��һ��
		
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

