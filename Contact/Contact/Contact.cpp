#include "Contact.h"

void InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));//这一步实在是很巧妙
	//利用了库函数来实现结构体里面这一大块内存的初始化
	//在计算这块内存的大小的时候同样用了函数来实现
	//避免使用循环等这类非常复杂的方法
	//data还是个数组名，代表着地址
	//太妙了！
}

void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->count == 100)
	{
		printf("通讯录已满，无法添加\n");
		return;
	}
	//
	printf("请输入名字:>");
	scanf_s("%s", pc->data[pc->count].name);
	printf("请输入年龄:>");
	scanf_s("%d", &(pc->data[pc->count].age));
	printf("请输入性别:>");
	scanf_s("%s", pc->data[pc->count].sex);
	printf("请输入电话:>");
	scanf_s("%s", pc->data[pc->count].tele);
	printf("请输入地址:>");
	scanf_s("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("增加成功\n");
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n","名字","年龄","性别","电话","地址");
	for (i = 0; i < pc->count; i++)
	{
		printf("%20s\t%5s\t%5\t%12s\t%30s\n",   pc->data[i].name,
												pc->data[i].age,
												pc->data[i].sex,
												pc->data[i].tele,
												pc->data[i].addr);
	}
}

static int FindByName(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}

	return -1;
}

void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	int i = 0;
	if (pc->count == 0)
	{
		printf("通讯录为空，没有信息可以删除\n");
		return;
	}
	printf("请输入要删除人的名字:>");
	scanf_s("%s", name);
	//删除
	//1. 查找
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//2. 删除
	for (i = pos; i < pc->count - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;

	printf("删除成功\n");
}

void SearchContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找人的名字:>");
	scanf_s("%s", name);
	//1. 查找
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	//2. 打印
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
}


void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人的名字:>");
	scanf_s("%s", name);
	//1. 查找
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	printf("要修改的人的信息已经查找到，接下来开始修改\n");
	//2. 修改
	printf("请输入名字:>");
	scanf_s("%s", pc->data[pos].name);
	printf("请输入年龄:>");
	scanf_s("%d", &(pc->data[pos].age));
	printf("请输入性别:>");
	scanf_s("%s", pc->data[pos].sex);
	printf("请输入电话:>");
	scanf_s("%s", pc->data[pos].tele);
	printf("请输入地址:>");
	scanf_s("%s", pc->data[pos].addr);

	printf("修改成功\n");
}


int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

//按照名字来排序
void SortContact(Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
	printf("排序成功\n");
}

