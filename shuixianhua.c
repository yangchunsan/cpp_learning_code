#include <stdio.h>

int main() {
    int N = 0;
    scanf("%d", &N);

    if (N < 3 || N > 7) 
	{ // �޶���Χ
        return 0;
    }

    long long int start = 1;
    for (int i = 0; i < N - 1; i++) 
	{
        start *= 10; // ����10��N-1�η�����Nλ
    }
    long long int end = start * 10; // ����10��N�η�����N+1λ

    while (start < end) 
	{
        long long int output = 0;
        long long int num = start;
        int digits[N]; // �洢ÿ�����ֵ�����

        // ��ȡ���ֵ�ÿһλ
        for (int i = 0; i < N; i++) 
		{
            digits[N - 1 - i] = num % 10;//�Ӹ�λ����ʼ�������±귴����
            num /= 10;
        }

        // �����λ���ֵ�N�η���
        for (int i = 0; i < N; i++) //����������η��ķ���������˼���ú�ѧѧ
		{
            long long int power = 1;
            for (int j = 0; j < N; j++) 
			{
                power *= digits[i];
            }
            output += power;
        }

        if (output == start) 
		{ 
            printf("%lld\n", start);
        }

        start++; 
    }

    return 0;
}
