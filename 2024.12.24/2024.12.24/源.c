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
//	//���ļ�
//
//	//�ر��ļ�
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
//	//���ļ�
//
//	//�ر��ļ�
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
//	//д�ļ�
//	char ch;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	//�ر��ļ�
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
//	//дһ������
//	fputs("hello bit", pf);
//
//	//�ر��ļ�
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
//	//��һ������
//	char arr[20];
//	fgets(arr, 5, pf);
//	printf("%s", arr);
//
//	//�ر��ļ�
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
//	//��ӡ��д��һ������
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//
//	//�ر��ļ�
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
//	//���루����һ������
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//
//	//�ر��ļ�
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
//	//��һ������
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
