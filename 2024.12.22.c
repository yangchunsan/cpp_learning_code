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
//#include <stdlib.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	//��̬�ڴ濪��
//	int* p = (int*)calloc(10, sizeof(int));//Ҫǿ������ת������������ʹ�С
//	//һ��Ҫ���realloc�����ķ���ֵ���ж��Ƿ��ǿ�ָ��
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	int i = 0;
//	//��ӡ�����Է��ֻ��Զ���ʼ��Ϊ0
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
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
//#include <stdlib.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(40);//Ҫǿ������ת������������ʹ�С
//	//һ��Ҫ���malloc�����ķ���ֵ���ж��Ƿ��ǿ�ָ��
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	int i = 0;
//	//ʹ��
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	
//	//����
//	int* ptr = (int*)realloc(p, 80);//ǿ������ת��
//	//�������������
//	//p = (int*)realloc(p, 80);
//	//������ԣ���
//	//ʵ������ȫ�����ԣ�����
//	//��򵥵�һ�����������ʧ������ô�죿���ص��ǿ�ָ��NULL����ԭ���ڴ�ĵ�ַ���Ͷ�����
//	//�����ִ�����һ���µ�ָ�����*ptr������һ�㱣�գ�������ǿ�ָ���ٸ�ֵ
//	
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//ʹ��
//	for (i = 0; i < 20; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//��ӡ
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", *(p + i));
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
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	//��̬�ڴ濪��
//	int* p = (int*)calloc(10, sizeof(int));//Ҫǿ������ת������������ʹ�С
//	//һ��Ҫ���realloc�����ķ���ֵ���ж��Ƿ��ǿ�ָ��
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	int i = 0;
//	//��ӡ�����Է��ֻ��Զ���ʼ��Ϊ0
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
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
//#include <stdlib.h>
//
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//	//Ȼ���p�����ã��ҵ�����ָ�����str���ڴ�
//	//�����ٵĶ�̬�ڴ�ռ�洢������
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	//�����˼·�ǣ���Ȼ���βε��޸��޷�Ӱ�쵽ʵ�Σ���ֱ�ӶԴ���ʵ�ε��ڴ��е����ݽ����޸�
//	//�������ｫָ�����str�ĵ�ַ�����βζ���ָ��p
//	strcpy(str, "hello world");
//	printf(str);
//	
//	free(str);
//	str = NULL;
//	//���ﲻҪ�����ͷŶ�̬�ڴ棬�����Ұָ��
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* GetMemory()
{
	char* p;
	p = (char*)malloc(100);
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	//�����˼·�ǣ���ʹ���βε��޸Ĳ���Ӱ��ʵ�Σ��ں������й�һ��֮���β�Ҳ�ᱻ����
	//���Ƕ�̬���ٵĿռ�ȴ������ʧ��ֻҪ��ָ����鶯̬���ٵ��ڴ�ĵ�ַ����ʵ�ξͿ��Ա����ڴ�й¶��
	strcpy(str, "hello world");
	printf(str);
	
	free(str);
	str = NULL;
	//���ﲻҪ�����ͷŶ�̬�ڴ棬�����Ұָ��
}

int main()
{
	Test();

	return 0;
}





























































