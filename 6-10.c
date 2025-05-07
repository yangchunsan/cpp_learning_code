#include <stdio.h>
void hollowPyramid( int n )
{
	for (int i = 0; i < n; i++)//控制行数
	{
		if (i == n - 1)//控制最后一行
		{
			for (int b = 0; b < 2 * n - 1; b++)
			{
				printf("%d", n);
			}
			break;
		}
		
		for (int j = 0; j < n - i - 1; j++)//控制每行前面的空格数（空格数+1 = 总行数）
		{
			printf(" ");
		}
		
		for (int a = 0; a < (1 + 2 * i); a++)//控制每行的字符和内部的空格
		{
			if (a == 0 || a == 2 * i)
			{
				printf("%d", i + 1);
			}
			else
			{
				printf(" ");
			}
		}
	
		printf("\n");//每行换行
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	hollowPyramid(n);
	
	return 0;
}
