//#include <stdio.h>
//size_t my_strlen(char* arr)
//{
//	char* arr_original = arr;
//	while (*arr != '\0')
//	{
//		arr++;
//	}
//
//	return arr - arr_original;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t result = my_strlen(arr);
//	printf("%u", result);
//
//	return 0;
//}

//#include <stdio.h>
//
//
//int main() {
//    const char str[] = "Hello, World!";
//    size_t length = my_strlen(str);
//    printf("The length of the string is: %zu\n", length);
//    return 0;
//}
//
//// 函数定义
//size_t my_strlen(const char* str) {
//    const char* ptr = str; // 初始化指针 ptr 指向字符串的开始位置
//
//    // 遍历字符串直到找到空字符 '\0'
//    while (*ptr != '\0') {
//        ptr++; // 移动指针 ptr 到下一个字符
//    }
//
//    // 计算 ptr 和 str 之间的差值，即字符串的长度
//    // 由于两个指针指向连续的内存区域，它们的差值就是它们之间的元素个数
//    return ptr - str;
//}

//#include <stdio.h>
//
//size_t my_strlen(const char* str)
//{
//    // 基本情况：如果当前字符是 '\0'，则字符串长度为 0
//    if (*str == '\0')
//    {
//        return 0;
//    }
//    else
//    {
//        // 递归情况：当前字符不是 '\0'，递归调用 my_strlen 并向前移动指针
//        return 1 + my_strlen(str + 1);
//    }
//}
//
//int main() 
//{
//    const char arr[] = "abcdef";
//    size_t result = my_strlen(arr);
//    printf("%zu\n", result);
//
//    return 0;
//}
//
//#include <stdio.h>
//void my_strcpy(char* arr2, char* arr1)
//{
//	while (*arr1 != '\0')
//	{
//		*arr2 = *arr1;
//		arr1++;
//		arr2++;
//	}
//
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//char* my_strcat(char* dest, const char* src)
//{
//    char* ret = dest;
//    assert(dest && src);
//
//    while (*dest != '\0');
//    {
//        dest++;
//    }
//
//    while (*dest++ = *src++)
//    {
//        ;
//    }
//
//    return ret;
//}
//
//int main() 
//{
//    char dest[50] = "Hello, "; // 目标字符串，确保有足够的空间来存储结果
//    char scr[] = "World!";
//
//    // 将 src 字符串连接到 dest 字符串的末尾
//    my_strcat(dest, scr);
//
//    // 打印连接后的字符串
//    printf("%s\n", dest);
//
//    return 0;
//}

#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strcat(char* dest, const char* src) 
{
    char* ret = dest;
    assert(dest && src);

    while (*dest != '\0') 
    {
        dest++;
    }

    while (*dest++ = *src++) 
    {
        ;
    }

    return ret;
}

int main() 
{
    char dest[50] = "Hello, "; // 目标字符串，确保有足够的空间来存储结果
    char scr[] = "World!";

    // 将 scr 字符串连接到 dest 字符串的末尾
    my_strcat(dest, scr);

    // 打印连接后的字符串
    printf("%s\n", dest);

    return 0;
}