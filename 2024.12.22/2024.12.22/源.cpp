//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(40);//Ҫǿ������ת��
//	//һ��Ҫ���malloc�����ķ���ֵ���ж��Ƿ��ǿ�ָ��
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//
//	//�ͷ��ڴ�
//	free(p);
//	//�ͷſռ�֮��ָ�봢����δ������ڴ�ĵ�ַ�����Ƿǳ�Σ�յ���Ϊ
//	p = NULL;
//
//	//û��free
//	//������˵�ڴ�ռ�Ͳ�������
//	//�������˳���ʱ��ϵͳ���Զ������ڴ�ռ�
//	//���ǲ�����Ϊ����Ͳ�ʹ��free����
//	//����һ���ǳ�Σ�յ���Ϊ
//
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//#include <stdlib.h>

//int main()
//{
//	int* p = (int*)malloc(40);
//	//���pΪ��ָ�룬�ͻ��������
//	/*if (p == NULL)
//	{
//		return 1;
//	}
//	*p = 20;*/
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	//��ʽ
//	int i = 0;
//	//��̬���ٵĿռ�ֻ�ܴ��10������Ԫ��
//	//����Խ������ˣ����ʵ���ʮһ��Ԫ����
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//�ͷ�
//	//�����p����ָ��̬�ڴ����ʼλ��
//	//�����ͷ�ʧ��
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	//�м�д��һЩ����
//	free(p);
//	p = NULL;
//	//Ȼ���м���д��һЩ����
//	free(p);
//	p = NULL;
//	//����Զ�̬������ڴ������ͷ�
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
//int* test()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return p;
//	}
//	�м�д��һЩ����
//	return p;
//}
//
//int main()
//{
//	int* ret = test();
//	Ȼ��������ͷ���һ�鶯̬�ڴ�ռ�Ĵ�����
//
//	return 0;
//}
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}