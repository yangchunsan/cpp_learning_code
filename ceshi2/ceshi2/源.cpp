//#include <stdio.h>
//int main()
//{
//	//�趨�����ֵ
//	int input1 = 0;
//	int input2 = 0;
//	printf("����������������֮���ÿո�տ�����");
//	scanf_s("%d %d", &input1, &input2);
//	
//	//������׼���Ƚϵ����ˣ���Ҫ�õ�λ�����������Ʋ�����
//	int compare = 0;//���ڼ�¼��������λ���Ľ��
//	int standard = 1;//��compare���׼�Ƚ����1�ĸ���
//	int temperature = 0;//��ʱ������ֵ
//	int difference = 0;//���ڼ�¼1�ĸ���
//	int sz = sizeof(int) * 8;//�����ֽڣ�������������λ
//	
//	//��ʼ����
//	compare = input1 ^ input2;
//
//	for (int i = 0; i < sz; i++)
//	{
//		temperature = compare & standard;
//
//		if (temperature == 1)
//			difference++;
//
//		compare = compare >> 1;
//	}
//
//	printf("��ͬλ�ĸ�����%d", difference);
//
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
//    // �趨�����ֵ
//    int input1 = 0;
//    int input2 = 0;
//    printf("����������������֮���ÿո��������");
//    scanf_s("%d %d", &input1, &input2); // ���������Microsoft�������ϱ��룬Ӧ��ʹ��scanf
//
//    // ������׼���Ƚϵ����ˣ���Ҫ�õ�λ�����������Ʋ�����
//    int compare = 0; // ���ڼ�¼��������λ���Ľ��
//    int standard = 1; // ��standard��compare�Ƚ����1�ĸ���
//    int difference = 0; // ���ڼ�¼1�ĸ���
//    int sz = sizeof(int) * 8; // ����λ����������������λ
//
//    // ��ʼ����
//    compare = input1 ^ input2;
//
//    for (int i = 0; i < sz; i++)
//    {
//        if (compare & standard) // ֱ��ʹ��compare��standard���бȽ�
//            difference++;
//
//        standard = standard << 1; // ��standard����һλ���Ա�����һλ
//    }
//
//    printf("��ͬλ�ĸ�����%d", difference);
//
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	unsigned int input = 0;//��ʼ��
//	int num_1 = 0;//��¼1�ĸ���
//	
//	printf("������һ��������");
//	scanf_s("%d", &input);
//	
//	while (input)
//	{
//		if (input % 2 == 1)
//	    {
//			num_1++;
//		}
//	
//		    input /= 2;
//		}
//	
//	printf("�����Ƶ�1�ĸ����ǣ�%d", num_1);
//	
//	return 0;
//	}

//#include <stdio.h>
//int main()
//{
//	int input = 0;//��ʼ��
//	int a = 1;
//	//����ߣ�ԭ�뷴��Ͳ�����һ����
//	//0000-0000-0000-0000-0000-0000-0000-0001
//	int num_1 = 0;//���ڼ���1�ĸ���
//	int sz = sizeof(input);//���ͱ������ֽ�
//
//	printf("������һ��������");
//	scanf_s("%d", &input);
//
//	for (int i = 0; i < sz * 8; i++)
//	{
//		if ((input >> i) & a == 1)
//			num_1++;//c�����1��������һ
//	}
//
//	printf("�����Ƶ�1�ĸ����ǣ�%d", num_1);
//
//	return 0;
//}

//#include <stdio.h>
//
//int CountDigit(int number, int digit);
//
//int main()
//{
//    int number, digit;
//
//    scanf_s("%d %d", &number, &digit);
//    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
//
//    return 0;
//}
//
//int CountDigit(int number, int digit)
//{
//    int num = 0;
//    int input = 0;
//    
//    if (number < 0)
//    {
//        input = -number;
//    }
//    else if (number == 0 && digit == 0) 
//    {
//        // ���number��0������Ҫͳ�Ƶ�����Ҳ��0����ô����1����Ϊ0������һ��0��
//        return 1;
//    }
//    else
//    {
//        input = number;
//    }
//
//    while (input / 10 != 0 || input % 10 != 0)
//    {
//        int n = input % 10;
//        
//
//        if (n == digit)
//        {
//            num++;
//        }
//
//        input /= 10;
//    }
//
//    return num;
//}

