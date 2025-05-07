//#include <stdio.h>
//int main()
//{
//    char arr[4][8];
//    scanf_s("%s", &arr);
//    int number[8] = { 128,64,32,16,8,4,2,1 };
//    int a[4] = { 0,0,0,0 };
//
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 4; i++)
//    {
//        for (j = 0; j < 8; j++)
//        {
//            a[i] += arr[i][j] * number[j];
//        }
//    }
//
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d\n", a[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//#define MAXN 20
//
//void strmcpy(char* t, int m, char* s);
//void ReadString(char s[]); /* 由裁判实现，略去不表 */
//
//int main()
//{
//    char t[MAXN], s[MAXN];
//    int m;
//
//    scanf("%d\n", &m);
//    ReadString(t);
//    strmcpy(t, m, s);
//    printf("%s\n", s);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//void strmcpy(char* t, int m, char* s)
//{
//    while (*(t + m - 1) != '\0')
//    {
//        *s = *(t + m - 1);
//        s++;
//        t++;
//    }
//    *s = '\0';
//}

//#include <stdio.h>
//#define MAXS 15
//
//void StringCount(char* s);
//void ReadString(char* s); /* 由裁判实现，略去不表 */
//
//int main()
//{
//    char s[MAXS];
//
//    ReadString(s);
//    StringCount(s);
//
//    return 0;
//}
//
///* Your function will be put here */
//#include<ctype.h>
//
///*
// * 分类统计各类字符个数
// */
//void StringCount(char* s) {
//    int capital = 0;
//    int minuscule = 0;
//    int blank = 0;
//    int digit = 0;
//    int other = 0;
//
//    for (int i = 0; s[i] != '\0'; i++) {
//        if (isupper(s[i])) {
//             大写字母
//            capital++;
//        }
//        else if (islower(s[i])) {
//             小写字母
//            minuscule++;
//        }
//        else if (isblank(s[i])) {
//             空格
//            blank++;
//        }
//        else if (isdigit(s[i])) {
//             数字            
//            digit++;
//        }
//        else {
//            other++;
//        }
//    }
//
//    printf("%d %d %d %d %d\n", capital, minuscule, blank, digit, other);
//}

//#include <stdio.h>
//#define MAXN 20
//
//void delchar(char* str, char c);
//void ReadString(char s[]); /* 由裁判实现，略去不表 */
//
//int main()
//{
//    char str[MAXN], c;
//
//    scanf("%c\n", &c);
//    ReadString(str);
//    delchar(str, c);
//    printf("%s\n", str);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//void delchar(char* str, char c)
//{
//    char* s = str;
//    while (*str)
//    {
//        if (*s != c)
//        {
//            *str = *s;
//            str++;
//            s++;
//        }
//        else
//        {
//            s++;
//        }
//    }
//}

//
//#include <stdio.h>
//#include <string.h>
//
//#define MAXS 10
//
//char* str_cat(char* s, char* t);
//
//int main()
//{
//    char* p;
//    char str1[MAXS + MAXS] = { '\0' }, str2[MAXS] = { '\0' };
//
//    scanf("%s%s", str1, str2);
//    p = str_cat(str1, str2);
//    printf("%s\n%s\n", p, str1);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//char* str_cat(char* s, char* t)
//{
//    char* ret = s;
//
//    while (*s != '\0')
//    {
//        s++;
//    }
//
//    while (*s++ = *t++)//这里会把原来的'\0'覆盖掉
//    {
//        ;
//    }
//
//    return ret;
//}

//#include <stdio.h>
//#include <string.h>
//#define MAX 80
//
//int main()
//{
//    int N = 0;
//    char min[MAX];
//    char ch[MAX];
//    scanf("%d", &N);
//    scanf("%s", ch);
//
//    int i = 0;
//    strcpy(min, ch);//假设第一个就是最小的，用后面的来比较
//    for (i = 0; i < N - 1; i++)//吃掉后面的
//    {
//        scanf("%s", ch);
//        if (strcmp(min, ch) > 0)
//        {
//            strcpy(min, ch);
//        }
//        else
//        {
//            continue;
//        }
//    }
//    printf("Min is: %s", min);
//
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char a[5][81];
//    int j, i;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%s", &a[i]);//scanf函数有空字符自动结束输入
//    }
//
//    for (i = 1; i < 5; i++)//利用插入排序
//    {
//        char b[81];
//        strcpy(b, a[i]);
//        int k = i;
//
//        while (k > 0 && strcmp(b, a[k - 1]) < 0)//strcap函数返回值<0表示b比a[k-1]小
//        {
//            strcpy(a[k], a[k - 1]);
//            k--;
//        }
//
//        if (k != i)
//        {
//            strcpy(a[k], b);
//        }
//    }
//
//    printf("After sorted:\n");
//    for (i = 0; i < 5; i++)
//    {
//        printf("%s\n", a[i]);//a[i]表示第i行的所有元素
//    }
//
//    return 0;
//}

