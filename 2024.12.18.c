//#include <stdio.h>
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c",killer);
//		}
//	}
//
//	return 0;
//
//}

//#include <stdio.h>
//#include <string.h>
////����һ��ʵ���ַ������ĺ���
//void left_retote(char* str, int n)
//{
//	int len = 0;
//	len = strlen(str);//�����ַ����ĳ���
//	n %= len;//��ֹԽ�磬��Ч����
//	
//	//�����˼·�������ģ��е���ݹ�
//	//�����ö��ٸ����ַ����������Ǵӵ�һ���ַ���ʼ��Ȼ��ŵ��ַ����������
//	//���Ҫ���ٸ��ַ�������ֻ��Ҫѭ�����ٴξͺ���
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		char tmp;
//		tmp = str[0];//��ʱ�����һ���ַ�
//		
//		for (j = 0; j < len - 1; j++)//��������ַ���������ǰ�ƶ�һ���±�
//		{
//			str[j] = str[j + 1];
//		}
//		
//		str[len- 1] = tmp;//��ԭ���������ַ����ɵ�һ���ַ�
//	}
//	
//}
//
//int main()
//{
//	char str[] = "";//��һ�����ִ����ַ���
//	scanf("%s", str);
//	
//	int n = 0;//����Ҫ�������ַ��ĸ���
//	scanf("%d", &n);
//	
//	left_retote(str, n);
//	
//	printf("%s", str);
//	
//	return 0;
//} 
//
//#include <stdio.h>
//#include <string.h>
//void left_retote(char* left, char* right)
//{
//	while (left <right)
//	{
//		char tmp;
//		tmp= *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	char str[] = "";//��һ�����鴢���ַ���
//	scanf("%s", str);
//	
//	int len;
//	len = strlen(str);
//		
//	int n = 0;//����Ҫ�������ַ��ĸ���
//	scanf("%d", &n);
//	n %= len; 
//	
//	left_retote(str, str + n - 1);
//	left_retote(str + n, str + len - 1);
//	left_retote(str, str + len - 1);
//	
//	printf("%s", str);
//	
//	return 0;	
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
////
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[10] = "";
//	scanf("%s", arr);
//	
//	int k = 0;
//	scanf("%d", &k);//2
//	
//	int len = strlen(arr);
//	k %= len;
//	//��������˼·�ǽ��������ַ�����û�������ַ����ֳ�������
//	//Ȼ��ֱ�����
//	//����������
//	reverse(arr, arr+k-1);
//	reverse(arr+k, arr+len-1);
//    reverse(arr, arr + len-1);
//	
//	printf("%s\n", arr);
//
//	return 0;
//}




























