/*#include <stdio.h>
int main()
{
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;

	printf("Enter the list of daily low temperatures.\n");
	printf("Use Celsius, and enter q to quit.\n");
	//����scanf()�ķ���ֵ������ѭ�������ȡ�������ַ��᷵��0
	while (scanf_s("%f", &temperature) == 1)//������һ�����Ķ�ȡ��������ݵģ�
	{
		all_days++;
		if (temperature < FREEZING)
			cold_days++;//����if���ָʾ����������ն�ȡ��ֵС��0���͵���cold_days;��֮������whileѭ����ȡ��һ���¶�ֵ
	}
	if (all_days != 0)//�����ݾʹ�ӡ���
		printf("%d days total : % .1f % %were below freezing.\n",
			all_days, 100.0 * (float)cold_days / all_days);
	if (all_days == 0)//û���ݾʹ�ӡ��Ϣ
		printf("No data entered!\n");

	return 0;
}*/

//7.1�ĸĽ��棬ʹ��if else ���
/*#include <stdio.h>
int main()
{
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;

	printf("Enter the list of daily low temperatures.\n");
	printf("Use Celsius, and enter q to quit.\n");
	//����scanf()�ķ���ֵ������ѭ�������ȡ�������ַ��᷵��0
	while (scanf_s("%f", &temperature) == 1)//������һ�����Ķ�ȡ��������ݵģ�
	{
		all_days++;
		if (temperature < FREEZING)
			cold_days++;//����if���ָʾ����������ն�ȡ��ֵС��0���͵���cold_days;��֮������whileѭ����ȡ��һ���¶�ֵ
	}
	if (all_days != 0)//������Ϊ�棬ִ�и����	
		printf("%d days total : % .1f % %were below freezing.\n",
			all_days, 100.0 * (float)cold_days / all_days);
	else//������Ϊ�٣���ôִ��else
		printf("No data entered!\n");
	
	return 0;
}*/

#include <stdio.h>
int main()
{
	char ch;	
	putchar(ch);//��printf("%c", ch);�����Ч����ͬ

	return 0;
}