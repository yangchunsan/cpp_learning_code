/*#include <stdio.h>
void jisuan(int a, int b)
{
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
}

int main()
{
	int n, m;
	scanf_s("%d %d", &n, &m);
	jisuan(n, m);

	return 0;
}*/

/*#include <stdio.h>
#define STANDARD 50.0
#define COST1 0.53
#define COST2 0.58

int main()
{
	float kwh, cost;
	scanf_s("%f", &kwh);
	
	if (kwh <= 0)
		printf("Invalid Value!");
	else if (kwh > 0.0 && kwh <= STANDARD)
	{
		cost = kwh * COST1;
		printf("cost = %0.2f", cost);

	}
	else if (kwh > STANDARD)
	{
		cost = COST1 * STANDARD + (kwh - STANDARD) * COST2;
		printf("cost = %0.2f", cost);
	}

	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int a = 152;
	
	int j;
	j = a / 100;//这里求出来的百位上的数字

	int k;
	k = a % 10;//这里取模，求出个位的数字

	int n;
	n = a % 100;//这里取模，求出52

	int m;
	m = n / 10;//这里求出十位

	printf("152 = %d + %d*10 + %d*100", k, m, j);

	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int F;
	scanf_s("%d", &F);

	int C = 5 * (F - 32) / 9;

	printf("%d", C);

	return 0;
}*/

/*#include <stdio.h>
int factorial(int n) //这是一个阶乘程序，输入的n是阶乘数字个数
{
	int res = 1;
	for (int i = 1; i < n + 1; i++)//n + 1是因为得让最大的数也阶乘
		res *= i;//res用来储存每次循环后产生的数值
	return res;
}

int main()
{
	int n;
	scanf_s("%d", &n);

	//下面针对每次循环打印
	int result = 1;
	for (int i = 1; i < n + 1; i++)//n + 1是因为得让最大的数也阶乘
	{
		result *= i;//res用来储存每次循环后产生的数值
		printf("%d!=%d\n", i, result);//每次循环都打印一次结果
	}

	//下面针对阶乘的求和
	int res = 0;
	for (int i = 1; i < n + 1; i++)
	{
		res += factorial(i);
	}

	printf("1!+2!+…+%d!=%d", n, res);
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);

	int j;
	j = a / 100;//这里求出来的百位上的数字

	int k;
	k = a % 10;//这里取模，求出个位的数字

	int n;
	n = a % 100;//这里取模，求出52

	int m;
	m = n / 10;//这里求出十位
	
	if (a < 100 || a > 999)
	{
		printf("输入错误，不是一个三位数");

		return 0;
	}

	if (a == j * j * j + m * m * m + k * k * k)
		printf("该数是水仙花数");
	else
		printf("该数不是水仙花数");

	return 0;
}*/

/*#include <stdio.h>
double factorial(int n)
{
	int res = 1;
	
	for (int i = 1; i < n +1; i++)
	{
		res *= i;
	}
	return res;
}

int main()
{
	int m, n;
	scanf_s("%d %d", &m, &n);
	int res = 0;
	int res1 = factorial(n);
	int res2 = factorial(m) * factorial(n - m);
	res = res1 / res2;
	printf("result = %d", res);

	return 0;
}*/

//#include <stdio.h>
//int main()
//{
//	int n;//n是行数
//	int m = 1;
//	scanf_s("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = n;j > i; j--)
//		{
//			printf("%4d", m);
//			m++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	unsigned int num = 0;
//	struct Node n;
//	Node n2;
//	
//	return 0;
//}

//#include <stdio.h>
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//}
//
//int main()
//{
//	int i = 0;
//
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}
	
//#include <stdio.h>
//
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//
//	if (1 == n % 2)
//	{
//		printf("该数是一个奇数");
//	}
//	else
//	{
//		printf("该数是一个偶数");
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//
//	while (n++ < 100)
//	{
//		if (n % 2 == 1)
//		{
//			printf("%d\n", n);
//		}
//	}
//	return 0;
//}

//

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//
//	do
//	{
//		i++;
//		printf("%d\n", i);
//		//i++;
//	} 
//	while (i <= 5);
//	
//	return 0;
//}aa

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;//这是我们要找的数字
//	int i = 0;//这个是数组编号
//	int sz = sizeof(arr) / sizeof(arr[0]);//这是数组中的数字个数（整个数组的大小除于第一个元素的大小）
//
//	for (i = 0; i < sz; i++)//要找数组中某个数字，直接把整个数组都遍历一遍不就找出来了吗？
//	{
//		if (arr[i] == k) 
//		{
//			printf("找到了，下标是%d", i);
//			break;
//		}
//	}
//
//	if (i == sz)
//		printf("找不到啦！！！");
//	
//	return 0;
//}//该方法可以，但效率太慢啦！！！

