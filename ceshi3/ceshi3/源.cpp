//#include <stdio.h>
//int main() 
//{
//	char str[1024];
//	scanf_s("%s", str, 1024);
//	printf("%s\n", str);
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c\n", str[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int ADD(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int arr[] = { 0 };
//	printf("%p\n", arr);
//	//&��������ȡ���ľ�������ĵ�ַ
//	printf("%p\n", &arr);
//	
//	//���ں�����˵����������&����������ȡ�������ĵ�ַ
//	printf("%p\n", ADD);
//	printf("%p\n", &ADD);
//
//	//������ַ��ȡ�����ˣ�Ҫ��ô�����أ�
//	int (*pf)(int, int) = &ADD; 
//	//�򵥵�����
//	int ret = (*pf)(2, 3);
//	printf("%d\n", ret);
//	//����������д
//	ret = pf(2, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//#include <stdio.h>
//void menu()
//{
//	printf("*************************\n");
//	printf("*****1.Add    2.Min *****\n");
//	printf("*****3.Mul    4.Div******\n");
//	printf("*****    0.exit     *****\n");
//	printf("*************************\n");
//}
//
//int Add(int x, int y)//�ӷ�
//{
//	return x + y;
//}
//
//int Sub(int x, int y)//����
//{
//	return x - y;
//}
//
//int Mul(int x, int y)//�˷�
//{
//	return x * y;
//}
//
//int Div(int x, int y)//����
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	//����һ������ָ������
//	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };
//
//	do
//	{
//		menu();
//		printf("�����룺");
//		scanf_s("%d", &input);
//
//		if (input == 0)
//		{
//			printf("�˳�����");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			int x = 0;
//			int y = 0;
//			int ret = 0;
//			printf("����������������");
//			scanf_s("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("�������\n");
//		}
//		
//	} while (input);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i;
//	char str[] = "university";
//	for (i = 0; i <= 3; i++)
//	{
//		switch (i)
//		{
//		case 0:
//			printf("%c ", str[i]);
//		case 1:
//			printf("%c\n", str[i]);
//			break;
//		case 2:
//			printf("%s\n", str);
//		default:
//			printf("***");
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//// �ȽϺ�����������������
//int compareInts(const void* a, const void* b)//��������
//{
//	int arg1 = *(const int*)a;//Ҫǿ������ת��ָ�������
//	int arg2 = *(const int*)b;
//
//	if (arg1 < arg2) return -1;
//	if (arg1 > arg2) return 1;
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,5,2,6,1,4,8,9,1,2,3,4 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, n, sizeof(int), compareInts);
//
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a[] = "program";
//	int sz = sizeof(a);
//	printf("%d", sz);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = a;
//	int sum = 0;
//	
//	for (; p < a + 10; p++)
//	{
//		int tmp = *p++;
//		sum += tmp;
//	}
//	printf("sum=%d\n", sum);
//
//	return 0;
//}

