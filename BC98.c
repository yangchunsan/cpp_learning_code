//#include <stdio.h>
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);//输入N个数字
//
//	int arr[N];
//	//用for循环来接受输入的N个数字并依次储存在数组中
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	//输入想删除的指定的数字
//	int delete = 0;
//	scanf("%d", &delete);
//	//利用for循环遍历数组找到那个数字并改为特定的数字777
//	for (int n = 0; n < N; n++)
//	{
//		if (delete == arr[n])
//		{
//			arr[n] = 777;
//		}
//	}
//
//	//输出删除指定数字后的变量
//	for (int m = 0; m < N; m++)
//	{
//		if (arr[m] == 777)
//		{
//			continue;
//		}
//		else
//		{
//			printf("%d ", arr[m]);
//		}
//	}
//	
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);//输入N个数字
//
//	int arr[N];
//	//用for循环来接受输入的N个数字并依次储存在数组中
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	//输入想删除的指定的数字
//	int delete = 0;
//	scanf("%d", &delete);
//	
//	//现在创建一个新的数组
//	int arr_change[N];
//	
//	//然后开始储存数据
//	int n = 0;//n是用来控制改变后的数组的
//	for (int j = 0;j < N; j++)//j是用来控制原来数组的
//	{	
//		if (delete == arr[j])//如果相等直接跳过
//		{
//			continue;
//		}
//		
//		arr_change[n] = arr[j];
//		n++;
//	}
//	
//	//逐次打印新的数组内的元素
//	for (int m = 0; m < n; m++)
//	{
//		printf("%d ",arr_change[m]);
//	}
//	
//	return 0;
//}

#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	
	//接收n个数字并依次储存在数组中
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	//接受要删除的值
	int del = 0;
	scanf("%d", &del);
	
	//
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != del)//如果不相等，那么原数组标号下的数据不变
		{
			arr[j++] = arr[i];//如果走到这一步，在赋值完成之后j才会加一
			//如果没进这个循环，那么j的值不会变，i的值加一，就相当于自动跳过了那个要删除的数据
		}
	}
	
	for (int i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
