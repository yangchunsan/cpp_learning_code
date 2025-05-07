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

//声明一个结构体类型并重命名
//这个结构体类型是用来存储人的基本信息的
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
 	char addr[MAX_ADDR];//address
} PeoInfo;

//在实际应用中我们发现，单纯的记录个人信息不足以支撑整个通讯录功能的实现
//我们还需要添加一个变量能指向操作的对象，仔细考虑之下，我们决定
//添加一个变量用于储存已记录个人信息的数量

//因此我们再次创建一个新的结构体类型
//这个结构体类型为Contact
typedef struct Contact
{
	PeoInfo data[100];//存放人的信息
	int count;//记录当前通讯录实际人的个数
} Contact;

//初始化通讯录函数的声明
void InitContact(Contact* pc);

//增加通讯录信息函数的声明
void AddContact(Contact* pc);

//显示通讯录内容函数的声明
void ShowContact(const Contact* pc);

//删除指定联系人
void DelContact(Contact* pc);

//查找指定联系人
void SearchContact(Contact* pc);

//修改指定联系人
void ModifyContact(Contact* pc);

//排序
void SortContact(Contact* pc);
