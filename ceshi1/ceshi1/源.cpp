//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	printf("����������ӵ�е�Ǯ����Ŀ��");
//	scanf_s("%d", &money);
//
//	int bottle = 0;
//	int price = 1;
//	int leave = 0;
//	bottle = money / price;
//	leave = bottle;
//	while (leave >= 2)
//	{
//		bottle += leave / 2;
//		leave = leave / 2 + leave % 2;
//	}
//	printf("����������Ի���%dƿ����ˮ", bottle);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() 
//{
//    int A = 0;
//    int B = 0;
//    printf("������������������");
//    scanf("%d %d", &A, &B); // ��ȡ��������
//
//    int max = 0;
//    int min = 0;
//    max = A > B ? A : B; // ȷ���ϴ���
//    min = A < B ? A : B; // ȷ����С��
//    int rest = 1;
//
//    do 
//    {
//        rest = max % min; // ��������
//        max = min; // ���½ϴ���
//        min = rest; // ���½�С��
//    } while (rest != 0); // ѭ��ֱ������Ϊ0
//
//    int lcm = A * B / min; // ������С������
//
//    printf("%d �� %d ����С�������ǣ�%d\n", A, B, lcm); // ������
//
//    return 0;
//}
//ŷ������㷨��շת�������
//��������������a��b������a��b
//��������������a����b������r��
//������ֵ����a��ֵ����Ϊb��
//��b��ֵ����Ϊr��
//�ظ����裺�ظ�����2��3��ֱ������rΪ0��
//��������������rΪ0ʱ����ǰ��bֵ��Ϊ���Լ����
// 
//�ȼ��������������Լ����GCD��
//Ȼ���������ĳ˻��������ǵ����Լ�����õ���С������

//#include <stdio.h>
//#include <string.h>
//
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;//*������������ֵ���ݶ���������ֵ��ַ��
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[101] = { 0 };
//	//����
//	gets_s(arr);
//	//����
//	int len = strlen(arr);
//	//1.���������ַ���
//	reverse(arr, arr + len - 1);//left������Ԫ�صĵĵ�ַ��len - 1���ַ����ĳ��ȣ�������\n��,�������ĩԪ�صĵ�ַ
//	//2.����ÿ������
//	char* start = arr;//start�ǵ��򵥴ʵ�����ĸ
//
//	while (*start)//'\0'��ASCIIֵΪ0�����Ϊ0�Ļ�˵��start֮��û�е����ˣ�ѭ��ֹͣ
//	{
//		char* end = start;//end��ָÿһ�����򵥴ʵ�ĩ��ĸ
//
//		while (*end != ' ' && *end != '\0')//���ѭ������end�ƶ��ҵ����򵥴ʵ�����ĸ
//		{
//			end++;
//		}
//
//		reverse(start, end - 1);//ΪʲôҪ��һ����Ϊ��ʱ���ĵĵ�ַ��ָ��ո���߻��з���
//		
//		if (*end != '\0')//�������end��������֮��Ŀո�ȥ���¸�����start�����
//			end++;
//		
//		start = end;//�����ҵ�start�����֮���ֿ������¿�ʼѭ��
//	}
//
//	//���
//	printf("%s", arr);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr1[20];
//    int arr2[20];
//    int arr3[20];
//    int i = 0;
//    int k = 0;
//    for (i = 0; i < 20; i++)
//    {
//        arr1[i] = 0;
//    }
//    for (i = 0; i < 20; i++)
//    {
//        arr2[i] = 0;
//    }
//    for (i = 0; i < 20; i++)
//    {
//        arr3[i] = 0;
//    }
//
//    for (i = 0; i < 20; i++)
//    {
//        scanf_s("%d", &arr1[i]);
//    }
//    for (i = 0; i < 20; i++)
//    {
//        scanf_s("%d", &arr2[i]);
//    }
//
//    for (i = 0; i < 20; i++)
//    {
//        for (int j = 0; j < 20; j++)
//        {
//            if (arr1[i] != arr2[j])
//            {
//                arr3[k] = arr1[i];
//                k++;
//            }
//            else
//                continue;
//        }
//    }
//
//    for (i = 0; i <= k; i++)
//    {
//        printf("%d", arr3[i]);
//        if (i < k)
//            printf(" ");
//    }
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    //�������
//    int n = 0;
//    int arr[6][6];
//    scanf_s("%d", &n);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf_s("%d", &arr[i][j]);
//        }
//    }
//
//    //Ѱ�Ұ���
//    //Ϊ�˷�ֹ���ֵ�ظ�����ȷ��˼·Ӧ������Ĭ�����Ƚ�
//    //��Ĭ�ϴ��˸���Ĭ�ϣ��������ж��ǲ��ǰ��㣬�����������
//    //��������Ч�ʻ��һЩ
//    int judge = 1;//�������Ƚϵ�ֵ��1�����а��㣬0����û��
//    int row = 0;//��
//    int line = 0;//��
//    int maxindex = 0;//ÿһ������ֵ���±�
//    int minindex = 0;//ÿһ������ֵ���±�
//
//    //Ĭ��ÿ�е�һ�����ÿ�е�һ����С
//    for (row = 0; row < n; row++)//�еı���
//    {
//        //ȷ��ÿ�е����Ԫ��ֵ
//        for (line = 0; line < n - 1; line++)
//        {
//            int maxrow = arr[row][0];//Ĭ��ÿһ�еĵ�һ�����
//            if (arr[row][line] > maxrow)
//            {
//                maxrow = arr[row][line];
//                maxindex = line;
//            }
//            else//����������Ȳ��ϣ���ô�����ֿ��ܣ���һ���ǵ�һ���������ģ��ڶ������и���һ����һ�����
//                //����Ҫ���а�����ж�
//            {
//                maxindex = 0;
//            }
//
//            //֮��������ʼ�ж�
//            int minline = arr[0][maxindex];
//            while ()
//            {
//
//            }
//
//        }
//    }
//    //�жϰ����Ƿ����
//    if (judge)
//    {
//        printf("%d %d", maxindex, minindex);
//    }
//    else
//    {
//        printf("NONE");
//    }
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
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
//		scanf_s("%d", arr + i);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		while (left < right && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if (p1 == p2)
//		printf("p1 == p2\n");
//	else
//		printf("p1 != p2\n");
//
//	if (arr1 == arr2)
//		printf("arr1 == arr2\n");
//	else
//		printf("arr1 != arr2\n");
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//	//����������Ԫ�صĵ�ַ
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//			// printf("%d ", parr[i][j]);
//			//�����parr[i]�͵ȼ�����������������Ԫ�صĵ�ַ����[j]�͵ȼ��������±�
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

#include <stdio.h>
void print1(int arr[3][5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}

		printf("\n");
	}
}

void print2(int (*p)[5], int r, int c)//��ά������������ǵ�һ��һά����ĵ�ַ��������ָ��������
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
			//p�ǵ�0�е�һά�����ַ�� p + i ����ָ��0 + i��һά�����ַ
			//�������ַ�ı��ʾ�����Ԫ�صĵ�ַ
			//��ô+ j�Ĳ���������һά��������ı�����
			//printf("%d ", p[i][j]);
		}

		printf("\n");
	}
}

//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int arr[10];
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//
//	int* parr[10] = { pa,pb,pc };
//	//parr���Ǵ��ָ����������飬��ָ������
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(parr[i]));
//	}
//	//���forѭ�����԰�˳���ӡabc��ֵ
//
//	return 0;
//}