//那改进一下，利用二分查找
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;//这是我们要找的数字
//	int i = 0;//这个是数组编号，从0开始
//	int sz = sizeof(arr) / sizeof(arr[0]);//这是数组中的数字个数（整个数组的大小除于第一个元素的大小）
//	int left = 0;//第一个数字的数组编号
//	int right = sz - 1;//最后一个数字的数组编号
//
//	while (left <= right)
//	{
//		/*int mid = (left + right) / 2;*/
//		int mid = (right - left) / 2 + left;
//		
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] = k)
//		{
//			printf("找到啦，下标是：%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到啦");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>//这个是strlen的头文件
//#include <Windows.h>//这个是系统自带的库,是system和Sleep的头文件
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//
//	int sz = strlen(arr1);//字符串中字符的个数
//	int left = 0;//字符串中最左边的下标
//	int right = sz - 1;//字符串中最右边的下标
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(1000);//减缓运行速度一千毫秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//假设密码是字符串，为abcdef
//		
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", &password);//数组本身就是地址，不需要用到指针
//
//		if (strcmp(password, "abcdef") == 0)//字符串的比较是不能用==比较的哟，需要用到一个库函数：strcmp。若返回值为0，表示字符串相等
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误");
//		}
//	}
//
//	if (i == 3)
//	{
//		printf("三次密码均输入错误，退出程序");
//	}
//
//	return 0;
//}


	/*#include <stdio.h>
	void change(int *px, int *py)
	{
		int z = 0;

		z = *px;
		*px = *py;
		*py = z;
	}

	int main()
	{
		int a = 0;
		int b = 0;
		scanf_s("%d %d", &a, &b);
		change(&a, &b);
		printf("%d %d", a, b);

		return 0;
	}*/

//#include <stdio.h>
//void primer_number(int n)
//{
//	int j = 0;
//	
//	if (n == 2)
//		printf("是素数");
//	else
//	{
//		for (j = 2; j <= (n - 1); j++)
//		{
//			if (n % j == 0)
//			{
//				printf("是素数");
//				break;
//			}
//		}
//
//		printf("不是素数");
////	}
////}
//#include <stdio.h>
//#include <math.h>
//int primer_number(int n)
//{
//	int i = 0;
//	
//	for (i = 2; i <= (n - 1); i++)
//	{
//		int j = n % i;
//
//		if (j == 0)
//		{
//			return 0;
//		}
//		return 1;
//	}
//}
//
//int main()
//{
//	int input = 0;
//	printf("现在请输入数字：");
//	scanf_s("%d", &input);
//	if (primer_number(input) == 1)
//		printf("是素数");
//	else
//		printf("不是素数");
//
//	return 0;
//}
//

//#include <stdio.h>
//
//int binary_search(int arr[], int k, int sz)//找到了，返回下标；找不到返回-1
//{
//	int left = 0;
//	int right = sz - 1;
//	
//
//	while (left <= right)
//	{
//		int mid = (right - left) / 2 + left;
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//找到了返回mid
//		}
//	}
//
//	return -1;//找不到的情况
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//
//
//	if (ret == -1)
//		printf("没找到");
//	else
//		printf("找到了，下标是：%d", ret);
//
//	return 0;
//}

//#include <stdio.h>
//void new_line()
//{
//	printf("hehe");
//}
//
//void three_line()
//{
//	int i = 0;
//	
//	for (i = 0; i <= 3; i++)
//	{
//		new_line();
//	}
//}
//
//int main()
//{
//	three_line();
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	//下面就叫链式访问
//	printf("%d", strlen("abcdef"));
//	
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}

//#include <stdio.h>
//#include "add.h"
//
//;int main()
//{
//	int n = ADD(5, 9);
//	printf("%d", n);
//
//	return 0;
//}

//#include <stdio.h>
//void print(unsigned int num)//因为结果是打印出来的，就不考虑返回值了
//{
//	if (num > 9)//确保是两位数才能进去，如果不是直接打印了
//	{
//		print(num / 10);
//	}
//	printf("%d  ", num % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%u", &num);
//	
//	print(num);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr1 [] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	
//	printf("打印数组每个元素的地址\n");//打印数组每个元素的地址
//	for (i = 0; i <= 9; i++)
//	{
//		printf("arr1[%d] = %p\n", i, &arr1[i]);
//	}
//
//	return 0;
//}


//1 2 3 4
//2 3 4 5
//3 4 5 6

//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;//这是行  0 1 2
//	
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;//这是列   0 1 2 3
//
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j , &arr[i][j]);
//		}
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int factorial(int n)//这是一个阶乘程序，输入的n是阶乘数字个数
//{
//	int res = 1;
//	for (int i = 1; i < n + 1; i++)//n + 1是因为得让最大的数也阶乘
//	{
//		res *= i;//res用来储存每次循环后产生的数值
//	}
//	return res;
//}
//
//
////下面针对阶乘的求和
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//
//	int res = 0;
//
//	for (int i = 1; i < n + 1; i++)//n + 1是因为得让最大的数也阶乘
//	{
//		res += factorial(i);//res用来储存每次循环后产生的数值
//	}
//
//	printf("1!+2!+…+%d!=%d", n, res);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	for (i = 0; i < 3; i++)//0 1 2
//	{
//		int j = 0;
//
//		for (j = 0; j < 5; j++)// 0 1 2 3 4
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 9,8,7,6,5,4,3,2,1 };
//	int arr2[10] = {};
//	int i = 0;
//	int j = 0;
//
//	for (i = 8, j = 0;j <= 8; i--, j++)
//	{
//		arr2[j] = arr1[i];
//		printf("arr2[%d] = %d\n", j, arr2[j]);
//	}
//
//	return 0;
//}


