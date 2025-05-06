//#include <stdio.h>
//struct BOOK
//{
//    char name[31];
//    double price;
//};
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    struct BOOK book[n];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        getchar();
//        gets(book[i].name);
//        scanf("%lf", &book[i].price);
//    }
//
//    struct BOOK MAX;
//    struct BOOK MIN;
//    MAX = book[0];
//    MIN = book[0];
//
//    for (i = 1; i < n; i++)
//    {
//        if (MAX.price < book[i].price)
//        {
//            MAX = book[i];
//        }
//    }
//
//    for (i = 1; i < n; i++)
//    {
//        if (MIN.price > book[i].price)
//        {
//            MIN = book[i];
//        }
//    }
//
//    printf("%0.2lf, %s\n", MAX.price, MAX.name);
//    printf("%0.2lf, %s", MIN.price, MIN.name);
//
//    return 0;
//}

#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    { // 读取直到换行符或文件结束
        putchar(c); // 将读取的字符输出到标准输出
    }
    printf("%d\n", c);

    return 0;
}