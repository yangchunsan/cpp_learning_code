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
//// ��������
//size_t my_strlen(const char* str) {
//    const char* ptr = str; // ��ʼ��ָ�� ptr ָ���ַ����Ŀ�ʼλ��
//
//    // �����ַ���ֱ���ҵ����ַ� '\0'
//    while (*ptr != '\0') {
//        ptr++; // �ƶ�ָ�� ptr ����һ���ַ�
//    }
//
//    // ���� ptr �� str ֮��Ĳ�ֵ�����ַ����ĳ���
//    // ��������ָ��ָ���������ڴ��������ǵĲ�ֵ��������֮���Ԫ�ظ���
//    return ptr - str;
//}

//#include <stdio.h>
//
//size_t my_strlen(const char* str)
//{
//    // ��������������ǰ�ַ��� '\0'�����ַ�������Ϊ 0
//    if (*str == '\0')
//    {
//        return 0;
//    }
//    else
//    {
//        // �ݹ��������ǰ�ַ����� '\0'���ݹ���� my_strlen ����ǰ�ƶ�ָ��
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
//    char dest[50] = "Hello, "; // Ŀ���ַ�����ȷ�����㹻�Ŀռ����洢���
//    char scr[] = "World!";
//
//    // �� src �ַ������ӵ� dest �ַ�����ĩβ
//    my_strcat(dest, scr);
//
//    // ��ӡ���Ӻ���ַ���
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
    char dest[50] = "Hello, "; // Ŀ���ַ�����ȷ�����㹻�Ŀռ����洢���
    char scr[] = "World!";

    // �� scr �ַ������ӵ� dest �ַ�����ĩβ
    my_strcat(dest, scr);

    // ��ӡ���Ӻ���ַ���
    printf("%s\n", dest);

    return 0;
}