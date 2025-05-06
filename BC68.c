#include <stdio.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int i = 0;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				printf("*");
			}
			else if (i + j == n - 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}

	return 0;
}
