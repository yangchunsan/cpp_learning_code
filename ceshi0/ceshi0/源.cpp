//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	arr[7] = 8;
//	printf("%d\n", arr[7]);
//
//	7[arr] = 9;
//	printf("%d", arr[7]);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//void set_stu(struct Stu* ps)
//{
//	strcpy_s(ps->name, "zhangsan");//���name��һ����ַ����һ���ַ�������ַ�ǲ���ȷ��
//	ps->age = 20;
//	ps->score = 100.0;
//
//}
//
//void print_stu(struct Stu ss)
//{
//	printf("%s %d %lf\n", ss.name, ss.age, ss.score);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = 5;
//	//0000-0000-0000-0000-0000-0000-0000-0101 - int
//	//0000-0101 - char
//	char b = 126;
//	//0000-0000-0000-0000-0000-0000-0111-1110 - int
//	//0111-1110 - char
//	char c = a + b;
//	//0000-0101 - a
//	//0111-1110 - b
//	//����������
//	//0000-0000-0000-0000-0000-0000-0000-0101 - a
//	//0000-0000-0000-0000-0000-0000-0111-1110 - b
//	//0000-0000-0000-0000-0000-0000-1000-0011 - a + b
//	//1000-0011 - c
//	//1111-1111-1111-1111-1111-1111-1000-0011 - ����
//	//1111-1111-1111-1111-1111-1111-1000-0010 - ����
//	//1000-0000-0000-0000-0000-0000-0111-1101 - ԭ��
//	//-125
//
//	printf("%d\n", c);
//
//	return 0;
//}
////131 - 128 = 3
////-125

//#include <stdio.h>
//int main()
//
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//
//	return 0;
//}

//#include <stdio.h>
//int fib(int step)
//{
//	if (step <= 2)
//	{
//		return step;
//	}
//	else
//	{
//		return fib(step - 1) + fib(step - 2);
//	}
//}
//
//
//int main()
//{
//	int step = 0;
//	scanf_s("%d", &step);
//
//	if (step < 1 || step >30)
//	{
//		return 0;
//	}
//	int ways = fib(step);
//	printf("%d", ways);
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    for (int n = 10000; n < 100000; n++)
//    {
//        int sum = 0; // ÿ����һ�����ֳ�ʼ��һ��
//        int temp = n; // ���ڼ����λ����
//
//        for (int j = 1; j < 5; j++)
//        {
//            int digit = temp % 10; // ��ȡ��ǰ���λ������
//            sum += (int)pow(digit, j); // �����λ���ֵ�j���ݲ��ۼ�
//            temp /= 10; // �Ƴ���ǰ���λ������
//        }
//
//        if (sum == n)
//        {
//            printf("%d  ", n);
//        }
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#define N_VALUES 5
//
//int main()
//{
//	float values[N_VALUES];//����һ������
//	float* vp;//��ʱ�˿̻���Ұָ��
//
//	//ָ��+-������ָ��Ĺ�ϵ����
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;//�Ƚ�����vp�ĵ�ַ��Ȼ���0�Ž�ȥ
//		//�ֽ��*vp = 0;
//		// vp++;
//	}
//}
//
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//
//	return 0;
//}

//#include <stdio.h>
//void test(int* p, int sz)//�������յ�ַ
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr, 10);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int arr[10];
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//
//	int* parr[10] = { &a,&b,&c };
//	//parr���Ǵ��ָ������飬��ָ������
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(parr[i]));
//	}
//	//���forѭ�����԰�˳���ӡabc��ֵ
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//	//����������Ԫ�صĵ�ַ
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
////�����Ľṹ������struct peo
//struct peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//}p3, p4;
////��ôp3��p4��ʹ��struct peo�ṹ���ʹ���������ȫ�ֱ������ǿ��п��޵�
////�������ṹ�����͵�ʱ��˳�㶨��������������
////ȫ�ֱ����Ƚ�Σ�գ�һ���ǲ���������һ�������ģ����ǻ���main���������
//
//struct peo p5, p6;
////��Ҳ�Ǵ����ṹ�������һ�ַ���
////��Ȼ��ȫ�ֱ���
//
//struct st
//{
//	struct peo p;
//	int num;
//	float f;
//};
//
//void print1(struct peo p)
//{
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);
//}
//
//void print2(struct peo* sp)
//{
//	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);
//}
//
//int main()
//{
//	struct peo p1 = { "����", "12345678910", "��", 181 };
//	//��ʼ�������������ʱ��ͬʱ����ֵ
//	//�����һ���ṹ��ı�������, ֻ����main�����ڲ�ʹ�ã��ֲ�����
//	//p1�ͽнṹ�����
//
//
//	//�ṹ�������нṹ���������ô��ʼ����
//	struct st s = { {"����", "12345678910", "Ů", 166}, 100, 3.14 };
//	
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);
//
//	print1(p1);//�ǰ�P1����ȥ�أ�
//	print2(&p1);//����ǰѵ�ַ����ȥ
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c6 a6
//	b = ++c, c++, ++a, a++;//c7 c8 a7 a8 b7
//	b += a++ + c;//a9 b = 7 + 8 + 7 = 23
//	printf("%d %d %d", a, b, c);
//	//9 23 8
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input = 0;//��ʼ��
//	int a = 1;
//	//����ߣ�ԭ�뷴��Ͳ�����һ����
//	//0000-0000-0000-0000-0000-0000-0000-0001
//	int num_1 = 0;//���ڼ���1�ĸ���
//	int sz = sizeof(input);//���ͱ������ֽ�
//
//	printf("������һ��������");
//	printf("\n");
//	scanf_s("%d", &input);
//
//	for (int i = 0; i < sz * 8; i++)
//	{
//		int c = 0;
//		c = input & a;
//		//��λ�룬����������ͬλ���ϵĲ��붼Ϊ1ʱ��Ϊ1,
//		//����������浽c��
//		//����aֻ�����һλ������Ϊ1����������ͬ��c��Ϊ1��������ͬ��c��Ϊ0��
//
//		if (c == 1)
//			num_1++;//c�����1��������һ
//
//		input = input >> 1;//���Ʋ��������ӵ��Ѿ��Ƚϵ�λ��
//	}
//
//	printf("�����Ƶ�1�ĸ����ǣ�%d", num_1);
//
//	return 0;
//}