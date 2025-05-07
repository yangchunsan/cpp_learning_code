//#include <stdio.h>
//int main()
//{
//	printf("Hello World!\n");
//	printf("Hello ""World!\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	
//	printf("The value of " "a"" is %d \n", a);
//	printf("The value of " "b"" is %d \n", b);
//
//	return 0;
//}

//#include <stdio.h>
//#define PRINT(FORMAT, VALUE) printf("The value is "FORMAT"\n", VALUE)
//int main()
//{
//	int a = 1;
//	int b = 2;
//
//	PRINT("%d", a);
//	PRINT("%d", b);
//
//	return 0;
//}

//#include <stdio.h>
//#define PRINT(N, FORMAT) printf("The value of "#N" is "FORMAT"\n", N)//FORMAT是转换说明的格式
//int main()
//{
//	int a = 1;
//	int b = 2;
//
//	PRINT(a, "%d");
//	PRINT(b, "%d");
//
//	return 0;
//}

//#include <stdio.h>
//
////定义宏，用于给特定编号的sum变量增加值
//#define ADD_TO_SUM(num, value) \
//    sum##num += value;//这个的意思是说sum和后面的num会合成一个标识符，比如sum1
//
//int main() 
//{
//    //定义一些sum变量
//    int sum1 = 0;
//    int sum2 = 0;
//    int sum3 = 0;
//    int sum4 = 0;
//    int sum5 = 0;
//
//    //使用宏给sum5增加10
//    ADD_TO_SUM(5, 10);
//
//    //打印sum5的值，预期输出为10
//    printf("sum5 = %d\n", sum5);
//
//    //使用宏给sum2增加20
//    ADD_TO_SUM(2, 20);
//
//    //打印sum2的值，预期输出为20
//    printf("sum2 = %d\n", sum2);
//
//    return 0;
//}

//#include <stdio.h>
//#define MAX(x, y) ((x) > (y) ? (x) : (y))
//
//int main()
//{
//    int a = 5;
//    int b = 4;
//    //int m = MAX(a++, b++);
//    //这相当于什么呢？
//    int m = ((a++) > (b++) ? (a++) : (b++));
//    //先比较 a>b 
//    //再自增a=6,b=5
//    //三目表达式转到a++ 先给m赋值 m = 6
//    //a再自增 a++ a=7
//
//    printf("m = %d\n", m);
//    printf("a = %d b  = %d\n", a, b);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//
//	return 0;
//}

//#include <stdio.h>
//
//// 定义一个宏
//#define SQUARE(x) ((x) * (x))
//
//int main()
//{
//
//	// 使用宏
//	printf("Square of 3: %d\n", SQUARE(3));
//
//	// 取消宏定义
//#undef SQUARE
//
//    // 尝试使用已取消定义的宏（这将产生编译错误）
//	printf("Square of 4: %d\n", SQUARE(4));
//
//	return 0;
//}