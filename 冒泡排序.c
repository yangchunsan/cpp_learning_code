//#include <stdio.h>
//void bubble_sort(int arr[],int sz)//这就是冒泡排序，[]里面可填，也可以随便填，因为用不到
//{
//	int i = 0;
//
//	for (i = 0; i < sz - 1; i++)//sz - 1是趟数
//	{
//		//一趟
//		for (int j = 0; j < sz - 1 - i; j++)//为什么这里是sz - 1 - i?最开始的数字要跑8次，但第二个数字只要跑7次，以此类推
//		{                                   //这里每次循环i会加一，刚好满足要求
//			int change = 0;//作为中间变量
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
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//一共十个元素
//	int sz = sizeof(arr) / sizeof(arr[0]);//确定数组元素个数
//	bubble_sort(arr, sz);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)//注意是利用下标找数组中的元素
//	{
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
////这个函数的功能是将数组里面的数从小到大重新排列
//void range_arr(int arr[], int n)
//{
//	for (int i = 0; i < n - 1; i++)//外层for循环是控制让数组内所有的元素都有移动的机会
//	{                              //并且当n - 1 个元素的位置都确定了，最后一个元素的位置也确定了
//		for (int j = 0; j < n - 1 - i; j++)//内层for循环是控制每个元素到达指定位置至多移动的次数
//		{                                  //每当一个元素确定了位置，其他未确定位置的元素需要移动的次数就减一（可以利用i来达到目的）
//			int change = 0;//作为中间变量
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
//	//输入n个成绩
//	int n = 0;
//	scanf("%d", &n);
//	
//	//接下来利用数组储存各个成绩
//	int arr[n];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	range_arr(arr, n);//这个函数的功能是将数组里面的数从小到大重新排列
//	int difference = 0;
//	difference = arr[n - 1] - arr[0];
//	printf("%d", difference);
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    //输入n个成绩
//	int n = 0;
//	scanf("%d", &n);
//	
//	int max = 0;
//	int min = 100;
//	
//	int arr[n];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	
//	int difference = 0;
//	difference = max - min;
//	printf("%d", difference);
//	
//	return 0;
//}

//#include <stdio.h>
////这个函数的功能是将数组里面的数从小到大重新排列
//void range_arr(int arr[], int n)
//{
//	for (int i = 0; i < n - 1; i++)//外层for循环是控制让数组内所有的元素都有移动的机会
//	{                              //并且当n - 1 个元素的位置都确定了，最后一个元素的位置也确定了
//		for (int j = 0; j < n - 1 - i; j++)//内层for循环是控制每个元素到达指定位置至多移动的次数
//		{                                  //每当一个元素确定了位置，其他未确定位置的元素需要移动的次数就减一（可以利用i来达到目的）
//			int change = 0;//作为中间变量
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
//	//输入n个成绩
//	int n = 0;
//	scanf("%d", &n);
//	
//	//接下来利用数组储存各个成绩
//	int arr[n];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	range_arr(arr, n);//这个函数的功能是将数组里面的数从小到大重新排列
//	int difference = 0;
//	difference = arr[n - 1] - arr[0];
//	printf("%d", difference);
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    //输入n个成绩
//	int n = 0;
//	scanf("%d", &n);
//	
//	//接下来利用数组储存各个成绩
//	int arr[n];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	//下面找出最大值
//	int max = arr[0];
//	for (int i = 0;i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	
//	//下面找出最小值
//	int min = arr[0];
//	for (int i = 0;i < n; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	
//	int difference = 0;
//	difference = max - min;
//	printf("%d", difference);
//	
//	return 0;
//}
