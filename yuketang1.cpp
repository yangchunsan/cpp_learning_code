#include <stdio.h>
#include <math.h>

int main()
{
	int N = 0;
	scanf_s("%d", &N);
	
	if (N < 3 || N > 7)//限定范围
	{
		return 0;
	}
	
	long int start = 0;
	start = pow(10, N);//给出初始的值	
	
	while (start < pow(10, N + 1))//限制初始值的范围
	{
		int arr[N];
		int output = 0;
				
	    for (int i = 0; i <= N; i++)
	    {
	 	    int arr[i] = start % 10; // 取出最后一位数字并以此储存在数组里面
		    start /= 10;// 移除最后一位数字
	    } 
	
		for (int j = 0; j < N; j++)
		{			
			output += pow(arr[j], 3);
		}
				
		if (output == start)
			printf("%d\n", start);
			
		start++;
	}
		
	return 0；
}
