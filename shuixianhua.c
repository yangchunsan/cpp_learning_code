#include <stdio.h>

int main() {
    int N = 0;
    scanf("%d", &N);

    if (N < 3 || N > 7) 
	{ // 限定范围
        return 0;
    }

    long long int start = 1;
    for (int i = 0; i < N - 1; i++) 
	{
        start *= 10; // 计算10的N-1次方，有N位
    }
    long long int end = start * 10; // 计算10的N次方，有N+1位

    while (start < end) 
	{
        long long int output = 0;
        long long int num = start;
        int digits[N]; // 存储每个数字的数组

        // 提取数字的每一位
        for (int i = 0; i < N; i++) 
		{
            digits[N - 1 - i] = num % 10;//从个位数开始，所以下标反着来
            num /= 10;
        }

        // 计算各位数字的N次方和
        for (int i = 0; i < N; i++) //这里计算三次方的方法很有意思，好好学学
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
