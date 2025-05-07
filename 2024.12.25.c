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
	double a[SIZE] = { 1., 2., 3., 4., 5. };//����һ������
	
	FILE* fp = fopen("test.txt", "wb"); // �����ö�����ģʽ��ֻд
	if (fp == NULL) // ����Ƿ�ɹ����ļ�
	{
	    perror("fopen");
	    return 1;
	}
	
	//�Զ����Ƶ���ʽд���ļ���
	fwrite(a, sizeof(a), SIZE, fp); // д double ������
	//�ر��ļ�
	fclose(fp);
	
	//������µ�����
	double b[SIZE];
	fp = fopen("test.txt", "rb"); //�����ö�����ģʽ��ֻ��
	size_t ret_code = fread(b, sizeof(b), SIZE, fp); // �� double �����飬����¼�ɹ���ȡ��Ԫ������
	
	//����ȡ�Ƿ�ɹ�
	if (ret_code == SIZE)//����ɹ���ȡ��Ԫ�������������Сһ�£�˵����ȡ�ɹ�
	{
	    puts("Array read successfully, contents: ");
	    for (int n = 0; n < SIZE; ++n) //��ӡ�����е�Ԫ��
		{
			printf("%f ", b[n]);
		}
	    putchar('\n');
	}
	else//��һ����˵���������ˣ����ж���ʲô����
	{
    	if (feof(fp))//���Ϊ���㣬˵�����ļ�ĩβ�����¶�ȡ������ǰ����
       		printf("Error reading test.bin: unexpected end of file\n");
    	else if (ferror(fp))//���ط���ֵ��˵������Ϊ����/��������������ȡ����
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
//    //����
//	struct S a = { "zhangsan", 25, 50.5 };
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
//    fwrite(&a, sizeof(struct S), 1, pf);
//
//    //�ر��ļ�
//    fclose(pf);
//    pf = NULL;
//    
//    //��ȡ
//    struct S b = {0};
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
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
	 
//	int c;
//	FILE* fp = fopen("test.txt", "r");//��ָ���ļ���ֻ��
//	if (fp == NULL) //����Ƿ�ɹ����ļ�
//	{
//		perror("fopen");
//		return 1;
//	}
//	
//	 //����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//	while ((c = fgetc(fp)) != EOF) //��ȡ�ļ�������ַ� ѭ��
//	{
//		putchar(c);//��ȡ�ַ�֮���ӡ
//	}
//	
//	//�ж���ʲôԭ�������
//	if (ferror(fp) != 0)//�ļ�����/�����������ferror���᷵��0
//		puts("I/O error when reading");
//	else if (feof(fp) != 0)//�ļ���ȡ�����ļ�����ĩβ��feof���ط�0ֵ
//		puts("End of file reached successfully");
//
//	///������ʵ�Ͱ����е����������ˣ�ֻ�����ֻ���������
//	//�ļ�ĩβ��EOF����������ȡ���ļ���feof �᷵�ط�0����ʾ�ļ������Ѿ�ȫ����ȡ���
//	//����/�������I/O Error�����ڶ�ȡ�����п��ܷ�������
//	//�����ļ���ɾ�������̴����ļ�Ȩ������ȣ���ʱferror�᷵�ط���
//	
//	//�ر��ļ�
//	fclose(fp);
//	fp = NULL;
//
//	return 0;
//}
