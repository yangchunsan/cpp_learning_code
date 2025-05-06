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
//#include <stdlib.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	//动态内存开辟
//	int* p = (int*)calloc(10, sizeof(int));//要强制类型转换，输入个数和大小
//	//一定要检查realloc函数的返回值，判断是否是空指针
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	int i = 0;
//	//打印，可以发现会自动初始化为0
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
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
//#include <stdlib.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	//动态内存开辟
//	int* p = (int*)malloc(40);//要强制类型转换，输入个数和大小
//	//一定要检查malloc函数的返回值，判断是否是空指针
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	int i = 0;
//	//使用
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	
//	//扩容
//	int* ptr = (int*)realloc(p, 80);//强制类型转换
//	//如果这样可以吗？
//	//p = (int*)realloc(p, 80);
//	//好像可以？！
//	//实际上完全不可以！！！
//	//最简单的一种情况，扩容失败了怎么办？返回的是空指针NULL，那原来内存的地址不就丢了吗？
//	//所以又创建了一个新的指针变量*ptr，加了一层保险，如果不是空指针再赋值
//	
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//使用
//	for (i = 0; i < 20; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//打印
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", *(p + i));
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
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	//动态内存开辟
//	int* p = (int*)calloc(10, sizeof(int));//要强制类型转换，输入个数和大小
//	//一定要检查realloc函数的返回值，判断是否是空指针
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	int i = 0;
//	//打印，可以发现会自动初始化为0
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
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
//#include <stdlib.h>
//
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//	//然后对p解引用，找到储存指针变量str的内存
//	//将开辟的动态内存空间存储到里面
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	//这里的思路是：既然对形参的修改无法影响到实参，那直接对储存实参的内存中的数据进行修改
//	//所以这里将指针变量str的地址传给形参二级指针p
//	strcpy(str, "hello world");
//	printf(str);
//	
//	free(str);
//	str = NULL;
//	//这里不要忘记释放动态内存，并解决野指针
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* GetMemory()
{
	char* p;
	p = (char*)malloc(100);
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	//这里的思路是：即使对形参的修改不会影响实参，在函数运行过一次之后形参也会被销毁
	//但是动态开辟的空间却不会消失，只要将指向这块动态开辟的内存的地址传给实参就可以避免内存泄露了
	strcpy(str, "hello world");
	printf(str);
	
	free(str);
	str = NULL;
	//这里不要忘记释放动态内存，并解决野指针
}

int main()
{
	Test();

	return 0;
}





























































