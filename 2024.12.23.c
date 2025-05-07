//#include <stdio.h>
//
//char *GetMemory(void)
// {
// 	char p[] = "hello world";
// 	return p;
// }
// 
// void Test(void)
// {
// 	char *str = NULL;
//	str = GetMemory();
// 	printf(str);
// }
// 
// int main()
// {
// 	Test();
// 	
// 	return 0;
// }

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void GetMemory(char **p, int num)
// {
// 	*p = (char *)malloc(num);
// }
// 
// void Test(void)
// {
// 	char *str = NULL;
// 	GetMemory(&str, 100);
// 	strcpy(str, "hello");
// 	printf(str);
// 	//这里使用free函数释放动态空间
// 	free(str);
// 	str = NULL;//顺便处理野指针
// }
// 
// int main()
// {
// 	Test();
// 	
// 	return 0;
// }

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void Test(void)
// {
// 	char *str = (char *) malloc(100);
// 	strcpy(str, "hello");
// 	free(str);
// 	str = NULL;
// 	
// 	if(str != NULL)
// 	{
// 		strcpy(str, "world");
// 		printf(str);
// 	}
// }
// 
// int main()
// {
// 	Test();
// 	
// 	return 0;
// }

//#include <stdio.h>
//int main()
//{
//	int gcd = 0;//最大公约数
//	int lcm = 0;//最小公倍数
//	//输出的两个数字
//	int x = 0;
//	int y = 0;
//	scanf_s("%d %d", &x, &y);
//	//比较较大值和较小值
//	int bigger = x > y ? x : y;
//	int smaller = x > y ? y : x;
//
//	//余数
//	int rest = 0;
//	while (rest = bigger % smaller)
//	{
//		bigger = smaller;
//		smaller = rest;
//	}
//	//到最后smaller的值就是最大公约数
//	gcd = smaller;
//
//	//最小公倍数 = 两数乘积%最大公约数
//	lcm = x * y / gcd;
//
//	int add = gcd + lcm;
//	printf("%d\n", gcd);
//	printf("%d\n", lcm);
//	printf("%d", add);
//
//	return 0;
//}

//欧几里得算法（辗转相除法）：计算最大公约数(greatest common divisor)
//输入两个正整数a和b，其中a≥b
//计算余数：计算a除以b的余数r。
//更新数值：将a的值更新为b，
//将b的值更新为r。
//重复步骤：重复步骤2和3，
//直到余数r为0。
//输出结果：当余数r为0时，当前的b值即为最大公约数

//计算最小公倍数Least common multiple()
//先计算两个数的最大公约数（GCD）
//然后用两数的乘积除以它们的最大公约数来得到最小公倍数
 
// #include <stdio.h>
// int main()
// {
// 	int n = 0; 
// 	scanf("%d", &n);
// 	
// 	int i = 0; 
// 	int j = 0;
// 	for (i = 0; i < n; i++)
// 	{
//	 	//这个是打印第一行和最后一行
//		 if (i == 0 || i == n - 1)
//	 	{
//		 	for (j = 0; j < n; j++)
//		 	{
//			 	printf("* ");
//			 }
//			 printf("\n");
//		 }
//		 
//		 //这个是打印中间
//		 if (i > 0 && i < n - 1)
//	 	{
//		 	printf("* ");
//		 	
//		 	//这个是打印中间空格
//		 	for (j = 0; j < 2 * (n - 2); j++)
//		 	{
//			 	printf(" ");
//			 }
//			 
//			 printf("* ");
//			 printf("\n");
//		 }
//	 }
//	 
// 	return 0;
// }
 
