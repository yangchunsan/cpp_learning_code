#include <stdio.h>
int main()
{
	char ch = 'a';
	
	while (ch++ < 'z')
		//���˸���׺++���Ϳ��Դﵽ����Ҫ��ѭ��
	{
		printf("%3c", ch);
	}
	return 0;
}