//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	//动态内存开辟
//	int* p = (int*)malloc(40);//要强制类型转换
//	//一定要检查malloc函数的返回值，判断是否是空指针
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//
//	//释放内存
//	free(p);
//	//释放空间之后指针储存着未定义的内存的地址，这是非常危险的行为
//	p = NULL;
//
//	//没有free
//	//并不是说内存空间就不回收了
//	//当程序退出的时候，系统会自动回收内存空间
//	//但是不能因为这个就不使用free函数
//	//这是一个非常危险的行为
//
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//#include <stdlib.h>

//int main()
//{
//	int* p = (int*)malloc(40);
//	//如果p为空指针，就会出现问题
//	/*if (p == NULL)
//	{
//		return 1;
//	}
//	*p = 20;*/
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	//方式
//	int i = 0;
//	//动态开辟的空间只能存放10个整型元素
//	//这里越界访问了，访问到第十一个元素了
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//释放
//	//这里的p不再指向动态内存的起始位置
//	//导致释放失败
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	//中间写了一些代码
//	free(p);
//	p = NULL;
//	//然后中间又写了一些代码
//	free(p);
//	p = NULL;
//	//这里对动态管理的内存重新释放
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
//int* test()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return p;
//	}
//	中间写了一些代码
//	return p;
//}
//
//int main()
//{
//	int* ret = test();
//	然后就忘记释放这一块动态内存空间的代码了
//
//	return 0;
//}
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}