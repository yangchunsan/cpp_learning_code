//#include <stdio.h>
//#include <math.h>//�����ݻ᷽��һ��
//
//void distinguish_print(int i, int bit)
//{
//	//����forѭ��ȡ��ÿһλ������
//	int input = i;
//	int arr[bit];//�����������δ����ɵ͵���λ��������
//	int j = 0;
//	for (j = 0; j < bit; j++)
//	{
//		arr[j] = i % 10;
//
//		if (i / 10 == 0)
//		{
//			break;
//		}
//		i = i / 10;
//	}
//
//	int sum = 0;
//	for (j = 0; j < bit; j++)
//	{
//		sum += (int)pow(arr[j], bit);
//	}
//
//	if (input == sum)
//	{
//		printf("%d  ", input);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int bit = 0;
//	
//	for (i = 1; i <= 100000; i++)
//	{
//		int tmp = i;
//		while (tmp / 10 != 0) 
//		{
//			bit++;
//			tmp /= 10;
//		}
//		
//		distinguish_print(i, bit);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>//�����ݻ᷽��һ��
//
//void distinguish_print(int i, int bit)
//{
//	//����forѭ��ȡ��ÿһλ������
//	int input = i;
//	int arr[bit];//�����������δ����ɵ͵���λ��������
//	int j = 0;
//	for (j = 0; j < bit; j++)
//	{
//		arr[j] = i % 10;
//
//		if (i / 10 == 0)
//		{
//			break;
//		}
//		i = i / 10;
//	}
//
//	int sum = 0;
//	for (j = 0; j < bit; j++)
//	{
//		sum += (int)pow(arr[j], bit);
//	}
//
//	if (input == sum)
//	{
//		printf("%d  ", input);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int bit = 0;
//	
//	for (i = 1; i <= 100000; i++)
//	{
//		if (i > 99 && i < 1000)//��λ��
//		{
//			bit = 3;
//			distinguish_print(i, bit);
//		}
//		else if (i > 999 && i < 10000)//��λ��
//		{
//			bit = 4;
//			distinguish_print(i, bit);
//		}
//		else if (i > 9999 && i < 100000)//��λ��
//		{
//			bit = 5;
//			distinguish_print(i, bit);
//		}
//		else
//			continue;
//	}
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "";//���������ָ���ַ���
    const char* sep = "-@.";//����Ƿָ��ַ����ķָ���
    char* ret;//������������շ���ֵ��ָ��

    for (ret = strtok(str, sep); ret != NULL; ret = strtok(NULL, sep))
//�����õ�for����ֻ��ʼ��һ�ε�����
//��Ϊstrtok������һ�β�Ϊ��ָ��NULL��ʱ�򣬻��Ƿָ�����λ�ò��������λ�õ�ָ��
//�ڶ���Ѱ��ʱ����ΪNULLʱ�����һ�α�ǵ�λ�ÿ�ʼѰ����һ���ָ���
//�������ַ���һֱ�зָ������ָ���֮���������ݵģ���һֱ����ȥ
//ֱ���ַ���ֹͣ����û�зָ������ַ��ؿ�ָ�룬Ȼ������ѭ��
    {
        printf("%s\n", ret);
    }

    return 0;
}
