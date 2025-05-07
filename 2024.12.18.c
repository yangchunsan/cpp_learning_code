//#include <stdio.h>
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c",killer);
//		}
//	}
//
//	return 0;
//
//}

//#include <stdio.h>
//#include <string.h>
////这是一个实现字符左旋的函数
//void left_retote(char* str, int n)
//{
//	int len = 0;
//	len = strlen(str);//计算字符串的长度
//	n %= len;//防止越界，有效左旋
//	
//	//总体的思路是这样的，有点像递归
//	//无论拿多少个的字符左旋，都是从第一个字符开始，然后放到字符串的最后面
//	//因此要多少个字符左旋，只需要循环多少次就好了
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		char tmp;
//		tmp = str[0];//临时储存第一个字符
//		
//		for (j = 0; j < len - 1; j++)//将后面的字符串整体向前移动一个下标
//		{
//			str[j] = str[j + 1];
//		}
//		
//		str[len- 1] = tmp;//将原本是最后的字符换成第一个字符
//	}
//	
//}
//
//int main()
//{
//	char str[] = "";//用一个数字储存字符串
//	scanf("%s", str);
//	
//	int n = 0;//输入要左旋的字符的个数
//	scanf("%d", &n);
//	
//	left_retote(str, n);
//	
//	printf("%s", str);
//	
//	return 0;
//} 
//
//#include <stdio.h>
//#include <string.h>
//void left_retote(char* left, char* right)
//{
//	while (left <right)
//	{
//		char tmp;
//		tmp= *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	char str[] = "";//用一个数组储存字符串
//	scanf("%s", str);
//	
//	int len;
//	len = strlen(str);
//		
//	int n = 0;//输入要左旋的字符的个数
//	scanf("%d", &n);
//	n %= len; 
//	
//	left_retote(str, str + n - 1);
//	left_retote(str + n, str + len - 1);
//	left_retote(str, str + len - 1);
//	
//	printf("%s", str);
//	
//	return 0;	
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
////
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[10] = "";
//	scanf("%s", arr);
//	
//	int k = 0;
//	scanf("%d", &k);//2
//	
//	int len = strlen(arr);
//	k %= len;
//	//这个程序的思路是将左旋的字符串和没左旋的字符串分成两部分
//	//然后分别逆序
//	//再整体逆序
//	reverse(arr, arr+k-1);
//	reverse(arr+k, arr+len-1);
//    reverse(arr, arr + len-1);
//	
//	printf("%s\n", arr);
//
//	return 0;
//}




























