//#include <stdio.h>
//int main()
//{
//    char arr[4][8];
//    scanf_s("%s", &arr);
//    int number[8] = { 128,64,32,16,8,4,2,1 };
//    int a[4] = { 0,0,0,0 };
//
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 4; i++)
//    {
//        for (j = 0; j < 8; j++)
//        {
//            a[i] += arr[i][j] * number[j];
//        }
//    }
//
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d\n", a[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//#define MAXN 20
//
//void strmcpy(char* t, int m, char* s);
//void ReadString(char s[]); /* �ɲ���ʵ�֣���ȥ���� */
//
//int main()
//{
//    char t[MAXN], s[MAXN];
//    int m;
//
//    scanf("%d\n", &m);
//    ReadString(t);
//    strmcpy(t, m, s);
//    printf("%s\n", s);
//
//    return 0;
//}
//
///* ��Ĵ��뽫��Ƕ������ */
//void strmcpy(char* t, int m, char* s)
//{
//    while (*(t + m - 1) != '\0')
//    {
//        *s = *(t + m - 1);
//        s++;
//        t++;
//    }
//    *s = '\0';
//}

//#include <stdio.h>
//#define MAXS 15
//
//void StringCount(char* s);
//void ReadString(char* s); /* �ɲ���ʵ�֣���ȥ���� */
//
//int main()
//{
//    char s[MAXS];
//
//    ReadString(s);
//    StringCount(s);
//
//    return 0;
//}
//
///* Your function will be put here */
//#include<ctype.h>
//
///*
// * ����ͳ�Ƹ����ַ�����
// */
//void StringCount(char* s) {
//    int capital = 0;
//    int minuscule = 0;
//    int blank = 0;
//    int digit = 0;
//    int other = 0;
//
//    for (int i = 0; s[i] != '\0'; i++) {
//        if (isupper(s[i])) {
//             ��д��ĸ
//            capital++;
//        }
//        else if (islower(s[i])) {
//             Сд��ĸ
//            minuscule++;
//        }
//        else if (isblank(s[i])) {
//             �ո�
//            blank++;
//        }
//        else if (isdigit(s[i])) {
//             ����            
//            digit++;
//        }
//        else {
//            other++;
//        }
//    }
//
//    printf("%d %d %d %d %d\n", capital, minuscule, blank, digit, other);
//}

//#include <stdio.h>
//#define MAXN 20
//
//void delchar(char* str, char c);
//void ReadString(char s[]); /* �ɲ���ʵ�֣���ȥ���� */
//
//int main()
//{
//    char str[MAXN], c;
//
//    scanf("%c\n", &c);
//    ReadString(str);
//    delchar(str, c);
//    printf("%s\n", str);
//
//    return 0;
//}
//
///* ��Ĵ��뽫��Ƕ������ */
//void delchar(char* str, char c)
//{
//    char* s = str;
//    while (*str)
//    {
//        if (*s != c)
//        {
//            *str = *s;
//            str++;
//            s++;
//        }
//        else
//        {
//            s++;
//        }
//    }
//}

//
//#include <stdio.h>
//#include <string.h>
//
//#define MAXS 10
//
//char* str_cat(char* s, char* t);
//
//int main()
//{
//    char* p;
//    char str1[MAXS + MAXS] = { '\0' }, str2[MAXS] = { '\0' };
//
//    scanf("%s%s", str1, str2);
//    p = str_cat(str1, str2);
//    printf("%s\n%s\n", p, str1);
//
//    return 0;
//}
//
///* ��Ĵ��뽫��Ƕ������ */
//char* str_cat(char* s, char* t)
//{
//    char* ret = s;
//
//    while (*s != '\0')
//    {
//        s++;
//    }
//
//    while (*s++ = *t++)//������ԭ����'\0'���ǵ�
//    {
//        ;
//    }
//
//    return ret;
//}

//#include <stdio.h>
//#include <string.h>
//#define MAX 80
//
//int main()
//{
//    int N = 0;
//    char min[MAX];
//    char ch[MAX];
//    scanf("%d", &N);
//    scanf("%s", ch);
//
//    int i = 0;
//    strcpy(min, ch);//�����һ��������С�ģ��ú�������Ƚ�
//    for (i = 0; i < N - 1; i++)//�Ե������
//    {
//        scanf("%s", ch);
//        if (strcmp(min, ch) > 0)
//        {
//            strcpy(min, ch);
//        }
//        else
//        {
//            continue;
//        }
//    }
//    printf("Min is: %s", min);
//
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char a[5][81];
//    int j, i;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%s", &a[i]);//scanf�����п��ַ��Զ���������
//    }
//
//    for (i = 1; i < 5; i++)//���ò�������
//    {
//        char b[81];
//        strcpy(b, a[i]);
//        int k = i;
//
//        while (k > 0 && strcmp(b, a[k - 1]) < 0)//strcap��������ֵ<0��ʾb��a[k-1]С
//        {
//            strcpy(a[k], a[k - 1]);
//            k--;
//        }
//
//        if (k != i)
//        {
//            strcpy(a[k], b);
//        }
//    }
//
//    printf("After sorted:\n");
//    for (i = 0; i < 5; i++)
//    {
//        printf("%s\n", a[i]);//a[i]��ʾ��i�е�����Ԫ��
//    }
//
//    return 0;
//}

