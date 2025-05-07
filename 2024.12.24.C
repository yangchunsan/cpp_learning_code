//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
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


//
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
//	struct S s = {};
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
////	printf("%s %d %f", s.name, s.age, s.score);
//	fprintf(stdout, "%s %d %f\n", s.name, s.age,s.score);
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
//	//打印（写入文件）一行数据
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	printf("%s %d %f\n", s.name, s.age, s.score);
//	fprintf(stdout, "%s %d %f", s.name, s.age, s.score);
//	
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
//	//以二进制的形式写入文件中
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//二进制的方式输出数据到文本
//	fwrite(&s, sizeof(struct S), 1, pf);
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
//	//以二进制的形式输入到结构体中
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//二进制的方式输入到结构体中
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f", s.name, s.age, s.score);
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
//	struct S tmp = {0};
//	char buf[100] = {0};
//	//把s中的格式化数据转化成字符串放到buf中
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
//	
//	//"zhangsan 25 50.500000"
//	printf("字符串：%s\n", buf);
//	
//	//从字符串buf中获取一个格式化的数据到tmp中
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("格式化：%s %d %f", tmp.name, tmp.age, tmp.score);
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
//	int ch = fgetc(pf);
//	printf("%c", ch);
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
//	//读文本
//	//定位文件指针
//	fseek(pf, 2, SEEK_SET);
//	int ch = fgetc(pf);//c
//	printf("%c\n", ch);
//	printf("%d\n", ftell(pf));//3
//	
//	fseek(pf, -1, SEEK_END);
//	ch = fgetc(pf);//f
//	printf("%c\n", ch);
//	printf("%d\n", ftell(pf));//6
//	
//	//指针位置重置
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	char arr[20] = "Hello World";
	printf("%s", arr);
	
	return 0;
}




















































































