/*#include <stdio.h>
void jisuan(int a, int b)
{
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
}

int main()
{
	int n, m;
	scanf_s("%d %d", &n, &m);
	jisuan(n, m);

	return 0;
}*/

/*#include <stdio.h>
#define STANDARD 50.0
#define COST1 0.53
#define COST2 0.58

int main()
{
	float kwh, cost;
	scanf_s("%f", &kwh);
	
	if (kwh <= 0)
		printf("Invalid Value!");
	else if (kwh > 0.0 && kwh <= STANDARD)
	{
		cost = kwh * COST1;
		printf("cost = %0.2f", cost);

	}
	else if (kwh > STANDARD)
	{
		cost = COST1 * STANDARD + (kwh - STANDARD) * COST2;
		printf("cost = %0.2f", cost);
	}

	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int a = 152;
	
	int j;
	j = a / 100;//����������İ�λ�ϵ�����

	int k;
	k = a % 10;//����ȡģ�������λ������

	int n;
	n = a % 100;//����ȡģ�����52

	int m;
	m = n / 10;//�������ʮλ

	printf("152 = %d + %d*10 + %d*100", k, m, j);

	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int F;
	scanf_s("%d", &F);

	int C = 5 * (F - 32) / 9;

	printf("%d", C);

	return 0;
}*/

/*#include <stdio.h>
int factorial(int n) //����һ���׳˳��������n�ǽ׳����ָ���
{
	int res = 1;
	for (int i = 1; i < n + 1; i++)//n + 1����Ϊ����������Ҳ�׳�
		res *= i;//res��������ÿ��ѭ�����������ֵ
	return res;
}

int main()
{
	int n;
	scanf_s("%d", &n);

	//�������ÿ��ѭ����ӡ
	int result = 1;
	for (int i = 1; i < n + 1; i++)//n + 1����Ϊ����������Ҳ�׳�
	{
		result *= i;//res��������ÿ��ѭ�����������ֵ
		printf("%d!=%d\n", i, result);//ÿ��ѭ������ӡһ�ν��
	}

	//������Խ׳˵����
	int res = 0;
	for (int i = 1; i < n + 1; i++)
	{
		res += factorial(i);
	}

	printf("1!+2!+��+%d!=%d", n, res);
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);

	int j;
	j = a / 100;//����������İ�λ�ϵ�����

	int k;
	k = a % 10;//����ȡģ�������λ������

	int n;
	n = a % 100;//����ȡģ�����52

	int m;
	m = n / 10;//�������ʮλ
	
	if (a < 100 || a > 999)
	{
		printf("������󣬲���һ����λ��");

		return 0;
	}

	if (a == j * j * j + m * m * m + k * k * k)
		printf("������ˮ�ɻ���");
	else
		printf("��������ˮ�ɻ���");

	return 0;
}*/

/*#include <stdio.h>
double factorial(int n)
{
	int res = 1;
	
	for (int i = 1; i < n +1; i++)
	{
		res *= i;
	}
	return res;
}

int main()
{
	int m, n;
	scanf_s("%d %d", &m, &n);
	int res = 0;
	int res1 = factorial(n);
	int res2 = factorial(m) * factorial(n - m);
	res = res1 / res2;
	printf("result = %d", res);

	return 0;
}*/

//#include <stdio.h>
//int main()
//{
//	int n;//n������
//	int m = 1;
//	scanf_s("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = n;j > i; j--)
//		{
//			printf("%4d", m);
//			m++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	unsigned int num = 0;
//	struct Node n;
//	Node n2;
//	
//	return 0;
//}

//#include <stdio.h>
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//}
//
//int main()
//{
//	int i = 0;
//
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}
	
//#include <stdio.h>
//
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//
//	if (1 == n % 2)
//	{
//		printf("������һ������");
//	}
//	else
//	{
//		printf("������һ��ż��");
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//
//	while (n++ < 100)
//	{
//		if (n % 2 == 1)
//		{
//			printf("%d\n", n);
//		}
//	}
//	return 0;
//}

//

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//
//	do
//	{
//		i++;
//		printf("%d\n", i);
//		//i++;
//	} 
//	while (i <= 5);
//	
//	return 0;
//}aa

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;//��������Ҫ�ҵ�����
//	int i = 0;//�����������
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������е����ָ�������������Ĵ�С���ڵ�һ��Ԫ�صĴ�С��
//
//	for (i = 0; i < sz; i++)//Ҫ��������ĳ�����֣�ֱ�Ӱ��������鶼����һ�鲻���ҳ�������
//	{
//		if (arr[i] == k) 
//		{
//			printf("�ҵ��ˣ��±���%d", i);
//			break;
//		}
//	}
//
//	if (i == sz)
//		printf("�Ҳ�����������");
//	
//	return 0;
//}//�÷������ԣ���Ч��̫����������

