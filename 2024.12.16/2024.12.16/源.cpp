//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char str[] = "";//���������ָ���ַ���
//    const char* sep = "-@.";//����Ƿָ��ַ����ķָ���
//    char* ret;//������������շ���ֵ��ָ��
//
//    for (ret = strtok(str, sep); ret != NULL; ret = strtok(NULL, sep))
//        //�����õ�for����ֻ��ʼ��һ�ε�����
//        //��Ϊstrtok������һ�β�Ϊ��ָ��NULL��ʱ�򣬻��Ƿָ�����λ�ò��������λ�õ�ָ��
//        //�ڶ���Ѱ��ʱ����ΪNULLʱ�����һ�α�ǵ�λ�ÿ�ʼѰ����һ���ָ���
//        //�������ַ���һֱ�зָ������ָ���֮���������ݵģ���һֱ����ȥ
//        //ֱ���ַ���ֹͣ����û�зָ������ַ��ؿ�ָ�룬Ȼ������ѭ��
//    {
//        printf("%s\n", ret);
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main() 
//{
//    FILE* fp = fopen("nonexistentfile.txt", "r");
//    if (fp == NULL) 
//    {
//        printf("Error: %s\n", strerror(errno));
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int dest[40] = { 0 };
//	unsigned int st = sizeof(arr);
//	memcpy(dest, arr, st);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int number = sizeof(arr) / sizeof(arr[0]);
//	int sz = sizeof(arr);
//	int dest[9];
//
//	memcpy(dest, arr, sz);
//	printf("%u", sz);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", dest[i]);
//	}
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    size_t sz = sizeof(arr) / sizeof(arr[0]); // ����arr��Ԫ�ص�����

    memcpy(arr + 5, arr, 2 * sizeof(arr[0]));
    //���1 2 3 4 5 1 2 8 9

    printf("%zu\n", sz); // ��ӡ�����е�Ԫ������

    for (int i = 0; i < (int)sz; i++) //�������������Ƿ��Ƴɹ�
    {
        printf("%d ", arr[i]);
    }

    return 0;
}