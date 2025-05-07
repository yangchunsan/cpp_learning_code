#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

//#define MAX 100;
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

//����һ���ṹ�����Ͳ�������
//����ṹ�������������洢�˵Ļ�����Ϣ��
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
 	char addr[MAX_ADDR];//address
} PeoInfo;

//��ʵ��Ӧ�������Ƿ��֣������ļ�¼������Ϣ������֧������ͨѶ¼���ܵ�ʵ��
//���ǻ���Ҫ���һ��������ָ������Ķ�����ϸ����֮�£����Ǿ���
//���һ���������ڴ����Ѽ�¼������Ϣ������

//��������ٴδ���һ���µĽṹ������
//����ṹ������ΪContact
typedef struct Contact
{
	PeoInfo data[100];//����˵���Ϣ
	int count;//��¼��ǰͨѶ¼ʵ���˵ĸ���
} Contact;

//��ʼ��ͨѶ¼����������
void InitContact(Contact* pc);

//����ͨѶ¼��Ϣ����������
void AddContact(Contact* pc);

//��ʾͨѶ¼���ݺ���������
void ShowContact(const Contact* pc);

//ɾ��ָ����ϵ��
void DelContact(Contact* pc);

//����ָ����ϵ��
void SearchContact(Contact* pc);

//�޸�ָ����ϵ��
void ModifyContact(Contact* pc);

//����
void SortContact(Contact* pc);