//

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	printf("%p\n", arr);//这里就是首元素的地址
//	printf("%p\n", arr + 1);
//	printf("--------------------\n");
//	printf("%p\n", &arr[0]);//这里也是首元素的地址
//	printf("%p\n", &arr[0] + 1);
//	printf("--------------------\n");
//	printf("%p\n", &arr);//而这里是数组的地址
//	printf("%p\n", &arr + 1);
//
//
//	return 0;
//}

//#include <stdio.h>
//void bubble_sort(int arr[], int sz)//这就是冒泡排序，[]里面可填，也可以随便填，因为用不到
//{
//	int i = 0;
//
//	for (i = 0; i < sz - 1; i++)//sz - 1是趟数
//	{
//		//一趟
//		for (int j = 0; j < sz - 1 - i; j++)//为什么这里是sz - 1 - i?最开始的数字要跑8次，但第二个数字只要跑7次，以此类推
//		{                                   //这里每次循环i会加一，刚好满足要求
//			int change = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				change = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = change;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//确定数组元素个数
//	bubble_sort(arr, sz);
//	int i = 0;
//
//	for (i = 0; i <= sz - 1; i++)//注意是利用下标找数组中的元素
//	{
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr1[5] = { 1,3,5,7,9 };
//	int arr2[5] = { 2,4,6,8,0 };
//	int change[5] = { 0 };
//
//	for (int i = 0; i < 5; i++)
//	{
//		change[i] = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = change[i];
//
//		printf("arr1[%d] = %d\n", i ,arr1[i]);
//		printf("arr2[%d] = %d\n", i, arr2[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
////初始化数组全为0
//void init(int arr[], int sz)
//{
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	for (int i = 0; i <= (sz - 1); i++)
//	{
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int change = arr[left];
//		arr[left] = arr[right];
//		arr[right] = change;
//
//		left++;
//		right--;
//	}
//
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	print(arr, sz);
//	
//	reverse(arr, sz);
//
//	print(arr, sz);
//
//	init(arr, sz);
//	
//	print(arr, sz);
//
//	return 0;
//}

//int main()
//{
//	int arr[1] = {1};
//	arr[0] = 0;
//	printf("%d\n", arr[0]);
//	arr[0] = '0';
//	printf("%d", arr[0]);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = -7;
//	int b = a >> 1;
//
//	printf("a = %d\n", a);
//	printf("b = %d", b);
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	
//	printf("交换前：a = %d; b = %d\n", a, b);
//	//第一种办法：利用加减法
//	//a = a + b;
//	//b = a - b;//这里b = 3， a = 8
//	//a = a - b;
//
//	//第二种办法：利用位操作符
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a = %d; b = %d\n", a, b);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	int a = 1;
//	int num_1 = 0;
//	int sz = sizeof(input);
//
//	printf("请输入一个整数：");
//	printf("\n");
//	scanf_s("%d", &input);
//	
//	for (int i = 0; i < sz * 4; i++)
//	{
//		int c = 0;
//		c = input & a;
//
//		if (c == 1)
//			num_1++;
//
//		input = input >> 1;
//	}
//
//	printf("二进制的1的个数是：%d", num_1++);
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	//a在内存中的表示方式是：
//	//0000-0000-0000-0000-0000-0000-0000-0000 - 补码
//	//1111-1111-1111-1111-1111-1111-1111-1111 - > ~a - 补码
//	//1111-1111-1111-1111-1111-1111-1111-1110 - 反码
//	//1000-0000-0000-0000-0000-0000-0000-0001 - 原码 - > ~a = -1
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 29;
//	
//	a &= (~(1 << 4));
//	printf("%d", a);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	printf("%zu", sizeof(p));
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = a && b;
//	printf("%d", c);
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 3; 
//	int b = 0;
//	int c = a || b;
//	printf("%d", c);
//
//	return 0;
//}

//

//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//
//	i = a++ || ++b || d++;
//	printf(" i = %d\n a = %d\n b = %d\n c = %d\n d = %d\n", i, a, b, c, d);
//
//	return 0;
//}
////1 2 2 3 4

////设计个找出最大值的程序
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	
//	scanf_s("%d %d", &a, &b);
//	int max = (a > b ? a : b);
//	printf("max = %d", max);
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a = ;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("%d", c);

	return 0;
}