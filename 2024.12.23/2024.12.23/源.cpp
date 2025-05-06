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

//#include <stdio.h>
//#include <stdlib.h>
//
//struct S
//{
//	int n;
//	int arr[];//柔性数组成员
//};
//
//int main()
//{
//	//柔性数组的使用
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
//	//分配的动态内存大小应该大于结构的大小，-以适应柔性数组的预期大小
//	if (ps == NULL)
//	{
//		return 1;//防止开辟失败引发程序崩溃
//	}
//
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", ps->arr[i]);
//	}
//
//	//动态修改柔性数组的大小
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);
//	if (ptr != NULL)
//	{
//		ps == ptr;
//		ptr = NULL;
//	}//防止开辟失败，解决野指针
//
//	//.........
//	//释放动态内存
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

//#include<stdio.h>
//struct student
//{
//    char num[10];
//    char name[10];
//    int score;
//};
//
//int main()
//{
//    struct student A[10];
//    int n, i, sum = 0;
//    scanf("%d\n", &n);
//
//    for (i = 0; i < n; i++)
//    {
//        scanf("%s%s%d", A[i].num, A[i].name, &A[i].score);
//        sum += A[i].score;
//    }
//
//    float average;
//    average = ((float)sum) / n;
//    int flag = 0;
//    printf("%.2f\n", average);
//    for (i = 0; i < n; i++) 
//    {
//        if (A[i].score < average && flag == 0) 
//        {
//            printf("%s %s", A[i].name, A[i].num);
//            flag++;
//        }
//        else if (A[i].score < average) 
//        {
//            printf("\n");
//            printf("%s %s", A[i].name, A[i].num);
//        }
//    }
//    return 0;
//}





