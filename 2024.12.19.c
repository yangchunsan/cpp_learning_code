//#include <stdio.h>
//#include <string.h>
//int is_left_retote(char* arr1, char* arr2)
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	
//	strncat(arr1, arr1, len1);
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//	
//}
//
//
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[20] = "cdefb";
//
//	int ret = is_left_retote(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Find");
//	}
//	else
//	{
//		printf("None");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//�����к���
//	int n = 0;
//	int m = 0;
//	printf("���룺");
//	scanf("%d %d", &n, &m);
//	int arr[n][m];
//	
//	//��ʼ������
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			arr[i][j] = 0;
//		}
//	}
//	
//	//������������
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	
//	printf("�����\n");
//	for (j = 0; j < m; j++)
//	{
//		for (i = 0; i < n; i++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		
//		printf("\n");
//	}
//	
//	return 0;
//}

#include <stdio.h>

int main()
{
	//����n��n��
	int n = 0;
	scanf("%d", &n);
	
	//�������鲢��ʼ��
	int arr[n][n];
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n ; j++)
		{
			arr[i][j] = 0;
		}
	}
	
	//������������
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n ; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
			
	int flag = 1;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
			{
				flag = 0;
			}
		}
	}
	
	if (flag == 1)
	{
		printf("Yes");
	}
	else 
	{
		printf("No");
	}
	
	return 0;
	
}
	
	






















