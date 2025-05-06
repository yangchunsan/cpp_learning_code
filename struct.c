#include <stdio.h>
//声明的结构体类型struct peo
struct peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
}p3, p4;
//那么p3，p4是使用struct peo结构类型创建的两个全局变量，是可有可无的
//在声明结构体类型的时候顺便定义了这两个变量
//全局变量比较危险，一般是不这样声明一个变量的，而是会在main函数中完成

struct peo p5, p6;
//这也是创建结构体变量的一种方法
//仍然是全局变量

struct st
{
    struct peo p;
    int num;
    float f;
};

int main()
{
	struct peo p1 = {"张三","12345678910", "男", 181};//初始化：定义变量的时候同时赋初值
	//这就是一个结构体的变量创建,只能在main函数内部使用，局部变量
    //p1就叫结构体变量
     

    //结构体里面有结构体变量该怎么初始化？
    struct st s = {{"李四", "12345678910", "女", 166}, 100, 3.14};

	return 0;
}
