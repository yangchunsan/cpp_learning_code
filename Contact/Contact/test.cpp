#include "Contact.h"

void menu()
{
	printf("****************************************\n");
	printf("********  1.add       2.delete  ********\n");
	printf("********  3.search    4.modify  ********\n");
	printf("********  5.show      6.sort    ********\n");
	printf("********  0.exit  **********************\n");
	printf("****************************************\n");
}

int main()
{
	int input = 0;
	Contact con;//通讯录
	//要将这个通讯录初始化
	//为什么要写一个函数来初始化？要熟悉封装的思想和模块化的思想
	InitContact(&con);//传址传参

	do
	{
		menu();
		printf("请输入操作数：>");
		scanf_s("%d", &input);

		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			ModifyContact(&con);
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			SortContact(&con);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);

	return 0;
}