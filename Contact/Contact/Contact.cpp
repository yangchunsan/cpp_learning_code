#include "Contact.h"

void InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));//��һ��ʵ���Ǻ�����
	//�����˿⺯����ʵ�ֽṹ��������һ����ڴ�ĳ�ʼ��
	//�ڼ�������ڴ�Ĵ�С��ʱ��ͬ�����˺�����ʵ��
	//����ʹ��ѭ��������ǳ����ӵķ���
	//data���Ǹ��������������ŵ�ַ
	//̫���ˣ�
}

void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->count == 100)
	{
		printf("ͨѶ¼�������޷����\n");
		return;
	}
	//
	printf("����������:>");
	scanf_s("%s", pc->data[pc->count].name);
	printf("����������:>");
	scanf_s("%d", &(pc->data[pc->count].age));
	printf("�������Ա�:>");
	scanf_s("%s", pc->data[pc->count].sex);
	printf("������绰:>");
	scanf_s("%s", pc->data[pc->count].tele);
	printf("�������ַ:>");
	scanf_s("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("���ӳɹ�\n");
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n","����","����","�Ա�","�绰","��ַ");
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
		printf("ͨѶ¼Ϊ�գ�û����Ϣ����ɾ��\n");
		return;
	}
	printf("������Ҫɾ���˵�����:>");
	scanf_s("%s", name);
	//ɾ��
	//1. ����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//2. ɾ��
	for (i = pos; i < pc->count - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;

	printf("ɾ���ɹ�\n");
}

void SearchContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�����˵�����:>");
	scanf_s("%s", name);
	//1. ����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	//2. ��ӡ
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸��˵�����:>");
	scanf_s("%s", name);
	//1. ����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	printf("Ҫ�޸ĵ��˵���Ϣ�Ѿ����ҵ�����������ʼ�޸�\n");
	//2. �޸�
	printf("����������:>");
	scanf_s("%s", pc->data[pos].name);
	printf("����������:>");
	scanf_s("%d", &(pc->data[pos].age));
	printf("�������Ա�:>");
	scanf_s("%s", pc->data[pos].sex);
	printf("������绰:>");
	scanf_s("%s", pc->data[pos].tele);
	printf("�������ַ:>");
	scanf_s("%s", pc->data[pos].addr);

	printf("�޸ĳɹ�\n");
}


int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

//��������������
void SortContact(Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
	printf("����ɹ�\n");
}