//#include <stdio.h>
//int main()
//{
//	int input = 0;//��ʼ��
//	int num_1 = 0;//���ڼ���1�ĸ���
//
//	printf("������һ��������");
//	scanf_s("%d", &input);
//
//	while (input != 0)
//	{
//		input = input & (input - 1);
//		num_1++;
//	}
//
//	printf("�����Ƶ�1�ĸ����ǣ�%d", num_1);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m, n;
//	int difference = 0;
//	int sz = sizeof(int);
//	int result = 0;
//	scanf_s("%d %d", &m, &n);
//
//	result = m ^ n;
//
//	while (result != 0)
//	{
//		result = result & (result - 1);
//		difference++;
//	}
//
//	printf("%d", difference);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	int standard = 1;//���
//	int temperature = 0;//��ʱ������
//	scanf_s("%d", &input);
//	int arr_single[16] = {0};//�������λ������
//	int arr_double[16] = {0};//���ż��λ������
//
//	for (int i = 0; i < 32; i++)
//	{
//		temperature = input & standard;
//
//		if (i % 2 == 0)//˵��������λ
//		{
//			if (temperature == 1)
//			{
//				arr_single[i / 2] = 1;
//			}
//			else
//			{
//				arr_single[i / 2] = 0;
//			}
//		}
//		else
//		{
//			if (temperature == 1)
//			{
//				arr_double[i / 2] = 1;
//			}
//			else 
//			{
//				arr_double[i / 2] = 0;
//			}
//		}
//
//		input = input >> 1;
//	}
//
//	for (int i = 0; i < 16; i++)
//	{
//		printf("%d", arr_single[i]);
//	}
//	printf("\n");
//
//	for (int i = 0; i < 16; i++)
//	{
//		printf("%d", arr_double[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf_s("%d", &num);
//	// i = 32 �Ƿ���λӴ
//	//��ȡ����λ������
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//��ȡż��λ������
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == j)
//			{
//				printf("*");
//			}
//			else if (i + j == n - 1)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(const char* str)//����constʵ�ַ�ָֹ��������۸�
//{
//	int count = 0;//�����ַ�����
//	assert(str);//�������ö��ԣ���ָֹ��str�ǿ�ָ��
//	while (*str != '\0')
//	{
//		count++;
//		str++;//��ַ������ʵ���ַ�������ȡ
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[10001] = {0};
//
//	gets_s(arr);
//	int left = 0;
//	int right = strlen(arr) - 1;
//
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//
//	return 0;
//}    

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf_s("%d %d", &num, &count);
//
//	int sum = 0;
//	int i = 0;
//	int tmp = 0;
//
//	for (i = 0; i < count; i++)
//	{
//		tmp += num * pow(10, i);
//		sum += tmp;
//	}
//
//	printf("%d", sum);
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>//�����ݻ᷽��һ��
//
//void distinguish_print(int i, int bit)
//{
//	����forѭ��ȡ��ÿһλ������
//	int input = i;
//	int arr[5] = {0};//�����������δ����ɸߵ���λ��������
//	int j = 0;
//	for (j = bit - 1; j >= 0; j--)
//	{
//		arr[j] = i % 10;
//		i = i / 10;
//
//		if (i / 10 == 0)
//		{
//			break;
//		}
//	}
//
//	double sum = 0;
//	for (j = 0; j < bit; j++)
//	{
//		sum += pow(arr[j], bit);
//	}
//
//	if (input == sum)
//	{
//		printf("%d  ", i);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int bit = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		if (i > 99 && i < 1000)//��λ��
//		{
//			bit = 3;
//			distinguish_print(i, bit);
//		}
//		else if (i > 999 && i < 10000)//��λ��
//		{
//			bit = 4;
//			distinguish_print(i, bit);
//		}
//		else if (i > 9999 && i < 100000)//��λ��
//		{
//			bit = 5;
//			distinguish_print(i, bit);
//		}
//		else
//			continue;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input = 0;//ָ�����ϰ벿��
//	scanf_s("%d", &input);
//
//	int i = 0;
//	for (i = 0; i < input; i++)//��������
//	{
//		int j = 0;
//		for (j = 0; j < input - i - 1; j++)//���ƿո�
//		{
//			printf(" ");
//		}
//
//		for (j = 0; j < 1 + 2 * i; j++)//�����ַ�
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	int down = input - 1;
//	for (i = 0; i < down; i++)//��������
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)//���ƿո�
//		{
//			printf(" ");
//		}
//
//		for (j = 0; j < (down - i) * 2 - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}