#include <stdio.h>
#define SEC_PER_MIN 60

int main()
{
	int sec, min, left;

	printf("Convert second to minutes and seconds!\n");//������ת��Ϊ�ֺ���
	printf("Enter the number of seconds (<=0 to quit):\n");
	scanf_s("%d", &sec);//��ȡ����
	
	while (sec > 0)
	{
		min = sec / SEC_PER_MIN;   //�ضϷ�����
		left = sec % SEC_PER_MIN;  //ʣ�µ�����
		printf("%d seconds is %d minutes , %d seconds.\n", sec, min, left);
		printf("Enter next value (<=0 to quit):\n");
		scanf_s("%d", &sec);
	}
	printf("Done!\n");

	return 0;
}