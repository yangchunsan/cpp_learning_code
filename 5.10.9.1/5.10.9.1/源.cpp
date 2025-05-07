#include <stdio.h>
int main()
{
	char ch = 'a';
	
	while (ch++ < 'z')
		//加了个后缀++，就可以达到不需要在循环
	{
		printf("%3c", ch);
	}
	return 0;
}