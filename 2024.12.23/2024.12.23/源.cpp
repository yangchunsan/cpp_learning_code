//#include <stdio.h>
//int main()
//{
//	int gcd = 0;//���Լ��
//	int lcm = 0;//��С������
//	//�������������
//	int x = 0;
//	int y = 0;
//	scanf_s("%d %d", &x, &y);
//	//�ȽϽϴ�ֵ�ͽ�Сֵ
//	int bigger = x > y ? x : y;
//	int smaller = x > y ? y : x;
//
//	//����
//	int rest = 0;
//	while (rest = bigger % smaller)
//	{
//		bigger = smaller;
//		smaller = rest;
//	}
//	//�����smaller��ֵ�������Լ��
//	gcd = smaller;
//
//	//��С������ = �����˻�%���Լ��
//	lcm = x * y / gcd;
//
//	int add = gcd + lcm;
//	printf("%d\n", gcd);
//	printf("%d\n", lcm);
//	printf("%d", add);
//
//	return 0;
//}

//ŷ������㷨��շת����������������Լ��(greatest common divisor)
//��������������a��b������a��b
//��������������a����b������r��
//������ֵ����a��ֵ����Ϊb��
//��b��ֵ����Ϊr��
//�ظ����裺�ظ�����2��3��
//ֱ������rΪ0��
//��������������rΪ0ʱ����ǰ��bֵ��Ϊ���Լ��

//������С������Least common multiple()
//�ȼ��������������Լ����GCD��
//Ȼ���������ĳ˻��������ǵ����Լ�����õ���С������

//#include <stdio.h>
//#include <stdlib.h>
//
//struct S
//{
//	int n;
//	int arr[];//���������Ա
//};
//
//int main()
//{
//	//���������ʹ��
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
//	//����Ķ�̬�ڴ��СӦ�ô��ڽṹ�Ĵ�С��-����Ӧ���������Ԥ�ڴ�С
//	if (ps == NULL)
//	{
//		return 1;//��ֹ����ʧ�������������
//	}
//
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", ps->arr[i]);
//	}
//
//	//��̬�޸���������Ĵ�С
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);
//	if (ptr != NULL)
//	{
//		ps == ptr;
//		ptr = NULL;
//	}//��ֹ����ʧ�ܣ����Ұָ��
//
//	//.........
//	//�ͷŶ�̬�ڴ�
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

//#include<stdio.h>
//struct student
//{
//    char num[10];
//    char name[10];
//    int score;
//};
//
//int main()
//{
//    struct student A[10];
//    int n, i, sum = 0;
//    scanf("%d\n", &n);
//
//    for (i = 0; i < n; i++)
//    {
//        scanf("%s%s%d", A[i].num, A[i].name, &A[i].score);
//        sum += A[i].score;
//    }
//
//    float average;
//    average = ((float)sum) / n;
//    int flag = 0;
//    printf("%.2f\n", average);
//    for (i = 0; i < n; i++) 
//    {
//        if (A[i].score < average && flag == 0) 
//        {
//            printf("%s %s", A[i].name, A[i].num);
//            flag++;
//        }
//        else if (A[i].score < average) 
//        {
//            printf("\n");
//            printf("%s %s", A[i].name, A[i].num);
//        }
//    }
//    return 0;
//}





