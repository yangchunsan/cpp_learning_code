//#include <stdio.h>
//int main()
//{
//	char arr[20] = "Hello World";
//	printf("%s", arr);
//	
//	return 0;
//}

#include <stdio.h>
enum 
{ 
	SIZE = 5 
};

int main()
{
	double a[SIZE] = { 1., 2., 3., 4., 5. };//创建一个数组
	
	FILE* fp = fopen("test.txt", "wb"); // 必须用二进制模式，只写
	if (fp == NULL) // 检查是否成功打开文件
	{
	    perror("fopen");
	    return 1;
	}
	
	//以二进制的形式写入文件中
	fwrite(a, sizeof(a), SIZE, fp); // 写 double 的数组
	//关闭文件
	fclose(fp);
	
	//输出到新的数组
	double b[SIZE];
	fp = fopen("test.txt", "rb"); //必须用二进制模式，只读
	size_t ret_code = fread(b, sizeof(b), SIZE, fp); // 读 double 的数组，并记录成功读取的元素数量
	
	//检查读取是否成功
	if (ret_code == SIZE)//如果成功读取的元素数量和数组大小一致，说明读取成功
	{
	    puts("Array read successfully, contents: ");
	    for (int n = 0; n < SIZE; ++n) //打印数组中的元素
		{
			printf("%f ", b[n]);
		}
	    putchar('\n');
	}
	else//不一样就说明出问题了，得判断是什么问题
	{
    	if (feof(fp))//如果为非零，说明达文件末尾而导致读取操作提前结束
       		printf("Error reading test.bin: unexpected end of file\n");
    	else if (ferror(fp))//返回非零值，说明是因为输入/输出错误而结束读取操作
    	{
        	perror("Error reading test.bin");
    	}
				
	}
	
	fclose(fp);
	fp = NULL;
	
	return 0;
}



//#include <stdio.h>
//
//struct S
//{
//    char name[10];
//    int age;
//    float score;
//};
//
//int main()
//{
//    //输入
//	struct S a = { "zhangsan", 25, 50.5 };
//
//    //以二进制的形式写入文件中
//    FILE* pf = fopen("test.txt", "wb");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//
//    //二进制的方式输出数据到文本
//    fwrite(&a, sizeof(struct S), 1, pf);
//
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//    
//    //读取
//    struct S b = {0};
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
	////输入
	//FILE* pf = fopen("test.txt", "w");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}

	////写一行数据
	//fputs("123456fsfdfdf", pf);

	////关闭文件
	//fclose(pf);
	//pf = NULL;
	 
//	int c;
//	FILE* fp = fopen("test.txt", "r");//打开指定文件，只读
//	if (fp == NULL) //检查是否成功打开文件
//	{
//		perror("fopen");
//		return 1;
//	}
//	
//	 //当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	while ((c = fgetc(fp)) != EOF) //读取文件的逐个字符 循环
//	{
//		putchar(c);//读取字符之后打印
//	}
//	
//	//判断是什么原因结束的
//	if (ferror(fp) != 0)//文件输入/输出发生错误，ferror不会返回0
//		puts("I/O error when reading");
//	else if (feof(fp) != 0)//文件读取到达文件流的末尾，feof返回非0值
//		puts("End of file reached successfully");
//
//	///这里其实就把所有的情况都解决了，只有两种互斥的情况：
//	//文件末尾（EOF）：正常读取完文件后，feof 会返回非0，表示文件内容已经全部读取完毕
//	//输入/输出错误（I/O Error）：在读取过程中可能发生错误
//	//例如文件被删除、磁盘错误、文件权限问题等，这时ferror会返回非零
//	
//	//关闭文件
//	fclose(fp);
//	fp = NULL;
//
//	return 0;
//}
