//#include <stdio.h>
//int main()
//{
//	char arr[] = {};
//	scanf("%5s", arr);
//	printf("%s", arr);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//   	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", arr + i);
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch;
//	scanf(" %c", &ch);
//	printf("%c", ch);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		printf("%05d ", arr[i]);
//	}
//
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	printf("%d", a);
//
//	return 0;
//}

//#include <stdio.h>
//#define OFFSETOF(type, m_name) (size_t)&(((type*)NULL)->m_name)
//
//struct S
//{
//	char ch1;
//	int i;
//	char ch2;
//};
//
//int main()
//{
//	struct S s;
//	struct S* s2 = NULL;
//	printf("%d", sizeof(s2));
//	printf("%d\n", OFFSETOF(struct S, ch1));
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, ch2));
//
//	return 0;
//}

//#include <stdio.h>
//
//struct S
//{
//	char ch1;
//	int i;
//	char ch2;
//};
//
//int main()
//{
//	struct S s;
//	unsigned int a = (size_t)(&(s.ch1));
//	unsigned int b = (size_t)(&(s.i));
//	unsigned int c = (size_t)(&(s.ch2));
//	printf("%u %u %u", a, b, c);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//#if 1
//	printf("hehe\n");
//#endif
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//#if 0
//	printf("hehe\n");
//#endif
//
//	return 0;
//}

//#include <stdio.h>
//#define __DEBUG__ 1
//
//int main()
//{
//#if __DEBUG__
//	printf("hehe\n");
//#endif //__DEBUG__
//
//	return 0;
//}
//
//#include <stdio.h>
//#define M 3
//int main()
//{
//#if M<5
//	printf("hehe");
//#elif M==5
//	printf("haha");
//#else 
//	printf("heihie");
//#endif
//
//	return 0;
//}

//#include <stdio.h>
//#define M 100
//int main()
//{
//#if defined(M)
//	printf("hehe");
//#endif
//
//	return 0;
//}

//#include <stdio.h>
//#define N 0
//#define M 5
//int main()
//{
//#if defined(M)
//	#if M < 5
//	printf("hehe");
//	#endif
//	
//	#if M > 5
//		printf("haha");
//	#endif
//#elif defined(N)
//	#if M == 0
//		printf("hoho");
//	#endif
//#endif
//
//	return 0;
//}

//#ifdef __TEST_H__
//#define __TEST_H__
//#include <stdio.h>
//#endif

//#include <stdio.h>
//int main()
//{
//	printf("%d", sizeof(NULL));
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int N = 0;
//	int i = 0;
//	int j = 0;
//
//	while (scanf("%d", &N) == 1)
//	{
//		for (i = 0; i < N; i++)//上半部分的行数
//		{
//			for (j = 2 * (N - i); j > 0; j--)//上半部分的空格
//			{
//				printf(" ");
//			}
//
//			for (j = 0; j <= i; j++)//上半部分的*
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//
//		for (i = 0; i < N + 1; i++)//中间的*
//		{
//			printf("*");
//		}
//		printf("\n");
//
//		for (i = 0; i < N; i++)//下半部分的行数
//		{
//			for (j = 0; j < 2 * (i + 1); j++)//下半部分的空格
//			{
//				printf(" ");
//			}
//
//			for (j = N - i; j > 0; j--)//下半部分的*
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//
//
//	return 0;
//}


//#include <stdio.h>
// 插入排序函数，排列的顺序是从左到右依次变大
//void insertionSort(float arr[], int length)
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 1; i < length; i++)
//	{
//		int key = arr[i];
//		j = i - 1;
//
//		while (j >= 0 && arr[j] > key)
//		{
//			arr[j + 1] = arr[j];//相互交换一下位置
//			j = j - 1;//要比较的元素往前走
//		}
//		arr[j + 1] = key;
//	}
//}
//int main()
//{
//	int length = 7;
//	float arr[length];
//	int i = 0;
//	for (i = 0; i < length; i++)
//	{
//		scanf(" %f", &arr[i]);
//	}
//
//	insertionSort(arr, length);
//
//	float sum = 0;
//	for (i = 1; i < length - 1; i++)
//	{
//		sum += arr[i];
//	}
//	printf("%0.2f\n", sum / 5);
//
//	return 0;
//}

#include <stdio.h>

// 插入排序函数，排列的顺序是从左到右依次变大
void insertionSort(float arr[], int length)
{
    int i, j;

    for (i = 1; i < length; i++)
    {
        float key = arr[i];
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
    int length = 7; // 数据数量固定为7
    float arr[7];
    int i, count;

    while (1)
    {
        count = 0; // 记录输入的数量
        for (i = 0; i < length; i++)
        {
            if (scanf("%f", &arr[i]) != 1) // 检查输入是否为数字
            {
                return 0;
            }
            count++;
        }

        if (count != length) // 如果输入数量不足7个，退出程序
        {
            return 0;
        }

        insertionSort(arr, length); // 对数组进行排序

        float sum = 0;
        for (i = 1; i < length - 1; i++) // 跳过第一个和最后一个元素
        {
            sum += arr[i];
        }
        printf("%0.2f\n", sum / 5); // 输出平均值
    }

    return 0;
}