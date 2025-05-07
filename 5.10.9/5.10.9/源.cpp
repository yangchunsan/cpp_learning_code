#include <stdio.h>
int main()
{
	char ch = 'a';
	while (ch < 'z')
	{
		printf("%3c", ch);//z还打不出来
		ch++;
	}
	printf("\n%3c", ch);//这里才输出z

	return 0;
}