//�ǸĽ�һ�£����ö��ֲ���
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;//��������Ҫ�ҵ�����
//	int i = 0;//����������ţ���0��ʼ
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������е����ָ�������������Ĵ�С���ڵ�һ��Ԫ�صĴ�С��
//	int left = 0;//��һ�����ֵ�������
//	int right = sz - 1;//���һ�����ֵ�������
//
//	while (left <= right)
//	{
//		/*int mid = (left + right) / 2;*/
//		int mid = (right - left) / 2 + left;
//		
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] = k)
//		{
//			printf("�ҵ������±��ǣ�%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>//�����strlen��ͷ�ļ�
//#include <Windows.h>//�����ϵͳ�Դ��Ŀ�,��system��Sleep��ͷ�ļ�
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//
//	int sz = strlen(arr1);//�ַ������ַ��ĸ���
//	int left = 0;//�ַ���������ߵ��±�
//	int right = sz - 1;//�ַ��������ұߵ��±�
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(1000);//���������ٶ�һǧ����
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//�����������ַ�����Ϊabcdef
//		
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", &password);//���鱾����ǵ�ַ������Ҫ�õ�ָ��
//
//		if (strcmp(password, "abcdef") == 0)//�ַ����ıȽ��ǲ�����==�Ƚϵ�Ӵ����Ҫ�õ�һ���⺯����strcmp��������ֵΪ0����ʾ�ַ������
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������");
//		}
//	}
//
//	if (i == 3)
//	{
//		printf("�����������������˳�����");
//	}
//
//	return 0;
//}


	/*#include <stdio.h>
	void change(int *px, int *py)
	{
		int z = 0;

		z = *px;
		*px = *py;
		*py = z;
	}

	int main()
	{
		int a = 0;
		int b = 0;
		scanf_s("%d %d", &a, &b);
		change(&a, &b);
		printf("%d %d", a, b);

		return 0;
	}*/

//#include <stdio.h>
//void primer_number(int n)
//{
//	int j = 0;
//	
//	if (n == 2)
//		printf("������");
//	else
//	{
//		for (j = 2; j <= (n - 1); j++)
//		{
//			if (n % j == 0)
//			{
//				printf("������");
//				break;
//			}
//		}
//
//		printf("��������");
////	}
////}
//#include <stdio.h>
//#include <math.h>
//int primer_number(int n)
//{
//	int i = 0;
//	
//	for (i = 2; i <= (n - 1); i++)
//	{
//		int j = n % i;
//
//		if (j == 0)
//		{
//			return 0;
//		}
//		return 1;
//	}
//}
//
//int main()
//{
//	int input = 0;
//	printf("�������������֣�");
//	scanf_s("%d", &input);
//	if (primer_number(input) == 1)
//		printf("������");
//	else
//		printf("��������");
//
//	return 0;
//}
//

//#include <stdio.h>
//
//int binary_search(int arr[], int k, int sz)//�ҵ��ˣ������±ꣻ�Ҳ�������-1
//{
//	int left = 0;
//	int right = sz - 1;
//	
//
//	while (left <= right)
//	{
//		int mid = (right - left) / 2 + left;
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//�ҵ��˷���mid
//		}
//	}
//
//	return -1;//�Ҳ��������
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//
//
//	if (ret == -1)
//		printf("û�ҵ�");
//	else
//		printf("�ҵ��ˣ��±��ǣ�%d", ret);
//
//	return 0;
//}

//#include <stdio.h>
//void new_line()
//{
//	printf("hehe");
//}
//
//void three_line()
//{
//	int i = 0;
//	
//	for (i = 0; i <= 3; i++)
//	{
//		new_line();
//	}
//}
//
//int main()
//{
//	three_line();
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	//����ͽ���ʽ����
//	printf("%d", strlen("abcdef"));
//	
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}

//#include <stdio.h>
//#include "add.h"
//
//;int main()
//{
//	int n = ADD(5, 9);
//	printf("%d", n);
//
//	return 0;
//}

//#include <stdio.h>
//void print(unsigned int num)//��Ϊ����Ǵ�ӡ�����ģ��Ͳ����Ƿ���ֵ��
//{
//	if (num > 9)//ȷ������λ�����ܽ�ȥ���������ֱ�Ӵ�ӡ��
//	{
//		print(num / 10);
//	}
//	printf("%d  ", num % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%u", &num);
//	
//	print(num);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr1 [] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	
//	printf("��ӡ����ÿ��Ԫ�صĵ�ַ\n");//��ӡ����ÿ��Ԫ�صĵ�ַ
//	for (i = 0; i <= 9; i++)
//	{
//		printf("arr1[%d] = %p\n", i, &arr1[i]);
//	}
//
//	return 0;
//}


//1 2 3 4
//2 3 4 5
//3 4 5 6

