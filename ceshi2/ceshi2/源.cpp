//#include <stdio.h>
//int main()
//{
//	//设定输入的值
//	int input1 = 0;
//	int input2 = 0;
//	printf("请输入两个整数（之间用空格空开）：");
//	scanf_s("%d %d", &input1, &input2);
//	
//	//接下来准备比较的事宜，需要用到位操作符和右移操作符
//	int compare = 0;//用于记录两个数按位异否的结果
//	int standard = 1;//用compare与标准比较算出1的个数
//	int temperature = 0;//暂时储存数值
//	int difference = 0;//用于记录1的个数
//	int sz = sizeof(int) * 8;//计算字节，方便计算二进制位
//	
//	//开始操作
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
//	printf("不同位的个数：%d", difference);
//
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
//    // 设定输入的值
//    int input1 = 0;
//    int input2 = 0;
//    printf("请输入两个整数（之间用空格隔开）：");
//    scanf_s("%d %d", &input1, &input2); // 如果不是在Microsoft编译器上编译，应该使用scanf
//
//    // 接下来准备比较的事宜，需要用到位操作符和右移操作符
//    int compare = 0; // 用于记录两个数按位异或的结果
//    int standard = 1; // 用standard与compare比较算出1的个数
//    int difference = 0; // 用于记录1的个数
//    int sz = sizeof(int) * 8; // 计算位数，方便计算二进制位
//
//    // 开始操作
//    compare = input1 ^ input2;
//
//    for (int i = 0; i < sz; i++)
//    {
//        if (compare & standard) // 直接使用compare与standard进行比较
//            difference++;
//
//        standard = standard << 1; // 将standard左移一位，以便检查下一位
//    }
//
//    printf("不同位的个数：%d", difference);
//
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	unsigned int input = 0;//初始化
//	int num_1 = 0;//记录1的个数
//	
//	printf("请输入一个整数：");
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
//	printf("二进制的1的个数是：%d", num_1);
//	
//	return 0;
//	}

//#include <stdio.h>
//int main()
//{
//	int input = 0;//初始化
//	int a = 1;
//	//当标尺，原码反码和补码是一样的
//	//0000-0000-0000-0000-0000-0000-0000-0001
//	int num_1 = 0;//用于计数1的个数
//	int sz = sizeof(input);//整型变量四字节
//
//	printf("请输入一个整数：");
//	scanf_s("%d", &input);
//
//	for (int i = 0; i < sz * 8; i++)
//	{
//		if ((input >> i) & a == 1)
//			num_1++;//c如果是1，个数加一
//	}
//
//	printf("二进制的1的个数是：%d", num_1);
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
//        // 如果number是0，并且要统计的数字也是0，那么返回1（因为0本身算一个0）
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
//	int input = 0;//初始化
//	int num_1 = 0;//用于计数1的个数
//
//	printf("请输入一个整数：");
//	scanf_s("%d", &input);
//
//	while (input != 0)
//	{
//		input = input & (input - 1);
//		num_1++;
//	}
//
//	printf("二进制的1的个数是：%d", num_1);
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
//	int standard = 1;//标尺
//	int temperature = 0;//暂时的数据
//	scanf_s("%d", &input);
//	int arr_single[16] = {0};//存放奇数位的数组
//	int arr_double[16] = {0};//存放偶数位的数组
//
//	for (int i = 0; i < 32; i++)
//	{
//		temperature = input & standard;
//
//		if (i % 2 == 0)//说明是奇数位
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
//	// i = 32 是符号位哟
//	//获取奇数位的数字
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//获取偶数位的数字
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
//int my_strlen(const char* str)//利用const实现防止指针变量被篡改
//{
//	int count = 0;//计算字符个数
//	assert(str);//这里利用断言，防止指针str是空指针
//	while (*str != '\0')
//	{
//		count++;
//		str++;//地址的自增实现字符的向后读取
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
//#include <math.h>//计算幂会方便一点
//
//void distinguish_print(int i, int bit)
//{
//	利用for循环取出每一位的数字
//	int input = i;
//	int arr[5] = {0};//利用数组依次储存由高到低位数的数字
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
//		if (i > 99 && i < 1000)//三位数
//		{
//			bit = 3;
//			distinguish_print(i, bit);
//		}
//		else if (i > 999 && i < 10000)//四位数
//		{
//			bit = 4;
//			distinguish_print(i, bit);
//		}
//		else if (i > 9999 && i < 100000)//五位数
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
//	int input = 0;//指的是上半部分
//	scanf_s("%d", &input);
//
//	int i = 0;
//	for (i = 0; i < input; i++)//控制上行
//	{
//		int j = 0;
//		for (j = 0; j < input - i - 1; j++)//控制空格
//		{
//			printf(" ");
//		}
//
//		for (j = 0; j < 1 + 2 * i; j++)//控制字符
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	int down = input - 1;
//	for (i = 0; i < down; i++)//控制下行
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)//控制空格
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