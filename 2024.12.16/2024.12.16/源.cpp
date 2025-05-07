//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char str[] = "";//这是用来分割的字符串
//    const char* sep = "-@.";//这个是分割字符串的分隔符
//    char* ret;//这个是用来接收返回值的指针
//
//    for (ret = strtok(str, sep); ret != NULL; ret = strtok(NULL, sep))
//        //这里用到for函数只初始化一次的特性
//        //因为strtok函数第一次不为空指针NULL的时候，会标记分隔符的位置并返回这个位置的指针
//        //第二次寻找时参数为NULL时会从上一次标记的位置开始寻找下一个分隔符
//        //因此如果字符串一直有分隔符（分隔符之间是有内容的）会一直找下去
//        //直至字符串停止或者没有分隔符出现返回空指针，然后跳出循环
//    {
//        printf("%s\n", ret);
//    }
//
//    return 0;
//}

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
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int dest[40] = { 0 };
//	unsigned int st = sizeof(arr);
//	memcpy(dest, arr, st);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int number = sizeof(arr) / sizeof(arr[0]);
//	int sz = sizeof(arr);
//	int dest[9];
//
//	memcpy(dest, arr, sz);
//	printf("%u", sz);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", dest[i]);
//	}
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    size_t sz = sizeof(arr) / sizeof(arr[0]); // 计算arr中元素的数量

    memcpy(arr + 5, arr, 2 * sizeof(arr[0]));
    //变成1 2 3 4 5 1 2 8 9

    printf("%zu\n", sz); // 打印数组中的元素数量

    for (int i = 0; i < (int)sz; i++) //这个是用来检查是否复制成功
    {
        printf("%d ", arr[i]);
    }

    return 0;
}