//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;//������  0 1 2
//	
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;//������   0 1 2 3
//
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j , &arr[i][j]);
//		}
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int factorial(int n)//����һ���׳˳��������n�ǽ׳����ָ���
//{
//	int res = 1;
//	for (int i = 1; i < n + 1; i++)//n + 1����Ϊ����������Ҳ�׳�
//	{
//		res *= i;//res��������ÿ��ѭ�����������ֵ
//	}
//	return res;
//}
//
//
////������Խ׳˵����
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//
//	int res = 0;
//
//	for (int i = 1; i < n + 1; i++)//n + 1����Ϊ����������Ҳ�׳�
//	{
//		res += factorial(i);//res��������ÿ��ѭ�����������ֵ
//	}
//
//	printf("1!+2!+��+%d!=%d", n, res);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	for (i = 0; i < 3; i++)//0 1 2
//	{
//		int j = 0;
//
//		for (j = 0; j < 5; j++)// 0 1 2 3 4
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 9,8,7,6,5,4,3,2,1 };
//	int arr2[10] = {};
//	int i = 0;
//	int j = 0;
//
//	for (i = 8, j = 0;j <= 8; i--, j++)
//	{
//		arr2[j] = arr1[i];
//		printf("arr2[%d] = %d\n", j, arr2[j]);
//	}
//
//	return 0;
//}


//

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	printf("%p\n", arr);//���������Ԫ�صĵ�ַ
//	printf("%p\n", arr + 1);
//	printf("--------------------\n");
//	printf("%p\n", &arr[0]);//����Ҳ����Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0] + 1);
//	printf("--------------------\n");
//	printf("%p\n", &arr);//������������ĵ�ַ
//	printf("%p\n", &arr + 1);
//
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
//	for (i = 0; i <= sz - 1; i++)//ע���������±��������е�Ԫ��
//	{
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr1[5] = { 1,3,5,7,9 };
//	int arr2[5] = { 2,4,6,8,0 };
//	int change[5] = { 0 };
//
//	for (int i = 0; i < 5; i++)
//	{
//		change[i] = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = change[i];
//
//		printf("arr1[%d] = %d\n", i ,arr1[i]);
//		printf("arr2[%d] = %d\n", i, arr2[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
////��ʼ������ȫΪ0
//void init(int arr[], int sz)
//{
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	for (int i = 0; i <= (sz - 1); i++)
//	{
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int change = arr[left];
//		arr[left] = arr[right];
//		arr[right] = change;
//
//		left++;
//		right--;
//	}
//
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	print(arr, sz);
//	
//	reverse(arr, sz);
//
//	print(arr, sz);
//
//	init(arr, sz);
//	
//	print(arr, sz);
//
//	return 0;
//}

//int main()
//{
//	int arr[1] = {1};
//	arr[0] = 0;
//	printf("%d\n", arr[0]);
//	arr[0] = '0';
//	printf("%d", arr[0]);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = -7;
//	int b = a >> 1;
//
//	printf("a = %d\n", a);
//	printf("b = %d", b);
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	
//	printf("����ǰ��a = %d; b = %d\n", a, b);
//	//��һ�ְ취�����üӼ���
//	//a = a + b;
//	//b = a - b;//����b = 3�� a = 8
//	//a = a - b;
//
//	//�ڶ��ְ취������λ������
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a = %d; b = %d\n", a, b);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	int a = 1;
//	int num_1 = 0;
//	int sz = sizeof(input);
//
//	printf("������һ��������");
//	printf("\n");
//	scanf_s("%d", &input);
//	
//	for (int i = 0; i < sz * 4; i++)
//	{
//		int c = 0;
//		c = input & a;
//
//		if (c == 1)
//			num_1++;
//
//		input = input >> 1;
//	}
//
//	printf("�����Ƶ�1�ĸ����ǣ�%d", num_1++);
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	//a���ڴ��еı�ʾ��ʽ�ǣ�
//	//0000-0000-0000-0000-0000-0000-0000-0000 - ����
//	//1111-1111-1111-1111-1111-1111-1111-1111 - > ~a - ����
//	//1111-1111-1111-1111-1111-1111-1111-1110 - ����
//	//1000-0000-0000-0000-0000-0000-0000-0001 - ԭ�� - > ~a = -1
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 29;
//	
//	a &= (~(1 << 4));
//	printf("%d", a);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	printf("%zu", sizeof(p));
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = a && b;
//	printf("%d", c);
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 3; 
//	int b = 0;
//	int c = a || b;
//	printf("%d", c);
//
//	return 0;
//}

//

//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//
//	i = a++ || ++b || d++;
//	printf(" i = %d\n a = %d\n b = %d\n c = %d\n d = %d\n", i, a, b, c, d);
//
//	return 0;
//}
////1 2 2 3 4

////��Ƹ��ҳ����ֵ�ĳ���
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	
//	scanf_s("%d %d", &a, &b);
//	int max = (a > b ? a : b);
//	printf("max = %d", max);
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a = ;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("%d", c);

	return 0;
}