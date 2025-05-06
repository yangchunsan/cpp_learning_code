//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main() 
//{
//    FILE* fp = fopen("nonexistentfile.txt", "r");
//    if (fp == NULL) 
//    {
//        printf("Error: %s\n", strerror(errno));
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main() 
//{
//    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//    size_t sz = sizeof(arr) / sizeof(arr[0]); // 计算arr中元素的数量
//    int dest[sz]; // 确保dest数组有足够的空间
//
//    memcpy(dest, arr, sz * sizeof(arr[0])); // 复制整个数组
//
//    printf("%zu\n", sz); // 打印数组中的元素数量
//
//    for (int i = 0; i < (int)sz; i++) //这个是用来检查是否复制成功
//	{
//        printf("%d ", dest[i]);
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t n)
//{
//	assert(dest && src);
//	
//	void* ret = dest;
//	//模拟函数的实现就要完美匹配原函数的功能，这里是用来储存目标地址的指针
//	
//	while (n--)//利用循环一字节一字节的拷贝
//	{
//		*(char*)dest = *(char*)src;//void*类型的指针不能解引用，先强制类型转换
//		//为什么要强制类型转换成char*类型呢？
//		//因为不确定源内存地址的数据是什么类型的，为了通用所以选择一字节一字节的拷贝
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	
//	return ret;//由于dest内部的值已经发生变化，所以这里利用开始储存的地址返回
//}
//
//int main() 
//{
//    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//    size_t sz = sizeof(arr) / sizeof(arr[0]); // 计算arr中元素的数量
//    int dest[sz]; // 确保dest数组有足够的空间
//
//    my_memcpy(dest, arr, sz * sizeof(arr[0])); // 复制整个数组
//
//    printf("%zu\n", sz); // 打印数组中的元素数量
//
//    for (int i = 0; i < (int)sz; i++) //这个是用来检查是否复制成功
//	{
//        printf("%d ", dest[i]);
//    }
//
//    return 0;
//}

#include <stdio.h>
#include <assert.h>
void* my_memmove(void* dest, const void* src, size_t n)
{
	assert(dest && src);
		
	void* ret = dest;
	//模拟函数的实现就要完美匹配原函数的功能，这里是用来储存目标地址的指针
	
	//先解释一下为什么memcpy函数不可以在源内存地址和目标内存地址重叠的情况下使用
	//这个函数的逻辑是将源内存地址的值从前向后一个一个字节拷贝到目标内存地址的
	//这就会出现一个情况，就是源内存地址的后部和目标内存地址的前部重叠
	//当源内存地址的后部的值要拷贝到目标内存地址的后部时，会发现源内存地址的后部的值已经被修改成源内存地址的前部了
	//从而导致拷贝失败
	
	//那如何解决这种情况？
	//通过观察发现有四种情况
	//1.不重叠，且原地址内存在目标内存地址的前面
	//2.源内存地址的后部和目标内存地址的前部重叠
	//3.源内存地址的前部和目标内存地址的后部重叠
	//4.不重叠，且原地址内存在目标内存地址的后面
	
	//分别讨论着四种情况发现
	//1.从前往后拷贝和从后往前拷贝都可以
	//2.从后往前拷贝可以
	//3.从前往后拷贝可以
	//4.从后往前拷贝和从后往前拷贝都可以
	
	//这样就可以化简为两种情况
	//1.从后往前拷贝
	//2.从前往后拷贝
	
	//那么如何区分这两种情况呢？
	//再次观察发现，情况不同主要出现在源内存地址的前部（后部）和目标内存地址的前部（后部）的相对位置
	//这里取简单情况，就讨论前部就可以了
	//1.从后往前拷贝，源内存地址的前部在目标内存地址的前部的前面
	//2.从前往后拷贝，源内存地址的前部在目标内存地址的前部的后面
	
	if (dest < src)
	{
		while (n--)
		{
			*((char*)dest + n) = *((char*)src + n);
			//这一步非常的奥妙！！！如何体现呢？
			//不用解释为什么要强制类型转换成char*类型了
			//+n这一步就非常的巧妙，如果单纯是(char*)dest + n的话，就会出现一个问题，跑过头了一个字节（不懂自己画图）
			//但是循环条件又弥补了这一部分，因为在判断条件之后就自减了一个字节，刚好不用越界
			//还省略了每次循环往前移动一字节这一部分
			//简直是一石多鸟啊！！！
		}
	}
	else
	{
		//这里发现逻辑跟memcpy是一样的，直接套用
		while (n--)//利用循环一字节一字节的拷贝
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	
	return ret;
		
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    size_t sz = sizeof(arr) / sizeof(arr[0]); // 计算arr中元素的数量

    my_memmove(arr + 5, arr, 2 * sizeof(arr[0]));
    //变成1 2 3 4 5 1 2 8 9

    printf("%zu\n", sz); // 打印数组中的元素数量

    for (int i = 0; i < (int)sz; i++) //这个是用来检查是否复制成功
	{
        printf("%d ", arr[i]);
    }

    return 0;
}
