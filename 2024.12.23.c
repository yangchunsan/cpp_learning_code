//#include <stdio.h>
//
//char *GetMemory(void)
// {
// 	char p[] = "hello world";
// 	return p;
// }
// 
// void Test(void)
// {
// 	char *str = NULL;
//	str = GetMemory();
// 	printf(str);
// }
// 
// int main()
// {
// 	Test();
// 	
// 	return 0;
// }

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void GetMemory(char **p, int num)
// {
// 	*p = (char *)malloc(num);
// }
// 
// void Test(void)
// {
// 	char *str = NULL;
// 	GetMemory(&str, 100);
// 	strcpy(str, "hello");
// 	printf(str);
// 	//����ʹ��free�����ͷŶ�̬�ռ�
// 	free(str);
// 	str = NULL;//˳�㴦��Ұָ��
// }
// 
// int main()
// {
// 	Test();
// 	
// 	return 0;
// }

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void Test(void)
// {
// 	char *str = (char *) malloc(100);
// 	strcpy(str, "hello");
// 	free(str);
// 	str = NULL;
// 	
// 	if(str != NULL)
// 	{
// 		strcpy(str, "world");
// 		printf(str);
// 	}
// }
// 
// int main()
// {
// 	Test();
// 	
// 	return 0;
// }

//#include <stdio.h>
//int main()
//{
//	int gcd = 0;//���Լ��
//	int lcm = 0;//��С������
//	//�������������
//	int x = 0;
//	int y = 0;
//	scanf_s("%d %d", &x, &y);
//	//�ȽϽϴ�ֵ�ͽ�Сֵ
//	int bigger = x > y ? x : y;
//	int smaller = x > y ? y : x;
//
//	//����
//	int rest = 0;
//	while (rest = bigger % smaller)
//	{
//		bigger = smaller;
//		smaller = rest;
//	}
//	//�����smaller��ֵ�������Լ��
//	gcd = smaller;
//
//	//��С������ = �����˻�%���Լ��
//	lcm = x * y / gcd;
//
//	int add = gcd + lcm;
//	printf("%d\n", gcd);
//	printf("%d\n", lcm);
//	printf("%d", add);
//
//	return 0;
//}

//ŷ������㷨��շת����������������Լ��(greatest common divisor)
//��������������a��b������a��b
//��������������a����b������r��
//������ֵ����a��ֵ����Ϊb��
//��b��ֵ����Ϊr��
//�ظ����裺�ظ�����2��3��
//ֱ������rΪ0��
//��������������rΪ0ʱ����ǰ��bֵ��Ϊ���Լ��

//������С������Least common multiple()
//�ȼ��������������Լ����GCD��
//Ȼ���������ĳ˻��������ǵ����Լ�����õ���С������
 
// #include <stdio.h>
// int main()
// {
// 	int n = 0; 
// 	scanf("%d", &n);
// 	
// 	int i = 0; 
// 	int j = 0;
// 	for (i = 0; i < n; i++)
// 	{
//	 	//����Ǵ�ӡ��һ�к����һ��
//		 if (i == 0 || i == n - 1)
//	 	{
//		 	for (j = 0; j < n; j++)
//		 	{
//			 	printf("* ");
//			 }
//			 printf("\n");
//		 }
//		 
//		 //����Ǵ�ӡ�м�
//		 if (i > 0 && i < n - 1)
//	 	{
//		 	printf("* ");
//		 	
//		 	//����Ǵ�ӡ�м�ո�
//		 	for (j = 0; j < 2 * (n - 2); j++)
//		 	{
//			 	printf(" ");
//			 }
//			 
//			 printf("* ");
//			 printf("\n");
//		 }
//	 }
//	 
// 	return 0;
// }
 
