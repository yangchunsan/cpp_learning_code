//#include <stdio.h>
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);//����N������
//
//	int arr[N];
//	//��forѭ�������������N�����ֲ����δ�����������
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	//������ɾ����ָ��������
//	int delete = 0;
//	scanf("%d", &delete);
//	//����forѭ�����������ҵ��Ǹ����ֲ���Ϊ�ض�������777
//	for (int n = 0; n < N; n++)
//	{
//		if (delete == arr[n])
//		{
//			arr[n] = 777;
//		}
//	}
//
//	//���ɾ��ָ�����ֺ�ı���
//	for (int m = 0; m < N; m++)
//	{
//		if (arr[m] == 777)
//		{
//			continue;
//		}
//		else
//		{
//			printf("%d ", arr[m]);
//		}
//	}
//	
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);//����N������
//
//	int arr[N];
//	//��forѭ�������������N�����ֲ����δ�����������
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	//������ɾ����ָ��������
//	int delete = 0;
//	scanf("%d", &delete);
//	
//	//���ڴ���һ���µ�����
//	int arr_change[N];
//	
//	//Ȼ��ʼ��������
//	int n = 0;//n���������Ƹı��������
//	for (int j = 0;j < N; j++)//j����������ԭ�������
//	{	
//		if (delete == arr[j])//������ֱ������
//		{
//			continue;
//		}
//		
//		arr_change[n] = arr[j];
//		n++;
//	}
//	
//	//��δ�ӡ�µ������ڵ�Ԫ��
//	for (int m = 0; m < n; m++)
//	{
//		printf("%d ",arr_change[m]);
//	}
//	
//	return 0;
//}

#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	
	//����n�����ֲ����δ�����������
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	//����Ҫɾ����ֵ
	int del = 0;
	scanf("%d", &del);
	
	//
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != del)//�������ȣ���ôԭ�������µ����ݲ���
		{
			arr[j++] = arr[i];//����ߵ���һ�����ڸ�ֵ���֮��j�Ż��һ
			//���û�����ѭ������ôj��ֵ����䣬i��ֵ��һ�����൱���Զ��������Ǹ�Ҫɾ��������
		}
	}
	
	for (int i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
