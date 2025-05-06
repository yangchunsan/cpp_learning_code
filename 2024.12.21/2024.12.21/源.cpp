//#include <stdio.h>
//#pragma pack(8)//设置默认对齐数为8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//
//#pragma pack(1)//设置默认对齐数为1
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//
//int main()
//{
//	//输出的结果是什么？
//	printf("%d\n", sizeof(struct S1));//12
//	printf("%d\n", sizeof(struct S2));//6
//	return 0;
//}
//
//#include <stdio.h>
//
//// 定义一个枚举类型表示星期几
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
//	// 下面输出的结果是一样的吗？
//	printf("%x\n", &(un.i));
//	printf("%x\n", &(un.c));
//	//下面输出的结果是什么？
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
//	//因为只用一次，所以用匿名联合体
//	union 
//	{
//		int i;
//		char c;
//	}u;//这里创建一个变量u
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
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
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
	//下面输出的结果是什么？
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));

	return 0;
}