//#include <stdio.h>
//void bubble_sort(int arr[], int sz)//�����ð������[]������Ҳ����������Ϊ�ò���
//{
//	int i = 0;
//
//	for (i = 0; i < sz - 1; i++)//sz - 1������
//	{
//		//һ��
//		for (int j = 0; j < sz - 1 - i; j++)//Ϊʲô������sz - 1 - i?�ʼ������Ҫ��8�Σ����ڶ�������ֻҪ��7�Σ��Դ�����
//		{                                   //����ÿ��ѭ��i���һ���պ�����Ҫ��
//			int change = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				change = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = change;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//ȷ������Ԫ�ظ���
//	bubble_sort(arr, sz);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)//ע���������±��������е�Ԫ��
//	{
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
// //qosrt������ʹ���ߵ�ʵ��һ���ȽϺ���
//int int_cmp(const void* p1, const void* p2)
//{
//    return (*(int*)p1 - *(int*)p2);
//}
//int main()
//{
//    int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//    int i = 0;
//
//    qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//����qsort�����������ų�����
//
//�Ƚ���������Ԫ��
//e1ָ��һ������
//e2ָ����һ������
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int arr[] = { 9,5,8,6,7,1,2,4,3,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%2d", arr[i]);
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
////ʹ��qsort�����ȽϽṹ���ڲ�������
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	int i = strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//	return i;
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct Stu s[] = { {"zhangsan",15 },{ "lisi", 30 },{ "wangwu", 25 } };
//    qsort(s, sizeof(s) / sizeof(s[0]), sizeof(struct Stu), cmp_stu_by_name);
//
//	for (int i = 0; i < sizeof(struct Stu); i++)
//	{
//		printf("%s\n", s[i].name);
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// ����ṹ�� Stu
//struct Stu 
//{
//    char name[20];
//    int age;
//};
//
//// ����ȽϺ���
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//    // �� void* ����ת��Ϊ struct Stu* ����
//    const struct Stu* stu1 = (const struct Stu*)e1;
//    const struct Stu* stu2 = (const struct Stu*)e2;
//    return strcmp(stu1->name, stu2->name);
//}
//
//int main() 
//{
//    struct Stu s[] = { {"zhangsan", 15}, {"lisi", 30}, {"wangwu", 25} };
//    // ʹ�� qsort ����ע��ȽϺ����Ĳ�����Ԫ�ش�С
//    qsort(s, sizeof(s) / sizeof(s[0]), sizeof(struct Stu), cmp_stu_by_name);
//
//    for (int i = 0; i < sizeof(s) / sizeof(s[0]); i++) 
//    {
//        printf("%s %d\n", s[i].name, s[i].age); // ��ӡ�����Ľ��
//    }
//
//    
//
//    return 0;
//}

//#include <stdio.h>
//�������ʹ�����ж��Ƿ�Ҫ��λ�õ�
//int int_cmp(const void* p1, const void* p2)
//{
//    return (*(int*)p1 - *(int*)p2);
//}
//
//���������������Ԫ��λ�õ�
//void swap(void* p1, void* p2, int size)
//{
//    int i = 0;
//
//    for (i = 0; i < size; i++)
//    {
//        char tmp = *((char*)p1 + i);
//        *((char*)p1 + i) = *((char*)p2 + i);
//        *((char*)p2 + i) = tmp;
//    }
//}
//
//�������ģ��qsort����Ҫ��ʽ
//void bubble(void* base, int count, int size, int(*cmp)(const void*, const void*))
//{
//    int i = 0;
//    int j = 0; 
//
//    for (i = 0; i < count - 1; i++)
//    {
//        for (j = 0; j < count - i - 1; j++)
//        {
//            if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//            {
//                swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//                j*size����Ϊ��ȷ��Ԫ�ص����ͣ����Ե���������ʱ������ȷ���������Ϊ����
//            }
//        }
//    }
//}
//
//int main()
//{
//    int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//    char arr[] = {"aaaa","dddd","cccc","bbbb"};
//    int i = 0;
//    bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{  
//	//��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[0][0]));
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n", sizeof(a[0] + 1));
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(*(a + 1)));
//	printf("%d\n", sizeof(&a[0] + 1));
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a[3])); 
//	
//	return 0;
//} 

//#include <stdio.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//
//	return 0;
//}

//#include <stdio.h>
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[5][5];
//	int(*p)[4];//����ָ�� 
//	p = (int(*)[4])a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//
//	return 0;
//}

//0 0 0 0 0 
//0 0 0 0 0 
//0 0 0 0 0 
//0 0 0 0 0 
//0 0 0 0 0
//#include <stdio.h>
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };//ָ�����飬w a a
//	char** pa = a;//����ָ�룬�������ָ�����飨��Ԫ�أ��ĵ�ַ
//	pa++;
//	printf("%s\n", *pa);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//* *(cpp-2) + 3 ST
//	printf("%s\n", cpp[-1][-1] + 1);//*(*(cpp-1)-1)+1 EW
//
//	return 0;
//}
