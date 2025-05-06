//#include <stdio.h>
//
//int switch_number(int* arr, int input)
//{
//	int i = 0;
//	while (input > 0)
//	{
//		arr[i] = input % 2;
//		input /= 10;
//		i++;
//	}
//
//	return i;
//}
//int main()
//{
//	int arr[10];//这个用来储存每一位的数字
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 9;//初始化
//	}
//
//	int input = 0;
//	scanf_s("%d", &input);
//
//	int ret = switch_number(arr,input);
//
//	printf("输出：");
//	for (i =  ret - 1; i >= 0; i--)//下标还要-1
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//打印空格
//		for (j = n - i; j > 0; j--)//5-i-1=j
//		{
//			printf("  ");
//		}
//
//		for (j = 1; j <= i; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	float value = 0;
//	float price = 0;
//	float count_11 = 0.7;
//	float count_12 = 0.8;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//
//	printf("输入：");
//	scanf_s("%f %d %d %d", &value, &m, &d, &flag);
//
//	if (m == 11 && d == 11)
//	{
//		price = value * count_11;
//		if (flag == 1 && price > 50)
//		{
//			price -= 50;
//		}
//		else if (flag == 1 && price < 50)
//		{
//			price = 0.00;
//		}
//	}
//	else if (m == 12 && d == 12)
//	{
//		price = value * count_12;
//		if (flag == 1 && price > 50)
//		{
//			price -= 50;
//		}
//		else if (flag == 1 && price < 50)
//		{
//			price = 0.00;
//		}
//	}
//	else
//	{
//		printf("你有输入的数据不符合规定");
//		return 0;
//	}
//
//	printf("输出：");
//	printf("%0.2f", price);
//
//	return 0;
//}

//0000 0000 0000 0000 0001 0010 0011 0100

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1))
//						{
//							//1 2 3 4 5
//							if(a+b+c+d+e == 15 && a*b*c*d*e==120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c", killer);
//		}
//	}
//
//	return 0;
//
//}

//#include <stdio.h>
////计算阶乘
//int factorial(int n)
//{
//	int i = 1;
//	int sum = 1;
//
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//
//	return sum;
//}
//
////计算组合数
//int Calculate_Combinations(int n, int r)
//{
//	return factorial(n) / factorial(r) / factorial(n - r);
//}
//
//int main()
//{
//	int n = 0;//要打印几行
//	scanf_s("%d", &n);
//
//	int r = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		//打印空格
//		for (r = 0; r < n - i - 1; r++)//(i + 1) + r = n
//		{
//			printf("   ");
//		}
//		//打印数字
//		for (r = 0; r <= i; r++)
//		{
//			printf("%3d   ", Calculate_Combinations(i, r));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str[5]; // 只有 4 个字符的空间加上空字符
//    scanf_s("%4s", str, (unsigned)str); // 读取最多 4 个字符
//    printf("%s", str);
//
//    return 0;
//}

//int left_retote(char* str, int n)
//{
//	
//}

