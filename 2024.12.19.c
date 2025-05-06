//#include <stdio.h>
//#include <string.h>
//int is_left_retote(char* arr1, char* arr2)
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	
//	strncat(arr1, arr1, len1);
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//	
//}
//
//
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[20] = "cdefb";
//
//	int ret = is_left_retote(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Find");
//	}
//	else
//	{
//		printf("None");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//输入行和列
//	int n = 0;
//	int m = 0;
//	printf("输入：");
//	scanf("%d %d", &n, &m);
//	int arr[n][m];
//	
//	//初始化数组
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			arr[i][j] = 0;
//		}
//	}
//	
//	//输入数组内容
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	
//	printf("输出：\n");
//	for (j = 0; j < m; j++)
//	{
//		for (i = 0; i < n; i++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		
//		printf("\n");
//	}
//	
//	return 0;
//}

#include <stdio.h>

int main()
{
	//输入n行n列
	int n = 0;
	scanf("%d", &n);
	
	//创建数组并初始化
	int arr[n][n];
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n ; j++)
		{
			arr[i][j] = 0;
		}
	}
	
	//输入数组数据
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n ; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
			
	int flag = 1;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
			{
				flag = 0;
			}
		}
	}
	
	if (flag == 1)
	{
		printf("Yes");
	}
	else 
	{
		printf("No");
	}
	
	return 0;
	
}
	
	






















