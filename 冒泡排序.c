//#include <stdio.h>
//void bubble_sort(int arr[],int sz)//�����ð������[]������Ҳ����������Ϊ�ò���
//{
//	int i = 0;
//
//	for (i = 0; i < sz - 1; i++)//sz - 1������
//	{
//		//һ��
//		for (int j = 0; j < sz - 1 - i; j++)//Ϊʲô������sz - 1 - i?�ʼ������Ҫ��8�Σ����ڶ�������ֻҪ��7�Σ��Դ�����
//		{                                   //����ÿ��ѭ��i���һ���պ�����Ҫ��
//			int change = 0;//��Ϊ�м����
//			if (arr[j] > arr[j + 1])
//			{
//				change = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = change;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//һ��ʮ��Ԫ��
//	int sz = sizeof(arr) / sizeof(arr[0]);//ȷ������Ԫ�ظ���
//	bubble_sort(arr, sz);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)//ע���������±��������е�Ԫ��
//	{
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
////��������Ĺ����ǽ��������������С������������
//void range_arr(int arr[], int n)
//{
//	for (int i = 0; i < n - 1; i++)//���forѭ���ǿ��������������е�Ԫ�ض����ƶ��Ļ���
//	{                              //���ҵ�n - 1 ��Ԫ�ص�λ�ö�ȷ���ˣ����һ��Ԫ�ص�λ��Ҳȷ����
//		for (int j = 0; j < n - 1 - i; j++)//�ڲ�forѭ���ǿ���ÿ��Ԫ�ص���ָ��λ�������ƶ��Ĵ���
//		{                                  //ÿ��һ��Ԫ��ȷ����λ�ã�����δȷ��λ�õ�Ԫ����Ҫ�ƶ��Ĵ����ͼ�һ����������i���ﵽĿ�ģ�
//			int change = 0;//��Ϊ�м����
//			if (arr[j] > arr[j + 1])
//			{
//				change = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = change;
//			}
//		}
//	}                               
//}
//
//int main()
//{
//	//����n���ɼ�
//	int n = 0;
//	scanf("%d", &n);
//	
//	//�������������鴢������ɼ�
//	int arr[n];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	range_arr(arr, n);//��������Ĺ����ǽ��������������С������������
//	int difference = 0;
//	difference = arr[n - 1] - arr[0];
//	printf("%d", difference);
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    //����n���ɼ�
//	int n = 0;
//	scanf("%d", &n);
//	
//	int max = 0;
//	int min = 100;
//	
//	int arr[n];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	
//	int difference = 0;
//	difference = max - min;
//	printf("%d", difference);
//	
//	return 0;
//}

//#include <stdio.h>
////��������Ĺ����ǽ��������������С������������
//void range_arr(int arr[], int n)
//{
//	for (int i = 0; i < n - 1; i++)//���forѭ���ǿ��������������е�Ԫ�ض����ƶ��Ļ���
//	{                              //���ҵ�n - 1 ��Ԫ�ص�λ�ö�ȷ���ˣ����һ��Ԫ�ص�λ��Ҳȷ����
//		for (int j = 0; j < n - 1 - i; j++)//�ڲ�forѭ���ǿ���ÿ��Ԫ�ص���ָ��λ�������ƶ��Ĵ���
//		{                                  //ÿ��һ��Ԫ��ȷ����λ�ã�����δȷ��λ�õ�Ԫ����Ҫ�ƶ��Ĵ����ͼ�һ����������i���ﵽĿ�ģ�
//			int change = 0;//��Ϊ�м����
//			if (arr[j] > arr[j + 1])
//			{
//				change = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = change;
//			}
//		}
//	}                               
//}
//
//int main()
//{
//	//����n���ɼ�
//	int n = 0;
//	scanf("%d", &n);
//	
//	//�������������鴢������ɼ�
//	int arr[n];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	range_arr(arr, n);//��������Ĺ����ǽ��������������С������������
//	int difference = 0;
//	difference = arr[n - 1] - arr[0];
//	printf("%d", difference);
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    //����n���ɼ�
//	int n = 0;
//	scanf("%d", &n);
//	
//	//�������������鴢������ɼ�
//	int arr[n];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	//�����ҳ����ֵ
//	int max = arr[0];
//	for (int i = 0;i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	
//	//�����ҳ���Сֵ
//	int min = arr[0];
//	for (int i = 0;i < n; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	
//	int difference = 0;
//	difference = max - min;
//	printf("%d", difference);
//	
//	return 0;
//}
