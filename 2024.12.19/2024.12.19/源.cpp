//#include <stdio.h>
//int find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//	while (x <= r - 1 && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;//找不到
//}
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct Point find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//	struct Point p = { -1, -1 };
//	while (x <= r - 1 && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			p.x = x;
//			p.y = y;
//			return p;
//		}
//	}
//	return p;//找不到
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf_s("%d", &k);
//	struct Point ret = find_num(arr, 3, 3, k);
//	printf("%d %d\n", ret.x, ret.y);
//	return 0;
//}

//#include <stdio.h>
//int find_num(int arr[3][3], int* px, int* py, int n)
//{
//	int x = 0;
//	int y = *py - 1;
//
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (n < arr[x][y])
//		{
//			y--;
//		}
//		else if (n > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int n = 0;
//	scanf_s("%d", &n);
//	int a = 3;
//	int b = 3;
//
//	int ret = find_num(arr, &a, &b, n);
//	if (ret == 1)
//	{
//		printf("%d %d", a, b);
//	}
//	else
//	{
//		printf("Not Find");
//	}
//
//	return 0;
//}
// 1 2 3
// 4 5 6
// 7 8 9 
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char dest[50] = "Hello, xxxxxxxxx";
//    const char* src = "World!";
//    strncat_s(dest, src, 3); // 将 "World!" 的前 3 个字符 "Wor" 连接到 "Hello, " 后面
//    printf("Resulting string: %s\n", dest); // 输出 "Hello, Wor"
//    return 0;
//}

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
//	char arr2[20] = "cdefab";
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