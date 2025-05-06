//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//
//	while (scanf("%c", &ch) == 1)//scanf()读取数据成功返回值是一
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c", ch - 32);
//		}
//		else
//		{
//			printf("%c", ch + 32);
//		}
//	
//		getchar();//用来吃掉换行符\n
//	}
//
//	return 0;
//}
////高级一点，利用ctype.h库函数
//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//	char ch = 0;
//
//	while (scanf("%c", &ch) == 1)//scanf()读取数据成功返回值是一
//	{
//		if (islower(ch))//判断是不是小写字母
//		{
//			printf("%c", toupper(ch));//转换为大写字母
//		}
//		else if (isupper(ch))//判断是不是大写字母
//		{
//		    printf("%c", tolower(ch));
//		}
//	
//		getchar();//用来吃掉换行符\n
//	}
//
//	return 0;
//}
