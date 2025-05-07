//#include <stdio.h>
//#include <errno.h>
//
//int main()
//{
//	FILE* pf = fopen("C:\\VS\\test.txt", "r");
//	if (pf == NULL)
//	{
//		perror(pf);
//		return 1;
//	}
//	//.....
//	//读文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//.....
//	//读文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	char ch;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "a");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写一行数据
//	fputs("hello bit", pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读一行数据
//	char arr[20];
//	fgets(arr, 5, pf);
//	printf("%s", arr);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//
//struct S
//{
//	char name[10];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "zhangsan", 25, 50.5 };
//	
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//打印（写）一行数据
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//
//struct S
//{
//	char name[10];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = {0};
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//输入（读）一行数据
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读一个数据
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