#include <stdio.h>
void insertionSort(int arr[], int length)
{
    int i, j;
    for (i = 1; i < length; i++) 
    {
        int key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr1[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    insertionSort(arr1, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    return 0;
}
//
//我的疑问在于为何不会有数据的丢失，那么开始逐步记录调试的记录
//12,11,13,5,6,7
//
//第一次进入for循环，要插入的元素是11，key储存的元素是11，下标j是0，指向的元素是12
//  然后判断是否能进入while循环，发现j>=0 12>11
//    进入while循环
//    将要插入前面已排序列的元素11变成被比较的元素12  12 12 13 5 6 7
//    下标j变成-1
//  判断是否能进入while循环，j < 0 不能进入while循环
//  然后将被比较的元素12变成要插入前面已排序列的元素11  11 12 13 5 6 7
//
//第二次进入for循环，要插入的元素是13，key储存的元素是13，下标j是1，指向的元素是12
//  然后判断是否能进入while循环，发现j>=0 12<13 不能进入while循环
//  将被比较的元素变成要插入前面已排序列的元素，然后会神奇的发现其实什么都没有改变 11 12 13 5 6 7
//
//第三次进入for循环，要插入的元素是5，key储存的元素是5，下标j是2，指向的元素是13
//  然后判断是否能进入while循环，发现j>=0 13>5 
//    进入while循环
//    将要插入前面已排序列的元素5变成被比较的元素13  11 12 13 13 6 7
//    下标j变成1
//  判断是否能进入while循环，j>0 12>5 
//    进入while循环
//    将要插入前面已排序列的元素13变成被比较的元素12  11 12 12 13 6 7
//    下标变成0
//  判断是否能进入while循环，j>=0 11>5 
//    进入while循环
//    将要插入前面已排序列的元素12变成被比较的元素11  11 11 12 13 6 7
//  判断是否能进入while循环，j < 0 不能进入while循环
//  将被比较的元素11变成要插入前面已排序列的元素5  5 11 12 13 6 7
//
//第四次进入for循环，要插入的元素是6，key储存的元素是6，下标j是3，指向的元素是13
//  然后判断是否能进入while循环，发现j>=0 13>6
//    进入while循环
//    将要插入前面已排序列的元素6变成被比较的元素13  5 11 12 13 13 7
//    下标变成2
//  判断是否能进入while循环，j>=0 12>6
//    进入while循环
//    将要插入前面已排序列的元素13变成被比较的元素12  5 11 12 12 13 7
//    下标变成1
//  判断是否能进入while循环，j>=0 11>6
//    进入while循环
//    将要插入前面已排序列的元素12变成被比较的元素11  5 11 11 12 13 7
//    下标变成0
//  判断是否能进入while循环，j>=0 11>6
//    进入while循环
//    将要插入前面已排序列的元素11变成被比较的元素6  5 6 11 12 13 7
//    下标变成-1
//  判断是否能进入while循环，j < 0 不能进入while循环  
//  将被比较的元素变成要插入前面已排序列的元素，然后会神奇的发现其实什么都没有改变  5 6 11 12 13 7
//
//第五次进入for循环，要插入的元素是7，key储存的元素是7，下标j是4，指向的元素是13
//  然后判断是否能进入while循环，发现j>=0 13>7
//    进入while循环
//    将要插入前面已排序列的元素7变成被比较的元素13  5 6 11 12 13 13
//    下标变为3
//  判断是否能进入while循环，j>=0 12>7
//    进入while循环
//    将要插入前面已排序列的元素13变成被比较的元素12  5 6 11 12 12 13
//    下标变为2
//  判断是否能进入while循环，j>=0 11>7
//    将要插入前面已排序列的元素12变成被比较的元素11  5 6 11 12 12 13
//    下标变为1
//  判断是否能进入while循环，j>=0 6<7 不能进入while循环
//  将被比较的元素11变成要插入前面已排序列的元素7  5 6 7 11 12 13
//
//所以发现是不会漏任何数据的