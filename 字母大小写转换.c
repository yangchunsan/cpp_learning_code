//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//
//	while (scanf("%c", &ch) == 1)//scanf()��ȡ���ݳɹ�����ֵ��һ
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c", ch - 32);
//		}
//		else
//		{
//			printf("%c", ch + 32);
//		}
//	
//		getchar();//�����Ե����з�\n
//	}
//
//	return 0;
//}
////�߼�һ�㣬����ctype.h�⺯��
//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//	char ch = 0;
//
//	while (scanf("%c", &ch) == 1)//scanf()��ȡ���ݳɹ�����ֵ��һ
//	{
//		if (islower(ch))//�ж��ǲ���Сд��ĸ
//		{
//			printf("%c", toupper(ch));//ת��Ϊ��д��ĸ
//		}
//		else if (isupper(ch))//�ж��ǲ��Ǵ�д��ĸ
//		{
//		    printf("%c", tolower(ch));
//		}
//	
//		getchar();//�����Ե����з�\n
//	}
//
//	return 0;
//}
