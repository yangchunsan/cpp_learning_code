#include <stdio.h>
#include <math.h>

int main()
{
	int N = 0;
	scanf_s("%d", &N);
	
	if (N < 3 || N > 7)//�޶���Χ
	{
		return 0;
	}
	
	long int start = 0;
	start = pow(10, N);//������ʼ��ֵ	
	
	while (start < pow(10, N + 1))//���Ƴ�ʼֵ�ķ�Χ
	{
		int arr[N];
		int output = 0;
				
	    for (int i = 0; i <= N; i++)
	    {
	 	    int arr[i] = start % 10; // ȡ�����һλ���ֲ��Դ˴�������������
		    start /= 10;// �Ƴ����һλ����
	    } 
	
		for (int j = 0; j < N; j++)
		{			
			output += pow(arr[j], 3);
		}
				
		if (output == start)
			printf("%d\n", start);
			
		start++;
	}
		
	return 0��
}
