#include <stdio.h>

int main()
{
	////����
	//FILE* pf = fopen("test.txt", "w");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}

	////дһ������
	//fputs("123456fsfdfdf", pf);

	////�ر��ļ�
	//fclose(pf);
	//pf = NULL;
	 
	int c;
	FILE* fp = fopen("C:\\VS\\2024.12.25\\2024.12.25\\test.txt", "r");//��ָ���ļ���ֻ��
	if (fp == NULL) //����Ƿ�ɹ����ļ�
	{
		perror("fopen");
		return 1;
	}
	
	 //����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
	while ((c = fgetc(fp)) != EOF) //��ȡ�ļ�������ַ� ѭ��
	{
		putchar(c);//��ȡ�ַ�֮���ӡ
	}
	
	//�ж���ʲôԭ�������
	if (ferror(fp) != 0)//�ļ�����/�����������ferror���᷵��0
		puts("I/O error when reading");
	else if (feof(fp) != 0)//�ļ���ȡ�����ļ�����ĩβ��feof���ط�0ֵ
		puts("End of file reached successfully");

	///������ʵ�Ͱ����е����������ˣ�ֻ�����ֻ���������
	//�ļ�ĩβ��EOF����������ȡ���ļ���feof �᷵�ط�0����ʾ�ļ������Ѿ�ȫ����ȡ���
	//����/�������I/O Error�����ڶ�ȡ�����п��ܷ�������
	//�����ļ���ɾ�������̴����ļ�Ȩ������ȣ���ʱferror�᷵�ط���
	
	//�ر��ļ�
	fclose(fp);
	fp = NULL;

	return 0;
}

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
//	//дһ������
//	fputs("abcdef", pf);
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
//    char name[10];
//    int age;
//    float score;
//};
//
//int main()
//{
//    struct S s = { "zhangsan", 25, 50.5 };
//
//    //�Զ����Ƶ���ʽд���ļ���
//    FILE* pf = fopen("test.txt", "wb");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//
//    //�����Ƶķ�ʽ������ݵ��ı�
//    fwrite(&s, sizeof(struct S), 1, pf);
//
//    //�ر��ļ�
//    fclose(pf);
//    pf = NULL;
//
//    return 0;
//}