#include <stdio.h>
void insertionSort(int arr[], int length)
{
    int i, j;
    for (i = 1; i < length; i++) 
    {
        int key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr1[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    insertionSort(arr1, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    return 0;
}
//
//�ҵ���������Ϊ�β��������ݵĶ�ʧ����ô��ʼ�𲽼�¼���Եļ�¼
//12,11,13,5,6,7
//
//��һ�ν���forѭ����Ҫ�����Ԫ����11��key�����Ԫ����11���±�j��0��ָ���Ԫ����12
//  Ȼ���ж��Ƿ��ܽ���whileѭ��������j>=0 12>11
//    ����whileѭ��
//    ��Ҫ����ǰ���������е�Ԫ��11��ɱ��Ƚϵ�Ԫ��12  12 12 13 5 6 7
//    �±�j���-1
//  �ж��Ƿ��ܽ���whileѭ����j < 0 ���ܽ���whileѭ��
//  Ȼ�󽫱��Ƚϵ�Ԫ��12���Ҫ����ǰ���������е�Ԫ��11  11 12 13 5 6 7
//
//�ڶ��ν���forѭ����Ҫ�����Ԫ����13��key�����Ԫ����13���±�j��1��ָ���Ԫ����12
//  Ȼ���ж��Ƿ��ܽ���whileѭ��������j>=0 12<13 ���ܽ���whileѭ��
//  �����Ƚϵ�Ԫ�ر��Ҫ����ǰ���������е�Ԫ�أ�Ȼ�������ķ�����ʵʲô��û�иı� 11 12 13 5 6 7
//
//�����ν���forѭ����Ҫ�����Ԫ����5��key�����Ԫ����5���±�j��2��ָ���Ԫ����13
//  Ȼ���ж��Ƿ��ܽ���whileѭ��������j>=0 13>5 
//    ����whileѭ��
//    ��Ҫ����ǰ���������е�Ԫ��5��ɱ��Ƚϵ�Ԫ��13  11 12 13 13 6 7
//    �±�j���1
//  �ж��Ƿ��ܽ���whileѭ����j>0 12>5 
//    ����whileѭ��
//    ��Ҫ����ǰ���������е�Ԫ��13��ɱ��Ƚϵ�Ԫ��12  11 12 12 13 6 7
//    �±���0
//  �ж��Ƿ��ܽ���whileѭ����j>=0 11>5 
//    ����whileѭ��
//    ��Ҫ����ǰ���������е�Ԫ��12��ɱ��Ƚϵ�Ԫ��11  11 11 12 13 6 7
//  �ж��Ƿ��ܽ���whileѭ����j < 0 ���ܽ���whileѭ��
//  �����Ƚϵ�Ԫ��11���Ҫ����ǰ���������е�Ԫ��5  5 11 12 13 6 7
//
//���Ĵν���forѭ����Ҫ�����Ԫ����6��key�����Ԫ����6���±�j��3��ָ���Ԫ����13
//  Ȼ���ж��Ƿ��ܽ���whileѭ��������j>=0 13>6
//    ����whileѭ��
//    ��Ҫ����ǰ���������е�Ԫ��6��ɱ��Ƚϵ�Ԫ��13  5 11 12 13 13 7
//    �±���2
//  �ж��Ƿ��ܽ���whileѭ����j>=0 12>6
//    ����whileѭ��
//    ��Ҫ����ǰ���������е�Ԫ��13��ɱ��Ƚϵ�Ԫ��12  5 11 12 12 13 7
//    �±���1
//  �ж��Ƿ��ܽ���whileѭ����j>=0 11>6
//    ����whileѭ��
//    ��Ҫ����ǰ���������е�Ԫ��12��ɱ��Ƚϵ�Ԫ��11  5 11 11 12 13 7
//    �±���0
//  �ж��Ƿ��ܽ���whileѭ����j>=0 11>6
//    ����whileѭ��
//    ��Ҫ����ǰ���������е�Ԫ��11��ɱ��Ƚϵ�Ԫ��6  5 6 11 12 13 7
//    �±���-1
//  �ж��Ƿ��ܽ���whileѭ����j < 0 ���ܽ���whileѭ��  
//  �����Ƚϵ�Ԫ�ر��Ҫ����ǰ���������е�Ԫ�أ�Ȼ�������ķ�����ʵʲô��û�иı�  5 6 11 12 13 7
//
//����ν���forѭ����Ҫ�����Ԫ����7��key�����Ԫ����7���±�j��4��ָ���Ԫ����13
//  Ȼ���ж��Ƿ��ܽ���whileѭ��������j>=0 13>7
//    ����whileѭ��
//    ��Ҫ����ǰ���������е�Ԫ��7��ɱ��Ƚϵ�Ԫ��13  5 6 11 12 13 13
//    �±��Ϊ3
//  �ж��Ƿ��ܽ���whileѭ����j>=0 12>7
//    ����whileѭ��
//    ��Ҫ����ǰ���������е�Ԫ��13��ɱ��Ƚϵ�Ԫ��12  5 6 11 12 12 13
//    �±��Ϊ2
//  �ж��Ƿ��ܽ���whileѭ����j>=0 11>7
//    ��Ҫ����ǰ���������е�Ԫ��12��ɱ��Ƚϵ�Ԫ��11  5 6 11 12 12 13
//    �±��Ϊ1
//  �ж��Ƿ��ܽ���whileѭ����j>=0 6<7 ���ܽ���whileѭ��
//  �����Ƚϵ�Ԫ��11���Ҫ����ǰ���������е�Ԫ��7  5 6 7 11 12 13
//
//���Է����ǲ���©�κ����ݵ