// #include <stdio.h>
// #include <stdlib.h>
// 
// struct S
// {
// 	int n;
// 	int arr[];//柔性数组成员
// };
// 
// int main()
// {
// 	//柔性数组的使用
// 	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
// 	//分配的动态内存大小应该大于结构的大小，-以适应柔性数组的预期大小
// 	if (ps == NULL)
// 	{
// 		return 1;//防止开辟失败引发程序崩溃
// 	}
// 
// 	ps->n = 100;
// 	int i = 0;
// 	for (i = 0; i < 10; i++)
// 	{
// 		ps->arr[i] = i;
// 	}
// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("%d", ps->arr[i]);
// 	}
// 
// 	//动态修改柔性数组的大小
// 	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);
// 	if (ptr != NULL)
// 	{
// 		ps == ptr;
// 		ptr = NULL;
// 	}//防止开辟失败，解决野指针
// 
// 	//.........
// 	//释放动态内存
// 	free(ps);
// 	ps = NULL;
// 
// 	return 0;
// }
 
 
//#include <stdio.h>
//#include <stdlib.h>
//  
//struct S
//{
//  	int n;
//  	int* arr;
//};
//  
//int main()
//{
//  	//因为要模仿柔性数组的功能，那就得确保模仿的时候结构体也应该要储存在堆区中
//  	//所以进行动态内存开辟，现将结构体放进堆区
//  	struct S* ps = (struct S*)malloc(sizeof(struct S));
//  	if (ps == NULL)
//  	{
//	  	return 1;
//	}//防止开辟失败
//	  
//	ps->n = 100;
//	ps->arr = (int*)malloc(40);//找到结构体的地址，并以这个地址为起始地址动态开辟内存
//	if (ps->arr == NULL)
//	{
//		return 1;
//	}//防止开辟失败
//		
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//	 	ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//	 	printf("%d", ps->arr[i]);
//	}
//	
//	//扩容
//	int* ptr = (int*)realloc(ps->arr, 80);
//	if (ptr == NULL)
//	{
//		return 1;
//	}//防止开辟失败
//	
//	//使用.....
//	//释放，注意前后顺序，如果先释放ps就导致无法释放ps->arr
//	free(ps->arr);
//	free(ps);
//	ps = NULL;
//	
//	return 0;
//}
// 
// #include <stdio.h>
// #include <math.h>
// struct vector
// {
//     double x;
//     double y;
// };
// int main()
// {
//     struct vector a, b;
//     scanf("%lf %lf %lf %lf", &a.x, &a.y, &b.x, &b.y);
//     double x = a.x + b.x;
//     double y = a.y + b.y;
//     
//     if(fabs(x) < 0.05)
//     {
//         x = 0.0;
//     }
//     if(fabs(y) < 0.05)
//     {
//         y = 0.0;
//     }
//     printf("(%.1lf, %.1lf)", x, y);
//     
//     return 0;
// }

//#include <stdio.h>
//struct BOOK
//{
//    char name[31];
//    float price;
//};
//
//int main()
//{
//    int n = 0; 
//    scanf("%d", &n);
//
//    struct BOOK book[n];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        getchar();
//        gets(book[i].name);
//        scanf("%f", &book[i].price);
//    }
//
//    struct BOOK MAX;
//    struct BOOK MIN;
//    MAX = book[0];
//    MIN = book[0];
//    
//    for (i = 1; i < n; i++)
//    {
//        if (MAX.price < book[i].price)
//        {
//            MAX = book[i];
//        }
//    }
//    
//    for (i = 1; i < n; i++)
//    {
//        if (MIN.price > book[i].price)
//        {
//            MIN = book[i];
//        }
//    }
//
//    printf("%0.2f, %s\n", MAX.price, MAX.name);
//    printf("%0.2f, %s", MIN.price, MIN.name);
//
//    return 0;
//}
     
// #include <stdio.h>
// 
// int main() 
// {
//     char str[100]; // 确保数组足够大以存储输入的字符串
//     printf("Enter a line: ");
//     gets(str); // 从标准输入读取一行文本
//     printf("You entered: %s", str);
//     return 1;
// }
// 
 
#include <stdio.h>
struct BOOK
{
    char name[31];
    double price;
};

int main()
{
    int n = 0; 
    scanf("%d", &n);

    struct BOOK book[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        getchar();
        gets(book[i].name);
        scanf("%lf", &book[i].price);
    }

    struct BOOK MAX;
    struct BOOK MIN;
    MAX = book[0];
    MIN = book[0];
    
    for (i = 1; i < n; i++)
    {
        if (MAX.price < book[i].price)
        {
            MAX = book[i];
        }
    }
    
    for (i = 1; i < n; i++)
    {
        if (MIN.price > book[i].price)
        {
            MIN = book[i];
        }
    }

    printf("%0.2lf, %s\n", MAX.price, MAX.name);
    printf("%0.2lf, %s", MIN.price, MIN.name);

    return 0;
} 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
