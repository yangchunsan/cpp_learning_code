//#include <stdio.h>
//double price(float a, float b, char c) // 将返回类型改为double
//{
//    double gas = 0; // 这是汽油的价格
//
//    if (b == 90)
//    {
//        gas = 6.95;
//    }
//    else if (b == 93)
//    {
//        gas = 7.44;
//    }
//    else if (b == 97)
//    {
//        gas = 7.93;
//    }
//    
//    double cut = 0; // 这是折扣
//
//    if (c == 'm')
//    {
//        cut = 0.95;
//    }
//    else if (c == 'e') // 假设'n'代表非自助类型
//    {
//        cut = 0.97;
//    }
//   
//
//    return a * gas * cut; // 直接返回计算结果
//}
//
//int main()
//{
//    float a = 0; // 这个是加油量
//    float b = 0; // 汽油种类
//    char c; // 自助类型
//    scanf_s("%f %f %c", &a, &b, &c); // 使用标准的scanf函数
//
//    double result = price(a, b, c); // 价格写一个函数封装
//
//    printf("%.2f\n", result); // 打印结果，保留两位小数
//  
//
//    return 0;
//}

//#include <stdio.h>
//void leapyear(int year)
//{
//	int leapyearnum = 0;
//	
//	for (int i = 2004; i <= year; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			printf("%d\n", i);
//			leapyearnum++;
//		}
//	}
//
//	if (leapyearnum == 0)
//	{
//		printf("None\n");
//	}
//}
//
//int main()
//{
//	int year = 0;
//	scanf_s("%d", &year);
//
//	if (year < 2001 || year > 2100)
//	{
//		printf("Invalid year!\n");
//	}
//	else 
//	{
//		leapyear(year);
//	}
//	
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int speed = 0;
//	int limit = 0;
//	
//	scanf_s("%d %d", &speed, &limit);
//	int exceed = (speed - limit) * 100 / limit;
//
//	if (exceed <= 10)
//	{
//		printf("OK");
//	}
//	else if (exceed > 10 && exceed < 50)
//	{
//		printf("Exceed %d%% Ticket 200\n", exceed);
//
//	}
//	else if (exceed >= 50)
//	{
//		printf("Exceed %d%% License Revoked", exceed);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int speed, limit;
//    scanf("%d %d", &speed, &limit); // 读取车速和限速
//
//    int exceed = (speed - limit) * 100 / limit; // 计算超速百分比
//
//    if (exceed <= 10)
//    {
//        printf("OK");
//    }
//    else if (exceed >= 10 && exceed <= 50)
//    {
//        printf("Exceed %d%%. Ticket 200\n", exceed);
//    }
//    else if (exceed >= 50)
//    {
//        printf("Exceed %d%%. License Revoked\n", exceed); // 应吊销驾驶证
//    }
//
//    return 0;
//}


//#include <stdio.h>
//#include <ctype.h> // 用于字符分类函数
//int main()
//{
//	int	letter = 0;
//	int blank = 0;
//	int digit = 0;
//	int other = 0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		char ch;
//		ch = getchar();
//
//		if (isalpha(ch))
//		{
//			letter++;
//		}
//		else if (isspace(ch))
//		{
//			blank++;
//		}
//		else if (isdigit(ch))
//		{
//			digit++;
//		}
//		else
//		{
//			other++;
//		}
//	}
//
//	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//
//	if (N < 0 || N > 1000)
//		return 0;
//
//	int arr[N];
//	for (int j = 0; j < N; j++)
//	{
//		scanf("%d", &arr[j]);
//	}
//
//	int A = 0, B = 0, C = 0, D = 0, E = 0;
//	for (int i = 0; i < N; i++)
//	{
//		if (arr[i] >= 90)
//		{
//			A++;
//		}
//		else if (arr[i] < 90 && arr[i] >= 80)
//		{
//			B++;
//		}
//		else if (arr[i] < 80 && arr[i] >= 70)
//		{
//			C++;
//		}
//		else if (arr[i] < 70 && arr[i] >= 60)
//		{
//			D++;
//		}
//		else
//		{
//			E++;
//		}
//	}
//
//	printf("%d %d %d %d %d", A, B, C, D, E);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int N = 0;
//	scanf_s("%d", &N);
//
//	if (N < 0 || N > 10)
//		return 0;
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j < i + 1; j++)
//		{
//			printf("%d*%d=%-4d", j, i, i * j);
//		}
//		
//		printf("\n");
//	}
//
//	return 0;
//}

//
//#include <stdio.h>
//
//int prime_number(int i)//判断是否为进去的数是否是素数
//{
//	for (int j = 2; j <= i / 2; j++)
//	{
//		int test = i % j;
//		
//		if (test == 0)//不是是素数的话就直接结束这次循环
//		{
//			return 0;
//		}
//	}
//	return i;
//}
//
//int main()
//{
//	int N = 0;
//	int p = 0;
//	int q = 0;
//
//	scanf_s("%d", &N);
//	
//	if (N <= 2 || N > 2000000000)
//		return 0;
//	
//	if (N % 2 != 0)
//		return 0;
//
//	for (int i = 2; i <= N / 2; i++)
//	{
//		int test1 = prime_number(i);
//		if (test1 == 0)//说明p不是素数，直接到下一次循环
//		{
//			continue;
//		}
//
//		int test2 = prime_number(N - i);
//		if (test2 == 0)
//		{
//			continue;//说明q也不是素数，直接到下一次循环
//		}
//		else//说明p和q都是符合条件的素数了
//		{
//			p = test1;
//			q = test2;
//			break;
//		}
//	}
//
//	printf("%d = %d + %d", N, p, q);
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int target_num(int n)//这里计算2的n次方
//{
//	int origin = 2;
//
//	for (int j = 1; j < n; j++)
//	{
//		origin *= 2;
//	}
//
//	return origin;//返回这个数
//}
//
//int prime_number(int j)//这里用来判断是不是素数
//{
//	int i = 0;
//
//	for (i = 2; i <= (j - 1); i++)
//	{
//		int result = j % i;
//
//		if (result == 0)
//		{
//			return 0;
//		}
//	}
//
//	return j;
//}
//
//int main()
//{
//	int n = 0;
//	int flag = 0;//标志变量，没有素数则一直为零
//	scanf_s("%d", &n);//赋值n
//	if (n <= 0 || n >= 20)
//		return 0;
//	
//	for (int i = 2; i <= n; i++)
//	{
//		int j = target_num(i) - 1;
//		int result = prime_number(j);//接收返回值判断是不是素数
//
//		if (result == 0)//说明不是素数，直接跳过
//		{
//			continue;
//		}
//		
//		flag = 1;
//		printf("%d\n", j);//没有迭代直接打印了
//	}
//
//	if (flag == 0)
//		printf("None");
//	
//	return 0;
//}


#include <stdio.h>
#include <math.h>
double factorial(int k) //计算阶乘
{
    double fact = 1;
    for (int i = 2; i <= k; i++) 
    {
        fact *= i;
    }

    return fact;//并返回
}

int main()
{
    double x;
    scanf_s("%lf", &x);

    double sum = 1.0;//这是第一项
    double term;//这是泰勒展开的项
    int k = 1;//这是幂的初始值

    do {
        term = pow(x, k) / factorial(k);
        sum += term;
        k++;
    } while (fabs(term) >= 0.00001);//fabs函数是专门用来计算绝对值的
    //直到小于0.00001才能跳出循环，如果不是会继续增加泰勒展开式中的项

    printf("%.4f\n", sum);


    return 0;
}