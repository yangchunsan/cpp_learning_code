//#include <stdio.h>
//#pragma pack(8)//����Ĭ�϶�����Ϊ8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//
//#pragma pack(1)//����Ĭ�϶�����Ϊ1
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//
//int main()
//{
//	//����Ľ����ʲô��
//	printf("%d\n", sizeof(struct S1));//12
//	printf("%d\n", sizeof(struct S2));//6
//	return 0;
//}
//
//#include <stdio.h>
//
//// ����һ��ö�����ͱ�ʾ���ڼ�
//typedef enum
//{
//    SUNDAY = 0,
//    MONDAY = 1,
//    TUESDAY = 2,
//    WEDNESDAY = 3,
//    THURSDAY = 4,
//    FRIDAY = 5,
//    SATURDAY = 6
//} Weekday;
//
//int main()
//{
//    Weekday today = THURSDAY;
//    printf("Today is %d\n", today);
//
//    return 0;
//}
//
//#include <stdio.h>
//union Un
//{
//	int i;
//	char c;
//};
//union Un un;
//int main()
//{
//	// ��������Ľ����һ������
//	printf("%x\n", &(un.i));
//	printf("%x\n", &(un.c));
//	//��������Ľ����ʲô��
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//	printf("%x\n", un.c);
//
//	return 0;
//}

//#include <stdio.h>
//int check_sys()
//{
//	//��Ϊֻ��һ�Σ�����������������
//	union 
//	{
//		int i;
//		char c;
//	}u;//���ﴴ��һ������u
//	u.i = 1;
//	
//	return u.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//
//	return 0;
//}

#include <stdio.h>
union Un1
{
	char c[5];//1*5=5
	int i;//4
};
union Un2
{
	short c[7];//2*7=14
	int i;//4
};

int main()
{
	//��������Ľ����ʲô��
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));

	return 0;
}