#include <stdio.h>
#define SEC_PER_MIN 60

int main()
{
	int sec, min, left;

	printf("Convert second to minutes and seconds!\n");//将秒数转换为分和秒
	printf("Enter the number of seconds (<=0 to quit):\n");
	scanf_s("%d", &sec);//读取秒数
	
	while (sec > 0)
	{
		min = sec / SEC_PER_MIN;   //截断分钟数
		left = sec % SEC_PER_MIN;  //剩下的秒数
		printf("%d seconds is %d minutes , %d seconds.\n", sec, min, left);
		printf("Enter next value (<=0 to quit):\n");
		scanf_s("%d", &sec);
	}
	printf("Done!\n");

	return 0;
}