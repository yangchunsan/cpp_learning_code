//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	arr[7] = 8;
//	printf("%d\n", arr[7]);
//
//	7[arr] = 9;
//	printf("%d", arr[7]);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//void set_stu(struct Stu* ps)
//{
//	strcpy_s(ps->name, "zhangsan");//这个name是一个地址，将一个字符串给地址是不正确的
//	ps->age = 20;
//	ps->score = 100.0;
//
//}
//
//void print_stu(struct Stu ss)
//{
//	printf("%s %d %lf\n", ss.name, ss.age, ss.score);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = 5;
//	//0000-0000-0000-0000-0000-0000-0000-0101 - int
//	//0000-0101 - char
//	char b = 126;
//	//0000-0000-0000-0000-0000-0000-0111-1110 - int
//	//0111-1110 - char
//	char c = a + b;
//	//0000-0101 - a
//	//0111-1110 - b
//	//整型提升！
//	//0000-0000-0000-0000-0000-0000-0000-0101 - a
//	//0000-0000-0000-0000-0000-0000-0111-1110 - b
//	//0000-0000-0000-0000-0000-0000-1000-0011 - a + b
//	//1000-0011 - c
//	//1111-1111-1111-1111-1111-1111-1000-0011 - 补码
//	//1111-1111-1111-1111-1111-1111-1000-0010 - 反码
//	//1000-0000-0000-0000-0000-0000-0111-1101 - 原码
//	//-125
//
//	printf("%d\n", c);
//
//	return 0;
//}
////131 - 128 = 3
////-125

//#include <stdio.h>
//int main()
//
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//
//	return 0;
//}

//#include <stdio.h>
//int fib(int step)
//{
//	if (step <= 2)
//	{
//		return step;
//	}
//	else
//	{
//		return fib(step - 1) + fib(step - 2);
//	}
//}
//
//
//int main()
//{
//	int step = 0;
//	scanf_s("%d", &step);
//
//	if (step < 1 || step >30)
//	{
//		return 0;
//	}
//	int ways = fib(step);
//	printf("%d", ways);
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    for (int n = 10000; n < 100000; n++)
//    {
//        int sum = 0; // 每更换一次数字初始化一次
//        int temp = n; // 用于计算各位数字
//
//        for (int j = 1; j < 5; j++)
//        {
//            int digit = temp % 10; // 获取当前最低位的数字
//            sum += (int)pow(digit, j); // 计算该位数字的j次幂并累加
//            temp /= 10; // 移除当前最低位的数字
//        }
//
//        if (sum == n)
//        {
//            printf("%d  ", n);
//        }
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#define N_VALUES 5
//
//int main()
//{
//	float values[N_VALUES];//这是一个数组
//	float* vp;//此时此刻还是野指针
//
//	//指针+-整数，指针的关系运算
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;//先解引用vp的地址，然后把0放进去
//		//分解成*vp = 0;
//		// vp++;
//	}
//}
//
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//
//	return 0;
//}

//#include <stdio.h>
//void test(int* p, int sz)//用来接收地址
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr, 10);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int arr[10];
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//
//	int* parr[10] = { &a,&b,&c };
//	//parr就是存放指针的数组，即指针数组
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(parr[i]));
//	}
//	//这个for循环可以按顺序打印abc的值
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//	//数组名是首元素的地址
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
////声明的结构体类型struct peo
//struct peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//}p3, p4;
////那么p3，p4是使用struct peo结构类型创建的两个全局变量，是可有可无的
////在声明结构体类型的时候顺便定义了这两个变量
////全局变量比较危险，一般是不这样声明一个变量的，而是会在main函数中完成
//
//struct peo p5, p6;
////这也是创建结构体变量的一种方法
////仍然是全局变量
//
//struct st
//{
//	struct peo p;
//	int num;
//	float f;
//};
//
//void print1(struct peo p)
//{
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);
//}
//
//void print2(struct peo* sp)
//{
//	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);
//}
//
//int main()
//{
//	struct peo p1 = { "张三", "12345678910", "男", 181 };
//	//初始化：定义变量的时候同时赋初值
//	//这就是一个结构体的变量创建, 只能在main函数内部使用，局部变量
//	//p1就叫结构体变量
//
//
//	//结构体里面有结构体变量该怎么初始化？
//	struct st s = { {"李四", "12345678910", "女", 166}, 100, 3.14 };
//	
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);
//
//	print1(p1);//那把P1传过去呢？
//	print2(&p1);//这个是把地址传过去
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c6 a6
//	b = ++c, c++, ++a, a++;//c7 c8 a7 a8 b7
//	b += a++ + c;//a9 b = 7 + 8 + 7 = 23
//	printf("%d %d %d", a, b, c);
//	//9 23 8
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input = 0;//初始化
//	int a = 1;
//	//当标尺，原码反码和补码是一样的
//	//0000-0000-0000-0000-0000-0000-0000-0001
//	int num_1 = 0;//用于计数1的个数
//	int sz = sizeof(input);//整型变量四字节
//
//	printf("请输入一个整数：");
//	printf("\n");
//	scanf_s("%d", &input);
//
//	for (int i = 0; i < sz * 8; i++)
//	{
//		int c = 0;
//		c = input & a;
//		//按位与，当两个数相同位置上的补码都为1时才为1,
//		//并将结果储存到c中
//		//但是a只有最后一位的数字为1，所以若相同，c就为1，若不相同，c就为0；
//
//		if (c == 1)
//			num_1++;//c如果是1，个数加一
//
//		input = input >> 1;//右移操作符，扔掉已经比较的位置
//	}
//
//	printf("二进制的1的个数是：%d", num_1);
//
//	return 0;
//}