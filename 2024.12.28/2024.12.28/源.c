//#include <stdio.h>
//int main()
//{
//	printf("Hello World!\n");
//	printf("Hello ""World!\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	
//	printf("The value of " "a"" is %d \n", a);
//	printf("The value of " "b"" is %d \n", b);
//
//	return 0;
//}

//#include <stdio.h>
//#define PRINT(FORMAT, VALUE) printf("The value is "FORMAT"\n", VALUE)
//int main()
//{
//	int a = 1;
//	int b = 2;
//
//	PRINT("%d", a);
//	PRINT("%d", b);
//
//	return 0;
//}

//#include <stdio.h>
//#define PRINT(N, FORMAT) printf("The value of "#N" is "FORMAT"\n", N)//FORMAT��ת��˵���ĸ�ʽ
//int main()
//{
//	int a = 1;
//	int b = 2;
//
//	PRINT(a, "%d");
//	PRINT(b, "%d");
//
//	return 0;
//}

//#include <stdio.h>
//
////����꣬���ڸ��ض���ŵ�sum��������ֵ
//#define ADD_TO_SUM(num, value) \
//    sum##num += value;//�������˼��˵sum�ͺ����num��ϳ�һ����ʶ��������sum1
//
//int main() 
//{
//    //����һЩsum����
//    int sum1 = 0;
//    int sum2 = 0;
//    int sum3 = 0;
//    int sum4 = 0;
//    int sum5 = 0;
//
//    //ʹ�ú��sum5����10
//    ADD_TO_SUM(5, 10);
//
//    //��ӡsum5��ֵ��Ԥ�����Ϊ10
//    printf("sum5 = %d\n", sum5);
//
//    //ʹ�ú��sum2����20
//    ADD_TO_SUM(2, 20);
//
//    //��ӡsum2��ֵ��Ԥ�����Ϊ20
//    printf("sum2 = %d\n", sum2);
//
//    return 0;
//}

//#include <stdio.h>
//#define MAX(x, y) ((x) > (y) ? (x) : (y))
//
//int main()
//{
//    int a = 5;
//    int b = 4;
//    //int m = MAX(a++, b++);
//    //���൱��ʲô�أ�
//    int m = ((a++) > (b++) ? (a++) : (b++));
//    //�ȱȽ� a>b 
//    //������a=6,b=5
//    //��Ŀ���ʽת��a++ �ȸ�m��ֵ m = 6
//    //a������ a++ a=7
//
//    printf("m = %d\n", m);
//    printf("a = %d b  = %d\n", a, b);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//
//	return 0;
//}

//#include <stdio.h>
//
//// ����һ����
//#define SQUARE(x) ((x) * (x))
//
//int main()
//{
//
//	// ʹ�ú�
//	printf("Square of 3: %d\n", SQUARE(3));
//
//	// ȡ���궨��
//#undef SQUARE
//
//    // ����ʹ����ȡ������ĺ꣨�⽫�����������
//	printf("Square of 4: %d\n", SQUARE(4));
//
//	return 0;
//}