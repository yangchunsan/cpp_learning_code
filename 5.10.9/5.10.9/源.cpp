#include <stdio.h>
int main()
{
	char ch = 'a';
	while (ch < 'z')
	{
		printf("%3c", ch);//z���򲻳���
		ch++;
	}
	printf("\n%3c", ch);//��������z

	return 0;
}