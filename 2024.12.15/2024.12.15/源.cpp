//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char dest[20] = "xxx xxxxxxxxx";
//	char src[] = "Hello!";
//	strcat_s(dest, src);
//	printf("%s", dest);
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>
char* my_strstr(const char* deststr, const char* substr)
{
	const char* str1 = deststr;
	const char* p = deststr;
	const char* str2 = substr;

	while (*p)//strstr�������ǲ����ж�str1�ǲ��ǿ�ָ��ģ���ô���Լ�ģ���ʱ�������һ������
	{
		//���Ŀ����ÿ��ѭ����ʱ��������һ��ָ���λ��
		str1 = p;
		str2 = substr;

		while (*str1 == *str2 && *str1 != '\0' && *str2 != '\0')
		{
			str1++;
			str2++;
		}
		
		if (*str2 == '\0')
		{
			return (char*)p;
		}
		
		str1++;
		p++;
	}

	return NULL;
}

int main()
{
	char dest[20] = "aaaaaaabbbcdef";
	char search[] = "aabbbc";
	
	char* test = my_strstr(dest, search);

	if (test == NULL)
	{
		printf("None\0");
	}
	else
	{
		printf("%s", test);
	}

	return 0;
}