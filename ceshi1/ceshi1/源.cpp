//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	printf("请输入你所拥有的钱的数目：");
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
//	printf("你可以最多可以换到%d瓶的汽水", bottle);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() 
//{
//    int A = 0;
//    int B = 0;
//    printf("请输入两个正整数：");
//    scanf("%d %d", &A, &B); // 读取两个整数
//
//    int max = 0;
//    int min = 0;
//    max = A > B ? A : B; // 确定较大数
//    min = A < B ? A : B; // 确定较小数
//    int rest = 1;
//
//    do 
//    {
//        rest = max % min; // 计算余数
//        max = min; // 更新较大数
//        min = rest; // 更新较小数
//    } while (rest != 0); // 循环直到余数为0
//
//    int lcm = A * B / min; // 计算最小公倍数
//
//    printf("%d 和 %d 的最小公倍数是：%d\n", A, B, lcm); // 输出结果
//
//    return 0;
//}
//欧几里得算法（辗转相除法）
//输入两个正整数a和b，其中a≥b
//计算余数：计算a除以b的余数r。
//更新数值：将a的值更新为b，
//将b的值更新为r。
//重复步骤：重复步骤2和3，直到余数r为0。
//输出结果：当余数r为0时，当前的b值即为最大公约数。
// 
//先计算两个数的最大公约数（GCD）
//然后用两数的乘积除以它们的最大公约数来得到最小公倍数

//#include <stdio.h>
//#include <string.h>
//
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;//*解引用是来赋值数据而不是来赋值地址的
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[101] = { 0 };
//	//输入
//	gets_s(arr);
//	//逆置
//	int len = strlen(arr);
//	//1.逆序整个字符串
//	reverse(arr, arr + len - 1);//left就是首元素的的地址，len - 1是字符串的长度（不包括\n）,这个就是末元素的地址
//	//2.逆序每个单词
//	char* start = arr;//start是倒序单词的首字母
//
//	while (*start)//'\0'的ASCII值为0，如果为0的话说明start之后没有单词了，循环停止
//	{
//		char* end = start;//end是指每一个倒序单词的末字母
//
//		while (*end != ' ' && *end != '\0')//这个循环是让end移动找到倒序单词的首字母
//		{
//			end++;
//		}
//
//		reverse(start, end - 1);//为什么要减一？因为此时摁的的地址是指向空格或者换行符的
//		
//		if (*end != '\0')//这个是让end跳过单词之间的空格去找下个单词start的起点
//			end++;
//		
//		start = end;//这里找到start的起点之后，又可以重新开始循环
//	}
//
//	//输出
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
//    //输入过程
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
//    //寻找鞍点
//    //为了防止最大值重复，正确的思路应该是与默认作比较
//    //比默认大了更改默认，并立即判断是不是鞍点，以免造成误判
//    //但是这样效率会低一些
//    int judge = 1;//用来做比较的值，1代表有鞍点，0代表没有
//    int row = 0;//行
//    int line = 0;//列
//    int maxindex = 0;//每一行最大的值的下标
//    int minindex = 0;//每一列最大的值的下标
//
//    //默认每行第一个最大，每列第一个最小
//    for (row = 0; row < n; row++)//行的遍历
//    {
//        //确定每行的最大元素值
//        for (line = 0; line < n - 1; line++)
//        {
//            int maxrow = arr[row][0];//默认每一行的第一个最大
//            if (arr[row][line] > maxrow)
//            {
//                maxrow = arr[row][line];
//                maxindex = line;
//            }
//            else//如果其他都比不上，那么有两种可能：第一种是第一个就是最大的；第二种是有跟第一个是一样大的
//                //都需要进行鞍点的判断
//            {
//                maxindex = 0;
//            }
//
//            //之后立即开始判断
//            int minline = arr[0][maxindex];
//            while ()
//            {
//
//            }
//
//        }
//    }
//    //判断鞍点是否存在
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
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
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
//	//数组名是首元素的地址
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//			// printf("%d ", parr[i][j]);
//			//这里的parr[i]就等价于数组名（代表首元素的地址），[j]就等价于数组下标
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

void print2(int (*p)[5], int r, int c)//二维数组的数组名是第一行一维数组的地址，用数组指针来接收
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
			//p是第0行的一维数组地址， p + i 就是指第0 + i行一维数组地址
			//而数组地址的本质就是首元素的地址
			//那么+ j的操作就是在一维数组里面的遍历了
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
//	//parr就是存放指针变量的数组，即指针数组
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(parr[i]));
//	}
//	//这个for循环可以按顺序打印abc的值
//
//	return 0;
//}