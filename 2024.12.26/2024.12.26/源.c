//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\m", __DATE__);
//	printf("%s\n", __TIME__);
//
//	return 0;
//}

//#define MAX 1000
//#define reg register	//为 register这个关键字，创建一个简短的名字          
//#define do_forever for(;;)	//用更形象的符号来替换一种实现     
//#define CASE break;case		//在写case语句的时候自动把 break写上。	        
//// 如果定义的 stuff过长，可以分成几行写，除了最后一行外，每行的后面都加一个反斜杠(续行符)。
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
//							date:%s\ttime:%s\n" ,\
//						    __FILE__,__LINE__ , \
//						    __DATE__,__TIME__ )

//#include <stdio.h>
//#define SQUARE(X) X*X
//
//int main()
//{
//	int r = SQUARE(5);
//	printf("%d", r);
//
//	return 0;
//}

//#include <stdio.h>
//#define SQUARE(X) (X)*(X)
//
//int main()
//{
//	int r = SQUARE(5+1);
//	printf("%d", r);
//
//	return 0;
//}

//#include <stdio.h>
//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	int r = 10 * DOUBLE(3);
//	printf("%d", r);
//
//	return 0;
//}