// #include <stdio.h>
// #include <stdlib.h>
// 
// struct S
// {
// 	int n;
// 	int arr[];//���������Ա
// };
// 
// int main()
// {
// 	//���������ʹ��
// 	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
// 	//����Ķ�̬�ڴ��СӦ�ô��ڽṹ�Ĵ�С��-����Ӧ���������Ԥ�ڴ�С
// 	if (ps == NULL)
// 	{
// 		return 1;//��ֹ����ʧ�������������
// 	}
// 
// 	ps->n = 100;
// 	int i = 0;
// 	for (i = 0; i < 10; i++)
// 	{
// 		ps->arr[i] = i;
// 	}
// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("%d", ps->arr[i]);
// 	}
// 
// 	//��̬�޸���������Ĵ�С
// 	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);
// 	if (ptr != NULL)
// 	{
// 		ps == ptr;
// 		ptr = NULL;
// 	}//��ֹ����ʧ�ܣ����Ұָ��
// 
// 	//.........
// 	//�ͷŶ�̬�ڴ�
// 	free(ps);
// 	ps = NULL;
// 
// 	return 0;
// }
 
 
//#include <stdio.h>
//#include <stdlib.h>
//  
//struct S
//{
//  	int n;
//  	int* arr;
//};
//  
//int main()
//{
//  	//��ΪҪģ����������Ĺ��ܣ��Ǿ͵�ȷ��ģ�µ�ʱ��ṹ��ҲӦ��Ҫ�����ڶ�����
//  	//���Խ��ж�̬�ڴ濪�٣��ֽ��ṹ��Ž�����
//  	struct S* ps = (struct S*)malloc(sizeof(struct S));
//  	if (ps == NULL)
//  	{
//	  	return 1;
//	}//��ֹ����ʧ��
//	  
//	ps->n = 100;
//	ps->arr = (int*)malloc(40);//�ҵ��ṹ��ĵ�ַ�����������ַΪ��ʼ��ַ��̬�����ڴ�
//	if (ps->arr == NULL)
//	{
//		return 1;
//	}//��ֹ����ʧ��
//		
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//	 	ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//	 	printf("%d", ps->arr[i]);
//	}
//	
//	//����
//	int* ptr = (int*)realloc(ps->arr, 80);
//	if (ptr == NULL)
//	{
//		return 1;
//	}//��ֹ����ʧ��
//	
//	//ʹ��.....
//	//�ͷţ�ע��ǰ��˳��������ͷ�ps�͵����޷��ͷ�ps->arr
//	free(ps->arr);
//	free(ps);
//	ps = NULL;
//	
//	return 0;
//}
// 
// #include <stdio.h>
// #include <math.h>
// struct vector
// {
//     double x;
//     double y;
// };
// int main()
// {
//     struct vector a, b;
//     scanf("%lf %lf %lf %lf", &a.x, &a.y, &b.x, &b.y);
//     double x = a.x + b.x;
//     double y = a.y + b.y;
//     
//     if(fabs(x) < 0.05)
//     {
//         x = 0.0;
//     }
//     if(fabs(y) < 0.05)
//     {
//         y = 0.0;
//     }
//     printf("(%.1lf, %.1lf)", x, y);
//     
//     return 0;
// }

//#include <stdio.h>
//struct BOOK
//{
//    char name[31];
//    float price;
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
//        scanf("%f", &book[i].price);
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
//    printf("%0.2f, %s\n", MAX.price, MAX.name);
//    printf("%0.2f, %s", MIN.price, MIN.name);
//
//    return 0;
//}
     
// #include <stdio.h>
// 
// int main() 
// {
//     char str[100]; // ȷ�������㹻���Դ洢������ַ���
//     printf("Enter a line: ");
//     gets(str); // �ӱ�׼�����ȡһ���ı�
//     printf("You entered: %s", str);
//     return 1;
// }
// 
 
#include <stdio.h>
struct BOOK
{
    char name[31];
    double price;
};

int main()
{
    int n = 0; 
    scanf("%d", &n);

    struct BOOK book[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        getchar();
        gets(book[i].name);
        scanf("%lf", &book[i].price);
    }

    struct BOOK MAX;
    struct BOOK MIN;
    MAX = book[0];
    MIN = book[0];
    
    for (i = 1; i < n; i++)
    {
        if (MAX.price < book[i].price)
        {
            MAX = book[i];
        }
    }
    
    for (i = 1; i < n; i++)
    {
        if (MIN.price > book[i].price)
        {
            MIN = book[i];
        }
    }

    printf("%0.2lf, %s\n", MAX.price, MAX.name);
    printf("%0.2lf, %s", MIN.price, MIN.name);

    return 0;
} 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
